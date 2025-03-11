class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> result; // Stack to store remaining asteroids

        for (int i = 0; i < asteroids.size(); i++) {
            int ast = asteroids[i];

            // Process collision only if stack is not empty and there is a right-moving asteroid
            while (!result.empty() && result.back() > 0 && ast < 0) {
                if (result.back() < abs(ast)) {  
                    result.pop_back(); // Destroy the last asteroid
                    continue; // Check for further collisions
                } else if (result.back() == abs(ast)) {  
                    result.pop_back(); // Destroy both asteroids
                }
                ast = 0; // Current asteroid is destroyed
                break;
            }

            if (ast != 0) {
                result.push_back(ast); // Push the surviving asteroid
            }
        }

        return result;
    }
};
