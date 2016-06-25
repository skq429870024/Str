#this is a makefile
test: test.o str.o
	gcc test.o str.o -o test
test.o: test.c
	gcc test.c  -c -g -Wall -o test.o
str.o: str.c
	 gcc str.c -c -g -Wall  -o str.o

clean:
	rm *.o  test -rf



