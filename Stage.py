import time

class ProcessingPipeline:
    def __init__(self, initial_data):
        self.data = initial_data
        self.current_stage = 0

    def stage_one_extract(self):
        """Stage 1: Clean and extract raw information."""
        print("[Stage 1] Extracting data...")
        time.sleep(0.5)
        self.data = [item.strip().lower() for item in self.data]
        self.current_stage = 1

    def stage_two_transform(self):
        """Stage 2: Filter out unwanted elements."""
        print("[Stage 2] Transforming data...")
        time.sleep(0.5)
        # Keep only elements with letters
        self.data = [item for item in self.data if item.isalpha()]
        self.current_stage = 2

    def stage_three_load(self):
        """Stage 3: Format final payload."""
        print("[Stage 3] Loading final output...")
        time.sleep(0.5)
        self.data = ", ".join(self.data)
        self.current_stage = 3

    def run_all_stages(self):
        """Executes the complete lifecycle step-by-step."""
        print(f"Starting pipeline with input: {self.data}\n" + "-"*40)
        
        self.stage_one_extract()
        print(f"Result: {self.data}\n")
        
        self.stage_two_transform()
        print(f"Result: {self.data}\n")
        
        self.stage_three_load()
        print(f"Result: {self.data}\n" + "-"*40)
        print("Pipeline successfully finished!")

# --- Execution ---
raw_inputs = ["  Python ", " 12345 ", " STAGE ", " Code! "]
pipeline = ProcessingPipeline(raw_inputs)
pipeline.run_all_stages()
