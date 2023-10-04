#include <stdio.h>

int main() {
printf("TIME: %s \n", TIME);
printf("DATE: %s \n", DATE);
printf("FILE: %s \n", FILE);
printf("LINE: %d \n", LINE);
printf("The compiler %s to ISO Standard C \n", \
(STDC == 1) ? "conforms" : "doesn't conform");
return 0;
}

/*
#include <stdio.h>
#include <string.h>
int main() {
char curr_time[10];
char curr_date[12];
int std_c;
strcpy(curr_time, TIME);
strcpy(curr_date, DATE);
printf("%s %s\n", curr_time, curr_date);
printf("This is line %d\n", LINE);
std_c = STDC;
printf("STDC is %d", std_c);
return 0;
}
*/