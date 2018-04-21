#include <iostream>
#include <algorithm>
#include <vector>
#include <chrono>
using namespace std;



int isPalindrome0(string temp)
{
	string copy = temp;
	reverse(copy.begin(), copy.end());
	return (temp == copy) ? true:false;
}


int isPalindrome1(int temp)
{
	string copy = to_string(temp);
	reverse(copy.begin(), copy.end());
	return (to_string(temp) == copy) ? true:false;
}

int isPalindrome2(vector<int> listy)
{
	vector<int> copy = listy;
	reverse(copy.begin(), copy.end());
	return (listy == copy) ? true:false;
}


int isPalindrome3(vector<string> listy)
{
	vector<string> copy = listy;
	reverse(copy.begin(), copy.end());
	return (listy == copy) ? true:false;
}

int main()
{

	int temp0 = 12343218;
	cout << "isPalindrome returned " << isPalindrome1(temp0) << endl;

	string temp1 = "a man a plan a canal panama";
	cout << "isPalindrome returned " << isPalindrome0(temp1) << endl; 
	
	string temp2 = "amanaplanacanalpanama";
	cout << "isPalindrome returned " << isPalindrome0(temp2) << endl;
	
	string temp3 = "3 2 1 2 3";
	cout << "isPalindrome returned " << isPalindrome0(temp3) << endl;
	
	vector<string> listy1;
	listy1.push_back("An");
	listy1.push_back("the");
	listy1.push_back("An");
    cout << "isPalindrome returned " << isPalindrome3(listy1) << endl;	

	string temp4 = "An the An";
	cout << "isPalindrome returned " << isPalindrome0(temp4) << endl;

	string temp5 = "12321";
	cout << "isPalindrome retruned " << isPalindrome0(temp5) << endl;

	int temp6 = 54343;
	cout << "isPalindrome returned " << isPalindrome1(temp6) << endl;

	vector<int> list2;
	list2.push_back(1);
	list2.push_back(2);
	list2.push_back(3);
	list2.push_back(7);
	list2.push_back(5);
	list2.push_back(4);
	list2.push_back(3);
	list2.push_back(2);
	list2.push_back(1);
    cout << "isPalindrome returned: " << isPalindrome2(list2) << endl;
	

	return 0;
}
