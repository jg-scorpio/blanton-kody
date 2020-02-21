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

bool primeDigit(int digit)
{
  if (digit==2 || digit==3 || digit == 5 || digit == 7)
    return true;
  else
    return false;

}





int main()
{
	int i, n, num, len;
  	char dig;


  	cin >> n;
  	for ( i = 0; i < n; i++)
    {
    	cin >> num;
    	int co = 0;

      	len = numLength(num);
      	string str = to_string(num);

      	for ( int j = 0; j < len; j++)
        {
            char digit = str[j];
            int idigit = digit - '0';


          	bool prime = primeDigit(idigit);
            if (prime == false){
            	cout << "NIE\n";
          		break;
            }
            co++;
            if (co == len)
                cout << "TAK\n";
    	    }



    	}
    }



