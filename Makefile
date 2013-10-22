CC=g++
CFLAGS=-std=c++11

clean:
	rm -rf *.o *.a test.o test test.a
	
test:
	$(CC) $(CFLAGS) test.cpp -o test