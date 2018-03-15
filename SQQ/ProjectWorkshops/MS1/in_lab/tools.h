
#ifndef _SICT_TOOLS_H
#define _SICT_TOOLS_H   // prevents multiple includes.


void flushKeys(void);
void pause(void);
int yes(void);
void scanInt(int* ip);
int getInt(int min, int max, const char* prompt, const char errMes[]);
void scanDouble(double* ip);
double getDouble(double min, double max, const char* prompt, const char errMes[], int precision);



#endif // !_SICT_TOOLS_H
