#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "academia.h"

// Test Person class
TEST_CASE("Person class functionality") {
    Person p("John Doe", 30);
    REQUIRE(p.getName() == "John Doe");
    REQUIRE(p.getAge() == 30);
    p.setName("Jane Doe");
    p.setAge(25);
    REQUIRE(p.getName() == "Jane Doe");
    REQUIRE(p.getAge() == 25);
}

// Test Student class
TEST_CASE("Student class functionality") {
    Student s("Alice", 20, "S123", 3.8);
    REQUIRE(s.getStudentID() == "S123");
    REQUIRE(s.getGPA() == 3.8);
    REQUIRE(s.getGPACategory() == "Excellent");
    s.setGPA(2.5);
    REQUIRE(s.getGPACategory() == "Average");
    REQUIRE(s.determineStudentType() == false);
}

// Test Teacher class
TEST_CASE("Teacher class functionality") {
    Teacher t("Mr. Smith", 45, "T456", 50000);
    REQUIRE(t.getTeacherID() == "T456");
    REQUIRE(t.getSalary() == 50000);
    t.increaseSalary(10);
    REQUIRE(t.getSalary() == 55000);
}

// Test UndergraduateStudent class
TEST_CASE("UndergraduateStudent class functionality") {
    UndergraduateStudent u("Bob", 19, "U789", 2.5, 2);
    REQUIRE(u.getYearOfStudy() == 2);
    REQUIRE(u.getYearGroup() == "Sophomore");
}

// Test PostgraduateStudent class
TEST_CASE("PostgraduateStudent research eligibility") {
    PostgraduateStudent pg("Eve", 24, "P999", 3.6, "AI Research");
    REQUIRE(pg.getResearchTopic() == "AI Research");
    REQUIRE(pg.isEligibleForResearch() == true);
}

// Test TeachingAssistant class
TEST_CASE("TeachingAssistant total hours calculation") {
    TeachingAssistant ta("Sam", 26, "S555", 3.2, "T111", 40000, 10);
    REQUIRE(ta.getHoursWorked() == 10);
    REQUIRE(ta.getTotalHours(4) == 40);
}

// Test AssistantProfessor class
TEST_CASE("AssistantProfessor bonus calculation") {
    AssistantProfessor ap("Dr. Jones", 50, "T222", 80000, 12);
    REQUIRE(ap.getPublicationCount() == 12);
    REQUIRE(ap.calculateBonus() == 8000);
    ap.setPublicationCount(8);
    REQUIRE(ap.calculateBonus() == 4000);
}

