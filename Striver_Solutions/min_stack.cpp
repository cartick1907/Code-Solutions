class MinStack
{
public:
    long long minn;
    stack<long long> s;
    MinStack()
    {
    }

    void push(int val)
    {
        long long vall = val;
        if (s.size() == 0)
        {
            s.push(vall);
            minn = vall;
            return;
        }
        long long temp;
        if (vall < minn)
        {
            temp = (2 * vall - minn);
            minn = vall;
            s.push(temp);
        }
        else
            s.push(vall);
        return;
    }

    void pop()
    {
        long long temp = s.top();
        s.pop();
        if (temp < minn)
        {
            minn = 2 * minn - temp;
        }
    }

    int top()
    {
        if (s.top() < minn)
        {
            return minn;
        }
        return s.top();
    }

    int getMin()
    {
        return minn;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */