string biggerIsGreater(string w) {
    if(w.empty())
        return string("no answer");

    string::iterator itr = w.end() - 1;
    while (itr > w.begin() && *(itr - 1) >= *itr)
        --itr;

    if (itr == w.begin())
        return string("no answer");

    auto pivot = itr-1;
    auto last = w.end()-1;
    while (*last <= *(pivot))
        --last;

    std::iter_swap(pivot, last);
    std::reverse(itr, w.end());
    return w;
}
