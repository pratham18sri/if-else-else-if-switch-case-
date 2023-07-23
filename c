#include <stdio.h>
// use of switch statements 
int main(void){
int rating;
  printf(" enter your rating (1_5):");
  scanf("%d",&rating);
  switch(rating){
    case 1:
    printf("your rating is 1\n");
    break;
    case 2:
    printf("your rating is 2\n");
    break;
    case 3:
    printf("your rating is 3\n");
    break;
    case 4:
    printf("your rating is 4\n");
    break;
    case 5:
    printf("your rating is 5\n");
    break;
    
  }



//wriye progarame to give grade using else if 
  
int a;
    printf(" enter your marks:");
  scanf("%d",&a);
  
  if(a>=90 && a <=100){
    printf("!! EXCELENT !! your grade is A\n");
  }
  else if(a>=80 && a <90){
    printf(" !! V,GOOD !!your grade is B\n");

  }
 else if(a>=70 && a <80){
    printf("!! GOOD !!your grade is C\n");

  }
else if (a < 70){
  printf("you need to work hard your grade is D\n");
  
}

    return 0;
}
