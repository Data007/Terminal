#include <unistd.h>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
  int chdir('/Users/brian/');

  if (chdir != -1)
  {
    cout << "it worked" << endl;
  }

  return 0;
}
