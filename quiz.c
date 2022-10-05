#include<stdio.h>
#include<conio.h>
#include<string.h>
int main() { 
  char quest [5][100];
  char optionl [3][20],option2 [3][20], 
  option3 [3][20],option4 [3][20], 
  option5 [3][20]; 
  int response[5], correct_ans[5], option,i, marks;  
 clrscr();  
  strcpy(quest[0], "Who invented C language?");  
  strcpy (optionl[0],"1.  Dennis Ritchie");  
  strcpy(optionl[1] ,"2.  James Gosling");  
  strcpy(optionl[2] ,"3.  Ada Lovelace ");  
  correct_ans[0] = 0;  
  strcpy(quest[1], "C is which type of language?");  
  strcpy(option2[0],"1. FunctionOriented");  
  strcpy(option2[1], "2. ObjectOriented");  
  strcpy(option2[2], "3. Both 2 & 3");  
  correct_ans[1]=0;  
  strcpy(quest[2], "Does C language has access modifiers?");  
  strcpy(option3 [0],"1. Yes");  
  strcpy(option3[1] ,"2. No");  
  strcpy(option3 [2],"3. Maybe");  
  correct_ans[2]=1;  
  strcpy(quest[3], "Does C Language Supports exception handling?");  
  strcpy(option4 [0],"l.  Yes");  
  strcpy(option4[1] ,"2.  No");  
  strcpy(option4[2] ,"3.  Maybe");  
  correct_ans[3] = 1;  
  strcpy(quest[4], "What does C language uses?");  
  strcpy(option5[0],"l.  Compiler");  
  strcpy(option5[1],"2.  Interpreter");  
  strcpy(option5[2],"3.  Both 1 and 2");  
  correct_ans[4] = 0; 
  do {  
    printf("\n\n\n\n QUIZ PROGRAM"); 
    printf("\n*******************");  
    printf("\n 1. Display Questions");  
    printf("\n 2. Display Correct Answers");  
    printf("\n 3. Display Result");  
    printf("\n 4. EXIT");  
    printf ("\n *************************");  
    printf("\n\n\n Enter your option: ");  
    scanf("%d", &option);  
    switch(option)  {  
       case 1:    
           printf ("\n %s \n", quest [0]);   
           for(i=0;i<3;i++)   {   
              printf("\n %s", optionl[i]);   
           }   
           printf ("\n\n Enter your answer number: ");   
           scanf("%d", &response[0]);   
           printf ("\n %s \n", quest [1]);   
           for (i=0;i<3;i++)   {   
             printf("\n %s", option2[i]);   
           }   
           printf("\n\n Enter your answer number: ");   
           scanf("%d", &response[1]);   
           printf("\n %s \n", quest[2]);  
           for(i=0;i<3;i++)  {   
             printf("\n %s", option3[i]);  
           }   
           printf("\n\n Enter your answer number: ");   
           scanf ("%d", &response [2]);   
           printf("\n %s \n", quest[3]);  
           for (i=0;i<3;i++)  {   
              printf("\n %s", option4[i]);  
           }   
           printf("\n\n Enter your answer number: ");   
           scanf ("%d", &response [3]);   
           printf("\n %s \n", quest[4]);  
           for (i=0;i<3;i++)  {   
               printf("\n %s", option5[i]);  
           }   
           printf("\n\n Enter your answer number: ");   
           scanf ("%d", &response [4] );   
           break;  
       case 2:   
           printf("\n\n CHECK THE CORRECT ANSWERS");   
           printf("\n ************************");   
           printf("\n %s \n %s",quest[0] ,optionl[correct_ans[0]]);   
           printf("\n\n %s \n%s",quest[1] ,option2[correct_ans[1]]);   
           printf("\n\n %s \n%s",quest[2] ,option3[correct_ans[2]]);   
           printf("\n\n %s \n%s",quest[3] ,option4[correct_ans[3]]);   
           printf("\n\n %s \n%s",quest[4] ,option5[correct_ans[4]]);   
           break;  
       case 3:   
           marks = 0;  
           for(i = 0;i <= 4;i++)  {   
             if(correct_ans[i]+1==response[i])   {   
                marks++;   
             }  
           }   
           printf ("\n Out of 5 you score %d",marks);   
           break;  
    }  
  }  
      while(option!=4);  
    getch();  
      return 0; 
}