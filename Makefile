lower: input.o lower.o
	cc -o lower lower.o everymain.o

input.o: input.c lower.c
	cc -c input.o

lower.o: lower.c input.c
	cc -c lower.c

clean:
	rm *.o
	rm lower
