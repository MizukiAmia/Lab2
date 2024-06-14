#include<iostream>
#include<vector>

using namespace std;

int N, M;
vector<int> vec;

void func(vector<int> seq) {
	int last;
	if (seq.empty()) {
		last = 0;
	}
	else {
		last = seq.back(); //last
	}
	if (last <= N - M + seq.size()) {
		if (seq.size() == M) { //print
			for (int i = 0; i < M; i++) {
				cout << seq[i];
			}
			cout << endl;
		}
		else {
			int k = 1;
			while (last+k <= N) {
				vector<int> seq2 = seq;
				seq2.push_back(last + k);
				func(seq2);
				k++;
			}
		}
	}
}


int main() {
	cin >> N >> M;
	func(vector<int> {});
}
