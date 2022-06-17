Node *Merge(Node* a,Node* b)
{
    Node *temp=new Node(0),*res=temp;
    
    while(a && b)
    {
        if(a->data < b->data)
        {
            temp->bottom=a;
            temp=temp->bottom;
            a=a->bottom;
        }
        else
        {
            temp->bottom=b;
            temp=temp->bottom;
            b=b->bottom;
        }
    }
    if(a) temp->bottom=a;
    else temp->bottom=b;
    return res->bottom;
}
Node *flatten(Node *root)
{
   // Your code here
   if(root==NULL || root->next==NULL) return root;
   
   root->next=flatten(root->next);
   
   root=Merge(root,root->next);
   
   return root;
}

