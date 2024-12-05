class Node:
    def __init__(self,data):
        self.data=data
        self.link=None

class llist:
    def __init__(self):
        self.head=None
    def add_beg(self,data):
        newnode = Node(data)
        newnode.link = self.head
        self.head=newnode
        
    def add_end(self,data):
        newnode = Node(data)
        
        if self.head==None:
            self.head=newnode
        else:
            temp=self.head
            while(temp.link!=None):
                temp=temp.link
                if(temp.link==None):
                    temp.link=newnode
                    newnode.link=None
            
    def display(self):
        temp  = self.head
        while temp is not None:
            print(temp.data)
            temp=temp.link
    
a = llist()
a.add_beg(10)
a.add_beg(20)
a.add_beg(30)
a.add_end(50)
a.display()
    