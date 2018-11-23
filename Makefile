CC		= gcc
CFLAGS	= -O2 -Wall
OBJ		= cmain.o karatsuba.o multiply.o 
PROG	= karatsuba


all: $(PROG)

$(PROG): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(PROG)

clean:
	rm $(OBJ) $(PROG)
