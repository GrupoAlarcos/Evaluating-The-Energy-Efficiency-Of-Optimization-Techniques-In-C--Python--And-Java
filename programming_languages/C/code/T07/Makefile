config:
	g++ -c ./Test1O0/*.c -o test1O0.o -Dmain=mu1 -Dreps=r1 -Di=ivar1 -Dj=jvar1 -Dtest1=t1
	g++ -c ./Test2O0/*.c -o test2O0.o -Dmain=mu2 -Dreps=r2 -Di=ivar2 -Dj=jvar2 -Dtest2=t2
	g++ test_T07.c test1O0.o test2O0.o -o test_T07_run
	./test_T07_run

end:
	rm -f *.o test_T07_run