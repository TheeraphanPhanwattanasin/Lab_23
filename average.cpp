#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[]){
    double mean;
    if(argc == 1){
    cout << "Please input numbers to find average.";
    }
    else{
    for(int i=1; i < argc; i++){
        mean += atof(argv[i]);
    }
    mean /= argc-1;
    cout << "---------------------------------\n";
    cout << "Average of " << argc-1 << " numbers = " << mean;
    cout << "\n---------------------------------";
    }
    return 0;
}