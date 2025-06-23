# Basic Hashing - Striver DSA Sheet (Step 1)

## ✅ Lecture Completed:
- **Lecture 6: Basic Hashing Concepts**

## 🧠 Topic Covered:
- Introduction to Hashing
- Use cases of hashing in arrays and strings
- Problem-solving approach using hash maps

## ✔️ Problem Solved:
### 🔹 Highest Occurring Element in an Array

- **Link to Problem**: [Highest Occurring Element in an Array](https://takeuforward.org/plus/dsa/problems/highest-occurring-element-in-an-array)
- **Approach**:
  - Used a hash map to count frequencies of all elements.
  - Tracked the maximum frequency and corresponding element.
  - Efficiently solved in O(n) time.
- **Solution**:

class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {\n
        map<int,int>mpp;\n
        int ans=0;\n
        for(int i=0;i<nums.size();i++){\n
            mpp[nums[i]]++;\n
            if(mpp[nums[i]]>ans){\n
                ans=nums[i];\n
            }\n
        }\n
        return ans;\n
    }\n
};\n


## 📌 Progress:
- Completed Lecture 6 of Step 1 in Striver’s DSA Sheet.
- Understood the basics of hashing and frequency counting.

---
