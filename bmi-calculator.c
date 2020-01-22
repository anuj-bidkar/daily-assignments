

#include <stdio.h>

int main()

{

    float h,w,bmi,a,m;

    printf("\n enter the height of person in cm:");

    scanf("%f",&h);

     m=h/100;

    printf("\n the ht in meter is:%f",m);

    printf("\n enter the wt of person:");

    scanf("%f",&w);

    a=m*m;

    printf("\nvalue of a=%f",a);

    bmi=w/a;

    

    if(bmi<18)

    {

        printf("\nbmi of person is:%.3f",bmi);

        printf("\nperson is underweight\n");

        

    }

    else if(bmi>=18&&bmi<=25) 

    {

        printf("\nbmi of person is:%.3f",bmi);

        printf("\nperson is normal");

        

    }

    else

    {

        printf("\nbmi of person is:%.3f",bmi);

        printf("\nperson is overweight");

        

    }

     return 0;

}

