#include "header.h"
#include "student.h"

class Students
{
  private:
    Student *studentList;
    int studentCount;
    int studentCap;

  public:
    int getstuNum();
    void addStudent();
    void printStudents();
    
    Students() 
    {
      studentCount = 0;
      studentCap = SIZE;
      studentList = new Student[SIZE];
    }
};