#include "solution.hpp"
#include "student.hpp"
#include <fstream>
#include <string>

Student ReadStudentRecFromStream(std::istream& is) {
    std::string first;
    std::string last_with_comma;

    if (!(is >> first >> last_with_comma)) return Student{};

    if (last_with_comma.empty() || last_with_comma.back() != ',') return Student{};
    last_with_comma.pop_back();

    unsigned int uin = 0;
    if (!(is >> uin)) return Student{};

    char comma = '\0';
    if (!(is >> comma) || comma != ',') return Student{};

    double gpa = 0.0;
    if (!(is >> gpa)) return Student{};

    return Student(first + " " + last_with_comma, uin, gpa);
}
