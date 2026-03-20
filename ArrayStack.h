//
// Created by Zahra Sam on 3/17/26.
//

#ifndef EXPRESSION_FORMAT_DETECTOR_ARRAYSTACK_H
#define EXPRESSION_FORMAT_DETECTOR_ARRAYSTACK_H

#endif //EXPRESSION_FORMAT_DETECTOR_ARRAYSTACK_H

#include <vector>
#include <stdexcept>
using namespace std;

template <typename T>
class ArrayStack {
private:
    std::vector<T> data;

public:
    void push(const T& value) {
        // TODO
        data.push_back(value);
    }

    void pop() {
        // TODO
        if (data.empty())
            throw underflow_error("ArrayStack is empty, cannot pop");
        data.pop_back();

    }

    T top() const {
        // TODO
        if (data.empty())
            throw underflow_error("ArrrayStack is empty, cannot access top");
        return data.back();
    }

    bool empty() const {
        // TODO
        return data.empty();
    }

    int size() const {
        // TODO
        return data.size();
    }
};
