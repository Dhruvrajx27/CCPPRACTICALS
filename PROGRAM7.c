//  TOPIC : Calculate Suman and Raman property and show that whom has Wealthy.
//Header File.
#include<stdio.h>

void main(){

 // Property of Raman.


     int Bp = 12000000;   // Bp is Bunglow price.
     int Pp = 6000000;     // Pp is Plot price.
     int Cp = 3000000;    // Cp is Car price.

        int Tor = Bp + Pp + Cp;  // Tor is Total of Raman.

      printf("Raman Wealth is : %d\n",Tor);

 // Property of Suman.

     int Ap = 11000000;  // Ap is Appartment price.
     int Hp = 8000000;   // Hp is Hotel price.
     int cp = 8000000;   // cp is car price.

        int Tos = Ap + Hp + cp;  // Tos is Total of suman.

     printf("Suman wealth is : %d\n",Tos);

      if(Tos>Tor){
          printf("Suman is More Wealthy than Raman\n");
      }

       else if(Tor>Tos){
          printf("Raman is More Wealthy than Suman\n");
      }

      else{
          printf("Both Are Same Wealthy\n");
      }

        printf("\n\n24CE019_DHRUVRAJ");
        // UPDATED LAST  DATE : 25th July 2024.

}
