#include <iostream>
#include "symbol_stack.h"

int main() {
    SymbolStack stack;

    try {
        stack.push('A');
        stack.push('B');
        stack.push('C');
        stack.push('D'); 

        std::cout << "Size of the stack: " << stack.size() << std::endl;

        while (!stack.isEmpty()) {
            std::cout << "Popped: " << stack.pop() << std::endl;
        }

        std::cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << std::endl;
    }
    catch (const SymbolStack::StackOverflowException& ex) {
        std::cerr << "Exception: " << ex.what() << std::endl;
    }
    catch (const SymbolStack::StackUnderflowException& ex) {
        std::cerr << "Exception: " << ex.what() << std::endl;
    }

    return 0;
}
