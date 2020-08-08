// Set the pixel color to an interesting procedural color generated by mixing
// and filtering Perlin noise of different frequencies.
//
// Uniforms:
uniform mat4 view;
uniform mat4 proj;
uniform float animation_seconds;
uniform bool is_moon;
// Inputs:
in vec3 sphere_fs_in;
in vec3 normal_fs_in;
in vec4 pos_fs_in; 
in vec4 view_pos_fs_in; 
// Outputs:
out vec3 color;

// expects: blinn_phong, perlin_noise
void main()
{
  /////////////////////////////////////////////////////////////////////////////
  // Replace with your code 
  float theta = M_PI  * animation_seconds / 4;
  vec4 temp = view * vec4(-4 * sin(theta), 2, 4 * cos(theta), 1);
  vec3 v = -normalize(view_pos_fs_in.xyz / view_pos_fs_in.w);
  vec3 l = normalize(temp.xyz / temp.w - view_pos_fs_in.xyz / view_pos_fs_in.w);
  vec3 n = normalize(normal_fs_in);
  float p = 1000;
  
  vec3 ka = vec3(0.05,0.05,0.05);
  vec3 ks = vec3(1,1,1);
  float noise = fract((perlin_noise(sphere_fs_in) + 1) * 10) * 5;

  if (is_moon) {
    vec3 kd = vec3(0.5, 0.5, 0.5) * noise;
    color = blinn_phong(ka, kd, ks, p, n, v, l);
  }
  else {
    vec3 kd = vec3(0.1, 0.16, 0.6) * noise;
    color = blinn_phong(ka, kd, ks, p, n, v, l);
  }
  /////////////////////////////////////////////////////////////////////////////
}