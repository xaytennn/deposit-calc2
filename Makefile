FC1 = src\main.c
FC2 = src\deposit.c
FO1 = build\main.o
FO2 = build\deposit.o
PROG = bin\deposit-calc

all: $(PROG)

$(FO1): $(FC1)
	gcc -Wall -Werror -c $(FC1) -o $(FO1)

$(FO2): $(FC2)
	gcc -Wall -Werror -c $(FC2) -o $(FO2)

$(PROG): $(FO1) $(FO2)
	gcc $(FO1) $(FO2) -o $(PROG)

install:
	install ./deposit-calc \bin

uninstall:
	rm -rf $(PROG)

clean:
	rm -rf \build\*.o