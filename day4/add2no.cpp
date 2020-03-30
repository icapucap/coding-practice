ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode *p;
        p=l1;
        long long sum1=0,sum2=0;
        while(p!=NULL){
            sum1+=p->val;
            sum1*=10;
            p=p->next;
        }
        p=l2;
        while(p!=NULL){
            sum2+=p->val;
            sum2*=10;
            p=p->next;
        }
        sum1=sum1+sum2;
        if(sum1==0)return l1;
        vector<int> temp;
        while(sum1){
            temp.push_back(sum1%10);
            sum1/=10;
        }
        reverse(temp.begin(),temp.end());
        ListNode *q,*h;
        q = new ListNode(temp[0]);
        q->next=NULL;
        h=q;
        for(int i=1;i<temp.size()-1;i++){
            ListNode *t;
            t = new ListNode(temp[i]);
            t->next=NULL;
            q->next=t;
            q=t;
        }
        return h;
    }