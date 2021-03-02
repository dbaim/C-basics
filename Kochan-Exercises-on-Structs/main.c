#include <stdio.h>
    typedef struct {
        int year;
        int month;
        int day;
    } date;


    typedef struct {
      int hours;
      int minutes;
      int seconds;
    } t1;
   

    
    typedef struct {
      date sdate;
      t1 time;
    } dateAndTime;

   


   void day_of_elapsed_time(int n) {
     int temp, modulo;
     temp = n-621049;
     modulo = temp%7;
     switch (modulo) {
        case 1:
          printf("Monday \n");
          break;
        case 2:
          printf("Tuesday \n");
          break;
        case 3:
          printf("Wednesday \n");
          break;
        case 4:
          printf("Thursday \n");
          break;
        case 5:
          printf("Friday \n");
          break;
        case 6:
          printf("Saturday \n");
          break;
        case 7:
          printf("Sunday \n");
          break;

     }
   }
   

t1 timenow = {23, 59, 59};
    date today = {2006, 04, 20};



int main(void) {
  setvbuf(stdout, NULL, _IONBF, 0);
/*
  //Exercise 2
  int n1, n2, result;
  date date1;
  printf("Type in day: ");
  scanf("%i", &date1.day);
  printf("Type in month: ");
  scanf("%i",  &date1.month);
  printf("Type in year: ");
  scanf("%i", &date1.year);
    if (date1.month <= 2) {
      date1.year = date1.year - 1;
    }
    if (date1.month <= 2) {
      date1.month = date1.month + 13;
    } else {
      date1.month = date1.month + 1;
    } 
    n1 = (1461 * date1.year) / 4 + (153 * date1.month)/ 5 + 3;

    //Exercise 4
    day_of_elapsed_time(n1);


    date date2;
 printf("Type in day: ");
  scanf("%i", &date2.day);
  printf("Type in month: ");
  scanf("%i",  &date2.month);
  printf("Type in year: ");
  scanf("%i", &date2.year);
    if (date2.month <= 2) {
      date2.year = date2.year - 1;
    }
    if (date2.month <= 2) {
      date2.month = date2.month + 13;
    } else {
      date2.month = date2.month + 1;
    } 
    n2 = (1461 * date2.year) / 4 + (153 * date2.month)/ 5 + 21;
    day_of_elapsed_time(n2);
    result = n2 - n1;
    printf("%i", result); 
    
    //Exercise 3
    t1 elapsed_time(t1, t1);
    t1 time1 = {3, 45, 15};
    t1 time2 = {9, 44, 03};
    elapsed_time(time1, time2); */

    //Exercise 5
    date dateUpdate(date today);
    dateAndTime clockKeeper(dateAndTime dateTime); 
    t1 timeUpdate (t1 timenow);
    dateAndTime dateTime;
    dateTime.sdate = today;
    dateTime.time = timenow;
    clockKeeper(dateTime);
    //Question on Exercise 6: What's the point of Compound Literals? How do they help with code and in Exercise 6 (p. 233) in particular?
  return 0;
}
/*
t1 elapsed_time (t1 time1, t1 time2) {
        t1 timediff;
        timediff.hours = time2.hours - time1.hours;
        timediff.minutes = time2.minutes - time1.minutes;
        timediff.seconds = time2.seconds - time1.seconds;
        if (timediff.seconds < 0) {
          timediff.minutes -= 1;
          time2.seconds += 60;
          timediff.seconds = time2.seconds - time1.seconds;
        }
        if (timediff.minutes < 0) {
          timediff.hours -= 1;
          time2.minutes += 60;
          timediff.minutes = time2.minutes - time1.minutes;
        }
        printf("%i hours, %i minutes, %i seconds", timediff.hours, timediff.minutes, timediff.seconds);
        return timediff;
   } 

   */
   
date dateUpdate(date today) {
     today.day++;
     printf("date: %i %i %i \n", today.day, today.month, today.year);
     return today;
  }
  t1 timeUpdate (t1 timenow) { 
++timenow.seconds; 
if ( timenow.seconds == 60 ) { 
  timenow.seconds = 0; 
  ++timenow.minutes; 
if ( timenow.minutes == 60 ) { 
   
    timenow.minutes = 0; 
    ++timenow.hours; 
    } 
}  
if ( timenow.hours == 24 ) { 
    dateUpdate(today); 
} return timenow;
  }
  dateAndTime clockKeeper(dateAndTime dateTime) {
      t1 nexttime;
      nexttime = timeUpdate(timenow);
      printf("%i %i %i", nexttime.hours, nexttime.minutes, nexttime.seconds);
      return dateTime;
  }