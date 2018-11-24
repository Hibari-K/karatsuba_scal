CC		= gcc
CFLAGS	= -O0 -Wall -g
OBJ		= cmain.o karatsuba.o multiply.o 
PROG	= karatsuba


all: $(PROG)

$(PROG): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(PROG)

clean:
	rm $(OBJ) $(PROG)
