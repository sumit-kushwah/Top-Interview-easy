//
// Created by sumit Kushwah on 25/02/22.
//

#include "declaration.h"

string extractNumeric(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= '0' && s[i] <= '9') continue;
        return s.substr(0, i);
    }
    return s;
}

string removeLeading(string s, char ch) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ch) return s.substr(i);
    }
    return "";
}



int toInteger(string s, bool positive) {
    string int_max = "2147483647";
    string int_min = "2147483648";
    if (s.size() > int_max.size()) {
        return positive ? INT_MAX : INT_MIN;
    } else if (s.size() == int_min.size()) {
        return positive ? (s >= int_max ? INT_MAX: stoi(s)): (s >= int_min ? INT_MIN: -1 * stoi(s));
    } else {
        return (positive ? 1: -1) * stoi(s);
    }
}

int myAtoi(string s) {
    /*
     * Algorithm steps::
     * step 1: remove leading spaces'
     * step 2: check for negative and positive sign
     * step 3: extract numeric part of the string
     * step 4: remove leading spaces
     * step 5: compare with INT_MAX and INT_MIN with sign
     * step 6: return the number with sign else -1
     * */

    s = removeLeading(s, ' ');

    if (s.size() < 1) return 0;

    bool positive = s[0] == '-' ? false: true;

    if (s[0] == '-' || s[0] == '+') s = s.substr(1);

    if (s.size() < 1) return 0;

    s = extractNumeric(s);

    s = removeLeading(s, '0');

    if (s.size() < 1) return 0;

    return toInteger(s, positive);
}
