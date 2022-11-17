all: mains maindloop maindrec

loops: libclassloops.a

libclassloops.a: advancedClassificationLoop.o basicClassification.o
	ar rcs libclassloops.a advancedClassificationLoop.o basicClassification.o
	ranlib libclassloops.a

recursives: libclassrec.a

libclassrec.a: advancedClassificationRecursion.o basicClassification.o
	ar rcs libclassrec.a advancedClassificationRecursion.o basicClassification.o
	ranlib libclassrec.a

mains: main.o libclassrec.a
	gcc -Wall -o mains main.o libclassrec.a -lm


loopd: libclassloops.so 

libclassloops.so: advancedClassificationLoop.o basicClassification.o
	gcc -shared -o libclassloops.so advancedClassificationLoop.o basicClassification.o -lm

recursived: libclassrec.so

libclassrec.so: advancedClassificationRecursion.o basicClassification.o
	gcc -shared -o libclassrec.so advancedClassificationRecursion.o basicClassification.o -lm


maindloop: main.o libclassloops.so
	gcc -Wall -o maindloop main.o libclassloops.so -ldl

maindrec: main.o libclassrec.so
	gcc -Wall -o maindrec main.o libclassrec.so -ldl

clean:
	rm -f maindloop maindrec mains libclassrec.* libclassloops.* *.o

.PHONY : clean loopd loops recursived recursives

basicClassification.o: basicClassification.c NumClass.h
	gcc -Wall -c basicClassification.c

advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	gcc -Wall -c advancedClassificationLoop.c

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	gcc -Wall -c advancedClassificationRecursion.c

main.o: main.c NumClass.h
	gcc -Wall -c main.c
