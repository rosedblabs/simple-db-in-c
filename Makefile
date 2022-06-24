db:
	gcc *.c -o simple-db

run:
	./simple-db

clean:
	rm -rf simple-db

format: *.c
	clang-format -style=Google -i *.c
