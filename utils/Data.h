#include <iostream>

using namespace std;

#ifndef DATA_H
#define DATA_H

class Data
{
private:
    string id;
    string problemLink;
    string problemName;
    string lang;
    string solutionLink;

public:
    Data() {
    }
    Data(string _id, string _problemLink, string _problemName, string _lang, string _solutionLink) {
        id = _id;
        problemLink = _problemLink;
        problemName = _problemName;
        lang = _lang;
        solutionLink = _solutionLink;
    }
    string getId() {
        return id;
    }

    string getproblemLink() {
        return problemLink;
    }

    string getproblemName() {
        return problemName;
    }

    string getLang() {
        return lang;
    }

    string getSolutionLink() {
        return solutionLink;
    }
};

#endif
