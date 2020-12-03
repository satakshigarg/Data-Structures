public Node reverse(Node node) {
		Node curr = node;
		Node prev = null;
		Node next = null;
		while (curr.next != null) {
			next = curr.next;
			curr.next = prev;
			prev = curr;
			curr = next;
		}
		node = prev;
		return node;
	}
