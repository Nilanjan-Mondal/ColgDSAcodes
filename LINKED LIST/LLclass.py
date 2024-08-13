class node:
    def __init__(self,val):
        self.val = val
        self.next = None

class Linked_List:
    def __init__(self):
        self.head = None

    def createLL(self):
        n = int(input("Enter the number of nodes: "))    
        for i in range (n):
            val = int(input("Enter the val of node: "))
            newNode = node(val)
            if (self.head is None):
                self.head = newNode
                temp = self.head
            else:
                temp.next = newNode
                temp = newNode    

    def insertAtHead(self,val):
        newNode = node(val)
        newNode.next = self.head
        self.head = newNode

    def insertAtTail(self,val):
        newNode = node(val)
        if (self.head is None):
            self.head = newNode
            return
        temp = self.head
        while(temp.next is not None):
            temp = temp.next
        temp.next = newNode

    def insertAtAny(self,val,pos):
        newNode = node(val)
        if(pos == 1):
            newNode.next = self.head
            self.head = newNode
            return
        temp = self.head
        for _ in range(pos-2):
            temp = temp.next
        newNode.next = temp.next
        temp.next = newNode

    def display(self):
        temp = self.head
        while(temp is not None):
            print(temp.val, end = " ")
            temp = temp.next

ll = Linked_List()
ll.createLL()
val = int(input("Enter the value to be inserted at head: "))   
ll.insertAtHead(val)
ll.display()
print("\n")
val = int(input("Enter the value to be inserted at tail: "))   
ll.insertAtTail(val)
ll.display() 
print("\n")
val = int(input("Enter the value to be inserted at any location: ")) 
pos = int(input("Enter the position: "))
ll.insertAtAny(val,pos)
ll.display() 



