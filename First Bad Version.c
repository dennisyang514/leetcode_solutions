// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    int  mid, head=1, end = n;
    mid = head + (end - head) / 2;
    if(n==1) return n;

    while( head < end ){
        if(isBadVersion(head) == 1){
            return head;
        }else{
            if(isBadVersion(mid) == 1){
                end = mid;
            }else{
                head = mid + 1;
            }
            mid = head + (end - head) / 2;
        }
    }
    return head;
}