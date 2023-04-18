import multiprocessing
import time


FRLegForw", "FRLegUp", "RLLegForw
FLLegForw", "FLLegUp", "RRLegForw
# Define a function to open an output
def open_output(output_name):
    print(f"Opening output: {output_name}")
    # Replace this with your own code to open the output
    time.sleep(2) # Sleep for 2 seconds to simulate work being done
    print(f"Closing output: {output_name}")

# Create a list of output names
outputs1 = ["FRLegForw", "FRLegUp", "RLLegForw"]

# Create three separate processes to open the outputs concurrently
processes = []

for output_name in outputs1:
    open_output(output_name)

# Wait for 5 seconds
time.sleep(5)

# Open the other three outputs after the delay
outputs2 = ["FLLegForw", "FLLegUp", "RRLegForw"]

processes2 = []

for output_name in outputs2:
    open_output(output_name)

print('finish')
