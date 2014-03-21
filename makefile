CC=gcc
CFLAGS=-Wall -Werror
DEPS = bchess.h bitboard.h utils.h
OBJ = init.o bchess.o bitboard.o utils.o

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

bchess: $(OBJ) 
	gcc $(CFLAGS) -o $@ $^

clean:
	rm *.o bchess