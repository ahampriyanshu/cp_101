int _stack :: getMin()
{
   if (s.empty()) 
     {   return -1; }
    else
    {    return minEle;}
}

int _stack ::pop()
{
        if (s.empty()) 
          {  return -1; }
  
        int top = s.top();
        int ans = top;
        s.pop(); 
  
        if (top < minEle) 
{            ans = minEle;
            minEle = 2*minEle - top; }
    
        return ans;
}


void _stack::push(int x)
{
 if (s.empty()) 
 
        { 
            minEle = x; 
            s.push(x);
            return; 
        } 
  
        if (x < minEle) 
        { 
            s.push(2*x - minEle); 
            minEle = x; 
        } 
  
        else
          { 
              s.push(x);
        }
}