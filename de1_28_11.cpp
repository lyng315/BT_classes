#include <iostream>
using namespace std;
class tinhtoan {
private:
    string chuoi;
public:
    tinhtoan(string& s) : chuoi(s) {}
    // nap chong tt ()
    int operator()() {
        int cost = 0;
        size_t i = 0, j = chuoi.length() - 1;

        while (i < j) {
            if (chuoi[i] != chuoi[j]) {
                cost++;
            }
            i++;
            j--;
        }
        return cost;
    }
};
int main() {
    string s;
    cin >> s;
    tinhtoan calculator(s);
    int result = calculator();
    cout  << result +1;
    return 0;
}
