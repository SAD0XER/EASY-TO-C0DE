/*
AUTHER NAME: <~|《《《Š.Â.Ď》》》|~>

PURPOSE: PRACTICE

DATE: 12\08\2021

PROGRAM NAME: WRITE A PROGRAM TO SHOWING A RESULT USING STRUTURE.

*/

// Let me know in comment box; whats wrong in this code. please!

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

    scanf("ENTER YOUR SEAT NUMBER: %d\nENTER YOUR NAME: %s\nENTER THE MARKS OF SUBJECT 1: %d\nENTER THE MARKS OF SUBJECT 2: %d\nENTER THE MARKS OF SUBJECT 3: %d\nENTER THE MARKS OF SUBJECT 4: d%", &r.seat_no, r.name, &r.sub1, &r.sub2, &r.sub3, &r.sub4); // Taking a input from user.

    r.total = r.sub1 + r.sub2 + r.sub3 + r.sub3 + r.sub4; // Calculating the addition of the total subject.

    r.percentage = (r.total + 100) / 4; // Calculating percentage of marks.

    printf("SEAT NO: %d\nNAME: %s\nMARKS OF THE SUBJECT:\nSUBJECT 1: %d\nSUBJECT 2: %d\nSUBJECT 3: %d\nSUBJECT 4: %d\nPERCENTAGE %f", r.seat_no, r.name, r.sub1, r.sub2, r.sub3, r.sub4, r.percentage);

    return 0;
}
/*   ⚠️NOTE:⚠️
Give input like this sequence (In sololearn's compiler):

1. ENTER YOUR SEAT NUMBER: %d

2. ENTER YOUR NAME: %s

3. ENTER THE MARKS OF SUBJECT 1: %d

4. ENTER THE MARKS OF SUBJECT 2: %d

5. ENTER THE MARKS OF SUBJECT 3: %d

6. ENTER THE MARKS OF SUBJECT 4: d%

*/