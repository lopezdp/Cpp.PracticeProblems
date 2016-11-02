#include <iostream>

using namespace std;

int size = 3;
char space;
int a = 0;
int b = 0;

int *arrA = new int[size];
int *arrB = new int[size];


int main()
{

  for(int i = 0; i < size; i++)
  {
    cin >> arrA[i];
    cin.get(space);
    cin.clear();
  }

  for(int i = 0; i < size; i++)
  {
    cin >> arrB[i];
    cin.get(space);
    cin.clear();
  }

  for(int i = 0; i < size; i++)
  {
    if(arrA[i] > arrB[i])
    {
      a += 1;
    }else if(arrA[i] < arrB[i])
    {
      b += 1;
    }else if(arrA[i] == arrB[i])
    {
      continue;
    }
  }

  cout << a << "  " << b;

  return 0;
}
