#!/bin/bash

MEASUREMENTS="1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30"
EXECUTIONS="1"

SOFTWAREENTITIES="C Python Java"

TESTCASES="T4 T5 T7 T8 T9 T10 T11 T12 T13 T16 T17 T19 T20 T25 T26 T28 T29 T31 T32 T33 T36 T40 T44 T49 T50 T51"

cd ~/EETHAN/

for SE in $SOFTWAREENTITIES
do
  cd $SE

  make configM >> ../4task_out.TXT 2>> ../4task_error.TXT   # config SE

  for TC in $TESTCASES
  do
    cd $TC

    make compile >> ../../4task_out.TXT 2>> ../../4task_error.TXT  # compile TC
    make configM >> ../../4task_out.TXT 2>> ../../4task_error.TXT  # config TC

    for ITERATION in $MEASUREMENTS
    do
      make configM >> ../../4task_out.TXT 2>> ../../4task_error.TXT  # config ITER

      ~/eethan-dut 172.24.106.57 8889 4 o   # start measurement
      echo "Iteration $ITERATION"

      sleep 2

      for RUN in $EXECUTIONS
      do
        make run >> ../../4task_out.TXT 2>> ../../4task_error.TXT
      done

      sleep 2
      ~/eethan-dut 172.24.106.57 8889 4 o   # stop measurement

      make endM >> ../../4task_out.TXT 2>> ../../4task_error.TXT  # end ITER
      sleep 5
    done

    make end >> ../../4task_out.TXT 2>> ../../4task_error.TXT  # end TC

    cd ../
  done

  make end >> ../4task_out.TXT 2>> ../4task_error.TXT  # end SE

  cd ../
done

~/eethan-dut 172.24.106.57 8889 4 f
sleep 5

~/eethan-dut 172.24.106.34 8888 4 l algoritmos_ml_7934

scp 4task_error.TXT alarcos@172.24.106.57:~/EETHAN/download/4
scp 4task_out.TXT alarcos@172.24.106.57:~/EETHAN/download/4