import unittest

from libpy_dynamic_graph_tutorial import InvertedPendulum

class TestInvertedPendulum(unittest.TestCase):
    def test_inverted_pendulum(self):
        name = 'test IP'
        pendule = InvertedPendulum(name)

        self.assertEqual(pendule.name, name)

if __name__ == '__main__':
    unittest.main()

