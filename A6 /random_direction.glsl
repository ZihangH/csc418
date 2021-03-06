// Generate a pseudorandom unit 3D vector
// 
// Inputs:
//   seed  3D seed
// Returns psuedorandom, unit 3D vector drawn from uniform distribution over
// the unit sphere (assuming random2 is uniform over [0,1]²).
//
// expects: random2.glsl, PI.glsl
vec3 random_direction( vec3 seed)
{
  /////////////////////////////////////////////////////////////////////////////
  // Replace with your code 
  vec2 temp = random2(seed);
  float phi = 2 * M_PI * temp.x;
  float theta = M_PI * temp.y;

  return normalize(vec3(sin(theta) * cos(phi), sin(theta) * sin(phi), cos(phi)));
  /////////////////////////////////////////////////////////////////////////////
}
