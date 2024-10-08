<details align = "center">
  <summary><h2>How to edit/amend commits local commits?</h2></summary>

**To amend commits, you can use an interactive rebase. This allows you to go back to the commit you want to change, make the necessary changes, and then continue the rebase process.**

### Step-by-Step Guide to Amending the Second Last Commit

1. **Start an Interactive Rebase:**
   Begin by starting an interactive rebase up to the commit before the one you want to amend.

    _For example, if you want to amend the second last commit, you would rebase the last 3 commits_ `(the commit you want to change, the one after it, and the current commit)`:

    ```bash
    git rebase -i HEAD~3
    ```

2. **Modify the Commit:**
   An editor will open with a list of commits. You will see something like this:

    ```
    pick <commit-hash-1> Commit message of the third last commit
    pick <commit-hash-2> Commit message of the second last commit
    pick <commit-hash-3> Commit message of the last commit
    ```

    Change the `pick` command to `edit` for the commit you want to amend `(the second last commit in this case)`:

    ```
    pick <commit-hash-1> Commit message of the third last commit
    edit <commit-hash-2> Commit message of the second last commit
    pick <commit-hash-3> Commit message of the last commit
    ```

3. **Save and Close the Editor:**
   Save and close the editor by `ESC` and `:wq` and hit `Enter`. Git will stop at the commit you marked as `edit`.

4. **Make Your Changes:**
   Make the necessary changes to your files. You can edit files, add new files, or remove files as needed.

5. **Stage Your Changes:**
   After making your changes, stage them using `git add`:

    ```bash
    git add <file-path>
    ```

    You can also use `git add .` to stage all changes.

6. **Amend the Commit:**
   Amend the commit using `--amend`:

    ```bash
    git commit --amend
    ```

    This will open your default text editor to modify the commit message if needed. Save and close the editor to complete the amend.

7. **Continue the Rebase:**
   Continue the rebase process:

    ```bash
    git rebase --continue
    ```

    Git will reapply the remaining commits. If there are no conflicts, the rebase will complete successfully.

8. **Finish the Rebase:**
   If you encounter conflicts, resolve them, stage the resolved files, and run `git rebase --continue` again. Repeat until the rebase is finished.

By following these steps, you can successfully amend commits.
If you need to do this using SSH, you can connect to your remote machine via SSH and run these commands just as you would on your local machine.

</details>
