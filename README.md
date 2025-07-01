# 🤖 Line Follower Robot using Arduino

A smart line-following robot built with **Arduino UNO**, **IR sensors**, and an **L298N motor driver**. It autonomously follows a black line on a white surface using sensor feedback and motor control logic.

---

## 📌 Description

🔍 This robot detects and follows a black line using IR sensors and adjusts its direction with motor drivers. It's a basic but essential project in embedded systems and robotics for learning automation and control.

---

## 🧠 How It Works

- 👀 **IR sensors** detect black vs white surfaces.
- 🧠 **Arduino UNO** processes sensor inputs.
- ⚙️ **Motor Driver (L298N)** drives the motors based on logic.
- 🔋 A **battery pack** powers the entire system.

---

## 🔧 Circuit Diagram

> *(Upload and link your circuit image here)*

![Circuit Diagram](images/circuit-diagram.png)

---

## 📽️ Robot in Action – Demo

> *(Replace with your link — YouTube or Google Drive)*

🎬 [Click to watch the robot in action](https://your-video-link.com)

---

## ⚙️ Components Used

| 🔩 Component         | 🔢 Quantity |
|---------------------|-------------|
| Arduino UNO         | 1           |
| IR Sensor Module    | 2–5         |
| L298N Motor Driver  | 1           |
| DC Motors           | 2           |
| Robot Chassis       | 1           |
| Wheels              | 2           |
| Battery (9V/12V)    | 1           |
| Jumper Wires        | As needed   |

---

## 🛠️ Getting Started

### 📥 Uploading the Code

1. Open `line_follower.ino` in **Arduino IDE**
2. Connect your Arduino via USB
3. Select the correct **Board** and **Port**
4. Click ✅ **Upload**
5. Power your robot and place it on a line

---

## 📥 Pushing Changes

If you encounter the error message:

```
error: failed to push some refs to 'https://github.com/simply-kk/line-follower-robot.git'
hint: Updates were rejected because the remote contains work that you do not
hint: have locally. This is usually caused by another repository pushing to 
hint: the same ref. If you want to integrate the remote changes, use        
hint: 'git pull' before pushing again.
```

Follow these steps to fix:

1. **Pull the latest changes from GitHub and reapply your changes:**
   ```sh
   git pull --rebase
   ```
   - This will fetch and apply the remote changes, then reapply your local commits on top.

2. **Push your changes again:**
   ```sh
   git push
   ```

---

## **Step-by-step:**

1. Open your terminal in the project directory.
2. Run:
   ```
   git pull --rebase
   ```
   - If there are any conflicts, Git will tell you and you'll need to resolve them.
   - After resolving any conflicts, run:
     ```
     git rebase --continue
     ```
3. Once the pull/rebase is complete, push your changes:
   ```
   git push
   ```

---

Would you like me to run these commands for you, or do you want to try them yourself? If you see any conflicts or errors during the process, just let me know and I'll help you resolve them!
