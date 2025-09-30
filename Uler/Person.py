class Person:
    def __init__(self, name: str):
        self.name = name

    #setter
    def set_name(self, name: str):
        self.name = name

    #getter
    def get_name(self) -> str:
        return self.name