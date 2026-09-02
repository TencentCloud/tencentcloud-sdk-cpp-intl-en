/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SUBMITHUNYUAN3DTASKREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SUBMITHUNYUAN3DTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ViewImage.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * SubmitHunyuan3DTask request structure.
                */
                class SubmitHunyuan3DTaskRequest : public AbstractModel
                {
                public:
                    SubmitHunyuan3DTaskRequest();
                    ~SubmitHunyuan3DTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Prompt for text-to-3D</p><p>Input limit: up to 1024 utf-8 characters</p>
                     * @return Prompt <p>Prompt for text-to-3D</p><p>Input limit: up to 1024 utf-8 characters</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>Prompt for text-to-3D</p><p>Input limit: up to 1024 utf-8 characters</p>
                     * @param _prompt <p>Prompt for text-to-3D</p><p>Input limit: up to 1024 utf-8 characters</p>
                     * 
                     */
                    void SetPrompt(const std::string& _prompt);

                    /**
                     * 判断参数 Prompt 是否已赋值
                     * @return Prompt 是否已赋值
                     * 
                     */
                    bool PromptHasBeenSet() const;

                    /**
                     * 获取<p>Image URL (http/https) for image-to-3D</p>
                     * @return ImageUrl <p>Image URL (http/https) for image-to-3D</p>
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置<p>Image URL (http/https) for image-to-3D</p>
                     * @param _imageUrl <p>Image URL (http/https) for image-to-3D</p>
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取<p>Generate 3D from multi-perspective images. At least 2 images are required, and a front view must be included.</p>
                     * @return MultiViewImages <p>Generate 3D from multi-perspective images. At least 2 images are required, and a front view must be included.</p>
                     * 
                     */
                    std::vector<ViewImage> GetMultiViewImages() const;

                    /**
                     * 设置<p>Generate 3D from multi-perspective images. At least 2 images are required, and a front view must be included.</p>
                     * @param _multiViewImages <p>Generate 3D from multi-perspective images. At least 2 images are required, and a front view must be included.</p>
                     * 
                     */
                    void SetMultiViewImages(const std::vector<ViewImage>& _multiViewImages);

                    /**
                     * 判断参数 MultiViewImages 是否已赋值
                     * @return MultiViewImages 是否已赋值
                     * 
                     */
                    bool MultiViewImagesHasBeenSet() const;

                    /**
                     * 获取<p>Generation Type</p><p>Enumeration values:</p><ul><li>Normal: Generate a complete 3D asset (geometry + texture)</li><li>Geometry: Generate only the geometry (no texture, faster output speed)</li><li>Texture: Generate only the texture (MeshUrl is required)</li></ul><p>Default value: Normal</p>
                     * @return GenerateType <p>Generation Type</p><p>Enumeration values:</p><ul><li>Normal: Generate a complete 3D asset (geometry + texture)</li><li>Geometry: Generate only the geometry (no texture, faster output speed)</li><li>Texture: Generate only the texture (MeshUrl is required)</li></ul><p>Default value: Normal</p>
                     * 
                     */
                    std::string GetGenerateType() const;

                    /**
                     * 设置<p>Generation Type</p><p>Enumeration values:</p><ul><li>Normal: Generate a complete 3D asset (geometry + texture)</li><li>Geometry: Generate only the geometry (no texture, faster output speed)</li><li>Texture: Generate only the texture (MeshUrl is required)</li></ul><p>Default value: Normal</p>
                     * @param _generateType <p>Generation Type</p><p>Enumeration values:</p><ul><li>Normal: Generate a complete 3D asset (geometry + texture)</li><li>Geometry: Generate only the geometry (no texture, faster output speed)</li><li>Texture: Generate only the texture (MeshUrl is required)</li></ul><p>Default value: Normal</p>
                     * 
                     */
                    void SetGenerateType(const std::string& _generateType);

                    /**
                     * 判断参数 GenerateType 是否已赋值
                     * @return GenerateType 是否已赋值
                     * 
                     */
                    bool GenerateTypeHasBeenSet() const;

                    /**
                     * 获取<p>URL of the existing 3D model (only .glb / .obj supported). If MeshUrl is passed, GenerateType=Texture is mandatory (texture scenario)</p>
                     * @return MeshUrl <p>URL of the existing 3D model (only .glb / .obj supported). If MeshUrl is passed, GenerateType=Texture is mandatory (texture scenario)</p>
                     * 
                     */
                    std::string GetMeshUrl() const;

                    /**
                     * 设置<p>URL of the existing 3D model (only .glb / .obj supported). If MeshUrl is passed, GenerateType=Texture is mandatory (texture scenario)</p>
                     * @param _meshUrl <p>URL of the existing 3D model (only .glb / .obj supported). If MeshUrl is passed, GenerateType=Texture is mandatory (texture scenario)</p>
                     * 
                     */
                    void SetMeshUrl(const std::string& _meshUrl);

                    /**
                     * 判断参数 MeshUrl 是否已赋值
                     * @return MeshUrl 是否已赋值
                     * 
                     */
                    bool MeshUrlHasBeenSet() const;

                    /**
                     * 获取<p>Whether to output the PBR material</p><p>Default value: false</p>
                     * @return EnablePBR <p>Whether to output the PBR material</p><p>Default value: false</p>
                     * 
                     */
                    bool GetEnablePBR() const;

                    /**
                     * 设置<p>Whether to output the PBR material</p><p>Default value: false</p>
                     * @param _enablePBR <p>Whether to output the PBR material</p><p>Default value: false</p>
                     * 
                     */
                    void SetEnablePBR(const bool& _enablePBR);

                    /**
                     * 判断参数 EnablePBR 是否已赋值
                     * @return EnablePBR 是否已赋值
                     * 
                     */
                    bool EnablePBRHasBeenSet() const;

                    /**
                     * 获取<p>Patch count in the range of [3000, 1500000]. This parameter takes effect only for the Normal/Geometry branch.</p><p>Parameter value range: [3000, 1500000]</p><p>Default value: 500000</p>
                     * @return FaceCount <p>Patch count in the range of [3000, 1500000]. This parameter takes effect only for the Normal/Geometry branch.</p><p>Parameter value range: [3000, 1500000]</p><p>Default value: 500000</p>
                     * 
                     */
                    uint64_t GetFaceCount() const;

                    /**
                     * 设置<p>Patch count in the range of [3000, 1500000]. This parameter takes effect only for the Normal/Geometry branch.</p><p>Parameter value range: [3000, 1500000]</p><p>Default value: 500000</p>
                     * @param _faceCount <p>Patch count in the range of [3000, 1500000]. This parameter takes effect only for the Normal/Geometry branch.</p><p>Parameter value range: [3000, 1500000]</p><p>Default value: 500000</p>
                     * 
                     */
                    void SetFaceCount(const uint64_t& _faceCount);

                    /**
                     * 判断参数 FaceCount 是否已赋值
                     * @return FaceCount 是否已赋值
                     * 
                     */
                    bool FaceCountHasBeenSet() const;

                    /**
                     * 获取<p>Reserve UV unfolding or not</p><p>Default value: false</p>
                     * @return KeepUV <p>Reserve UV unfolding or not</p><p>Default value: false</p>
                     * 
                     */
                    bool GetKeepUV() const;

                    /**
                     * 设置<p>Reserve UV unfolding or not</p><p>Default value: false</p>
                     * @param _keepUV <p>Reserve UV unfolding or not</p><p>Default value: false</p>
                     * 
                     */
                    void SetKeepUV(const bool& _keepUV);

                    /**
                     * 判断参数 KeepUV 是否已赋值
                     * @return KeepUV 是否已赋值
                     * 
                     */
                    bool KeepUVHasBeenSet() const;

                    /**
                     * 获取<p>A format attached to the output in addition to the default obj + glb. Currently only support FBX</p>
                     * @return ResultFormat <p>A format attached to the output in addition to the default obj + glb. Currently only support FBX</p>
                     * 
                     */
                    std::string GetResultFormat() const;

                    /**
                     * 设置<p>A format attached to the output in addition to the default obj + glb. Currently only support FBX</p>
                     * @param _resultFormat <p>A format attached to the output in addition to the default obj + glb. Currently only support FBX</p>
                     * 
                     */
                    void SetResultFormat(const std::string& _resultFormat);

                    /**
                     * 判断参数 ResultFormat 是否已赋值
                     * @return ResultFormat 是否已赋值
                     * 
                     */
                    bool ResultFormatHasBeenSet() const;

                    /**
                     * 获取<p>Random Seed. The result can be reproduced with identical Seed input.</p>
                     * @return Seed <p>Random Seed. The result can be reproduced with identical Seed input.</p>
                     * 
                     */
                    uint64_t GetSeed() const;

                    /**
                     * 设置<p>Random Seed. The result can be reproduced with identical Seed input.</p>
                     * @param _seed <p>Random Seed. The result can be reproduced with identical Seed input.</p>
                     * 
                     */
                    void SetSeed(const uint64_t& _seed);

                    /**
                     * 判断参数 Seed 是否已赋值
                     * @return Seed 是否已赋值
                     * 
                     */
                    bool SeedHasBeenSet() const;

                    /**
                     * 获取<p>Style control words</p>
                     * @return Style <p>Style control words</p>
                     * 
                     */
                    std::string GetStyle() const;

                    /**
                     * 设置<p>Style control words</p>
                     * @param _style <p>Style control words</p>
                     * 
                     */
                    void SetStyle(const std::string& _style);

                    /**
                     * 判断参数 Style 是否已赋值
                     * @return Style 是否已赋值
                     * 
                     */
                    bool StyleHasBeenSet() const;

                private:

                    /**
                     * <p>Prompt for text-to-3D</p><p>Input limit: up to 1024 utf-8 characters</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>Image URL (http/https) for image-to-3D</p>
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * <p>Generate 3D from multi-perspective images. At least 2 images are required, and a front view must be included.</p>
                     */
                    std::vector<ViewImage> m_multiViewImages;
                    bool m_multiViewImagesHasBeenSet;

                    /**
                     * <p>Generation Type</p><p>Enumeration values:</p><ul><li>Normal: Generate a complete 3D asset (geometry + texture)</li><li>Geometry: Generate only the geometry (no texture, faster output speed)</li><li>Texture: Generate only the texture (MeshUrl is required)</li></ul><p>Default value: Normal</p>
                     */
                    std::string m_generateType;
                    bool m_generateTypeHasBeenSet;

                    /**
                     * <p>URL of the existing 3D model (only .glb / .obj supported). If MeshUrl is passed, GenerateType=Texture is mandatory (texture scenario)</p>
                     */
                    std::string m_meshUrl;
                    bool m_meshUrlHasBeenSet;

                    /**
                     * <p>Whether to output the PBR material</p><p>Default value: false</p>
                     */
                    bool m_enablePBR;
                    bool m_enablePBRHasBeenSet;

                    /**
                     * <p>Patch count in the range of [3000, 1500000]. This parameter takes effect only for the Normal/Geometry branch.</p><p>Parameter value range: [3000, 1500000]</p><p>Default value: 500000</p>
                     */
                    uint64_t m_faceCount;
                    bool m_faceCountHasBeenSet;

                    /**
                     * <p>Reserve UV unfolding or not</p><p>Default value: false</p>
                     */
                    bool m_keepUV;
                    bool m_keepUVHasBeenSet;

                    /**
                     * <p>A format attached to the output in addition to the default obj + glb. Currently only support FBX</p>
                     */
                    std::string m_resultFormat;
                    bool m_resultFormatHasBeenSet;

                    /**
                     * <p>Random Seed. The result can be reproduced with identical Seed input.</p>
                     */
                    uint64_t m_seed;
                    bool m_seedHasBeenSet;

                    /**
                     * <p>Style control words</p>
                     */
                    std::string m_style;
                    bool m_styleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SUBMITHUNYUAN3DTASKREQUEST_H_
