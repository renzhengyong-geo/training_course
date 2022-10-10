CXX		= g++
CXXFLAGS	= -O3

INCLUDES	= $(wildcard src/*.h)
SRCS		= $(wildcard src/*.cpp)
OBJS		= $(patsubst %.cpp, %.o, $(SRCS))

PI_INCLUDE	= -Isrc/

%.o : %.cpp
	@echo "PI is compiling "$<"..."
	@$(CXX) $(CXXFLAGS) $(PI_INCLUDE) -c $< -o $@ 

test: $(OBJS)
	@$(CXX) $(CXXFLAGS) -o test $(OBJS)
	
clean:
	@rm -rf $(OBJS) test
