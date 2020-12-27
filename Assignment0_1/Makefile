preprocess: 
	gcc -E hello.c -o hello.i
	subl hello.i
	
compile: 
	gcc -S hello.c -o hello.s
	subl hello.s
	
assemble: 
	gcc -c hello.c -o hello.o 
	subl hello.o
	
link: 
	gcc -o hello hello.c
	./hello
	
clean:
	rm hello hello.i hello.s hello.o
