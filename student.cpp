#include "students.h"

void Students::printStudents()
{
  cout << "Students: \n";
  for (int i = 0; i < studentCount; i++)
  {
    cout << studentList[i].getName() << endl;
  }
  cout << endl;
}

void Student::setName(string newName)
{
  name = newName;
}

void Student::setID(int newID)
{
  id = newID;
}

void Student::setClass(string newClass)
{
  stuClass = newClass;
}

void Students::addStudent()
{   
  int id;
  string stuClass, name;
  
  if (studentCount == studentCap)
  {
    Student *temp;
    temp = new Student[studentCap + SIZE];
    
    for (int i = 0; i < studentCount; i++)
    {
      temp[i] = studentList[i];
    }
    
    delete [] studentList;
    studentCap += SIZE;
    studentList = temp;
  }

  cout << "Enter the students name: ";
  cin >> name;
  
  cout << "Enter the students classification: ";
  cin >> stuClass;
  
  cout << "Enter the students ID: ";
  cin >> id;
  cout << endl;
  
  studentList[studentCount].setID(id);
  studentList[studentCount].setName(name); 
  studentList[studentCount].setClass(stuClass);
  
  studentCount++;
}

int Students::getstuNum()
{
  return studentCount;
}

string Student::getName()
{
  return name;
}

int Student::getID()
{
  return id;
}

string Student::getClass()
{
  return stuClass;
}