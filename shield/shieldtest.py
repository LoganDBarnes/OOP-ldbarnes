import unittest

from shield import Shield

class ShieldTest(unittest.TestCase):
    def testDefaultShield(self):
        style : str = "round"
        material : str = "vibranium"
        weight : int = 12
        color : str = "color"

        shield : Shield = Shield(style, material, weight, color)
        self.assertEqual(shield.style,style)
        self.assertEqual(shield.material,material)
        self.assertEqual(shield.weight,weight)
        self.assertEqual(shield.color,color)
        
if __name__ == '__main__':
    unittest.main()