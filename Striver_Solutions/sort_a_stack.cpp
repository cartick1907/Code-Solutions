void solve(stack<int> &stack, int n)
{
    if (stack.empty() || stack.top() <= n)
    {
        stack.push(n);
        return;
    }
    else
    {
        int m = stack.top();
        stack.pop();
        solve(stack, n);
        stack.push(m);
        return;
    }
}
void sortStack(stack<int> &stack)
{
    if (stack.empty())
        return;
    int n = stack.top();
    stack.pop();
    sortStack(stack);
    solve(stack, n);
}