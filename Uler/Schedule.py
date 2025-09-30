class Schedule:
    def __init__(self, day: str, time: str, room: str):
        self.day = day
        self.time = time
        self.room = room

    #fungsi print schedule
    def print_schedule(self):
        print(f"- {self.day} at {self.time} (Room: {self.room})")