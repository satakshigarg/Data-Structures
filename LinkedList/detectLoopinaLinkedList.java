public boolean detectLoop(Node node) {
	HashSet<Node> vis = new HashSet<Node>();
	while (node.next != null) {
		if (vis.contains(node)) {
			return(true);
		}
		node = node.next;
	}
	return(false);
}
