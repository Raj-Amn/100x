## Sorting

---

### 🔵 Bubble Sort

**Idea:**  
If two neighbouring elements are in the wrong order → swap them.  
Har pass ke baad largest element end me aa jata hai (unsorted part se).

**Steps:**
- Traverse the array
- Compare adjacent elements
- If `a[j] > a[j+1]` → swap
- Repeat for all elements

---

### 🟢 Insertion Sort

**Idea:**  
Elements ko unki correct position par insert karo (like sorting cards 🃏)

**Steps:**
- Store current element in a temporary variable  
  `temp = arr[i]`
- Create `j = i - 1`
- While:
  - `j >= 0`
  - and `arr[j] > temp`
- Shift elements:
  `arr[j + 1] = arr[j]`
- After loop ends:
  `arr[j + 1] = temp`
