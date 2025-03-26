#include "student.h"


class Roster{
public:
    int studentIndex = 0;
    const static int numStudent = 5;
    Student* classRosterArray[numStudent];

    void parse(string studentData);
    void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram);
    
    void printALL();
    void remove(string studentID);
    void printAverageDaysInCourse(string studentID);
    void printInvalidEmails();
    void printByDegreeProgram(DegreeProgram degreeProgram) ;
    ~Roster();
};



