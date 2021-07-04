#include <bits/stdc++.h>
using namespace std;

void generateBinary(int n) {
    queue<string> binaryNum;
    binaryNum.push("1");
    while(n --) {
        string frontEle = binaryNum.front();
        binaryNum.pop();
        cout << frontEle << "\n";
        string insert = frontEle;
        binaryNum.push(frontEle.append("0"));
        binaryNum.push(insert.append("1"));
    }
}

int main() {
	int n;
	cin >> n;
	generateBinary(n);
	return 0;
}
