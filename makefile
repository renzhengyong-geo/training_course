
CXX              :=  g++
CXXFLAGS         :=  -o3 -w -g -Wfatal-errors

# Find all head file in the current working dir into INC
# Find all c++ source file in current working dir into SRC
# Replace all source file in SRC by their associated object files
INC:= $(wildcard *.h)  
SRC:= $(wildcard *.cpp) 
OBJ:= $(patsubst %.cpp, %.o, $(SRC))

	
# How to compile C++
%.o : %.cpp 
	@echo "We are compiling C++ "$<"..."
	$(CXX) $(CXXFLAGS) -c $< -o $@


#--------------------------------------------------------------
test: $(OBJ) $(INC) $(SRC)  
	$(CXX) $(CXXFLAGS) -o test $(OBJ)
	
clean:	
	@rm -rf *.o *~  $(OBJ)  
all:
	@echo $(INC)
	@echo $(SRC)
	@echo $(OBJ) 		