#include "solution.hpp"

Student ReadStudentRecFromStream(std::istream& is) {
  std::string first;
  std::string last_with_comma;

  is >> first;
  if (is.fail()) return Student{};

  is >> last_with_comma;
  if (is.fail()) return Student{};

  if (last_with_comma.empty() || last_with_comma.back() != ',')
      return Student{};

  last_with_comma.pop_back();

  unsigned int uin;
  is >> uin;
  if (is.fail()) return Student{};

  char throw_away;
  is >> throw_away;
  if (is.fail() || throw_away != ',')
      return Student{};

  double gpa;
  is >> gpa;
  if (is.fail()) return Student{};

  std::string full_name = first + " " + last_with_comma;
  // your implementation here...
  return Student{};
}
