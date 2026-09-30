
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {

        vector<vector<int>> ans(m, vector<int>(n, -1));
        int minR=0, maxR= m-1, minC = 0, maxC = n-1;

        ListNode* temp = head;
        while(temp != NULL){
            for(int i=minC; i<=maxC ; i++){
                if(temp == NULL) break;
                ans[minR][i] = temp->val;
                temp= temp->next;
            }
            minR++;

            if(temp == NULL) break;
            for(int i=minR; i<=maxR ; i++){
                if(temp == NULL) break;
                ans[i][maxC] = temp->val;
                temp= temp->next;
            }
            maxC--;

            if(temp == NULL) break;
            for(int i=maxC; i>=minC ; i--){
                if(temp == NULL) break;
                ans[maxR][i] = temp->val;
                temp= temp->next;
            }
            maxR--;

            if(temp == NULL) break;
            for(int i=maxR; i>=minR ; i--){
                if(temp == NULL) break;
                ans[i][minC] = temp->val;
                temp= temp->next;
            }
            minC++;
        }

        return ans;
    }
};