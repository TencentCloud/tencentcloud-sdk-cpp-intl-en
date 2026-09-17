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
                * 
                */
                class AigcHunyuan3DTaskInput : public AbstractModel
                {
                public:
                    AigcHunyuan3DTaskInput();
                    ~AigcHunyuan3DTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return ImageInfos 
                     * 
                     */
                    std::vector<AigcHunyuan3DReferenceImageInfo> GetImageInfos() const;

                    /**
                     * 设置
                     * @param _imageInfos 
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
                     * 获取
                     * @return MultiViewImageInfos 
                     * 
                     */
                    std::vector<AigcHunyuan3DMultiViewImageInfo> GetMultiViewImageInfos() const;

                    /**
                     * 设置
                     * @param _multiViewImageInfos 
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
                     * 获取
                     * @return Prompt 
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置
                     * @param _prompt 
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
                     * 获取
                     * @return GenerateType 
                     * 
                     */
                    std::string GetGenerateType() const;

                    /**
                     * 设置
                     * @param _generateType 
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
                     * 获取
                     * @return MeshInfos 
                     * 
                     */
                    std::vector<AigcHunyuan3DMeshInfo> GetMeshInfos() const;

                    /**
                     * 设置
                     * @param _meshInfos 
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
                     * 获取
                     * @return EnablePBR 
                     * 
                     */
                    std::string GetEnablePBR() const;

                    /**
                     * 设置
                     * @param _enablePBR 
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
                     * 获取
                     * @return FaceCount 
                     * 
                     */
                    int64_t GetFaceCount() const;

                    /**
                     * 设置
                     * @param _faceCount 
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
                     * 获取
                     * @return KeepUV 
                     * 
                     */
                    std::string GetKeepUV() const;

                    /**
                     * 设置
                     * @param _keepUV 
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
                     * 获取
                     * @return ResultFormat 
                     * 
                     */
                    std::string GetResultFormat() const;

                    /**
                     * 设置
                     * @param _resultFormat 
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
                     * 获取
                     * @return Seed 
                     * 
                     */
                    int64_t GetSeed() const;

                    /**
                     * 设置
                     * @param _seed 
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
                     * 获取
                     * @return Style 
                     * 
                     */
                    std::string GetStyle() const;

                    /**
                     * 设置
                     * @param _style 
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
                     * 获取
                     * @return OutputConfig 
                     * 
                     */
                    AigcHunyuan3DOutputConfig GetOutputConfig() const;

                    /**
                     * 设置
                     * @param _outputConfig 
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
                     * 
                     */
                    std::vector<AigcHunyuan3DReferenceImageInfo> m_imageInfos;
                    bool m_imageInfosHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<AigcHunyuan3DMultiViewImageInfo> m_multiViewImageInfos;
                    bool m_multiViewImageInfosHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_generateType;
                    bool m_generateTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<AigcHunyuan3DMeshInfo> m_meshInfos;
                    bool m_meshInfosHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_enablePBR;
                    bool m_enablePBRHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_faceCount;
                    bool m_faceCountHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_keepUV;
                    bool m_keepUVHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_resultFormat;
                    bool m_resultFormatHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_seed;
                    bool m_seedHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_style;
                    bool m_styleHasBeenSet;

                    /**
                     * 
                     */
                    AigcHunyuan3DOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCHUNYUAN3DTASKINPUT_H_
