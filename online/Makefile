SRCS:=$(wildcard ./src/*.cc)
OBJS:=$(patsubst %.cc,%.o,$(SRCS))
ELF:= tinyse_online
CC:=g++
CXXFLAGS:=-std=c++11 -g -Wall
$(ELF):$(OBJS)
	g++ $^ -o $@ -lpthread -llog4cpp -ljson $(CXXFLAGS)
.PHONY:clean
clean:
	rm -rf $(ELF) $(OBJS)

