#include <stdio.h>

// creating a structure.
struct result
{
    float percentage;
    int seat_no, sub1, sub2, sub3, sub4, total;
    char name[20];
}; // don't forget the semicolon.
   // this is the end of the structure.

int main()
{
    struct result r; // this is the structure  calling in main() function.
    scanf("ENTER YOUR SEAT NUMBER: %d\nENTER YOUR NAME: %s\nENTER THE MARKS OF SUBJECT 1: %d\nENTER THE MARKS OF SUBJECT 2: %d\nENTER THE MARKS OF SUBJECT 3: %d\nENTER THE MARKS OF SUBJECT 4: d%", &r.seat_no, r.name, &r.sub1, &r.sub2, &r.sub3, &r.sub4);
    r.total = r.sub1 + r.sub2 + r.sub3 + r.sub3 + r.sub4;
    r.percentage = (r.total + 100) / 4;
    printf("SEAT NO: %d\nNAME: %s\nMARKS OF THE SUBJECT:\nSUBJECT 1: %d\nSUBJECT 2: %d\nSUBJECT 3: %d\nSUBJECT 4: %d\nPERCENTAGE %lf", r.seat_no, r.name, r.sub1, r.sub2, r.sub3, r.sub4, (double)r.percentage);

    return 0;
}