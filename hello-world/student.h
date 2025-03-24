#pragma once
#include <string>
#include "degree.h"
using namespace std;




class Student {
public:
    const static int DaysToCompleteEachCourseArraySize = 3;
private:
    string StudentID;
    string FirstName;
    string LastName;
    string EmailAddress;
    int Age;
    int DaysToCompleteEachCourse [DaysToCompleteEachCourseArraySize]; // array of number of days to complete each course
    DegreeProgram degreeProgram; //enum degree program that contains 4 attribute
    
public:
    //constructor with dafault value
    Student();
    //constructor using all the input paramenters
    Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysToCompleteEachCourse[], DegreeProgram degree_program);

    

    //getter and setter declaration for each variable of Student class
    void setStudentID(string studentID);
    string getStudentID();

    void setFirstname(string firstName);
    string getFirstName ();

    void setLastname(string lastName);
    string getLastName ();

    void setEmailAddress(string emailAddress);
    string getEmailAddress();

    void setAge(int age);
    int getAge();

    void setDaysToCompleteEachCourse(int DaysToCompleteEachCourse[]);
    int* getDaysToCompleteEachCourse();

    void setDegreeProgram(DegreeProgram programType);
    DegreeProgram getDegreeProgram();

    //format: A1 [tab] First Name: John [tab] Last Name: Smith [tab] Age: 20 [tab]daysInCourse: {35, 40, 55} Degree Program: Security.
    void print();
};
