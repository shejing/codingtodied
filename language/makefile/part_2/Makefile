mp3:main.o mp3.o
	gcc main.o mp3.o -o mp3

main.o:main.c
	gcc -c main.c -o main.o

mp3.o:mp3.c
	gcc -c mp3.c -o mp3.o

.PHONE:clean

clean:
	rm mp3 mp3.o main.o
