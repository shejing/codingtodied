CC=gcc
TARGET=mp3
OBJS=main.o mp3.o

$(TARGET):$(OBJS)
	$(CC) $^ -o $@

main.o:main.c
	$(CC) -c main.c -o main.o

mp3.o:mp3.c
	$(CC) -c mp3.c -o mp3.o

.PHONE:clean

clean:
	rm $(TARGET) $(OBJS)
