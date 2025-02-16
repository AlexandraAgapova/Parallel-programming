CC = g++
CFLAGS = -O2 -Wall
TARGET = sin_array

all: float double

float:
	$(CC) $(CFLAGS) -DARRAY_TYPE=float -o $(TARGET)_float main.cpp

double:
	$(CC) $(CFLAGS) -DARRAY_TYPE=double -o $(TARGET)_double main.cpp

clean:
	rm -f $(TARGET)_float $(TARGET)_double
