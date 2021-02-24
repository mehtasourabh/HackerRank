vector<int> climbingLeaderboard(vector<int> scores, vector<int> alice) {
    stack<int> st;
    vector<int> res;
    for_each(scores.begin(), scores.end(), [&](int a) {
        if (st.empty() || st.top() != a)
            st.push(a);
    });

    for_each(alice.begin(), alice.end(), [&](int marks) {
        while (!st.empty() && (st.top() <= marks))
            st.pop();
        res.push_back(st.size()+1);
    });

    return res;
}