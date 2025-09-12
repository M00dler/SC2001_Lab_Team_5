# SC2001_Lab_Team_5

This guide will walk you through setting up a Python virtual environment for this project and using basic Git commands to collaborate with others.

---

## 1. Setting up a Python Virtual Environment

### Create a virtual environment

```bash
# On Linux / Mac
python3 -m venv venv

# On Windows
python -m venv venv

# On Linux / Mac
source venv/bin/activate

# On Windows (Command Prompt)
venv\Scripts\activate

# On Windows (PowerShell)
venv\Scripts\Activate.ps1

# To install all packages
pip install -r requirements.txt

# To deactivate environment
deactivate
```

## 2. Basic Git Commands

```bash
# To clone window
git clone <repository-url>
cd <repository-name>

# Pull latest changes
git pull origin main

# Make new branch
git branch <branch-name>
git checkout -b <branch-name>
# or
git switch -c <branch-name>

# Add changes
git add .

# Commit changes
git commit -m "Your descriptive commit message"

# Push changes
git push origin main
```
