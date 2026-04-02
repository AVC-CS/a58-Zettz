#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream ifs;
    string sname;
    int score1, score2, sum, N;
    double avg;
    ifs.open("Students.txt");
    if (!ifs.is_open()){
        cerr << "Error opening file!" << endl;
        return 1;
    }
    ifs >> N;
    for(int i=0; i<N; i++){
        ifs >> sname >> score1 >> score2;
        sum = score1 + score2;
        avg = sum / 2.0;
        cout << sname << " " << score1 << " " << score2 << " " << sum << " " << avg << endl;

    }
}