CXX ?= g++
CXXFLAGS ?= -std=c++17

config:
	$(CXX) $(CXXFLAGS) -c ./Test1O0/*.c -o test1O0.o -Dmain=mu1 -Dreps=r1 -Dtest1=t1 -Ddivide=multiply1
	$(CXX) $(CXXFLAGS) -c ./Test2O0/*.c -o test2O0.o -Dmain=mu2 -Dreps=r2 -Dtest2=t2 -Ddivide2=multiply2
	$(CXX) test_T17.c test1O0.o test2O0.o -o test_T17_run
	./test_T17_run

end:
	rm -f *.o test_T17_run
