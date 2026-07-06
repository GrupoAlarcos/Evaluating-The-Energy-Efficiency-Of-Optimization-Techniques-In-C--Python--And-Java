CXX ?= g++
CXXFLAGS ?= -std=c++17

config:
	$(CXX) $(CXXFLAGS) -c ./Test1O0/*.c -o test1O0.o -Dmain=mu1 -Dreps=r1 -Dfunctb=f1 -Dtest1=t1
	$(CXX) $(CXXFLAGS) -c ./Test2O0/*.c -o test2O0.o -Dmain=mu2 -Dreps=r2 -Dfunctb=f2 -Dtest2=t2
	$(CXX) test_T33.c test1O0.o test2O0.o -o test_T33_run
	./test_T33_run

end:
	rm -f *.o test_T33_run
