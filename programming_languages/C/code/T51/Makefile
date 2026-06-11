config:
	g++ -O0 -c ./Test1O0/*.c -o test1O0.o -Dmain=mu1 -Dreps=r1 -Dsum=s1 -Dinitialize=ia1 -Dinitializetozero=iaz1 -Dswap=s1 -Dpartition=p1 -Dtest1=t1
	g++ -O0 -c ./Test2O0/*.c -o test2O0.o -Dmain=mu2 -Dreps=r2 -Dsum=s2 -Dinitialize=ia2 -Dinitializetozero=iaz2 -Dswap=s2 -Dpartition=p2 -Dtest2=t2
	g++ test_T51.c test1O0.o test2O0.o -o test_T51_run
	./test_T51_run

end:
	rm -f *.o test_T51_run