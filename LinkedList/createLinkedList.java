public class Node {
  Node next;
  int data;
  public Node(int data) {
    this.data = data;
  }
}

public class LinkedList {
  Node head;
  public void append(int data) {
    if (head == null) {
      head = new Node(data);
      return;
    }
    Node currNode = head;
    while (currNode.next != null) {
      currNode = currNode.next;
    }
    currNode.next = new Node(data);
  }
  
  public void prepend(int data) {
    Node newHead = new Node(data);
    newHead.next = head;
    head = newHead;
  }
  
  public void delete(int data){
    if (head == null) {
      return;
    }
    if (head.data == data) {
      head = head.next;
      return;
    }
    
    Node currNode = head;
    while (currNode.next != null) {
      if (currNode.next.data = data) {
        currNode.next = currNode.next.next;
        return;
      }
      currNode = currNode.next;
    }
  }
}
