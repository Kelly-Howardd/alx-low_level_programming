#!/bin/bash

# Define your GitHub repository URL and your GitHub token (replace with your own values)
#REPO_URL="https://github.com/yourusername/yourrepository.git"
#GITHUB_TOKEN="yourgithubtoken"

# Change to the directory where you want to perform the operations
#cd /path/to/your/directory

# List files in the current directory and store them in an array
file_array=($(ls))

# Start a timer for 45 minutes
end_time=$((SECONDS + 300)) # 300 seconds = 5 minutes

while [ $SECONDS -lt $end_time ]; do
    # Select a random file from the array
    random_index=$((RANDOM % ${#file_array[@]}))
    selected_file="${file_array[random_index]}"
    
    # Commit and push the selected file to GitHub with a unique commit message
    git add "$selected_file"
    git commit -m "Pushing $selected_file"
    git push
    
    # Remove the selected file from the array to avoid duplicates
    unset "file_array[random_index]"
    file_array=("${file_array[@]}")
    
    # Sleep for a random interval between 30 and 120 seconds
    sleep_duration=$((RANDOM % 8 + 5))
    sleep $sleep_duration
done

# End of the script
echo "Script completed after 5 minutes."

