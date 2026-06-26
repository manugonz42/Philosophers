# 🍝 Philosophers

> Dining philosophers — threads & mutexes in C

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![42 Project](https://img.shields.io/badge/42-Project-000000?style=for-the-badge)
![Threads](https://img.shields.io/badge/Threads-Concurrency-blue?style=for-the-badge)

---

## 🎯 About

Philosophers is a 42 school project that implements the classic **Dining Philosophers Problem**. This project teaches fundamental concepts of:

- **Threads** — Creating and managing concurrent execution
- **Mutexes** — Synchronizing access to shared resources
- **Race conditions** — Understanding and preventing data races
- **Deadlocks** — Avoiding circular waiting conditions
- **Process synchronization** — Coordinating multiple processes

---

## 📋 The Problem

Five philosophers sit around a circular table. Each philosopher alternates between **thinking** and **eating**. Between each philosopher, there is a shared fork. To eat, a philosopher needs **two forks** (left and right).

### Rules:
1. Each philosopher must **pick up** both forks to eat
2. Forks are **shared** between adjacent philosophers
3. Philosophers must **not starve**
4. No **deadlock** should occur

---

## ✨ Features

- 🧵 **Thread-based implementation** — Each philosopher is a thread
- 🔒 **Mutex synchronization** — Protecting shared forks
- ⏱️ **Time management** — Configurable timing parameters
- 📊 **Status display** — Real-time philosopher status
- 🚫 **Deadlock prevention** — Algorithm to avoid deadlocks
- 💀 **Death detection** — Detecting philosopher death

---

## 🛠 Requirements

- C compiler (gcc or clang)
- Make
- pthread library

---

## ▶️ Usage

1. Clone the repository:
   ```bash
   git clone https://github.com/manugonz42/Philosophers.git
   cd Philosophers
   ```

2. Compile the project:
   ```bash
   make
   ```

3. Run the simulation:
   ```bash
   ./philo [number_of_philosophers] [time_to_die] [time_to_eat] [time_to_sleep] [number_of_times_each_philosopher_must_eat]
   ```

### Parameters:
| Parameter | Description |
|-----------|-------------|
| `number_of_philosophers` | Total number of philosophers |
| `time_to_die` | Time (ms) a philosopher can go without eating |
| `time_to_eat` | Time (ms) it takes to eat |
| `time_to_sleep` | Time (ms) a philosopher sleeps |
| `number_of_times_each_philosopher_must_eat` | (Optional) Stop when all have eaten this many times |

---

## 📚 Examples

```bash
# 5 philosophers, 800ms to die, 200ms to eat, 200ms to sleep
./philo 5 800 200 200

# 4 philosophers, 410ms to die, 200ms to eat, 200ms to sleep, each must eat 7 times
./philo 4 410 200 200 7

# 1 philosopher (should die)
./philo 1 800 200 200
```

---

## 🔧 Algorithm

The solution uses a **mutex-based approach**:

1. Each fork is protected by a mutex
2. Philosophers pick up forks in a specific order to avoid deadlock
3. A monitor thread checks for philosopher death
4. Time management ensures proper eating/sleeping cycles

---

## 📚 Resources

- [Dining Philosophers Problem](https://en.wikipedia.org/wiki/Dining_philosophers_problem)
- [POSIX Threads](https://en.wikipedia.org/wiki/POSIX_Threads)
- [42 Project Subject](https://projects.intra.42.fr/)

---

## 🤝 Contributing

Contributions are welcome! Please read our [Contributing Guide](CONTRIBUTING.md) for details.

---

## 📄 License

This project is part of 42 School curriculum.

---

## 📫 Contact

Manuel González - [LinkedIn](https://linkedin.com/in/manugonz42) - manuel.gonzalez@example.com

Project Link: [https://github.com/manugonz42/Philosophers](https://github.com/manugonz42/Philosophers)
