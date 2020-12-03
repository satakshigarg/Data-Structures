public void printPostorder() {
		if (left != null) {
			left.printInoder();
		}
		if(right != null) {
			right.printInorder();
		}
		System.out.println(data);
	}
