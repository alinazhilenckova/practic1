class BinaryTreeNode : 	
def__init__(self, data) : 	
self.data = data 
self.left = None 
self.right = None 
class BinaryTree : 
def insert(self, root, data) :
if root is None :
return BinaryTreeNode(data) 
if data < root.data : 
root.left = self.insert(root, left, data) 	
elif data > root.data :
root.right = self
insert(root, left, data) 
return root
class TreeNode :
def __init__(self, data) :
self.data = data
self.left = None
self.right = None
def in_order(self) :
result = [] 
if self.left:
result.extend(self.left.in_order())
result.append(self.data) 
if self.right:
result.extend(self.right.in_order()) 
return result
if __name__ == "__main__":
root = TreeNode(1)
root.left = TreeNode(2) 
root.right = TreeNode(3) 
root.left.left = TreeNode(4) 
root.left.right = TreeNode(5)  
print("In-order traversal:", root.in_order())  
class TreeNode :
def __init__(self, data) :
self.data = data
self.left = None
self.right = None
def pre_order(self) :
result = []     
result.append(self.data) 
if self.left:
result.extend(self.left.pre_order()) 
if self.right:
result.extend(self.right.pre_order())
return result 
if __name__ == "__main__":
root = TreeNode(1) 
root.left = TreeNode(2) 
root.right = TreeNode(3)
root.left.left = TreeNode(4) 
root.left.right = TreeNode(5)  
print("Pre-order traversal:", root.pre_order()) 
class TreeNode : 
def __init__(self, data) :
self.data = data
self.left = None
self.right = None
def post_order(self) : 
result = [] 
if self.left:
result.extend(self.left.post_order()) 
if self.right:
result.extend(self.right.post_order())  
result.append(self.data)
return result
if __name__ == "__main__": 
root = TreeNode(1) 
root.left = TreeNode(2) 
root.right = TreeNode(3)
root.left.left = TreeNode(4) 
root.left.right = TreeNode(5) 
print("Post-order traversal:", root.post_order())
class BinaryTree :
def deleteNode(self, root, data) :
if root is None :
return root
if data ‹ root.data :
root.left = self.deleteNode(root.left, data)
elif data › root.data : 
root.right = self.deleteNode(root.right, data) 
else:
if root.left is None and root.right is None :
return None elif root.left is None :
return root.right elif root.right is None :
return root.left
else: 
root.data = self - getMin(root.right).data root.right = self.deleteNode(root.right, root.data) 
return root  
def getMin(self, root) : 
if root is None :
return root
while root.left is not None : 
root = root.left  
return root 
  
