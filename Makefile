BUILD_F = build/
BIN_F = bin/
SRC_F = src/
TEST_F = test/
SOURCES_O = $(BUILD_F)main.o $(BUILD_F)deposit.o
KEYS = -Wall -Werror
PROG = bin/deposit-calc
TC1 = test/main.c
TC2 = test/deposit_test.c
TC3 = test/validation_test.c
TO1 = build/test/main.o
TO2 = build/test/deposit_test.o
TO3 = build/test/validation_test.o
TEST = bin/deposit-calc-test
FC1 = src/main.c
FC2 = src/deposit.c
FO1 = build/src/main.o
FO2 = build/src/deposit.o
IFLAGS = -I src
IFLAGT = -I thirdparty

.PHONY: all clean

all: bin build $(PROG) $(TEST) 

 $(FO1): $(FC1)
	gcc $(KEYS) $(IFLAGS) -c $(FC1) -o $(FO1)

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

clean:
	rm -rf $(BIN_F)*
	rm -rf $(BUILD_F)*
	rmdir $(BIN_F)
	rmdir $(BUILD_F)
test: bin build $(BUILD_F)tests.o
	$(CC) $(KEYS) $(BUILD_F)tests.o -o $(BIN_F)tests

$(BUILD_F)tests.o : $(TEST_F)main.c
	$(CC) $(KEYS) -c $(TEST_F)main.c -o $(BUILD_F)tests.o
bin:
	test ! -d $(BIN_F) && mkdir $(BIN_F)
build:
	test ! -d $(BUILD_F) && mkdir $(BUILD_F) && mkdir build/src && mkdir build/test
