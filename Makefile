CC=g++
CFLAGS=-I.

ray_trace: main.o vec3.o ray.o
	$(CC) -o ray_trace.out main.o vec3.o ray.o -I.
