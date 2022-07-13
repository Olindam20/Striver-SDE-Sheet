void insertStack(stack<int> &stack, int val){
   if(stack.empty() || val>stack.top()){
       stack.push(val);
       return;
   }
   int topp=stack.top();
   stack.pop();
   insertStack(stack,val);
   stack.push(topp);
   return;
}
void sortStack(stack<int> &stack)
{
   if(stack.empty() || stack.size()==1) return;
   int val=stack.top();
   stack.pop();
   sortStack(stack);
   insertStack(stack,val);
}