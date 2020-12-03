public void insert(int val) {
		if (val <= data) {
			if (left == null) {
				left = new Node(data);
			}
			else {
				left.insert(val);
			}
		}
		else {
			if (right == null) {
				right = new Node(val);
			}
			else {
				right.insert(val);
			}
		}
	}
