#include <stdio.h>
int main(){
 //arthimetic operator
 int a = 5, b = 5;
 int c = a+b;
 printf("a: %d, b: %d a+b: %d\n",a,b,c);

 //unary operator
 //printf("%d",++(++a)); //error: lvalue required as increment operand -> there is no left value./
 //c = ++a + a++ + a++;
 c = ++a + ++a + ++a;
 printf("a value: %d\n",a);
 printf("prefix + postfix: %d\n",c);
 c = b++ + ++b;
 printf("postfix + prefix: %d\n",c);

 //logical operator
 int d = 5, e = 5;
 //logical and (&&)
 printf("d == e && d < a: %d\n",(d==e)&&(d<a));
 //logical or (||)
 printf("d == e && d < e: %d\n",(d==e)||(d<e));
 //logical not (!)
 printf("d==5: %d\n",!(d==5));
 //size of operator
 printf("size of a: %d\n",sizeof(a));
 // Ternary operator
 // number is positive or negative
 int i = 9, j = 10;
 int k = (i<j)?i:j;
 printf("value which is smaller: %d\n",k);
}
