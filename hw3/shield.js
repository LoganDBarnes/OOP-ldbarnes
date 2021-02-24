class Shield {
    constructor(style, material, color, weight, thrown) {
        this.style = 'style'
        this.material = 'material'
        this.color = 'color'
        this.weight = 0
        this.thrown = false
    }

    throwShield() {
        this.thrown = true
    }

    get style() {
        return this.style
    }

    get material() {
        return this.material
    }
    
    get color() {
        return this.color
    }

    get weight() {
        return this.weight
    }

    get thrown() {
        return this.thrown
    }
}
