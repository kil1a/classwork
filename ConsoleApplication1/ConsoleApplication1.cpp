#include <iostream>
#include "stack.h"
#include "Qe.h"
using namespace std;
bool check(const char* str ) {
	Stack st;
	for (int i{}; str[i] != '\0'; ++i) {
		if (str[i] == '[')
			st.push(str[i]);

		if (str[i] == ']')
			
			if (st.pop() == 0)
				return false;
	}
	return st.isEmpty();
}
bool check_v2(const char* str) {
	Stack st;

	const unsigned int count{ 3 };
	char open_ch[count]{ '[','{','(' };
	char close_ch[count]{ ']','}',')' };

	for (int i{}; str[i] != '\0'; ++i) {
		for (int j{}; j < count;++j) {

			if (open_ch[j] == str[i])
				st.push(str[i]);

			if (close_ch[j] == str[i]) {
				char ch = st.pop();
				if (ch == 0 || ch != open_ch[j])
					return false;
			}
		}
	}
	return st.isEmpty();
}

int main() {

	srand(time(0));

	cout << check("[ds(fgd]sd{fg[dsfgs](sd{fg[sdfg]}sd)f}g[])") << endl;

	



	return 0;
}
