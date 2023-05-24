all: fakelib.so use

fakelib.so: fakelib.o
	gcc -shared $< -o $@

fakelib.o: fakelib.c
	gcc -fpic -c $< -o $@

use: use.c
	gcc $< -o $@
