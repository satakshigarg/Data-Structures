public void printInorder() {
		if (left != null) {
			left.printInoder();
		}
		System.out.println(data);
		if(right != null) {
			right.printInorder();
		}
	}

