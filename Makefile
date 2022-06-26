db:
	gcc *.c -o simple-db

run:
	./simple-db

clean:
	rm -rf simple-db test.db

format: *.c
	clang-format -style=Google -i *.c *.h
