#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a,const void *b){
    return strcmp((const char *)a, (const char *)b);
}
int main() {
    char names[10][50];
    int n;
    printf("Enter number of names (max 10): ");
    scanf("%d", &n);

    getchar();
    for (int i = 0; i < n; i++) {
        printf("Enter name %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = '\0';
    }
    qsort(names, n, sizeof(names[0]), compare);
    
    printf("Sorted names:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }
    
    return 0;
}