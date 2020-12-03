public void printPreorder() {
		System.out.println(data);
		if (left != null) {
			left.printInoder();
		}
		if(right != null) {
			right.printInorder();
		}
	}
