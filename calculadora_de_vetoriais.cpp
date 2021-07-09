#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  long long int o, d, n, resp1, resp2, resp3, seila, expoente;
  cin >> o >> d;
  int array[d*2];

  int respostas[d];

  seila = d;

  if (o == 1) {
    resp1 = 0;
    for (int i = 0; i < 2*d; i++) {
      cin >> array[i];
    }
    for (int i = 0; i < d; i++) {
      resp1 = array[i] + array[seila];
      seila++;
      cout << resp1 << " ";
    }
  } else if (o == 2) {
    resp1 = 0;
    for (int i = 0; i < d*2; i++) {
      cin >> array[i];
    }
    for (int i = 0; i < d; i++) {
      respostas[i] = array[i] * array[seila];
      seila++;
    }
    for (int i = 0; i < d; i++) {
     resp1 += respostas[i];
    }
    cout << resp1;
  } else if (o == 3) {
    resp1 = 0;
    for (int i = 0; i < d; i++) {
      cin >> array[i];
    }
    cin >> expoente;
    for (int i = 0; i < d; i++) {
      resp1 = array[i] * expoente; 
      cout << resp1 << " ";
    }
  }
}
