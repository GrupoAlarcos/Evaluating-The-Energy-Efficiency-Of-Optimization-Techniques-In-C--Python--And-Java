configM:
	javac test.java

run:
	java -Xint -cp .. Test1_Xint.test

endM:
	find . -maxdepth 1 ! -name '.' ! -name 'test.java' ! -name 'Makefile' -exec rm -rf {} +
