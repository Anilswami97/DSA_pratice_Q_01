# Check if pair with given Sum exists in Array (Two Sum)
# BreakDown the Logic, Here
## C++  [Question..](https://www.geeksforgeeks.org/check-if-pair-with-given-sum-exists-in-array/).
### What was used: 
Here in this Problem the ***unordered_map*** from STL(Standar Template Library) was used.
This is the Pratice of **DSA**.

**As we know,** Map containers in STL are used to store data in *key value* pairs,
we will leverage the it in this program.

## Problem:
Straightforward, an array **arr** and a value **x** is given. So, we have to find out two value in this array whose sum if x.
### view 1:
The **view 1** to solve this problem is using the inner loop But it's Time complexity 
will be *O(n<sup>2</sup>)*.

### view 2:
But we can reduce it's time complexity by *O(n)* using the Predefined class or function from STL.
**Suppose:**
            - **a** + **b** = **x**
- Here **a** and **b** are those two number whose sum will be x (which is given)

**Let's use some Mathematics here--**
 - **x** - **b** = **a**

here **x-b** is equal to **a** and **a** is equal to **x-b** so in this way if the value of **x-b** is *1* then the value of **a** will also be *1*.

**So,** that's why in **single loop** in **map** we will set the **umap[x-b]** as key and provide it **1** as value and if **umap[a]** is equal to 1 then it's mean we got both these values.

### Because x-b == a;
