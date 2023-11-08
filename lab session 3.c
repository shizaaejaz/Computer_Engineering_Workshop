//#include <stdio.h>
//
//void swap(int *a,int *b);
//int main(){
//int x=3,y=5;
//swap(&x,&y);
//printf("x= %d & y= %d \n",x,y);
//return 0;
//
//}
//void swap(int *a, int *b){
//   int tem;
//   tem=*a;
//   *a=*b;
//   *b=tem;
//}



//#include <stdio.h>
//void printReverse(const char *str) {
//    int length = 0;
//    while (*(str + length) != '\0') {
//        length++;
//    }
//    printf("Reversed String: ");
//    for (int i = length - 1; i >= 0; i--) {
//        printf("%c", *(str + i));
//    }
//    printf("\n");
//}
//int main() {
//    char inputString[100];
//    printf("Enter a string: ");
//    scanf("%s", inputString);
//    printReverse(inputString);
//    return 0;
//}


//
//#include <stdio.h>
//
//int main() {
//    int size;
//    printf("Enter the size of an array: ");
//    scanf("%d", &size);
//    int arr[size];
//    printf("Enter %d elements: \n", size);
//    for (int i = 0; i < size; i++) {
//        scanf("%d", &arr[i]);
//    }
//    printf("Entered elements: ");
//    for (int i = 0; i < size; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    return 0;
//}


//#include <stdio.h>
//int main() {
//    int size, target;
//    printf("Enter the size of array: ");
//    scanf("%d", &size);
//    int arr[size];
//    printf("Enter %d elements:\n", size);
//    for (int i = 0; i < size; i++) {
//        scanf("%d", arr + i);
//    }
//    printf("Enter the element to search for: ");
//    scanf("%d", &target);
//    int found = 0;
//    for (int i = 0; i < size; i++) {
//        if (*(arr + i) == target) {
//            found = 1;
//            printf("Element found at index %d\n", i);
//        }
//    }
//    return 0;
//}



//#include <stdio.h>
//void addMatrices(int rows, int cols, int *mat1, int *mat2, int *result) {
//    for (int i = 0; i < rows * cols; i++)
//        *(result + i) = *(mat1 + i) + *(mat2 + i);
//}
//void displayMatrix(int rows, int cols, int *matrix) {
//    for (int i = 0; i < rows * cols; i++)
//        printf("%d%c", *(matrix + i), (i + 1) % cols == 0 ? '\n' : '\t');
//}
//int main() {
//    int rows, cols;
//    printf("Enter the number of rows and columns: ");
//    scanf("%d %d", &rows, &cols);
//    int mat1[rows][cols], mat2[rows][cols], result[rows][cols];
//    printf("Enter elements for the first matrix:\n");
//    for (int i = 0; i < rows * cols; i++)
//    scanf("%d", &mat1[0][i]);
//    printf("Enter elements for the second matrix:\n");
//    for (int i = 0; i < rows * cols; i++)
//    scanf("%d", &mat2[0][i]);
//    addMatrices(rows, cols, &mat1[0][0], &mat2[0][0], &result[0][0]);
//    printf("Sum of Matrices:\n");
//    displayMatrix(rows, cols, &result[0][0]);
//    return 0;
//}
//#include <stdio.h>
//int main(){
// int row, col;
// printf("How many rows should the matrices have? ");
// scanf("%d", &row);
// printf("How many columns should the matrices have? ");
// scanf("%d", &col);
// int mat1[row][col];
// int *ptr1 = mat1;
// printf("For Matrix 1\n");
// for(int i=0; i<row; i++){
// for(int j=0; j<col; j++){
// printf("Enter element %d of row %d: ", j+1, i+1);
// scanf("%d", ptr1);
// ptr1++;
// }
// }
// int mat2[row][col];
// int *ptr2 = mat2;
// printf("For Matrix 1\n");
// for(int i=0; i<row; i++){
// for(int j=0; j<col; j++){
// printf("Enter element %d of row %d: ", j+1, i+1);
// scanf("%d", ptr2);
// ptr2++;
// }
// }
// ptr1 = mat1;
// ptr2 = mat2;
// int mat3[row][col];
// int *ptr3 = mat3;
// for(int i=0; i<row; i++){
// for(int j=0; j<col; j++){
// *ptr3 = *ptr1 + *ptr2;
// printf("%d ", *ptr3);
// ptr1++;
// ptr2++;
// ptr3++;
// }
// printf("\n");
// }
// return 0;
//}
//
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
////
//
//
//
////
