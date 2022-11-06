#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
	int age;
	
public:
	Solution(){};
	~Solution(){};
	Solution(const Solution&){
		cout << 111 << endl;
	}
	
public:
	void test() {
		cout << "yes" << endl;
	}
};

int main()
{
	Solution s;
	s.test();
	s.test();
	return 0;
}