all: clean test1 test2

test1:
	g++ -std=c++11 test1.cpp -o test1
	./test1

test2:
	g++ -std=c++11 test2.cpp -o test2
	./test2

clean:
ifneq ("$(wildcard ./test1)","")
	rm test1
endif
ifneq ("$(wildcard ./test2)","")
	rm test2
endif

.PHONY: test1 test2