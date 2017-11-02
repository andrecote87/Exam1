#include <stdio.h>
#include <stdlib.h>  
#include <matrix.h>


int main()
{

    

    matrix mx1(1,2,3,4);

    matrix mx2(3);
    matrix mx3;
    matrix mx4(2,3,4,5);

    mx1.add(mx2);
    mx1.scalarmultiply(4);
    mx3.multiply(mx1);
    mx4.inverse();
    mx1.element(2,1);

    mx1.print();
    mx2.print();
    mx3.print();
    mx4.print();
   


   


}