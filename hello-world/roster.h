#include "student.h"


class Roster{
public:
    int studentIndex = 0;
    const static int numStudent = 5;
    Student* classRosterArray[numStudent];

void parse(string studentData);
void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
    
void printALL();
};





//b.  public void remove(string studentID)  that removes students from the roster by student ID. If the student ID does not exist, the function prints an error message indicating that the student was not found.
//
//c. public void printAll() that prints a complete tab-separated list of student data in the provided format: A1 [tab] First Name: John [tab] Last Name: Smith [tab] Age: 20 [tab]daysInCourse: {35, 40, 55} Degree Program: Security. The printAll() function should loop through all the students in classRosterArray and call the print() function for each student.
//
//d.  public void printAverageDaysInCourse(string studentID)  that correctly prints a student’s average number of days in the three courses. The student is identified by the studentID parameter.
//
//e.  public void printInvalidEmails() that verifies student email addresses and displays all invalid email addresses to the user.
// 
//
//Note: A valid email should include an at sign ('@') and period ('.') and should not include a space (' ').
// 
//
//f.  public void printByDegreeProgram(DegreeProgram degreeProgram) that prints out student information for a degree program specified by an enumerated type.

