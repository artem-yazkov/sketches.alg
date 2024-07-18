/*
 * 121. Best Time to Buy and Sell Stock
 * https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
 */
int maxProfit(int* prices, int pricesSize) {
    int mprofit = 0;
    int pmin = prices[0];
    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < pmin) {
            pmin = prices[i]; 
        } else if (prices[i] - pmin > mprofit) {
            mprofit = prices[i] - pmin;
        }
    }
    return mprofit;
}
