#include <stdio.h>
int main(void){
    char c; int n = 0;
    printf("Enter a character: \n");
    scanf("%c",&c);
    printf("Enter a size: \n");
    scanf("%d",&n);
    int row_len = (n*2) -1;
    int mid = n;
    int x = 0;
    for( int i = 1; i < n; i++){ 
        if( i == 1 ){
            for( int first_row = 1; first_row <= mid; first_row++ ){
                if( first_row != mid ){
                    printf(" ");
                    
                    
                }
                else{
                    printf("%c\n",c);
                }
            }
        }
        else{
            for( int k = 1; k < row_len; k++){
                if( k == (mid - x) ){
                    printf("%c",c);
                }
                else if( k == (mid + x) ){
                    printf("%c\n",c);
                }
                else if( k < ( mid + x ) ){
                    printf(" ");
                }
            }
        }
        x++;
    }
    printf("%c",c);
    for( int z = 0; z < row_len -2; z++){
        printf(" ");
    }
    printf("%c\n",c);
    for( int y = 0; y < row_len; y++){
        printf("%c",c);
    }
    printf("\n");
    return 0;
}
