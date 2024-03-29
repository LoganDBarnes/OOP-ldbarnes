import unittest

from shield import Shield

class ShieldTest(unittest.TestCase):
    def testDefaultShield(self):
        style : str = "round"
        material : str = "steel"
        weight : int = 10
        color : str = "silver"
        thrown : bool = False

        shield : Shield = Shield(style, material, weight, color, thrown)
        self.assertEqual(shield.style,style)
        self.assertEqual(shield.material,material)
        self.assertEqual(shield.weight,weight)
        self.assertEqual(shield.color,color)
        self.assertEqual(shield.thrown,thrown)

    def testThrow(self):
        style : str = "round"
        material : str = "vibranium"
        weight : int = 12
        color : str = "red, white, and blue"
        thrown : bool = False

        shield : Shield = Shield(style, material, weight, color, thrown)
        self.assertEqual(shield.style,style)
        self.assertEqual(shield.material,material)
        self.assertEqual(shield.weight,weight)
        self.assertEqual(shield.color,color)
        self.assertEqual(shield.thrown,thrown)

        if shield.thrown == False:
            print("Captain America throws his mighty shield!")
        shield.throw()
        self.assertEqual(shield.thrown, True)
        
if __name__ == '__main__':
    unittest.main()