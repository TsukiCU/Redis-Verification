TARGET = test_redis
SRC = test_redis.cpp
CC = g++
CFLAGS = -Wall -Wextra -O2
LDFLAGS = -lgtest -lgtest_main -lhiredis

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET) $(LDFLAGS)

clean:
	rm -f $(TARGET)

.PHONY: all clean