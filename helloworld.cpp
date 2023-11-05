#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

ifstream fin("helloworld.in");
ofstream fout("helloworld.out");

// string strArrays[2];

int main(void) {
  int numStrings;
  fin >> numStrings;

  vector<string> strArrays;

  for (int i = 0; i < numStrings; i++) {
    string temp;
    fin >> temp;
    strArrays.push_back(temp);
  }
  for (int i = 0; i < strArrays.size(); i++) {
    fout << strArrays[i] << endl;
  }

  // int age = 16;
  // bool male = true;
  // char initial = 'M';
  // double height = 54.9;
  // string name = "Michael";

  // cout << "Hello world! " << age << ' ' << male << ' ' << initial << ' ' << height << ' ' << name << '\n';

  return 0;
}