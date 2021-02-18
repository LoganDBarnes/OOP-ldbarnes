class Shield {
    constructor(style, material, color, weight, thrown) {
        this.style = 'style'
        this.material = 'material'
        this.color = 'color'
        this.weight = 0
        this.thrown = False
    }

    inHand() {
        return this.thrown == False
    }

    throwShield() {
        this.thrown = True
    }

    get style() {
        return this.style
    }

    get material() {
        return this.color
    }
    
    get color() {
        return this.color
    }

    get weight() {
        return this.color
    }

    get thrown() {
        return this.thrown
    }
}
