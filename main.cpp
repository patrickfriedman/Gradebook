//Patrick Friedman
//patrickfriedman@my.unt.edu
//CSCE 1040 
//October 1, 2018

//This program is a grade book which can average grades, enroll students, and create new courses.
#include "courses.h"
#include "students.h"
#include "enrollments.h"

int main()
{
  int option, cid, eid, stuid, id, grade;
  string name, stuClass, location;
  double time;
  char letter;
  
  void header();                                            
  Students addStu;                    
  Courses addClass;
  Enrollments addEnroll;
  
  system("clear");
  header();
  
  while (option != 0)
  {
    cout << "Pick an option.\n";
    cout << "0. Quit.\n"
         << "1. Add a new course\n"
         << "2. Add a new student\n" 
         << "3. Add a student to a course (add enrollment)\n" 
         << "4. Add grades for a student in a course\n" 
         << "5. Print a list of all grades for a student in a course\n"
         << "6. Print a list of all students in a course\n"
         << "7. Compute the average for a student in a course\n"
         << "8. Print a list of all courses\n"
         << "9. Print a list of all students\n"
         << "10. Compute the average for a course\n"
         << "11. Store Grade book (to a disk file)\n"
         << "12. Load Grade book (from a disk file)\n";
  
    cout << "\n" << "Enter your selection: ";
    cin >> option;

    switch (option)
    {
      case 0:
        return 0;
        break;
        
      case 1:
        cout << "Add a new course.\n\n";
        addClass.addCourse();
        break;

      case 2:
        cout << "Add a new student.\n\n";
        addStu.addStudent();
        break;

      case 3:
        cout << "Add student to a course.\n\n";
        addEnroll.addEnroll();
        break;

      case 4:
        cout << "Add grades for a student in a course.\n\n";
        addEnroll.addGrade(grade);
        break;

      case 5:
        cout << "Print a list of all grades for a student in a course.\n\n";
        addEnroll.printGrades();
        break;

      case 6:
        cout << "Print a list of all students in a course.\n\n";
        addEnroll.printStuCourse();
        break;

      case 7:
        cout << "Compute the average for a student in a course.\n\n";
        addEnroll.getletterGrade(letter);
        break;

      case 8:
        cout << "Print a list of all courses.\n\n";
        addClass.printCourses();
        break;

      case 9:
        cout << "Print a list of all students.\n\n";
        addStu.printStudents();
        break;

      case 10:
        cout << "Compute the average for a course.\n\n";
        break;

      case 11:
        cout << "Store Grade book (to a disk file).\n\n";
        break;

      case 12:
        cout << "Load Grade book (from a disk file).\n\n";
        break;

      default:
        cout << "Error, try again.\n\n";
        continue;
    }
  }
}

void header()
{
	cout << "+--------------------------------------------------------+" << endl;
	cout << "|            Computer Science and Engineering            |" << endl;
	cout << "|             CSCE 1040 - Computer Science II            |" << endl;
	cout << "|   Patrick Friedman     psf0023    psf0023@my.unt.edu   |" << endl;
	cout << "+--------------------------------------------------------+" << endl;
  cout << endl;
	return;
}