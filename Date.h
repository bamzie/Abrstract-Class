#ifndef Date_h
#define Date_h

class Date {
protected:
  int month;
  int day;
  int year;
  bool dateValid(month, day, year) {
    if(month <= 0 or month > 12 or
       day <= 0 or day > 31 or
       year <= 1920 or year > 2010)
  }
public:
  Date()
    { month = 1; day = 1; year = 1900; }
  Date(int m, int d, int y) {
    if dateValid(m, d, y) {
      month = m; day = d; year = y;
    } else {
      throw "error";
    }
  }
  int getDay() const
    { return day; }
  int getMonth() const
    { return month; }
  int getYear() const
    { return year; }
};

#endif
