#include <iostream>

using namespace std;

#ifndef ROW_H
#define ROW_H

class Row
{
private:
    string id;
    string problem;
    string solution;

public:
    Row() {
    }
    Row(string _id, string _problem, string _solution) {
        id = _id;
        problem = _problem;
        solution = _solution;
    }
    string getId() {
        return id;
    }

    string getProblem() {
        return problem;
    }

    string getSolution() {
        return solution;
    }
    string toRow() {
        return  "|" + id + "|" + problem + "|" + solution + "|";
    }
};

#endif
