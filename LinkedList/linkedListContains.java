public boolean contains(int data) {
		Node curr = head;
		if (head == null) {
			return(False);
		}
		while (curr.next != null) {
			if (curr.data == data) {
				return(True);
			}
		}
		return(False);
	}
