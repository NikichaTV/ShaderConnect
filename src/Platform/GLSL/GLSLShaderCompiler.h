//
// Created by Nikolay Kanchevski on 26.12.23.
//

#pragma once

#include "../../ShaderCompiler.h"

namespace ShaderConnect
{

    enum class GLSLTargetPlatform : bool
    {
        GLSL,
        ESSL
    };


    class GLSLShaderCompiler final : public ShaderCompiler
    {
    public:
        /* --- CONSTRUCTORS --- */
        inline explicit GLSLShaderCompiler(const GLSLTargetPlatform targetPlatform) : targetPlatform(targetPlatform) { }

        /* --- POLLING METHODS --- */
        std::filesystem::path CompileShader(const std::vector<uint32> &spirvBuffer, const std::filesystem::path &outputShaderDirectory);

        /* --- DESTRUCTOR --- */
        ~GLSLShaderCompiler() = default;

    private:
        GLSLTargetPlatform targetPlatform = GLSLTargetPlatform::GLSL;

    };

}
