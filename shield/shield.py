class Shield:

    def __init__(self, style : str, material : str, weight : int, color: str) -> None:

        self._style : str = style
        self._material : str = material
        self._color : str = color
        self._weight : int = weight

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