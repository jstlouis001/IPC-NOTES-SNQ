#ifndef _SICT_TOOLS_H
#define _SICT_TOOLS_H
                          // define SHOW_LIMITS to be 1
                           // define HIDE_LIMITS to be 0

void flushKeys(void);
int yes(void);
int no(void);
void scanInt(int* ip);
void scanDouble(double* ip);
int getInt(int min, int max, const char* prompt, const char errMes[], int showLimits);
double getDouble(double min, double max, const char* prompt, const char errMes[], int showLimits, int precision);


#endif // !_SICT_TOOLS_H
