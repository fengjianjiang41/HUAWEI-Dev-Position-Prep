#include<iostream>
#include<stdio.h>
#include<list>
using namespace std;

int main() {
	int num;//链表的数据个数
	int head;
	cin >> num >> head;
	list<int> res;
	res.push_back(head);
	for (int i = 1; i < num ; ++i) {
		int a, b;
		cin >> a >> b;
		auto it1 = res.begin();
		while (*it1!=b&&it1!=res.end()) {
			it1++;
		}
		res.insert(++it1,a);
	}
	int del;
	cin >> del;
	for (auto it1 = res.begin(); it1 != res.end(); ++it1) {
		if (*it1 == del) {
			res.erase(it1);
			break;
		}
	}
	for (auto it1 = res.begin(); it1 != res.end(); ++it1) {
		cout << *it1 << ' ';
	}
}
