#include "courses.h"

void Courses::printCourses()
{
  cout << "Courses: \n";
  for (int i = 0; i < courseCount; i++)
  {
    cout << courseList[i].getName() << endl;
  }
  cout << endl;
}

void Course::setName(string newName)
{
  name = newName;
}

void Course::setID(int newID)
{
  id = newID;
}

void Course::setLocation(string newLocation)
{
  location = newLocation;
}

void Course::setclassTime(string newTime)
{
  time = newTime;
}

void Courses::addCourse()
{   
  int id;
  string time;
  string location, name;
  
  if (courseCount == courseCap)
  {
    Course *temp;
    temp = new Course[courseCap + SIZE];
    
    for (int i = 0; i < courseCount; i++)
    {
      temp[i] = courseList[i];
    }
    
    delete [] courseList;
    courseCap += SIZE;
    courseList = temp;
  }

  cout << "Enter the course name: ";
  cin >> name;
  
  cout << "Enter the course ID: ";
  cin >> id;
  
  cout << "Enter the course location: ";
  cin >> location;
  
  cout << "Enter the class time: ";
  cin >> time;
  cout << endl;
  
  courseList[courseCount].setID(id);
  courseList[courseCount].setName(name); 
  courseList[courseCount].setLocation(location);
  courseList[courseCount].setclassTime(time);
  
  courseCount++;
}

int Courses::getcourseNum()
{
  return courseCount; 
}

string Course::getName()
{
  return name;
}

int Course::getID()
{
  return id;
}

string Course::getLocation()
{
  return location;
}

string Course::getclassTime()
{
  return time;
}