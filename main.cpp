#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <cctype>

#include "ArrayStack.h"

using namespace std;

// Token

struct Token {
    string value;   // number, operator, or parenthesis
};

// Tokenizer

vector<Token> tokenize(const string& line) {
    vector<Token> tokens;
    // TODO
    string curr;
    for (char c: line) {
        if (isspace(c)) {//method from #include <cctype>, _ctype.h
            if (!curr.empty()) {
                tokens.push_back({curr});
                curr.clear();
            }
        }
        else if (isdigit(c))//method from #include <cctype>, _ctype.h
            curr += c;
        else {
            if (!curr.empty()) {
                tokens.push_back({curr});
                curr.clear();
            }
            string op = string(1, c);
            tokens.push_back({op});
        }
    }
    if (!curr.empty())
        tokens.push_back({curr});

    return tokens;
}

// Helpers

bool isOperator(const string& s) {
    return s == "+" || s == "-" || s == "*" || s == "/";
}

int precedence(const string& op) {
    // TODO
    if (op == "+"||op == "-")
        return 1;
    if ( op == "*"||op == "/")
        return 2; //higher precedence
    return 0;
}

// Detection

bool isValidPostfix(const vector<Token>& tokens) {
    // TODO
    int digitCount = 0;
    int opCount = 0;
    for (Token t: tokens) {
        if (isdigit(t.value[0]))
            digitCount++;
        else if (isOperator(t.value)) {
            opCount++;
            if (opCount >= digitCount)
                return false;
        }
        else
            return false;

    }
    return digitCount - 1 == opCount && opCount > 0;
}

bool isValidInfix(const vector<Token>& tokens) {
    // TODO
    int equilibrium = 0; //for parenthesis
    bool nextOp = true; //next token should be a digit or ( for true and ) or an operator for false;
    for (Token t: tokens) {
        if (isdigit(t.value[0])) {
            if (!nextOp)
                return false;
            nextOp = false;
        }
        else if (isOperator(t.value)) {
            if (nextOp)
                return false;
            nextOp = true;
        }
        else if (t.value == "(") {
            if (!nextOp)
                return false;
            equilibrium++;
            nextOp = true;
        }
        else if (t.value == ")") {
            if (nextOp)
                return false;
            equilibrium--;
            if (equilibrium < 0)
                return false;
            nextOp = false;
        }
        else
            return false;
    }
    return equilibrium == 0 && !nextOp;
}

// Conversion

vector<Token> infixToPostfix(const vector<Token>& tokens) {
    vector<Token> output;
    // TODO
    return output;
}

// Evaluation

double evalPostfix(const vector<Token>& tokens) {
    ArrayStack<double> stack;
    // TODO
    return 0.0;
}

// Main

int main() {

    string line;
    getline(cin, line);

    vector<Token> tokens = tokenize(line);

    if (isValidPostfix(tokens)) {
        cout << "FORMAT: POSTFIX\n";
       // cout << "RESULT: " << evalPostfix(tokens) << "\n";
    }

    else if (isValidInfix(tokens)) {
        //vector<Token> postfix = infixToPostfix(tokens);
        cout << "FORMAT: INFIX\n";/*
        cout << "POSTFIX: ";
        for (const auto& t : postfix) {
            cout << t.value << " ";
        }
        cout << "\n";
        cout << "RESULT: " << evalPostfix(postfix) << "\n";*/
    }
    else {
        cout << "FORMAT: NEITHER\n";
        cout << "ERROR: invalid expression\n";
    }


    /*
    ArrayStack<int> test;

    test.push(1);
    test.push(5);
    test.push(2);
    test.push(6);

    cout<<"Top element: "<<test.top()<<endl;
    cout<<"Stack size: "<<test.size()<<endl;
    test.pop();
    cout<<"Top after one pop: "<<test.top()<<endl;
    cout<<"Stack size after one pop: "<<test.size()<<endl;

    while (!test.empty())
        test.pop();
    cout<<"Stack empty: "<<(test.empty() ? "Yes" : "No")<<endl;

    */

    return 0;
}
