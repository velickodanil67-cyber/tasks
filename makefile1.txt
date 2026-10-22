all: main_1.o avg_func.o
	gcc main_1.o avg_func.o && rm -f *.o

main_1.o: main_1.c
	gcc -c main_1.c

avg_func.o: avg_func.c
	gcc -c avg_func.c