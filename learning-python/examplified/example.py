import sys
import subprocess
from typing import Optional, Tuple

# Define type aliases for clarity
Command = str
Flag = Optional[str]
Value = Optional[int]

# Define a function to parse the command line arguments
def parse_args(args: list[str]) -> Tuple[Command, Flag]:
    if len(args) < 2:
        print("Error: Command is required")
        sys.exit(1)
    else:
        cmd = args[1]
        flag = args[2] if len(args) >= 3 else None
        return (cmd, flag)

# Define a function to execute a system command and read its output
def execute_command(cmd: Command, flag: Flag) -> str:
    try:
        # Execute the system command and read its output
        if flag:
            output = subprocess.check_output([cmd, flag], text=True)
        else:
            output = subprocess.check_output([cmd], text=True)
        return output
    except subprocess.CalledProcessError:
        return ""

# Define a function to evaluate the input
def evaluate_input(cmd: Command, flag: Flag) -> Value:
    output = execute_command(cmd, flag)
    if output:
        # Count the number of lines in the output (excluding the header)
        file_count = len(output.splitlines()) - 1
        return file_count
    else:
        return None

# Example usage
if __name__ == "__main__":
    args = sys.argv
    cmd, flag = parse_args(args)
    result = evaluate_input(cmd, flag)
    if result is not None:
        print("Result:", result)
    else:
        print("Error: Unable to evaluate input")
