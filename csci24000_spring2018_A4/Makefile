JFLAGS = -Xlint:none
JC = javac
JVM= java
FILE=
.SUFFIXES: .java .class
.java.class:
	$(JC) $(JFLAGS) $*.java
CLASSES = \
	Main.java\
	Driver.java \
	Address.java \
	Student.java \
	Stack.java

MAIN = Main

default: classes

classes: $(CLASSES:.java=.class)

clean:
	$(RM) *.class

run: classes
	$(JVM) $(MAIN)
