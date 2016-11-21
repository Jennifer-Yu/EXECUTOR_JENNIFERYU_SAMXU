all: exec.o
	gcc -o exectest exec.o

exec.o: exec.c
	gcc -c exec.c

run: exectest
	./exectest

clean:
	rm ./exectest
	rm *~