#include<stdio.h>
enum dept
{
    ece,
    mech = 20,
    eee
} d;
void change_dept(enum dept *dep)
{
    dep = eee;
    //dep = temp; // cannot change enum variables or values
    printf("%d\n",dep);
}
int main()
{
    d = ece;
    printf("%d\n",d);
    enum dept d = mech;
    printf("%d\n",d);
    enum dept *ee;
    change_dept(&ee);
}
