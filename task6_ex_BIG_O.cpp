using namespace std;
#include <iostream>

int main()
{
    int nop = 0;
    int n = 0;
    for(int z = 2;z<=200; z++){
        nop = 0;
        n = z;
        for (int i = 1; i <= n / 2; i++)
        {
            for (int j = 1; j <= n; j += 4) {
                for (int k = 1; k <= j; k++) {
                    nop++;
                }
            }
        }
        cout << nop << endl;
    }
}

