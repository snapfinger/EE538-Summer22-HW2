
// Define a new C++ enum type called Operation that has members for add,
// subtract, division, multiplication, bitwise AND, bitwise OR, bitwise XOR, shift
// right, and shift left:
enum class Operation {

};

class CPPLib {
 public:
  // Given two integers, returns the result of the operation based on the given
  // operator.
  float Calculate(int a, int b, Operation operation);
};
