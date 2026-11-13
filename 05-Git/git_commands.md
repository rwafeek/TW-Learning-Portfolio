\# Git Commands Reference



\## 1. Configuration



```bash

git config --global user.name "Your Name"

git config --global user.email "your-email@example.com"

git config --list

```



These commands configure and display Git user details.



\## 2. Repository Creation



```bash

git init

```



Initialises a new Git repository.



```bash

git clone REPOSITORY\_URL

```



Copies an existing remote repository to the computer.



\## 3. Checking Repository Status



```bash

git status

```



Displays the current status of files.



```bash

git log

```



Displays commit history.



```bash

git log --oneline

```



Displays a short commit history.



\## 4. Staging and Committing



```bash

git add filename

```



Stages a particular file.



```bash

git add .

```



Stages all changes in the current directory.



```bash

git commit -m "Commit message"

```



Creates a commit with a message.



\## 5. Viewing Changes



```bash

git diff

```



Displays unstaged changes.



```bash

git diff --staged

```



Displays staged changes.



```bash

git show HEAD

```



Displays information about the latest commit.



\## 6. Branch Management



```bash

git branch

```



Lists branches.



```bash

git branch new-branch

```



Creates a branch.



```bash

git switch new-branch

```



Switches to a branch.



```bash

git merge new-branch

```



Merges another branch into the current branch.



```bash

git branch -d new-branch

```



Deletes a merged branch.



\## 7. Remote Repository Commands



```bash

git remote -v

```



Displays remote repository URLs.



```bash

git remote add origin REPOSITORY\_URL

```



Adds a remote repository.



```bash

git fetch origin

```



Downloads remote updates without merging them.



```bash

git pull origin main

```



Downloads and integrates remote changes.



```bash

git push origin main

```



Uploads local commits to the remote repository.



\## 8. Undoing Changes



```bash

git restore filename

```



Restores an unstaged file to its last committed state.



```bash

git revert HEAD

```



Creates a new commit that reverses the latest commit.



```bash

git reset --soft HEAD\~1

```



Moves the current branch back one commit while keeping changes staged.



\## 9. Stashing



```bash

git stash

```



Temporarily stores uncommitted changes.



```bash

git stash list

```



Displays saved stashes.



```bash

git stash pop

```



Applies and removes the latest stash.



\## 10. Tags and Help



```bash

git tag v1.0

```



Creates a tag.



```bash

git tag

```



Lists tags.



```bash

git help

```



Displays Git help.



\## Conclusion



These commands are useful for managing repositories, tracking changes, maintaining history and collaborating through remote repositories.

