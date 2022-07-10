
//GET TWO VECTOR FROM THE USER AND PERFORM SUM OF TWO VECTOR AS RESULTANT VECTOR ,AND FIND MAGNITUDE AND ANGLE OF RESULTANT VECTOR

#include <stdio.h>//This header is used for printf()and scanf() are used for my convinience in the loop.
#include<math.h>//This header is used for doing maths operation like squarting etc.

int main()
{
    int n,i,e=0;//Declaring n,i,e are used for my convinience in the loop.
    float magnitude,mag_a,mag_b,c1,angle_mag;//Declaring magnitude,mag_a,mag_b,c1,angle_mag are used for my convinience in this code.
   scanf("%d",&n);//collect the value 
   int a[n],b[n],c[n],d[n];
   //To get the input vector from the user
   for(i=0;i<2;i++)//i based for loop gets increases upon execution of the block of statement.
   {
       scanf("%d",&a[i]);
       scanf("%d",&b[i]);
   }
   printf("a=%di+%dj\n",a[0],a[1]);//print a vector.
   printf("b=%di+%dj\n",b[0],b[1]);//print b vector.
   for(i=0;i<2;i++)
   {
       c[i]=a[i]+b[i];
   }
   printf("addition of vector c=%di+%dj\n",c[0],c[1]);
   //To find the magnitude of c vector
   magnitude=sqrt(pow(c[0],2)+pow(c[1],2));
   printf("magnitude of c vector is %f\n",magnitude);
   //To find the angle between two vector
   for(i=0;i<2;i++)
   {
       d[i]=a[i]*b[i];//multiply the a and b vector
       e=e+d[i];
   }
   printf("Dot product a.b=%d\n",e);
   mag_a=sqrt(pow(a[0],2)+pow(a[1],2));
   printf("magnitude of a = %f\n",mag_a);
   mag_b=sqrt(pow(b[0],2)+pow(b[1],2));
   printf("magnitude of b = %f\n",mag_b);
   c1=mag_a*mag_b;//product of magnitude of a and b vector.
   printf("product of mag_a*mag_b = %f\n",c1);
   angle_mag=e/c1;//Angle between two vector
   printf("Angle between two vector cos x = %f",angle_mag);
}
//RESULT:
//I have get two vector from the user,then added two vector, found the magnitude of added vector and then found the angle between the two vector.
//APPLICATION:
//It is used in the place of crosswind,boat crossing a river,rollercoaster,military usage etc.


