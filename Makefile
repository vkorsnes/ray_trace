CC=g++
CFLAGS=-I.

ray_trace: main.o vec3.o ray.o hittable.o sphere.o hittablelist.o
	$(CC) -o ray_trace.out main.o vec3.o ray.o hittable.o sphere.o hittablelist.o -I.
