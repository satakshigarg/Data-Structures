public static class Queue {
private class Node {
		private Node next;
		private int data;
		private Node(int data) {
			this.data = data;
		}
	}
	private Node head;

	private Node tail;
	public boolean isEmpty() {
		return head == null;
	}

	public int peek() {
		if (head == null) {
			return null;
		}
		return head.data;
	}

	public void add(int data) {
		Node node = new Node(data);
		if (head == null) {
			head = node;
			return;
		}
		if (tail != null) {
			tail.next = node;
		}
		tail = node;
	}

	public int remove() {
		int data = head.data;
		head = head.next;
		if (head == null) {
			tail = null;
		}
return data;
	}

}
