#include <iostream> 
using namespace std; 

void pointerFun(int *p){
    int num = 100; 
    cout << "------- original --------- \n"; 
    cout << "num = " << num << endl; 

    p = &num;
    *p = 200; 
    cout << "------- changed --------- \n"; 
    cout << "num = " << num << endl; 

}

void dynamicArr(){
    int size; 
    cout << "Enter the size of the array = "; 
    cin >> size; 
    int *arr = new int[size]; 

    cout << "Enter values..." << endl;
    int userInput; 
    for (int i = 0; i < size; i++)
    {
        cout << "Enter for index " << i << " = "; 
        cin >> userInput; 
        arr[i] = userInput; 
    }

    cout << "Array elements: " << endl; 
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", " << endl; 
    }

    delete [] arr;     

    }
void dynamicInt(){
    int *ptr = new int;
    *ptr = 100; 
    cout << "Value = *ptr = " << *ptr << endl; 
    delete ptr; 
}

void swapValues(int *a, int *b){
    cout << "------- Original Values ----------" << endl; 
    cout << "a = " << *a << endl; 
    cout << "b = " << *b << endl; 

    int temp = *b; 
    *b = *a; 
    *a = temp; 
    
    cout << "------- Swapped Values ----------" << endl; 
    cout << "a = " << *a << endl; 
    cout << "b = " << *b << endl; 

}

void printArr(int arr[], int size){
    int *p = arr; 
    for (int i = 0; i < size; i++)
    {
        cout << *(p + i) << endl; 
        
    }
}

int main(){
    // #1 
    cout << "========== Q#1 ==========" << endl; 
    int num = 5; 
    int *ptr = &num; 
    cout << "num = "<< num << endl; 
    cout <<  "*ptr = " << *ptr << endl; 

    cout << "&num = " << &num << endl; 
    cout << "ptr = " << ptr << endl; 

    cout << "&ptr = " << &ptr << endl; 

    cout << "========== Q#2 ==========" << endl; 
    int arr[5] = {10, 20, 30, 40, 50}; 
    int *p = arr; 
    for (int i = 0; i < 5; i++)
    {
        cout << "Value of index " << i << " = " << *(p + i) << endl; 
        cout << "Address of index " << i << " = " << (p + i) << endl << endl; 

    }
    
    
    cout << "========== Q#3 ==========" << endl; 
    int z = 10; 
    int *p1 = &z; 
    int *p2 = p1; 

    cout << "z = " << z << endl; 
    cout << "*p1 = " << *p1 << endl; 
    cout << "*p2 = " << *p2 << endl; 

    cout << "========== Q#4 ==========" << endl; 
    int A[] = {2, 4, 6}; 
    printArr(A, 3); 


    cout << "========== Q#5 ==========" << endl; 
    int num1 = 10; 
    int num2 = 20; 
    swapValues(&num1, &num2); 

    cout << "========== Q#6 ==========" << endl; 
    dynamicInt(); 
    cout << endl; 
    dynamicArr(); 
    
    cout << "========== Q#7 ==========" << endl; 
    cout << "========== Q#8 ==========" << endl; 
     
    int *ptrr; 
    pointerFun(ptrr); 
    cout << "========== Q#9 ==========" << endl; 
    cout << "========== Q#10 ==========" << endl; 
    struct BirdStruct
    {
        string name; 
        int age; 

        void intro(){
            cout << "HELLO my name is " << name  << " and I am " << age << " years old" << endl; 
        }
    };

    BirdStruct bs = {"Ujjah", 4}; 
    BirdStruct *bPtr = &bs; 
    bPtr->intro(); 
    bPtr->name = "ANI"; 
    bPtr->age = 2;
    bPtr->intro();  
    
}

