CC=g++
CFLAGS=-I.

ray_trace: main.o vec3.o ray.o
	$(CC) -o ray_trace.o main.o vec.o ray.o -I.
