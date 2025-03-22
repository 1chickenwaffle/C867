#include <string>
#include "degree.h"
using namespace std;




class Student {
public:
    const static int DaysToCompleteEachCourseArraySize = 3;
private:
    int StudentID;
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
    Student(int studentID, string firstName, string lastName, string emailAddress, int age, int daysToCompleteEachCourse[], DegreeProgram degree_program);

    

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

    
    
    
    void print();
};
