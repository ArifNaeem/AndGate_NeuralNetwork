  #include<stdio.h>
	#include<conio.h>

 /* AND gates using error correction based leatning 
using artificial neural networks programmed by HIBA RASHID*/

    int main(){
            double input_node1, input_node2, Thre = 2, l_rate = 0.4, w1 = 2, w2 = 3, correct_ans, output_node;
     
               /* Thre=threshold and l_rate=learning rate must be less than 1 */ 
	  int  a=0,error;
	  

                while (a!=27)
             {

               printf("Enter 1st input of And Gate = ");
               scanf("%lf", &input_node1);
                printf("Enter 2st input of And Gate = ");
                scanf("%lf", &input_node2);
               printf("Enter correct answer of above inputs = ");
               scanf("%lf", &correct_ans);

                output_node = (input_node1 * w1) + (input_node2 * w2);

                if (output_node > Thre)
                {
		   printf("output = 1\n");
                   error = correct_ans - 1;
                   printf("Error = %d",error);
                }
		else
                {
		 printf("output = 0\n");
                   error = correct_ans - 0;
                 printf("Error = %d",error);
                }
                w1 = w1 + (input_node1 * error * l_rate);
                w2 = w2 +( input_node2 * error * l_rate);
               printf("\n\n");
            
             a=getch();
	    

            }
		   return 0;
           }