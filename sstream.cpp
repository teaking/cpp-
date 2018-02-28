/*
 * Using stringstream to get input from user and converting to different
 * variable types. 
 */

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
		string inp;
		float w, l;

		cout << "Width : " << endl;
		getline(cin, inp);
		stringstream(inp) >> w;
		cout << "Length : " << endl;
		getline(cin, inp);
		stringstream(inp) >> l;
		cout << "width : " << w << ", length : " << l << endl;

		return 0;
}
