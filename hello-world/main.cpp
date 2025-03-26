#include <iostream>
#include <string>
#include "student.h"
#include "roster.h"
using namespace std;

int main(){
    const int numOfStudent = 5; //max5 students
    
    cout << "Course: Scripting and Programming - Applications — C867" << endl
         << "programming language: C++" << endl
         << "WGU student ID: 012405059" << endl
         << "Name: Shuyi Huang"
         << endl << endl;
    
    Roster classRoster;

    //student data table, modified the last one to be me
    const string studentData[] =
        {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Shuyi,Huang,shuang10@wgu.edu,33,11,3,7,SOFTWARE"};
    
    //parse each set of data in StudentData
    //add each Student object to classRosterArray
    for(int i = 0; i < numOfStudent; i++) {
        classRoster.parse(studentData[i]);
    }
    
    classRoster.printALL();
    
    classRoster.printInvalidEmails();
    
    for (int i = 0; i < numOfStudent; i++) {
        classRoster.printAverageDaysInCourse(classRoster.classRosterArray[i]->getStudentID());
    }
    
    classRoster.printByDegreeProgram(SOFTWARE);
    classRoster.remove("A3");
    classRoster.printALL();
    classRoster.remove("A3");
    //the above line should print a message that student with this ID was not found.
    
    return 0;

}

