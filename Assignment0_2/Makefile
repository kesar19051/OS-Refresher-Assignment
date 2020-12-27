assemble:
	nasm -felf64 main.asm  
	subl main.o
	
link:
	gcc prog-add.c main.o  
	
run:
	./a.out
	
clear:
	rm a.out main.o
