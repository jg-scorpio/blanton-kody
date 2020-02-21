
/// Jedrzej Grabski ULO IC
#include <iostream>
#include<string>
#include <sstream>

using namespace std;

int numLength(int n)
{
    int l = 0;
	while (n > 0)
    {
    	n /= 10;
      	l++;

    }
    return l;
}





int main()
{
	int i, n, num, len;
  	char dig;
    int sum = 0;



    	cin >> num;

      	len = numLength(num);
      	string str = to_string(num);

      	for ( int j = 0; j < len; j++)
        {
            char digit = str[j];
            int idigit = digit - '0';

          	sum += idigit;






    }
  cout << sum;
}



