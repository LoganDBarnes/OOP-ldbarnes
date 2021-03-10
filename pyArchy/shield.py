class Armor:
    def __init__(self, material : str,  defense: int) :
        self._material = material
        self._defense = defense

    @property
    def material(self) -> str:
        return self._material

    @property
    def defense(self):
        return self._defense


class Shield(Armor):
    def __init__(self, material : str,  defense: int, 
        style : str, color : int, weight: str, thrown: bool) -> None:
        
        Armor.__init__(self, material, defense)

        self._style : str = style
        self._color : str = color
        self._weight : int = weight
        self._thrown : bool = thrown

    @property
    def style(self) -> str:
        return self._style

    @property
    def color(self) -> str:
        return self._color

    @property
    def weight(self):
        return self._weight

    @property
    def thrown(self) -> str:
        return self._thrown

    def throw(self) -> None:
        self._thrown = True