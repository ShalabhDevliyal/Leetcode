class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int aAm,lAm,aBm,lBm,aAd,lAd,aBd,lBd;
        aAm=10*(arriveAlice[0]-'0')+arriveAlice[1]-'0';
        lAm=10*(leaveAlice[0]-'0')+leaveAlice[1]-'0';
        aBm=10*(arriveBob[0]-'0')+arriveBob[1]-'0';
        lBm=10*(leaveBob[0]-'0')+leaveBob[1]-'0';
    
        aAd=10*(arriveAlice[3]-'0')+arriveAlice[4]-'0';
        lAd=10*(leaveAlice[3]-'0')+leaveAlice[4]-'0';
        aBd=10*(arriveBob[3]-'0')+arriveBob[4]-'0';
        lBd=10*(leaveBob[3]-'0')+leaveBob[4]-'0';
        
        vector<int>v={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        int cnt=0;
        int mxm,mxd;
        int mnm,mnd;
        
        if(aAm>aBm)
        {
            mxm=aAm;
            mxd=aAd;
        }
        else if(aAm<aBm)
        {
                mxm=aBm;
                mxd=aBd;
        }
        else
        {
            if(aAd>=aBd)
            {
                mxm=aAm;
                mxd=aAd;
            }
            else
            {
                mxm=aBm;
                mxd=aBd;
            }
        }
        
        
        if(lAm>lBm)
        {
            mnm=lBm;
            mnd=lBd;
        }
        else if(lAm<lBm)
        {
                mnm=lAm;
                mnd=lAd;
        }
        else
        {
            if(lAd>lBd)
            {
                mnm=lBm;
                mnd=lBd;
            }
            else
            {
                mnm=lAm;
                mnd=lAd;
            }
        }
        mxm--;
        mnm--;
        int i=mxm;
        while(i<=mnm)
        {
            if(i==mnm)
            {
                cnt+=mnd-mxd+1;
                break;
            }
            else
            {
                cnt+=v[i];
            }
            i++;
        }
        cout<<mxm<<" -> "<<mxd<<'\n'<<mnm<<" -> "<<mnd<<endl;
        if(cnt<0)
            return 0;
        return cnt;
        
    }
};