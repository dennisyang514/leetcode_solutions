int maxProfit(int* prices, int pricesSize){
    int i,maxprice,minprice;
    maxprice = 0;
    minprice = INT_MAX;

    for(i=0; i<pricesSize; i++){
        if(prices[i] < minprice ){
            minprice = prices[i];
        }else if(prices[i] - minprice > maxprice){
            maxprice = prices[i] - minprice;
        }
    }

    return maxprice;
}