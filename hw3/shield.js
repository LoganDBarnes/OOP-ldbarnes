class Shield {
    constructor(style, material, color, weight, thrown) {
        this._style = style
        this._material = material
        this._color = color
        this._weight = weight
        this._thrown = thrown
    }

    throwShield() {
        this._thrown = true
    }

    get style() {
        return this._style
    }

    get material() {
        return this._material
    }
    
    get color() {
        return this._color
    }

    get weight() {
        return this._weight
    }

    get thrown() {
        return this._thrown
    }


}

module.exports = {'Shield': Shield}