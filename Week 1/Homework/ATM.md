# 🔥 تمرین اختیاری – شبیه‌ساز دستگاه خودپرداز (ATM)

## 🎯 هدف تمرین
طراحی یک سیستم ساده شبیه‌سازی ATM با استفاده از:
- `while`
- `if / else if / else`
- متغیرها
- شرط‌های منطقی

در این تمرین استفاده از تابع، آرایه و switch مجاز نیست.

---

## 🏧 سناریو (فارسی)

شما باید یک سیستم ساده ATM طراحی کنید.

### مشخصات برنامه:

1. موجودی اولیه حساب برابر با 1000 باشد.
2. برنامه به صورت مداوم منوی زیر را نمایش دهد:


نمایش موجودی

واریز وجه

برداشت وجه

خروج


3. بر اساس انتخاب کاربر:

### ✅ گزینه 1 – نمایش موجودی
موجودی فعلی نمایش داده شود.

### 💰 گزینه 2 – واریز وجه
- مبلغی از کاربر دریافت شود.
- به موجودی اضافه شود.
- موجودی جدید نمایش داده شود.

### 💸 گزینه 3 – برداشت وجه
- مبلغی از کاربر دریافت شود.
- اگر مبلغ بیشتر از موجودی بود → پیام "موجودی کافی نیست" نمایش داده شود.
- در غیر این صورت مبلغ کم شود.
- موجودی جدید نمایش داده شود.
- موجودی نباید منفی شود.

### 🚪 گزینه 4 – خروج
برنامه خاتمه یابد.

---

## ⚙️ الزامات فنی

- حتماً از حلقه `while` استفاده شود.
- تا زمانی که کاربر گزینه خروج را انتخاب نکرده برنامه ادامه داشته باشد.
- ورودی نامعتبر باید مدیریت شود.
- استفاده از `break` مجاز نیست.
- استفاده از `switch` مجاز نیست.
- استفاده از تابع مجاز نیست.
- استفاده از متغیر سراسری (global) مجاز نیست.

---

## ⭐ بخش پیشرفته (اختیاری برای دانشجویان قوی‌تر)

سیستم امنیتی اضافه کنید:

- قبل از نمایش منو، از کاربر یک PIN بگیرید (مثلاً 1234).
- کاربر فقط 3 بار فرصت وارد کردن PIN دارد.
- اگر سه بار اشتباه وارد کند، برنامه خاتمه یابد.

---

---

# 🔥 Optional Challenge – ATM Simulator

## 🎯 Objective
Design a simple ATM simulation system using:
- `while`
- `if / else if / else`
- variables
- logical conditions

Functions, arrays, and switch statements are NOT allowed.

---

## 🏧 Scenario (English)

You must design a simple ATM system.

### Program Requirements:

1. Initial account balance must be 1000.
2. The program must continuously display the following menu:


Check Balance

Deposit

Withdraw

Exit


3. Based on user selection:

### ✅ Option 1 – Check Balance
Display the current balance.

### 💰 Option 2 – Deposit
- Ask the user for an amount.
- Add it to the balance.
- Display the updated balance.

### 💸 Option 3 – Withdraw
- Ask for an amount.
- If the amount is greater than balance → display "Insufficient funds".
- Otherwise subtract the amount.
- Display updated balance.
- Balance must never become negative.

### 🚪 Option 4 – Exit
Terminate the program.

---

## ⚙️ Technical Requirements

- Must use a `while` loop.
- Program must continue until user selects Exit.
- Invalid input must be handled.
- `break` is NOT allowed.
- `switch` is NOT allowed.
- Functions are NOT allowed.
- No global variables.

---

## ⭐ Advanced Bonus

Add a security system:

- Ask for a PIN before showing the menu (e.g., 1234).
- Allow only 3 attempts.
- If the user fails 3 times, terminate the program.
