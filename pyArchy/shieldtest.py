import unittest

from shield import Shield

class ShieldTest(unittest.TestCase):

    def testArmor(self):
        material : str = "steel"
        defense : float = 25.0
        armor : Shield = Shield(material, defense, "kite", "blue", 10, False)

        self.assertEqual(armor.material,material)
        self.assertEqual(armor.defense,defense)

    def testDefaultShield(self):
        material : str = "steel"
        defense : float = 25.0
        style : str = "round"
        color : str = "silver"
        weight : int = 10
        thrown : bool = False

        shield : Shield = Shield(material, defense, style, color, weight, False)
        self.assertEqual(shield.style,style)
        self.assertEqual(shield.color,color)
        self.assertEqual(shield.weight,weight)
        self.assertEqual(shield.thrown,thrown)

    def testThrow(self):
        material : str = "vibranium"
        defense : float = 100.0
        style : str = "round"
        color : str = "red, white, and blue"
        weight : int = 12
        thrown : bool = False

        shield : Shield = Shield(material, defense, style, color, weight, False)
        self.assertEqual(shield.style,style)
        self.assertEqual(shield.color,color)
        self.assertEqual(shield.weight,weight)
        self.assertEqual(shield.thrown,thrown)

        if shield.thrown == False:
            print("Captain America throws his mighty shield!")
        shield.throw()
        self.assertEqual(shield.thrown, True)
        
if __name__ == '__main__':
    unittest.main()