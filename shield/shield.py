class Shield:

    def __init__(self, style : str, material : str, weight : int, color: str, thrown: bool) -> None:
        self._style : str = style
        self._material : str = material
        self._weight : int = weight
        self._color : str = color
        self._thrown : bool = thrown

    @property
    def style(self) -> str:
        return self._style

    @property
    def material(self) -> str:
        return self._material

    @property
    def weight(self):
        return self._weight

    @property
    def color(self) -> str:
        return self._color

    @property
    def thrown(self) -> str:
        return self._thrown

    def throw(self) -> None:
        self._thrown = (self._thrown == 1)