#include<stdio.h>
knapsack(int n, int weight[], int value[], int m) {
float x[n], tp = 0;
int i, j, k = 0, u;
u = m;
for (i = 0; i < n; i++)
x[i] = 0.0;
for (i = 0; i < n; i++) {
if (weight[i] > u)
break;
else {
x[i] = 1.0;
tp = tp + value[i];
u = u - weight[i];
}
}
if (i < n) {
x[i] = u / (float)weight[i];
}
tp = tp + (x[i] * value[i]);
printf("\nMaximum profit is:- %.2f\n", tp);
}
int main() {
int n, m, i, j, temp;
printf("Enter the no. of items:\n");
scanf("%d", & n);
int value[n], weight[n];
float ratio[n];
for (i = 0; i < n; i++) {
scanf("%d %d", & weight[i], & value[i]);
}
printf("Enter the capacity of sack\n");
scanf("%d", & m);
for (i = 0; i < n; i++) {
ratio[i] = value[i] / (float) weight[i];
}
for (i = 0; i < n; i++) {
for (j = i + 1; j < n; j++) {
if (ratio[i] < ratio[j]) {
temp = ratio[j];
ratio[j] = ratio[i];
ratio[i] = temp;
temp = weight[j];
weight[j] = weight[i];
weight[i] = temp;
temp = value[j];
value[j] = value[i];
value[i] = temp;
}
}
}
knapsack(n, weight, value, m);
return 0;
}

