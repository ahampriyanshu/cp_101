int atoi(string str)
{
    int ans = 0;
    int si = str.size();
    bool isNeg = false;
    int end;
    if (str[0] == '-')
    {
        end = 1;
        isNeg = true;
    }
    else
    {
     end = 0;
    }
    for (int i=si-1,cnt=1; i >= end ; i--, cnt *= 10)
    {
       int num = str[i] - '0';
       
      if (num > 9)
      return -1;
       
      ans += num * cnt;
       
    }
    if(isNeg)
    {
        return -ans;
    }
    else
    {
        return ans;
    }
    }