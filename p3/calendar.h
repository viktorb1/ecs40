#ifndef CALENDAR_H
#define	CALENDAR_H
// Author: Sean Davis

#include "day.h"

class Calendar
{
  Day *days;
  int size;
  int count;
  
public:
  void create();
  void dateSearch();
  void destroy();
  void getDate(int *day, int *month, int *year);
  void readFile();
  void resize();
  void subjectSearch();
}; // class Calendar

#endif	// CALENDAR_H 

