#include "header.h"
#include "course.h"

class Courses
{
  private:
    Course *courseList;
    int courseCount;
    int courseCap;

  public:
    int getcourseNum();
    void addCourse();
    void printCourses();
    
    Courses() 
    {
      courseCount = 0;
      courseCap = SIZE;
      courseList = new Course[SIZE];
    }
};