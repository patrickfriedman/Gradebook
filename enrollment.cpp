#include "enrollments.h"

void Enrollments::printGrades()
{
  int courseid, studentid;
  
  cout << "Enter the student ID: ";
  cin >> studentid;
  
  for (int i = 0; i < enrollmentCount; i++)
  {
    if (enrollmentList[i].getSID() == studentid)
    {
      cout << "Enter course ID: ";
      cin >> courseid;
      
      if (enrollmentList[i].getCID() == courseid)
      {
        cout << "Student grades are: \n";
        
          for (int j = 0; j < enrollmentList[i].getgradesNum(); j++)
          {
            cout << enrollmentList[i].getGrade(j) << endl;
          }
        cout << endl;
      }
      else
      {
        cout << "Course ID not found.\n\n";
        break;
      }
    }
    else
    {
        cout << "Student ID not found.\n\n";
        break;
    }
  }
}

void Enrollments::printStuCourse()
{
  int courseid;
  
  cout << "Enter the course ID: ";
  cin >> courseid;
  
  cout << "Students in the course: \n";
  
  for (int i = 0; i < enrollmentCount; i++)
  {
    if (enrollmentList[i].getCID() == courseid)
    {
      cout << enrollmentList[i].getSID() << endl;
    }
    else 
    {
      cout << "Course ID not found.\n\n";
      break;
    }
  }
  cout << endl;
}

void Enrollment::setEID(int newEID)
{
  eid = newEID;
}

void Enrollment::setSID(int newSID)
{
  stuid = newSID;
}

void Enrollment::setCID(int newCID)
{
  cid = newCID;
}

void Enrollment::setgradeNum(int gradeNum)
{
  numGrades = gradeNum;
}

void Enrollment::setGrade(int grade)
{
  classGrades[numGrades] = grade;
}

void Enrollment::setletterGrade(char letter)
{
  float average = getAverage();
  
  if (average >= 90)
  {
    letter = 'A';
  }
  else if (average >= 80)
  {
    letter = 'B';
  }
  else if (average >= 70)
  {
    letter = 'C';
  }
  else if (average >= 60)
  {
    letter = 'D';
  }
  else if (average < 60)
  {
    letter = 'F';
  }
}

void Enrollments::addGrade(int grade)
{
  int courseid, studentid;
  
  cout << "Enter the student ID: ";
  cin >> studentid;
  
  for (int i = 0; i < enrollmentCount; i++)
  {
    if (enrollmentList[i].getSID() == studentid)
    {
      cout << "Enter course ID: ";
      cin >> courseid;
      
      if (enrollmentList[i].getCID() == courseid)
      {
        cout << "\n" << "Enter -1 to stop.\n";
        
        do
        {
          if (enrollmentList[i].getgradesNum() >= 10)
          {
            cout << "Student already has 10 grades.\n\n";
            break;
          }
          
          else
          {
            cout << "Add grade " << enrollmentList[i].getgradesNum() + 1 << ": ";
            cin >> grade;
            
            if (grade >= 0)
            {
              enrollmentList[i].setGrade(grade);
              enrollmentList[i].setgradeNum(enrollmentList[i].getgradesNum() + 1);
            }
          }
          
        } while (grade >= 0);
        cout << endl;
      }
      
      else if(i == enrollmentCount - 1)
      {
        cout << "Course ID not found.\n\n";
        break;
      }
    }
    else if (i == enrollmentCount - 1)
    {
      cout << "Student ID not found.\n\n";
      break;
    }
  }
}

void Enrollments::addEnroll()
{
  int cid, eid, stuid;
  
  if (enrollmentCount == enrollmentCap)
  {
    Enrollment *temp;
    temp = new Enrollment[enrollmentCap + 48];
    
    for (int i = 0; i < enrollmentCount; i++)
    {
      temp[i] = enrollmentList[i];
    }
    
    delete [] enrollmentList;
    enrollmentCap += 48;
    enrollmentList = temp;
  }
  
  cout << "Enter the course ID: ";
  cin >> cid;
  
  cout << "Enter the enrollment ID: ";
  cin >> eid;
  
  cout << "Enter the student ID: ";
  cin >> stuid;
  cout << endl;

  enrollmentList[enrollmentCount].setEID(eid);
  enrollmentList[enrollmentCount].setCID(cid); 
  enrollmentList[enrollmentCount].setSID(stuid);
  
  enrollmentCount++;
}

int Enrollment::getEID()
{
  return eid; 
}

int Enrollment::getSID()
{
  return stuid;
}

int Enrollment::getCID()
{
  return cid;
}

char Enrollments::getletterGrade(char letter)
{
  return letter;
}

float Enrollment::getAverage()
{
  float sum = 0;
  
  for (int i = 0; i < numGrades; i++)
  {
    sum += classGrades[i];
  }
  return sum / numGrades;
}

int Enrollment::getGrade(int i)
{
  return classGrades[i];
}

int Enrollment::getgradesNum()
{
  return numGrades;
}