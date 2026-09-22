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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCHUNYUAN3DTASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCHUNYUAN3DTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AigcHunyuan3DReferenceImageInfo.h>
#include <tencentcloud/vod/v20180717/model/AigcHunyuan3DMultiViewImageInfo.h>
#include <tencentcloud/vod/v20180717/model/AigcHunyuan3DMeshInfo.h>
#include <tencentcloud/vod/v20180717/model/AigcHunyuan3DOutputConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Input of the AIGC Hunyuan 3D task.
                */
                class AigcHunyuan3DTaskInput : public AbstractModel
                {
                public:
                    AigcHunyuan3DTaskInput();
                    ~AigcHunyuan3DTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Generate 3D reference image information.</p>
                     * @return ImageInfos <p>Generate 3D reference image information.</p>
                     * 
                     */
                    std::vector<AigcHunyuan3DReferenceImageInfo> GetImageInfos() const;

                    /**
                     * 设置<p>Generate 3D reference image information.</p>
                     * @param _imageInfos <p>Generate 3D reference image information.</p>
                     * 
                     */
                    void SetImageInfos(const std::vector<AigcHunyuan3DReferenceImageInfo>& _imageInfos);

                    /**
                     * 判断参数 ImageInfos 是否已赋值
                     * @return ImageInfos 是否已赋值
                     * 
                     */
                    bool ImageInfosHasBeenSet() const;

                    /**
                     * 获取<p>Multi-perspective image information used to generate a 3D model.</p><p>The array length must be between 2 and 8 and must contain the front perspective.</p>
                     * @return MultiViewImageInfos <p>Multi-perspective image information used to generate a 3D model.</p><p>The array length must be between 2 and 8 and must contain the front perspective.</p>
                     * 
                     */
                    std::vector<AigcHunyuan3DMultiViewImageInfo> GetMultiViewImageInfos() const;

                    /**
                     * 设置<p>Multi-perspective image information used to generate a 3D model.</p><p>The array length must be between 2 and 8 and must contain the front perspective.</p>
                     * @param _multiViewImageInfos <p>Multi-perspective image information used to generate a 3D model.</p><p>The array length must be between 2 and 8 and must contain the front perspective.</p>
                     * 
                     */
                    void SetMultiViewImageInfos(const std::vector<AigcHunyuan3DMultiViewImageInfo>& _multiViewImageInfos);

                    /**
                     * 判断参数 MultiViewImageInfos 是否已赋值
                     * @return MultiViewImageInfos 是否已赋值
                     * 
                     */
                    bool MultiViewImageInfosHasBeenSet() const;

                    /**
                     * 获取<p>Prompt for generating a 3D model.</p>
                     * @return Prompt <p>Prompt for generating a 3D model.</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>Prompt for generating a 3D model.</p>
                     * @param _prompt <p>Prompt for generating a 3D model.</p>
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
                     * 获取<p>Generation Type.</p><p>Enumeration values:</p><ul><li>Normal: Generate a complete 3D asset (geometry + texture);</li><li>Geometry: Generate only geometry (no texture, faster output speed);</li><li>Texture: Generate only texture (requires filling in MeshInfos)</li></ul>
                     * @return GenerateType <p>Generation Type.</p><p>Enumeration values:</p><ul><li>Normal: Generate a complete 3D asset (geometry + texture);</li><li>Geometry: Generate only geometry (no texture, faster output speed);</li><li>Texture: Generate only texture (requires filling in MeshInfos)</li></ul>
                     * 
                     */
                    std::string GetGenerateType() const;

                    /**
                     * 设置<p>Generation Type.</p><p>Enumeration values:</p><ul><li>Normal: Generate a complete 3D asset (geometry + texture);</li><li>Geometry: Generate only geometry (no texture, faster output speed);</li><li>Texture: Generate only texture (requires filling in MeshInfos)</li></ul>
                     * @param _generateType <p>Generation Type.</p><p>Enumeration values:</p><ul><li>Normal: Generate a complete 3D asset (geometry + texture);</li><li>Geometry: Generate only geometry (no texture, faster output speed);</li><li>Texture: Generate only texture (requires filling in MeshInfos)</li></ul>
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
                     * 获取<p>Reference 3D model used to generate a 3D model.</p>
                     * @return MeshInfos <p>Reference 3D model used to generate a 3D model.</p>
                     * 
                     */
                    std::vector<AigcHunyuan3DMeshInfo> GetMeshInfos() const;

                    /**
                     * 设置<p>Reference 3D model used to generate a 3D model.</p>
                     * @param _meshInfos <p>Reference 3D model used to generate a 3D model.</p>
                     * 
                     */
                    void SetMeshInfos(const std::vector<AigcHunyuan3DMeshInfo>& _meshInfos);

                    /**
                     * 判断参数 MeshInfos 是否已赋值
                     * @return MeshInfos 是否已赋值
                     * 
                     */
                    bool MeshInfosHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable output PBR material.</p><p>Enumeration values:</p><ul><li>Enabled: enable;</li><li>Disabled: disable.</li></ul>
                     * @return EnablePBR <p>Whether to enable output PBR material.</p><p>Enumeration values:</p><ul><li>Enabled: enable;</li><li>Disabled: disable.</li></ul>
                     * 
                     */
                    std::string GetEnablePBR() const;

                    /**
                     * 设置<p>Whether to enable output PBR material.</p><p>Enumeration values:</p><ul><li>Enabled: enable;</li><li>Disabled: disable.</li></ul>
                     * @param _enablePBR <p>Whether to enable output PBR material.</p><p>Enumeration values:</p><ul><li>Enabled: enable;</li><li>Disabled: disable.</li></ul>
                     * 
                     */
                    void SetEnablePBR(const std::string& _enablePBR);

                    /**
                     * 判断参数 EnablePBR 是否已赋值
                     * @return EnablePBR 是否已赋值
                     * 
                     */
                    bool EnablePBRHasBeenSet() const;

                    /**
                     * 获取<p>Number of patches. This parameter is valid only when the value of GenerateType is Normal or Geometry.</p>
                     * @return FaceCount <p>Number of patches. This parameter is valid only when the value of GenerateType is Normal or Geometry.</p>
                     * 
                     */
                    int64_t GetFaceCount() const;

                    /**
                     * 设置<p>Number of patches. This parameter is valid only when the value of GenerateType is Normal or Geometry.</p>
                     * @param _faceCount <p>Number of patches. This parameter is valid only when the value of GenerateType is Normal or Geometry.</p>
                     * 
                     */
                    void SetFaceCount(const int64_t& _faceCount);

                    /**
                     * 判断参数 FaceCount 是否已赋值
                     * @return FaceCount 是否已赋值
                     * 
                     */
                    bool FaceCountHasBeenSet() const;

                    /**
                     * 获取<p>Whether to retain UV unfolding.</p><p>Enumeration values:</p><ul><li>Enabled: reserved;</li><li>Disabled: not retain.</li></ul>
                     * @return KeepUV <p>Whether to retain UV unfolding.</p><p>Enumeration values:</p><ul><li>Enabled: reserved;</li><li>Disabled: not retain.</li></ul>
                     * 
                     */
                    std::string GetKeepUV() const;

                    /**
                     * 设置<p>Whether to retain UV unfolding.</p><p>Enumeration values:</p><ul><li>Enabled: reserved;</li><li>Disabled: not retain.</li></ul>
                     * @param _keepUV <p>Whether to retain UV unfolding.</p><p>Enumeration values:</p><ul><li>Enabled: reserved;</li><li>Disabled: not retain.</li></ul>
                     * 
                     */
                    void SetKeepUV(const std::string& _keepUV);

                    /**
                     * 判断参数 KeepUV 是否已赋值
                     * @return KeepUV 是否已赋值
                     * 
                     */
                    bool KeepUVHasBeenSet() const;

                    /**
                     * 获取<p>Result format. In addition to the default return of obj and glb, an extra output format.</p><p>Enumeration values:</p><ul><li>FBX: FBX format file.</li></ul>
                     * @return ResultFormat <p>Result format. In addition to the default return of obj and glb, an extra output format.</p><p>Enumeration values:</p><ul><li>FBX: FBX format file.</li></ul>
                     * 
                     */
                    std::string GetResultFormat() const;

                    /**
                     * 设置<p>Result format. In addition to the default return of obj and glb, an extra output format.</p><p>Enumeration values:</p><ul><li>FBX: FBX format file.</li></ul>
                     * @param _resultFormat <p>Result format. In addition to the default return of obj and glb, an extra output format.</p><p>Enumeration values:</p><ul><li>FBX: FBX format file.</li></ul>
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
                     * 获取<p>Random Seed. Results can be reproduced with the same Seed input.</p>
                     * @return Seed <p>Random Seed. Results can be reproduced with the same Seed input.</p>
                     * 
                     */
                    int64_t GetSeed() const;

                    /**
                     * 设置<p>Random Seed. Results can be reproduced with the same Seed input.</p>
                     * @param _seed <p>Random Seed. Results can be reproduced with the same Seed input.</p>
                     * 
                     */
                    void SetSeed(const int64_t& _seed);

                    /**
                     * 判断参数 Seed 是否已赋值
                     * @return Seed 是否已赋值
                     * 
                     */
                    bool SeedHasBeenSet() const;

                    /**
                     * 获取<p>Style control word.</p>
                     * @return Style <p>Style control word.</p>
                     * 
                     */
                    std::string GetStyle() const;

                    /**
                     * 设置<p>Style control word.</p>
                     * @param _style <p>Style control word.</p>
                     * 
                     */
                    void SetStyle(const std::string& _style);

                    /**
                     * 判断参数 Style 是否已赋值
                     * @return Style 是否已赋值
                     * 
                     */
                    bool StyleHasBeenSet() const;

                    /**
                     * 获取<p>Configuration of the output media file of the task.</p>
                     * @return OutputConfig <p>Configuration of the output media file of the task.</p>
                     * 
                     */
                    AigcHunyuan3DOutputConfig GetOutputConfig() const;

                    /**
                     * 设置<p>Configuration of the output media file of the task.</p>
                     * @param _outputConfig <p>Configuration of the output media file of the task.</p>
                     * 
                     */
                    void SetOutputConfig(const AigcHunyuan3DOutputConfig& _outputConfig);

                    /**
                     * 判断参数 OutputConfig 是否已赋值
                     * @return OutputConfig 是否已赋值
                     * 
                     */
                    bool OutputConfigHasBeenSet() const;

                private:

                    /**
                     * <p>Generate 3D reference image information.</p>
                     */
                    std::vector<AigcHunyuan3DReferenceImageInfo> m_imageInfos;
                    bool m_imageInfosHasBeenSet;

                    /**
                     * <p>Multi-perspective image information used to generate a 3D model.</p><p>The array length must be between 2 and 8 and must contain the front perspective.</p>
                     */
                    std::vector<AigcHunyuan3DMultiViewImageInfo> m_multiViewImageInfos;
                    bool m_multiViewImageInfosHasBeenSet;

                    /**
                     * <p>Prompt for generating a 3D model.</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>Generation Type.</p><p>Enumeration values:</p><ul><li>Normal: Generate a complete 3D asset (geometry + texture);</li><li>Geometry: Generate only geometry (no texture, faster output speed);</li><li>Texture: Generate only texture (requires filling in MeshInfos)</li></ul>
                     */
                    std::string m_generateType;
                    bool m_generateTypeHasBeenSet;

                    /**
                     * <p>Reference 3D model used to generate a 3D model.</p>
                     */
                    std::vector<AigcHunyuan3DMeshInfo> m_meshInfos;
                    bool m_meshInfosHasBeenSet;

                    /**
                     * <p>Whether to enable output PBR material.</p><p>Enumeration values:</p><ul><li>Enabled: enable;</li><li>Disabled: disable.</li></ul>
                     */
                    std::string m_enablePBR;
                    bool m_enablePBRHasBeenSet;

                    /**
                     * <p>Number of patches. This parameter is valid only when the value of GenerateType is Normal or Geometry.</p>
                     */
                    int64_t m_faceCount;
                    bool m_faceCountHasBeenSet;

                    /**
                     * <p>Whether to retain UV unfolding.</p><p>Enumeration values:</p><ul><li>Enabled: reserved;</li><li>Disabled: not retain.</li></ul>
                     */
                    std::string m_keepUV;
                    bool m_keepUVHasBeenSet;

                    /**
                     * <p>Result format. In addition to the default return of obj and glb, an extra output format.</p><p>Enumeration values:</p><ul><li>FBX: FBX format file.</li></ul>
                     */
                    std::string m_resultFormat;
                    bool m_resultFormatHasBeenSet;

                    /**
                     * <p>Random Seed. Results can be reproduced with the same Seed input.</p>
                     */
                    int64_t m_seed;
                    bool m_seedHasBeenSet;

                    /**
                     * <p>Style control word.</p>
                     */
                    std::string m_style;
                    bool m_styleHasBeenSet;

                    /**
                     * <p>Configuration of the output media file of the task.</p>
                     */
                    AigcHunyuan3DOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCHUNYUAN3DTASKINPUT_H_
