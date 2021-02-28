bool isBSTBetter(Node* node, int min, int max)  
{  
    if (node==NULL)  
        return true;  
              
    if (node->data < min || node->data > max)  
        return false;  
      
    return isBSTBetter(node->left, min, node->data-1) && isBSTBetter(node->right, node->data+1, max);
}  

class Solution
{
    public:
    bool isBST(Node* root) 
    {
        return(isBSTBetter(root, INT_MIN, INT_MAX));
    }
};
