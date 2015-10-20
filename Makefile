input: lower.o input.o
	cc -o input input.o lower.o

lower.o: lower.c input.c
	cc -c lower.c
	
input.o: input.c lower.c
	cc -c input.c

clean:
	rm *.o
	rm input
