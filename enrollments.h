#include "header.h"
#include "enrollment.h"

class Enrollments
{
  private:
    Enrollment *enrollmentList;
    int enrollmentCount;
    int enrollmentCap;

  public:
    int getenrollNum();
    void addEnroll();
    void addGrade(int grade);
    char getletterGrade(char letter);
    void printGrades();
    void printStuCourse();
    
    Enrollments()
    {
      enrollmentCount = 0;
      enrollmentCap = SIZE;
      enrollmentList = new Enrollment[SIZE];
    }
};