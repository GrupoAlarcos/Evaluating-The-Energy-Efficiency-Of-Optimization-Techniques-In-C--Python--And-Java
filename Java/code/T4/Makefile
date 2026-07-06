JAVAC ?= javac
JAVA ?= java


config:
	$(JAVAC) Test1/test.$(JAVA) Test1_Xint/test.$(JAVA) Test2/test.$(JAVA) Test2_Xint/test.$(JAVA) test_T4.$(JAVA)
	$(JAVA) -cp . test_T4

end:
	rm -f Test1/*.class Test2/*.class Test1_Xint/*.class Test2_Xint/*.class *.class
