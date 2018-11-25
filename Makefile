CC		= gcc
CFLAGS	= -O3 -Wall
OBJ		= cmain.o karatsuba.o multiply.o split_28bit.o combine_28bit.o unroll.o
PROG	= karatsuba


all: $(PROG)

$(PROG): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(PROG)

clean:
	rm $(OBJ) $(PROG)
