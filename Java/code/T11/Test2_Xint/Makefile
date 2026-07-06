JAVAC ?= javac
JAVA ?= java


configM:
	$(JAVAC) test.$(JAVA)

run:
	$(JAVA) -Xint -cp .. Test2_Xint.test

endM:
	find . -maxdepth 1 ! -name '.' ! -name 'test.$(JAVA)' ! -name 'Makefile' -exec rm -rf {} +
