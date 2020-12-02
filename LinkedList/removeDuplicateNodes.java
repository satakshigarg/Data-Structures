public void removeDuplicates(Node node) {
		HashSet<Integer> values = new HashSet<Integer>();
		while(node.next != null) {
			if (values.contains(node.next.data)) {
				node.next = node.next.next;
			}
			values.add(node.data);
			node = node.next;
		}
	}
