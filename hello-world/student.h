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
    DegreeProgram degreeProgram; //enum degree program that contains 3 attribute
    
public:
    //constructor using all the input paramenters
    Student(int studentID, string firstName, string lastName, string emailAddress, int age, int daysToCompleteEachCourse[], DegreeProgram degree_program){
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

    
    
    //getter and setter
    void setStudentID(int studentID){
        StudentID = studentID;
    }
    
    int getStudentID(){
        return StudentID;
    }
    
    void setFirstname(string firstName){
        FirstName = firstName;
    }
    
    string getFirstName (){
        return FirstName;
    }
    
    void setLastname(string lastName){
        LastName = lastName;
    }
    
    string getLastName (){
        return LastName;
    }
    
    void SetEmailAddress(string emailAddress){
        EmailAddress = emailAddress;
    }
    
    string getEmailAddress(){
        return EmailAddress;
    }
    
    void setAge(int age){
        Age = age;
    }
    
    int getAge(){
        return Age;
    }
    
    
    ;
};
