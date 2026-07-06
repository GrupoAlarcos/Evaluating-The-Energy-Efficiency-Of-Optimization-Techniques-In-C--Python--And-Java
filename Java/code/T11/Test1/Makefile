JAVAC ?= javac
JAVA ?= java


configM:
	$(JAVAC) test.$(JAVA)

run:
	$(JAVA) -cp .. Test1.test

endM:
	find . -maxdepth 1 ! -name '.' ! -name 'test.$(JAVA)' ! -name 'Makefile' -exec rm -rf {} +
