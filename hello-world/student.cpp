#include "student.h"

// constructor definition
Student::Student(){
    StudentID = 0;
    FirstName = "";
    LastName = "";
    EmailAddress = "";
    Age = 0;
    for(int i = 0; i < DaysToCompleteEachCourseArraySize; i++){
        DaysToCompleteEachCourse[i] = 0;
    }
    degreeProgram = UNDECIDE;
}

//constructor using all the input paramenter
Student::Student(int studentID, string firstName, string lastName, string emailAddress, int age, int daysToCompleteEachCourse[], DegreeProgram degree_program){
    StudentID = studentID;
    FirstName = firstName;
    LastName = lastName;
    EmailAddress = emailAddress;
    Age = age;
    for(int i = 0; i < DaysToCompleteEachCourseArraySize; i++){
        DaysToCompleteEachCourse[i] = daysToCompleteEachCourse[i];
    }
    degreeProgram = degree_program;
}

//getter and setter declaration for each variable of Student class
void setStudentID(int studentID);
int getStudentID();

void setFirstname(string firstName);
string getFirstName ();

void setLastname(string lastName);
string getLastName ();

void setEmailAddress(string emailAddress);
string getEmailAddress();

void setAge(int age);
int getAge();

void setDaysToCompleteEachCourse(int DaysToCompleteEachCourse[]);
int getSetDaysToCompleteEachCourse(int index);

void setDegreeProgram(DegreeProgram programType);
DegreeProgram getDegreeProgram();

