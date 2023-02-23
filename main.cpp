/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <cmath>
#include <string>
#include <iostream>
using namespace std;
int main()
{
    string note = "C0";
    double refFreq = 16.35;
    double v = 0;
    double k = 0;
    double speedSound = 34500;
    double twelevethRoot = 1.059463094359;
    double freq = 0;
    double wavelength = 0;
    cout << "Enter the note: ";
    cin >> note;
    if (note[0] == 'D'){
        k = k + 2;
    }
    if (note[1] == '#'){
        k = k + 1;
    }
    v = note[note.length() - 1] - 48;
    cout << v << endl;
    freq = refFreq * pow(2,v) * pow(twelevethRoot,k);
    wavelength = speedSound / freq;
    cout << "Reference Frequency: " << refFreq << endl;
    cout << "Speed of Sound: " << speedSound << endl;
    cout << "Note:" << note << " nu(v):" << v << " k:" << k << " Frequency:" << freq  << "Hz " << "Wavelength:" << wavelength << "cm " << endl;
    return 0;
}
