#include<stdio.h>
enum month
{
january=1,
february,
march,
april,
may,
june,
july,
august,
september,
october,
november,
december

};
void main()
{
    enum month m;
    m=may;
    char *season;
    
    switch(m)
    {
        case december: case january:case february:
        season="winter";break;
        case march:case april:case may:
        season="summer";break;
        case june:case july:case august:
        season="monsoon";break;
        case september:case october:case november:
        season="spring";break;
    }
    printf("%d",may);
}