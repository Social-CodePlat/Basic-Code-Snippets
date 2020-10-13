#include<stdio.h>
#include <stdbool.h>
int n;
int a[100][100];
bool isSafe(int row, int col) {
int i, j;
for (i = 0; i < col; i++)
if (a[row][i])
return false;
for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
if (a[i][j])
return false;
for (i = row, j = col; j >= 0 && i < n; i++, j--)
if (a[i][j])
return false;
return true;
}
bool Nqueen(int col) {
int i;
if (col >= n)
return true;
for (i = 0; i < n; i++) {
if (isSafe(i, col)) {
a[i][col] = 1;
if (Nqueen(col + 1)) {
return true;
}
a[i][col] = 0;
}
}
return false;
}
void print_board() {
int i, j;
if (Nqueen(0) == false)
printf("No such combination exist\n");
else {
printf("One of the combination of placement of queen is:\n");
for (i = 0; i < n; i++) {
for (j = 0; j < n; j++) {
printf("%d ", a[i][j]);
}
printf("\n");
}
}
}
int main() {
printf("Enter the no of Queen\n");
scanf("%d", & n);
print_board();
return 0;
}
