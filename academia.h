#ifndef ACADEMIA_h
#define ACADEMIA_H

#include<iostream>
//#include <typeinfo>
using namespace std;

class Person{
public:
      string name;
      int age;
      
      //parameterized Constructor
      Person(string name, int age){
        this->name = name;
        this->age = age;
      }

      string getName()const{
          return name;
      }

      void setName(string name){
        this->name = name;
      }

      int getAge(){
        return age;
      }

      void setAge( int age){
        this->age = age;
      }

};

class Student : public Person{
public:
       string studentID;
       double GPA;

       // Parameterized Constructor 
       Student(string name, int age, string studentID, double GPA): Person(name, age), studentID(studentID), GPA(GPA){}

       string getStudentID()const{
            return studentID;
       }

       void setStudentID(string studentID){
           this->studentID = studentID;
       }

       double getGPA()const{
        return GPA;
       }
       
       void setGPA(double GPA){
        this->GPA = GPA;
       }

       string getGPACategory() const{
        if(GPA >= 3.7){
            return "Excellent";
        }else if( GPA >= 3.0 && GPA <= 3.69){
            return "Good";
        }else if(GPA > 2.0 && GPA < 2.99){
            return "Average";
        }else 
            return "Poor";
       }
       virtual bool determineStudentType() const { 
        return false; 
    }
};

class Teacher : public Person{
public: 
       string teacherID;
       double salary;

       // parameterized Constructor 
       Teacher(string name, int age, string teacherID, double salary) : Person(name, age), teacherID(teacherID), salary(salary){} 

       string getTeacherID() const{
           return teacherID;
       }

       void setTeacherID( string teacherID){
           this->teacherID = teacherID;
       }

       double getSalary()const{
        return salary;
       }

       void setSalary( double salary){
        this->salary = salary;
       }
    
       void increaseSalary( double percentage){
        salary += salary * (percentage / 100);
        cout <<" Salary is: " << salary;
       }


};

class UndergraduateStudent : public Student{
public: 
       int yearOfStudy;

       // Parameterized Constructor 
      UndergraduateStudent(string name, int age, string studentID, double GPA, int yearOfStudy): Student(name, age, studentID, GPA), yearOfStudy(yearOfStudy){}
      
      int getYearOfStudy()const{
          return yearOfStudy;
      }
      
      void setYearOfStudy( int yearOfStudy){
        this->yearOfStudy = yearOfStudy;
      }
 
     string getYearGroup(){
        if( yearOfStudy == 1)
            return "Freshman";
        else if( yearOfStudy == 2)
            return "Sophomore";
        else if(yearOfStudy == 3)
            return "Junior";
        else 
            return "Senior";
     }
     bool determineStudentType() const override { 
        return false; 
    }
     bool isPostgraduate() const {
        return false; // Undergraduate students are NOT postgraduate
    }

};


class PostgraduateStudent : public Student{
public:
        string researchTopic;

        // parameterized Constructor 
        PostgraduateStudent( string name, int age, string studentID, double GPA, string researchTopic ): Student(name, age, studentID, GPA), researchTopic(researchTopic){}

        string getResearchTopic()const{
            return researchTopic;
        }

        void setReseachTopic( string reseachTopic){
            this->researchTopic = reseachTopic;
        }

       bool isEligibleForResearch(){
        if(GPA > 3.5){
            return true;
        }else 
           return false;
       }
       bool determineStudentType() const override { 
        return true;
    }
       bool isPostgraduate() const {
        return true; // Postgraduate students ARE postgraduate
    }

};

class TeachingAssistant : public Student , public Teacher{
public:
       int hoursWorked;
       //Parameterized Constructor 

       TeachingAssistant(string name, int age, string studentID, double GPA, string teacherID, double salary, int hoursWorked)
       : Student(name, age, studentID, GPA), Teacher(name, age, teacherID, salary), hoursWorked(hoursWorked) {}

       int getHoursWorked() const{
        return hoursWorked;
       }
     
       void setHoursWorked(int hoursWorked){
        this->hoursWorked = hoursWorked;
       }

     double getTotalHours(int weeks) const{
        return hoursWorked * weeks;
     }

};

class AssistantProfessor : public Teacher{
public: 
       int publicationCount;

       //Parameterized Constructor 
       AssistantProfessor ( string name, int age, string teacherID, double salary, int publicationCount) : Teacher(name, age, teacherID, salary), publicationCount(publicationCount){}

       int getPublicationCount()const{
        return publicationCount;
       }

       void setPublicationCount(int publicationCount){
        this->publicationCount = publicationCount;
       }

      double calculateBonus(){
        if ( publicationCount > 10){
             return salary * 0.10;
        }else 
          return salary * 0.05;
      }


};


#endif   // ACADEMIA_H