#ifndef SYMBOL_STACK_H
#define SYMBOL_STACK_H

class SymbolStack {
private:
    static const int MAX_SIZE = 100;
    char stackArray[MAX_SIZE];
    int top;

public:
    class StackOverflowException {
    public:
        const char* what() const {
            return "Stack overflow exception";
        }
    };

    class StackUnderflowException {
    public:
        const char* what() const {
            return "Stack underflow exception";
        }
    };

    SymbolStack();
    void push(char c);
    char pop();
    int size() const;
    bool isEmpty() const;
    bool isFull() const;
    void clear();
    char peek() const;
};

#endif

