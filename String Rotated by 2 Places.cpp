class Solution {
	public:
	//void rotate_clockwise(string& clockwise);
	void rotate_clockwise(string& clockwise) {
		char temp1 = clockwise[clockwise.size() - 1];
		char temp2 = clockwise[clockwise.size() - 2];
		
		for (int i = clockwise.size() - 3 ;i >= 0; i--) {
			clockwise[i + 2] = clockwise[i];
		}
		clockwise[0] = temp2;
		clockwise[1] = temp1;
	}
	//void rotate_anticlockwise(string &anticlockwise);
	void rotate_anticlockwise(string &anticlockwise) {
		char temp1 = anticlockwise[0];
		char temp2 = anticlockwise[1];
		
		for (int i = 2; i <= anticlockwise.size() - 1; i++) {
			anticlockwise[i - 2] = anticlockwise[i];
		}
		anticlockwise[anticlockwise.size() - 1] = temp2;
		anticlockwise[anticlockwise.size() - 2] = temp1;
		
	}
	
	bool isRotated(string& s1, string& s2) {
		// code here
		if (s1.size() != s2.size()) {
			return 0;
		}
		// for anticlockwise rotation
		
		string clockwise = s1;
		string anticlockwise = s1;
		rotate_clockwise(clockwise);
		rotate_anticlockwise(anticlockwise);
		if (clockwise == s2) {
			return 1;
		}
		else if (anticlockwise == s2) {
			return 1;
		}
		else {
			return 0;
		}
		return 0;
		
	}
	
};
