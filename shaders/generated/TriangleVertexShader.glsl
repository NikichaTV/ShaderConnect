#version 450

const vec2 _19[3] = vec2[](vec2(-0.5), vec2(0.5, -0.5), vec2(0.0, 0.5));
const vec3 _28[3] = vec3[](vec3(1.0, 0.0, 0.0), vec3(0.0, 1.0, 0.0), vec3(0.0, 0.0, 1.0));

layout(location = 0) out vec3 _49;

void main()
{
    gl_Position = vec4(_19[gl_VertexID], 0.0, 1.0);
    _49 = _28[gl_VertexID];
}