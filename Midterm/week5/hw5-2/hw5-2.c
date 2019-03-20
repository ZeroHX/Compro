/*
Computer Programming : hw5-2
Jakkawan Intaratchaiyakij   61070023
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int line;
  scanf("%d",& line);
    for(int i = -line+((line+1)/2); i < (line+1)/2; i++){
        for(int j = -line+((line+1)/2); j < (line+1)/2; j++){
            if(abs(j) == abs(i))
                printf("-");
            else{
                printf("#");
            }
        }
    printf("\n");
    }
}
/*
-#########-
#-#######-#
##-#####-##
###-###-###
####-#-####
#####-#####
####-#-####
###-###-###
##-#####-##
#-#######-#
-#########-
*/