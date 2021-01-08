#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    double sum=0,sum1=0,i=1,mean,standard;
    ifstream score;
    string tam;
    score.open("score.txt");
    while(getline(score,tam)){
        sum += stod(tam);
        sum1 += pow(stod(tam),2);
        i++;
    }
    cout << "Number of data = " << i-1 << endl;
    mean = sum/(i-1);
    cout << "Mean = " << setprecision(3) << mean << endl;
    standard = sqrt(((1/(i-1))*sum1)-pow(mean,2));
    cout << "Standard deviation = " << standard;
}