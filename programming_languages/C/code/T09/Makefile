config:
	g++ -c ./Test1O0/*.c -o test1O0.o -Dmain=mu1 -Dreps=r1 -Dglobal=g1 -Dtest1=t1
	g++ -c ./Test2O0/*.c -o test2O0.o -Dmain=mu2 -Dreps=r2 -Dglobal=g2 -Dtest2=t2
	g++ test_T09.c test1O0.o test2O0.o -o test_T09_run
	./test_T09_run

end:
	rm -f *.o test_T09_run