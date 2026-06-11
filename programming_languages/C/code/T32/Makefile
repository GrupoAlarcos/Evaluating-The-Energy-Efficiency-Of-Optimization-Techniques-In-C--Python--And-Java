config:
	g++ -O0 -c ./Test1O0/*.c -o test1O0.o -Dmain=mu1 -Dreps=r1 -Dtest1=t1
	g++ -O0 -c ./Test2O0/*.c -o test2O0.o -Dmain=mu2 -Dreps=r2 -Dtest2=t2
	g++ test_T32.c test1O0.o test2O0.o -o test_T32_run
	./test_T32_run

end:
	rm -f *.o test_T32_run