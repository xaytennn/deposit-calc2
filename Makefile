.PHONY = all clean mkdir install uninstall

FC1 = src\main.c
FC2 = src\deposit.c
FO1 = build\src\main.o
FO2 = build\src\deposit.o
PROG = bin\deposit-calc
TC1 = test\main.c
TC2 = test\deposit_test.c
TC3 = test\validation_test.c
TO1 = build\test\main.o
TO2 = build\test\deposit_test.o
TO3 = build\test\validation_test.o
TEST = bin\deposit-calc-test

CFLAG = -Wall -Werror
IFLAGS = -I src
IFLAGT = -I thirdparty

all: clean dir $(PROG) $(TEST)

dir:
	mkdir bin
	mkdir build
	mkdir build\src
	mkdir build\test

$(FO1): $(FC1)
	gcc $(CFLAG) $(IFLAGS) -c $(FC1) -o $(FO1)

$(FO2): $(FC2)
	gcc $(CFLAG) $(IFLAGS) -c $(FC2) -o $(FO2)

$(PROG): $(FO1) $(FO2)
	gcc $(FO1) $(FO2) -o $(PROG)

$(TO1): $(TC1)
	gcc $(IFLAGT) -c $(TC1) -o $(TO1)

$(TO2): $(TC2)
	gcc $(IFLAGS) $(IFLAGT) -c $(TC2) -o $(TO2)

$(TO3): $(TC3)
	gcc $(IFLAGS) $(IFLAGT) -c $(TC3) -o $(TO3)

$(TEST): $(TO1) $(TO2) $(TO3) $(FO2)
	gcc $(TO1) $(TO2) $(TO3) $(FO2) -o $(TEST)

install:
	install ./deposit-calc \bin

uninstall:
	rm -rf $(PROG)
	rm -rf $(TEST)

clean:
	rm -rf build
	rm -rf bin