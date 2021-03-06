int isBST(node* node)  
{  
    return(isBSTUtil(node, INT_MIN, INT_MAX));  
}  
bool isBSTUtil(node* node, int min, int max)  
{  
    if (node==NULL)  
        return false;  
              
    if (node->data < min || node->data > max)  
        return false;  
      
    return isBSTUtil(node->left, min, node->data-1) && isBSTUtil(node->right, node->data+1, max);
}  
  