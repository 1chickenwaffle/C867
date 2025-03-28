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
        if (classRosterArray[i] != nullptr) {
            classRosterArray[i]->print();
        }
    }
    cout << endl << endl;
}

void Roster::remove(string studentID){
    bool studentExist = false;
    int studentIDnum = stoi(studentID.substr(1,1)); // get the number after A in student ID
    for(int i = 0; i < numStudent; i++){
        //check if pointing to valid address
        if (classRosterArray[i] != nullptr) {
            string tempStudentID = classRosterArray[i]->getStudentID();
            if(studentID == tempStudentID){
                studentExist = true;
                delete classRosterArray[studentIDnum-1];
                classRosterArray[studentIDnum-1] = nullptr;
                cout <<"Student "<< studentID << " has been removed." << endl << endl;
            }

        }
    }
    if (!studentExist) {
        cout << "error: Student  " << studentID << " is not found." << endl<< endl;
    }
};


void Roster::printAverageDaysInCourse(string studentID){
    for (int i = 0; i < numStudent; i++) {
        if(studentID == classRosterArray[i]->getStudentID()){
            int averageDay = (classRosterArray[i]->getDaysToCompleteEachCourse()[0] +
                             classRosterArray[i]->getDaysToCompleteEachCourse()[1] +
                             classRosterArray[i]->getDaysToCompleteEachCourse()[2])/ 3 ;
            cout <<studentID << " spent average " << averageDay <<" days in the three courses. " << endl;
        }
    }
}
  
void Roster::printInvalidEmails(){
    
    //loop through each student
    for(int i = 0; i < numStudent; i++){
        string email = classRosterArray[i]->getEmailAddress();
        int periodCount = 0;
        int atCount = 0;
        for (int j = 0; j < email.length(); j++) {
            char curChar = email[j]; //looping through each char in email
            
            bool isChar = (curChar >= 'a' && curChar <= 'z') || (curChar >= 'A' && curChar <= 'Z');
            bool isValidSpecialChar = (curChar == '.' || curChar == '@' || curChar == '_');
            bool isNum = (curChar >= '0' && curChar <= '9');
            
            //count period in email
            if (curChar == '.') {
                periodCount++;
            }
            //count @ in email
            if (curChar == '@'){
                atCount++;
            }
            
            // if email contain invalid character, it's not a valid email
            if (!isChar && !isNum && !isValidSpecialChar) {
                cout << email << " -  is not a valid email. " << endl;
                break;
            }
            
            //if email doesn't contain more than 1 period or has exactly 1 @, it's not valid
            if (j == (email.length() - 1) && (periodCount < 1 || atCount != 1)) {
                cout << email << " - is not a valid email. " << endl;
            }
        }
    }
    cout << endl;
}

// public void printByDegreeProgram(DegreeProgram degreeProgram) that prints out student information for a degree program specified by an enumerated type.
void Roster:: printByDegreeProgram(DegreeProgram degreeProgram){
    cout << "The following student are studying: " << degreeProgramString[degreeProgram] << endl;
    for (int i = 0; i <numStudent; i++) {
        if (classRosterArray[i]->getDegreeProgram() == degreeProgram) {
            classRosterArray[i]->print();
        }
        
    }
}

Roster::~Roster(){
    cout << "---Constructor executed---" << endl;
    for(int i = 0; i < numStudent; i++){
        if (classRosterArray[i] != nullptr) {
            delete classRosterArray[i];
            classRosterArray[i] = nullptr;
        }
    }
}
