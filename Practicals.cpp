// Practical 1
#include<iostream>
using namespace std;
int main(){
    int n;
    float sum = 0.0;
    
    cout<<"Enter nth term of the series";
    cin>>n;

    for (float i = 1; i < n+1; i++){
        // cout<<(1/(i*i))<<" ";
        if (int(i)%2!=0 )
        {
            cout<<"1/"<<i<<"^2";
            if (i!=n)
            {
                cout<<" - ";
            }
            sum+=(1/(i*i));
            
        }
        
        else if (int(i)%2==0 )
        {
            cout<<"1/"<<i<<"^2";
            if (i!=n)
            {
                cout<<" + ";
            }
            
            sum-=(1/(i*i));
            
        }
        
    }
    
    cout<<endl<<"Sum of "<<n<<" Terms of series = "<<sum;

    return 0;
}

// Practical 2-Program to remove duplicates value from array

#include<iostream>
using namespace std;

bool exist(int arr[], int elem,int last){
    for (int i=0; i<last;i++){
        if (arr[i]==elem)
        {
            return true;
        }
    }
    return false;
}
int main(){
    int arr[10] = {1,1,4,1,6,5,4,7,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int newArr[n];
    int index = 0;

    for (int i = n-1; i > -1; i--)
    {
        if(!exist(arr,arr[i],i)){
            newArr[index] = arr[i];
            index++;
        }
    }
    for (int i = index-1; i > -1; i--)
    {
        cout<<newArr[i]<<" ";
    }
    
    return 0;
}

// Practical 3-Frequency of characters in a string 

#include <iostream>
using namespace std;

int main() {
  string str = "Hello world!";
  int freq[256] = {0};

  for (char c : str) {
    freq[c]++;
  }

  for (int i = 0; i < 256; i++) {
    if (freq[i] > 0) {
      cout << (char)i << ": " << freq[i] << endl;
    }
  }

  return 0;
}

//Practical 4
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

class StringManipulator {
private:
    char str[100];
public:
    // Function to display address of each character in a string
    void showAddress() {
        cout << "Addresses of each character in the string:" << endl;
        char *ptr = str;
        while (*ptr != '\0') {
            cout << *ptr << ": " << static_cast<void *>(ptr) << endl;
            ptr++;
        }
        cout << endl;
    }

    // Function to concatenate two strings
    void concatenateStrings(const char *otherStr) {
        strcat(str, otherStr);
        cout << "Concatenated string: " << str << endl << endl;
    }

    // Function to compare two strings
    int compareStrings(const char *otherStr) {
        return strcmp(str, otherStr);
    }

    // Function to calculate length of the string using pointers
    int stringLength() {
        return strlen(str);
    }

    // Function to convert all lowercase characters to uppercase
    void toUpperCase() {
        char *ptr = str;
        while (*ptr != '\0') {
            *ptr = toupper(*ptr);
            ptr++;
        }
        cout << "String in uppercase: " << str << endl << endl;
    }

    // Function to reverse the string
    void reverseString() {
        int length = strlen(str);
        for (int i = 0; i < length / 2; ++i) {
            char temp = str[i];
            str[i] = str[length - i - 1];
            str[length - i - 1] = temp;
        }
        cout << "Reversed string: " << str << endl << endl;
    }

    // Function to insert a string in another string at a specified position
    void insertString(const char *subStr, int pos) {
        int len = strlen(subStr);
        int mainLen = strlen(str);
        if (pos < 0 || pos > mainLen) {
            cout << "Invalid position." << endl << endl;
            return;
        }
        for (int i = mainLen; i >= pos; i--) {
            str[i + len] = str[i];
        }
        for (int i = 0; i < len; i++) {
            str[pos + i] = subStr[i];
        }
        cout << "Modified string after insertion: " << str << endl << endl;
    }

    // Function to set the string
    void setString(const char *newStr) {
        strcpy(str, newStr);
    }
};

int main() {
    StringManipulator strManipulator;
    int choice, pos;
    char otherStr[100];

    while (true) {
        cout << "1. Show address of each character in string" << endl;
        cout << "2. Concatenate two strings" << endl;
        cout << "3. Compare two strings" << endl;
        cout << "4. Calculate length of the string" << endl;
        cout << "5. Convert all lowercase characters to uppercase" << endl;
        cout << "6. Reverse the string" << endl;
        cout << "7. Insert a string in another string at a specified position" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter a string: ";
                cin >> otherStr;
                strManipulator.setString(otherStr);
                strManipulator.showAddress();
                break;
            case 2:
                cout << "Enter first string: ";
                cin >> otherStr;
                strManipulator.setString(otherStr);
                cout << "Enter second string: ";
                cin >> otherStr;
                strManipulator.concatenateStrings(otherStr);
                break;
            case 3:
                cout << "Enter first string: ";
                cin >> otherStr;
                strManipulator.setString(otherStr);
                cout << "Enter second string: ";
                cin >> otherStr;
                if (strManipulator.compareStrings(otherStr) == 0)
                    cout << "Strings are equal." << endl << endl;
                else
                    cout << "Strings are not equal." << endl << endl;
                break;
            case 4:
                cout << "Enter a string: ";
                cin >> otherStr;
                strManipulator.setString(otherStr);
                cout << "Length of the string: " << strManipulator.stringLength() << endl << endl;
                break;
            case 5:
                cout << "Enter a string: ";
                cin >> otherStr;
                strManipulator.setString(otherStr);
                strManipulator.toUpperCase();
                break;
            case 6:
                cout << "Enter a string: ";
                cin >> otherStr;
                strManipulator.setString(otherStr);
                strManipulator.reverseString();
                break;
            case 7:
                cout << "Enter main string: ";
                cin >> otherStr;
                strManipulator.setString(otherStr);
                cout << "Enter string to insert: ";
                cin >> otherStr;
                cout << "Enter position to insert: ";
                cin >> pos;
                strManipulator.insertString(otherStr, pos);
                break;
            case 8:
                cout << "Exiting...";
                exit(0);
            default:
                cout << "Invalid choice." << endl << endl;
        }
    }
    return 0;
}

//Practical 5
#include <iostream>
using namespace std;

void mergeArrays(int arr1[], int arr2[], int size1, int size2, int result[]) {
    int i = 0, j = 0, k = 0;

    // Compare elements from both arrays and put the smaller one into the result array
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            result[k] = arr1[i];
            i++;
        } else {
            result[k] = arr2[j];
            j++;
        }
        k++;
    }

    // If any elements are left in either array, add them to the result array
    while (i < size1) {
        result[k] = arr1[i];
        i++;
        k++;
    }

    while (j < size2) {
        result[k] = arr2[j];
        j++;
        k++;
    }
}

int main() {
    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6, 8, 10};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int result[size1 + size2];

    mergeArrays(arr1, arr2, size1, size2, result);

    cout << "Merged array: ";
    for (int i = 0; i < size1 + size2; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
