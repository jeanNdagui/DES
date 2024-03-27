des: main.o file.o msg.o des.o binaryUtil.o
		gcc main.o file.o msg.o des.o binaryUtil.o -o des; rm *.o

binaryUtil.o: binaryUtil.h
				gcc -c binaryUtil.c

des.o: des.h msg.h
		gcc -c des.c

msg.o: msg.h des.h binaryUtil.h
		gcc -c msg.c

file.o: file.h
		gcc -c file.c

main.o: main.c des.h msg.h file.h
		gcc -c main.c