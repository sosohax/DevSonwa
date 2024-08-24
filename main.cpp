#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector <int> primes = {2, 3, 5, 7, 11};
  cout<<"getting index 2"<<endl;
  cout << primes[2]<<endl;	// Outputs: 5
  cout<<endl;
  primes.push_back(13);
  primes.push_back(17);
  primes.pop_back();

  for (int i = 0; i < primes.size(); i++) {
      cout << primes[i] << " ";
  }
  cout<<endl;
  // Outputs: 2 3 5 7 11 13

    return 0;
}
