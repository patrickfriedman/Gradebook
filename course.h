#include "header.h"

class Course
{
  private:
    string name, location, time;
    int id;
    
  public:
    void setName(string newName);
    void setID(int newID);
    void setLocation(string newLocation);
    void setclassTime(string time);
   
    string getName();
    int getID();
    string getLocation();
    string getclassTime();
};