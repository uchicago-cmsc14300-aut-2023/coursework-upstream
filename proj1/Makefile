.PHONY: clean

test: pos.h pos.c board.h board.c logic.h logic.c test_project.c
	clang -Wall -g -O0 -o test pos.c board.c logic.c test_project.c -lcriterion

clean:
	rm -rf a.out test test.dSYM
