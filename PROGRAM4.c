/* Documentation :Home Minister of India want to calculate the count illiterate men and women they gives India's population in 2024 , saprated
  man and women population and their literacy. the output of illiteracy of India's men and women.
*/
// header file.
#include<stdio.h>
   void main(){


   // calculation of literate and illiterate population of india.

      int Poi = 1441981744;                          // Poi is Population of india.
       int pow_ = (1441981744*48.4)/100;  // pow ispopulation of women.
      int pom = (1441981744*51.6)/100;     // pom is population of men.
        int Tl = (1441981744*85.95)/100;    // Tl is total literacy.
      int TIL = Poi - Tl;                                // Total Illiterate men and women.

  // Output of Total illiteracy.
           printf("\n>>TOTAL ILLITERACY IS : %d",TIL);

    int lom = (pom*80.95)/100;             // lom is literacy of men.
    int low = (pow_*62.84)/100;           //  low is literacy of women.

    int ilm = pom-lom;                           // ilm is illiteracy of men.

  // Output of Total Men illiteracy.
           printf("\n>>TOTAL ILLITRACY OF MEN : %d",ilm);
    int wil= pow_ - low;                        //wil is women illiteracy.

  // Output of Total women illiteracy.
           printf("\n>>TOTAL ILLITRACY OF WOMEN : %d",wil);

    printf("\n_______________________________________________________________");
                 printf("\n\n24CE019_DHRUVRAJ");
}

