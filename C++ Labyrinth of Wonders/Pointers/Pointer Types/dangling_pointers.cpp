#include <bits/stdc++.h>
using namespace std;

int main() {

    int *ptr = (int *)malloc(sizeof(int));

    // After below free call, ptr becomes a dangling pointer
    free(ptr);
    printf("Memory freed\n");

    // removing Dangling Pointer
    ptr = NULL;

    return 0;
}