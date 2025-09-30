class Person:
    def __init__(self, name: str):
        self.name = name

    # Setter
    def set_name(self, name: str):
        self.name = name

    # Getter
    def get_name(self) -> str:
        return self.name