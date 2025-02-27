import os
import subprocess

def get_modified_files():
    """ Get the list of modified files in the CSES directory """
    result = subprocess.run(["git", "status", "--porcelain"], capture_output=True, text=True)
    modified_files = [line.split()[-1] for line in result.stdout.splitlines() if line.startswith(" M ")]
    return modified_files

def commit_and_push():
    modified_files = get_modified_files()
    
    if not modified_files:
        print("No modified files to commit.")
        return
    
    for file in modified_files:
        subprocess.run(["git", "add", file])
        commit_message = f"Solved: {os.path.basename(file)}"
        subprocess.run(["git", "commit", "-m", commit_message])
    
    subprocess.run(["git", "push", "origin", "main"])  # Change branch name if needed
    print("Changes committed and pushed successfully!")

if __name__ == "__main__":
    commit_and_push()