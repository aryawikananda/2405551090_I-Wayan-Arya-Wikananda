#include <stdio.h>
#include <string.h>


void evaluasi_string(char A[], char B[]) {
    
    if (strlen(A) != strlen(B)) {
        printf("BERBEDA\n");
    } else {
        
        int identik = 1;
        for (int i = 0; i < strlen(A); i++) {
            if (A[i] != B[i]) {
                identik = 0;
                break;
            }
        }
        
        
        if (identik) {
            printf("IDENTIK\n");
        } else {
            
            printf("MIRIP\n");
        }
    }
}

int main() {
    char A[101], B[101];
    
    
    printf("Masukkan string pertama: ");
    scanf("%s", A);
    printf("Masukkan string kedua: ");
    scanf("%s", B);
    
   
    evaluasi_string(A, B);
    
    return 0;
}
