# HTML Form Input Notes

## 🔹 input attributes

### 1. type
Defines input type  
Examples:
- text
- email
- password
- number  

---

### 2. name
- Backend ko data bhejne ke liye use hota hai  
- Acts as **key** in form submission  

Example:
name="userEmail"  
➡️ backend: userEmail = value  

---

### 3. id
- Unique identifier  
- Used to connect with label  

---

### 4. value
- Default value set karta hai  

Example:
value="Aman"

👉 Agar value nahi diya:
- User jo likhega wahi value jayegi  
- Agar user kuch nahi likhe → empty string ("")  

---

### 5. placeholder
- Input ke andar hint text  

Example:
placeholder="Enter your email"

---

### 6. required
- Field compulsory bana deta hai  

---

## 🔹 label and for

### for attribute
- label ko input se connect karta hai  
- for = input ka id  

Example:
<label for="email">Email</label>  
<input id="email">

👉 Label pe click → input focus  

---

## 🔹 Important Difference

| Attribute | Use |
|----------|-----|
| id | frontend (label connection) |
| name | backend (data send) |

---

## 🔥 Example

```html
<label for="email">Email</label>
<input 
  type="email"
  id="email"
  name="userEmail"
  placeholder="Enter email"
  required
>

