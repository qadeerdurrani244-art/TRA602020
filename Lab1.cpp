/*#include <iostream>
using namespace std;
int main() {
    int arr[5] = {10, 20, 30, 40, 50}; 
    int *ptr;  
    ptr = &arr[2];  
    printf("Value of 3rd element : %d\n", *ptr);
    printf("Address of 3rd element: %p\n", ptr);
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
    int arr[6] = {5, 10, 15, 20, 25, 30}; 
    int *ptr; 
    ptr = arr;  
    for(int i = 0; i < 6; i++) {
        printf("%d ", *ptr);  
        ptr++;  
    }
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
    int arr[5] = {1, 2, 3, 4, 5}; 
    int *ptr;
    ptr = arr;  
    for(int i = 0; i < 5; i++) {
        printf("Address of element %d: %p\n", i + 1, ptr);
        ptr++;  
    }
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
    int a, b;
    int *ptrA, *ptrB;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    ptrA = &a;
    ptrB = &b;
    printf("Value of a using pointer: %d\n", *ptrA);
    printf("Value of b using pointer: %d\n", *ptrB);
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
    float arr[10];
    float *ptr;
    cout << "Enter 10 floating-point values:\n";
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    ptr = &arr[9];
    cout << "Values in reverse order:\n";
    for(int i = 0; i < 10; i++) {
        cout << *ptr << " ";
        ptr--;  
    }
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
    char str[100];
    char *ptr;
    int length = 0;
    cout << "Enter a string: ";
    cin.getline(str, 100);
    ptr = str;
    while(*ptr != '\0') {
        length++;
        ptr++;  
    }
    cout << "Length of the string: " << length << endl;
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main() {
    int arr[100], n;
    int *ptr, *maxPtr;
    cout << "Enter number of elements (at least 8): ";
    cin >> n;
    if(n < 8) {
        cout << "Please enter at least 8 elements.\n";
        return 0;
    }
    cout << "Enter " << n << " integers:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    ptr = arr;
    maxPtr = arr; 
    for(int i = 0; i < n; i++) {
        if(*ptr > *maxPtr) {
            maxPtr = ptr;
        }
        ptr++;  
    }
    cout << "Maximum value: " << *maxPtr << endl;
    cout << "Address of max value: " << maxPtr << endl;
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e;
    int* ptr[5];
    ptr[0] = &a;
    ptr[1] = &b;
    ptr[2] = &c;
    ptr[3] = &d;
    ptr[4] = &e;
    cout << "Enter five integer values: ";
    cin >> a >> b >> c >> d >> e;
    cout << "\nValues using pointer array:\n";
    for(int i = 0; i < 5; i++)
    {
        cout << "Value " << i+1 << " = " << *ptr[i] << endl;
    }
    cout << "\nAddresses stored in pointer array:\n";
    for(int i = 0; i < 5; i++)
    {
        cout << "Address " << i+1 << " = " << ptr[i] << endl;
    }
    return 0;
}*/
/*#include <iostream>
using namespace std;
int main()
{
    char str[100];
    int length = 0;
    cout << "Enter a string: ";
    cin.getline(str, 100);
    char *p = str;
    while(*p != '\0')
    {
        length++;
        p++;
    }
    cout << "Reversed string: ";
    char *end = str + length - 1;
    while(end >= str)
    {
        cout << *end;
        end--;
    }
    return 0;
}*/
