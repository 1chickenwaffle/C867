#include "roster.h"
#include "student.h"
#include "degree.h"
#include <iostream>;
//parse student Data, one at a time
void Roster::parse(string studentData){
    //extract data until next comma
    
    //extract student id
    int rhs = studentData.find(",");
    string id = studentData.substr(0, rhs);
    
    //extract first name
    int lhs = rhs + 1;
    rhs = studentData.find(",",lhs);
    string firstName = studentData.substr(lhs, rhs-lhs);
    
    //extract last name
    lhs = rhs + 1;
    rhs = studentData.find(",",lhs);
    string lastName = studentData.substr(lhs, rhs-lhs);
    
    //extract email
    lhs = rhs + 1;
    rhs = studentData.find(",",lhs);
    string email = studentData.substr(lhs, rhs-lhs);
    
    //extract age string and convert to int
    lhs = rhs + 1;
    rhs = studentData.find(",",lhs);
    int age = stoi(studentData.substr(lhs, rhs-lhs));
    
    //extract number of days to complete 3 course in string type then convert to int
    lhs = rhs + 1;
    rhs = studentData.find(",",lhs);
    int course1 = stoi(studentData.substr(lhs, rhs-lhs));
    lhs = rhs + 1;
    rhs = studentData.find(",",lhs);
    int course2 = stoi(studentData.substr(lhs, rhs-lhs));
    lhs = rhs + 1;
    rhs = studentData.find(",",lhs);
    int course3 = stoi(studentData.substr(lhs, rhs-lhs));
    
    //extract degree, compare string to SECURITY/NETWORK/SOFTWARE then assign to dprogram
    DegreeProgram dprogram = UNDECIDE;//default value
    lhs = rhs + 1;
    rhs = studentData.length()+ 1 - lhs;
    string stringProgram = studentData.substr(lhs, rhs-lhs);
    if (stringProgram == "SECURITY"){
        dprogram = SECURITY;
    }else if (stringProgram == "NETWORK"){
        dprogram = NETWORK;
    }else if (stringProgram == "SOFTWARE"){
        dprogram = SOFTWARE;
    }
    
    add(id, firstName, lastName, email,age,course1,course2,course2,dprogram);
};

void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeProgram){
    int daysInCourseArray [3] = {daysInCourse1,daysInCourse2,daysInCourse3};
    if(studentIndex < numStudent){
        classRosterArray[studentIndex] = new Student (studentID,firstName,lastName,emailAddress,age,daysInCourseArray,degreeProgram);
        studentIndex++;
    }
};

void Roster::printALL(){
    for(int i = 0; i <numStudent; i++){
        classRosterArray[i]->print();
    }
}

void Roster::remove(string studentID){
    bool studentExist = false;
    int studentIDnum = stoi(studentID.substr(1,1)); // get the number after A in student ID
    for(int i = 0; i < numStudent; i++){
        string tempStudentID = classRosterArray[i]->getStudentID();
        if(tempStudentID == studentID){
            studentExist = true;
            delete classRosterArray[studentIDnum-1];
            cout <<"Student "<< studentID << " has been removed." << endl;
        }
    }
    if (!studentExist) {
        cout << "error: Student  " << studentID << " is not found." << endl;
    }
    
};


