FC1 = src\main.c
FC2 = src\deposit.c
FO1 = build\src\main.o
FO2 = build\src\deposit.o
PROG = bin\deposit-calc
TC1 = test\main.c
TC2 = test\deposit-test.c
TC3 = test\validation_test.c
TO1 = build\test\main.o
TO2 = build\test\deposit-test.o
TO3 = build\test\validation_test.o
TEST = bin\deposit-calc-test

CFLAG = -Wall -Werror

all: dir $(PROG) $(TEST)

dir:
	mkdir bin
	mkdir build
	mkdir build\src
	mkdir build\test

$(FO1): $(FC1) src\deposit.h
	gcc $(CFLAG) -c $(FC1) -o $(FO1)

$(FO2): $(FC2)
	gcc $(CFLAG) -c $(FC2) -o $(FO2)

$(PROG): $(FO1) $(FO2)
	gcc $(FO1) $(FO2) -o $(PROG)

$(TO1): $(TC1) thirdparty\ctest.h
	gcc $(CFLAG) -I thirdparty -c $(TC1) -o $(TO1)

$(TO2): $(TC2)
	gcc $(CFLAG) -c $(TC2) -o $(TO2)

$(TO3): $(TC1)
	gcc $(CFLAG) -c $(TC3) -o $(TO3)

$(TEST): $(TO1) $(TO2) $(TO3)
	gcc $(TO1) $(TO2) $(TO3) -o $(TEST)

install:
	install ./deposit-calc \bin

uninstall:
	rm -rf $(PROG)
	rm -rf $(TEST)

clean:
	rm -rfd build
	rm -rfd bin