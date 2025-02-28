#include<iostream>
#include"academia.h"

using namespace std;

int main(){

    // undergradutae Student object
    UndergraduateStudent ugs("Ali", 20, "UG123", 3.6, 2);
    cout << "Student Name: " << ugs.getName() << endl;
    cout << "Student Type: " << (ugs.determineStudentType() ? "Postgraduate" : "Undergraduate") << endl;
    cout << "Year: " << ugs.getYearOfStudy() << endl;
    cout << "GPA : " << ugs.getGPA() << endl;
    cout << endl;
     // creating post graduate student objevt
    PostgraduateStudent pgs("Sara", 25, "PG456", 3.8, "AI Research");
    cout << "Student Name: " << pgs.getName() << endl;
    cout << "Student Type: " << (pgs.determineStudentType() ? "Postgraduate" : "Undergraduate") << endl;
    cout << "Research Topic: " << pgs.getResearchTopic() << endl;
    cout << "Eligible for Research: " << (pgs.isEligibleForResearch() ? "Yes" : "No") << endl;
    cout << endl;
   
    // creating teacher object salary
    Teacher t("Dr. Ahmed", 40, "T789", 80000);
    cout << "Teacher Name: " << t.getName() << endl;
    cout << "Teacher ID: " << t.getTeacherID() << endl;
    cout << "Salary before increment: " << t.getSalary() << endl;
    t.increaseSalary(10);  // 10% salary increment
    cout << endl << endl;
   
    //  Creating an Assistant Professor Object
    AssistantProfessor ap("Dr. Kamran", 45, "AP999", 100000, 12);
    cout << "Assistant Professor Name: " << ap.getName() << endl;
    cout << "Publication Count: " << ap.getPublicationCount() << endl;
    cout << "Bonus: " << ap.calculateBonus() << endl;
    cout << endl;

    // Creating a Teaching Assistant Object
    TeachingAssistant ta("Bilal", 22, "TA111", 3.2, "T222", 50000, 15);
    cout << "Hours Worked Per Week: " << ta.getHoursWorked() << endl;
    cout << "Total Hours in 4 Weeks: " << ta.getTotalHours(4) << endl;


    return 0;
}