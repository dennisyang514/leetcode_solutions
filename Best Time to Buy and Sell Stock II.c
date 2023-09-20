int maxProfit(int* prices, int pricesSize){
    int maxsum = 0;

    for(int i=0; i<pricesSize -1; i++){
        if(prices[i+1] > prices[i]) maxsum+=(prices[i+1]-prices[i]);     
    }

    return maxsum;
}