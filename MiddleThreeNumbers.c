//WAP in C To Find Min Between Three Numbers.
#include<stdio.h>
int main()
{
 int a, b, c, mid;
 printf("\nEnter Three Numbers:");
 scanf("%d%d%d", &a, &b, &c);
 if ((a>b || a>c) && (a<b || a<c))
  mid = a;
 else if ((b>a || b>c) && (b<a || b<c))
  mid = b;
 else
  mid = c;
 printf("Middle no. = %d", mid);
 return 0;
}
//Created__by_Gopal_Kumar__B.Tech_(CSE).
