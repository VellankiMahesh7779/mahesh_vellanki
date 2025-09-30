# 🚀 GitHub Collaboration with SSH + Branch Workflow

## 🔑 Step 1: Set up SSH (one-time setup)
This avoids entering username/password every time.

```bash
# Generate SSH Key
ssh-keygen -t ed25519 -C "your_email@example.com"
# (Press Enter for defaults)

# Start SSH agent & add your key
eval "$(ssh-agent -s)"
ssh-add ~/.ssh/id_ed25519

# Copy your public key
cat ~/.ssh/id_ed25519.pub
```

👉 Copy the whole output (starts with `ssh-ed25519...`).  

**Add to GitHub:**  
- Go to GitHub → **SSH Keys**  
- Click **New SSH Key** → Paste the key → Save.  

**Clone with SSH:**
```bash
git clone git@github.com:VellankiMahesh7779/mahesh_vellanki.git
```

✅ Done → No passwords/tokens needed anymore!  

---

## 🌱 Step 2: Work with Remote Branches
When your friend wants to create/access branches:

```bash
# Fetch all branches
git fetch origin

# See available remote branches
git branch -r
```

**Example:**
```
origin/main
origin/dev
origin/feature/new-ui
```

Check out a remote branch locally:
```bash
git checkout -b dev origin/dev
```

This creates a local branch `dev` that tracks the remote `origin/dev`.

Verify tracking:
```bash
git branch -vv
```

**Example output:**
```
* dev   abc1234 [origin/dev] latest commit message
```

---

## 📝 Step 3: Push Your Own Branch
If your friend creates a new branch and pushes it to your repo:

```bash
# Create and switch to a new branch
git checkout -b vellanki557

# Do changes → commit them
git add .
git commit -m "Added new feature"

# Push to your GitHub repo
git push origin vellanki557
```

Or if already on the branch:
```bash
git push origin HEAD:vellanki557
```

---

## ⚡ Bonus: Compile & Run C++ (your example)

```bash
g++ c++.cpp -o c++
./c++
```

---

## ✅ Summary
- Use SSH once → no passwords.  
- Your friend can create feature branches in your repo.  
- Push their branch → then merge into `main` via Pull Request (PR).  
