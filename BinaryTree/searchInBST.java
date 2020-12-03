public boolean find(int val) {
		if (val == data) {
			return true;
		}
		if (val < data) {
			if (left == null) {
				return false;
			} else {
				return left.contains(val);
			}
		} else {
			if (right == null) {
				return false;
			} else {
				return right.contains(val);
			}

		}
	}
