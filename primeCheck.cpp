// Main function of the C++ program.

#include <iostream>
using namespace std;

bool isPrime(int);

int main()
{
    const int size = 100;
    int userInput, primeCount = 0, nonprimeCount = 0;
    int primeNumbers[size];
    int nonprimeNumbers[size];
    
    do{
        cout << "Please input a positive integer, or input 0 to stop\n";
        cin >> userInput;
        if(userInput == 0)
           break;
        if(isPrime(userInput)){   
           primeNumbers[primeCount] = userInput;
           primeCount++;
        }
        else{
           nonprimeNumbers[nonprimeCount] = userInput;
           nonprimeCount++;    
        }
           
    }while(userInput != 0);
    cout << "Inputs which are prime numbers are: ";
    //iterate through list of prime numbers
    for(int i = 0; i < primeCount; i++){
        cout << primeNumbers[i] << " ";
    }
    cout << endl << "Total number of prime numbers are: " << primeCount << endl;
    cout << "Inputs which are non-prime numbers are: ";
    //iterate through list of non-prime numbers
    for(int i = 0; i < nonprimeCount; i++){
        cout << nonprimeNumbers[i] << " ";
    }
    cout << endl << "Total number of non-prime numbers are: " << nonprimeCount << endl;
}

bool isPrime(int n){
    bool prime = true;
    for(int factor = 2; factor < n; factor++){
        if(n % factor == 0){
           prime = false;
           break; 
        }
    }
    return prime;
}


