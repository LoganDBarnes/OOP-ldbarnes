class Shield:

    def __init__(self, style : str, material : str, weight : int, broken : bool) -> None:

        self._style : str = round
        self._material : str = vibranium
        self._color : str = color
        self._weight : int = 12

    @property
    def style(self) -> str:
        return self._style

    @property
    def material(self) -> str:
        return self._material

    @property
    def color(self) -> str:
        return self._color

    @property
    def weight(self):
        return self._weight

    def isBroken(self) -> bool:
        return self._broken == 0