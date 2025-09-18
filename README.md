# 📖 Simple OOP Library Management System  

A **console-based C++ Library Management System** designed for beginners to learn the basics of **Object-Oriented Programming (OOP)**.  
Manage books, search, borrow, and return them — all from a simple interactive menu. 🚀  

---

## ✨ Features
✅ **Add Books** – Store books with title & author.  
✅ **Display Books** – View all available and borrowed books.  
✅ **Search** – Find books by title.  
✅ **Borrow & Return** – Borrow a book if available, return it later.  
✅ **Availability Tracking** – Each book keeps track of its own status.  

---

## 🛠️ Tech Highlights
- **Language**: C++  
- **Data Structure**: `std::vector` (dynamic array for books)  
- **OOP Principles Used**:
  - `Class` & `Objects`  
  - `Attributes` (title, author, availability)  
  - `Methods` (borrow, return, display)  
  - **Encapsulation** – private data, public methods  

---

## 🎯 OOP Concepts in Action
- **Class** → `Book`  
- **Object** → Each book added to the library  
- **Constructor** → Initializes book details  
- **Encapsulation** → Data (`title`, `author`, `available`) hidden, accessed by methods  
- **Methods** → `borrowBook()`, `returnBook()`, `display()`  

---

## ⚠️ Limitations
⚡ Books are identified **only by title** (no unique ID).  
⚡ Search is **case-sensitive** and requires exact matches.  
⚡ No data persistence (everything resets when program closes).  

---

## 🚀 Future Improvements
🌟 Add unique IDs for books  
🌟 Case-insensitive / partial search  
🌟 Save & load library data from files  
🌟 Add users & borrow history  
🌟 Build a GUI for a real desktop app  

---

## 📸 Example Console Menu
```text
--- Library System ---
1. Add Book
2. Show All Books
3. Search Book
4. Borrow Book
5. Return Book
6. Exit
Enter choice:
