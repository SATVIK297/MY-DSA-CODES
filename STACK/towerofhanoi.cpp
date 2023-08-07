#include <iostream>
using namespace std;
void towerOfHanoi(int start,int end, char source, char temp,
                  char destination)
{
    if (start> end) {
        return;
    }
    towerOfHanoi(start,end-1, source, temp, destination);
    cout << "Move disk " << end << " from " << source
         << " to  " << destination << endl;
    towerOfHanoi(start,end-1, temp , source , destination);
}
int main()
{
    int start = 1;
    int end = 3;
    towerOfHanoi(start,end, 'A', 'C', 'B');
    return 0;
}


