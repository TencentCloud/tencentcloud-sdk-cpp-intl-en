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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AigcVideoTaskInputFileInfo.h>
#include <tencentcloud/vod/v20180717/model/AigcVideoTaskInputSubjectInfo.h>
#include <tencentcloud/vod/v20180717/model/AigcVideoOutputConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Input of AIGC video tasks.
                */
                class AigcVideoTaskInput : public AbstractModel
                {
                public:
                    AigcVideoTaskInput();
                    ~AigcVideoTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Model name.</p>
                     * @return ModelName <p>Model name.</p>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置<p>Model name.</p>
                     * @param _modelName <p>Model name.</p>
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取<p>Model version.</p>
                     * @return ModelVersion <p>Model version.</p>
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置<p>Model version.</p>
                     * @param _modelVersion <p>Model version.</p>
                     * 
                     */
                    void SetModelVersion(const std::string& _modelVersion);

                    /**
                     * 判断参数 ModelVersion 是否已赋值
                     * @return ModelVersion 是否已赋值
                     * 
                     */
                    bool ModelVersionHasBeenSet() const;

                    /**
                     * 获取<p>Input file information for an AIGC video generation task.</p>
                     * @return FileInfos <p>Input file information for an AIGC video generation task.</p>
                     * 
                     */
                    std::vector<AigcVideoTaskInputFileInfo> GetFileInfos() const;

                    /**
                     * 设置<p>Input file information for an AIGC video generation task.</p>
                     * @param _fileInfos <p>Input file information for an AIGC video generation task.</p>
                     * 
                     */
                    void SetFileInfos(const std::vector<AigcVideoTaskInputFileInfo>& _fileInfos);

                    /**
                     * 判断参数 FileInfos 是否已赋值
                     * @return FileInfos 是否已赋值
                     * 
                     */
                    bool FileInfosHasBeenSet() const;

                    /**
                     * 获取<p>Fixed subject input information for the AIGC task.</p>
                     * @return SubjectInfos <p>Fixed subject input information for the AIGC task.</p>
                     * 
                     */
                    std::vector<AigcVideoTaskInputSubjectInfo> GetSubjectInfos() const;

                    /**
                     * 设置<p>Fixed subject input information for the AIGC task.</p>
                     * @param _subjectInfos <p>Fixed subject input information for the AIGC task.</p>
                     * 
                     */
                    void SetSubjectInfos(const std::vector<AigcVideoTaskInputSubjectInfo>& _subjectInfos);

                    /**
                     * 判断参数 SubjectInfos 是否已赋值
                     * @return SubjectInfos 是否已赋值
                     * 
                     */
                    bool SubjectInfosHasBeenSet() const;

                    /**
                     * 获取<p>Media file ID used as the tail frame to generate a video. This globally unique identifier of the file in VOD is assigned by the VOD backend after successful upload. You can obtain this field in the <a href="https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>.</p>
                     * @return LastFrameFileId <p>Media file ID used as the tail frame to generate a video. This globally unique identifier of the file in VOD is assigned by the VOD backend after successful upload. You can obtain this field in the <a href="https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>.</p>
                     * 
                     */
                    std::string GetLastFrameFileId() const;

                    /**
                     * 设置<p>Media file ID used as the tail frame to generate a video. This globally unique identifier of the file in VOD is assigned by the VOD backend after successful upload. You can obtain this field in the <a href="https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>.</p>
                     * @param _lastFrameFileId <p>Media file ID used as the tail frame to generate a video. This globally unique identifier of the file in VOD is assigned by the VOD backend after successful upload. You can obtain this field in the <a href="https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>.</p>
                     * 
                     */
                    void SetLastFrameFileId(const std::string& _lastFrameFileId);

                    /**
                     * 判断参数 LastFrameFileId 是否已赋值
                     * @return LastFrameFileId 是否已赋值
                     * 
                     */
                    bool LastFrameFileIdHasBeenSet() const;

                    /**
                     * 获取<p>URL of the media file used as the last frame to generate video. Description:</p><ol><li>Only GV, Kling, and Vidu models are supported. Other models are not currently supported. When ModelName is GV, if you specify this parameter, you must also specify FileInfos as the first frame of the video to be generated. When ModelName is Kling, ModelVersion is 2.1, and the output resolution Resolution is 1080P, you can specify this parameter. When ModelName is Vidu and ModelVersion is q2-pro or q2-turbo, you can specify this parameter.</li><li>The image size must be less than 5M.</li><li><ol start="3"><li>The value of the image format is: jpeg, jpg, png, webp.</li></ol></li></ol>
                     * @return LastFrameUrl <p>URL of the media file used as the last frame to generate video. Description:</p><ol><li>Only GV, Kling, and Vidu models are supported. Other models are not currently supported. When ModelName is GV, if you specify this parameter, you must also specify FileInfos as the first frame of the video to be generated. When ModelName is Kling, ModelVersion is 2.1, and the output resolution Resolution is 1080P, you can specify this parameter. When ModelName is Vidu and ModelVersion is q2-pro or q2-turbo, you can specify this parameter.</li><li>The image size must be less than 5M.</li><li><ol start="3"><li>The value of the image format is: jpeg, jpg, png, webp.</li></ol></li></ol>
                     * 
                     */
                    std::string GetLastFrameUrl() const;

                    /**
                     * 设置<p>URL of the media file used as the last frame to generate video. Description:</p><ol><li>Only GV, Kling, and Vidu models are supported. Other models are not currently supported. When ModelName is GV, if you specify this parameter, you must also specify FileInfos as the first frame of the video to be generated. When ModelName is Kling, ModelVersion is 2.1, and the output resolution Resolution is 1080P, you can specify this parameter. When ModelName is Vidu and ModelVersion is q2-pro or q2-turbo, you can specify this parameter.</li><li>The image size must be less than 5M.</li><li><ol start="3"><li>The value of the image format is: jpeg, jpg, png, webp.</li></ol></li></ol>
                     * @param _lastFrameUrl <p>URL of the media file used as the last frame to generate video. Description:</p><ol><li>Only GV, Kling, and Vidu models are supported. Other models are not currently supported. When ModelName is GV, if you specify this parameter, you must also specify FileInfos as the first frame of the video to be generated. When ModelName is Kling, ModelVersion is 2.1, and the output resolution Resolution is 1080P, you can specify this parameter. When ModelName is Vidu and ModelVersion is q2-pro or q2-turbo, you can specify this parameter.</li><li>The image size must be less than 5M.</li><li><ol start="3"><li>The value of the image format is: jpeg, jpg, png, webp.</li></ol></li></ol>
                     * 
                     */
                    void SetLastFrameUrl(const std::string& _lastFrameUrl);

                    /**
                     * 判断参数 LastFrameUrl 是否已赋值
                     * @return LastFrameUrl 是否已赋值
                     * 
                     */
                    bool LastFrameUrlHasBeenSet() const;

                    /**
                     * 获取<p>Prompt for video generation. Supports up to 1000 characters. This parameter is required when FileInfos is empty.</p>
                     * @return Prompt <p>Prompt for video generation. Supports up to 1000 characters. This parameter is required when FileInfos is empty.</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>Prompt for video generation. Supports up to 1000 characters. This parameter is required when FileInfos is empty.</p>
                     * @param _prompt <p>Prompt for video generation. Supports up to 1000 characters. This parameter is required when FileInfos is empty.</p>
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
                     * 获取<p>Prompt to prevent the model from generating video. Supports up to 1000 characters.</p>
                     * @return NegativePrompt <p>Prompt to prevent the model from generating video. Supports up to 1000 characters.</p>
                     * 
                     */
                    std::string GetNegativePrompt() const;

                    /**
                     * 设置<p>Prompt to prevent the model from generating video. Supports up to 1000 characters.</p>
                     * @param _negativePrompt <p>Prompt to prevent the model from generating video. Supports up to 1000 characters.</p>
                     * 
                     */
                    void SetNegativePrompt(const std::string& _negativePrompt);

                    /**
                     * 判断参数 NegativePrompt 是否已赋值
                     * @return NegativePrompt 是否已赋值
                     * 
                     */
                    bool NegativePromptHasBeenSet() const;

                    /**
                     * 获取<p>Whether to optimize Prompt content automatically. When Enabled, the passed-in Prompt will be optimized automatically to enhance generation quality. Valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li></p>
                     * @return EnhancePrompt <p>Whether to optimize Prompt content automatically. When Enabled, the passed-in Prompt will be optimized automatically to enhance generation quality. Valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li></p>
                     * 
                     */
                    std::string GetEnhancePrompt() const;

                    /**
                     * 设置<p>Whether to optimize Prompt content automatically. When Enabled, the passed-in Prompt will be optimized automatically to enhance generation quality. Valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li></p>
                     * @param _enhancePrompt <p>Whether to optimize Prompt content automatically. When Enabled, the passed-in Prompt will be optimized automatically to enhance generation quality. Valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li></p>
                     * 
                     */
                    void SetEnhancePrompt(const std::string& _enhancePrompt);

                    /**
                     * 判断参数 EnhancePrompt 是否已赋值
                     * @return EnhancePrompt 是否已赋值
                     * 
                     */
                    bool EnhancePromptHasBeenSet() const;

                    /**
                     * 获取<p>Generation mode. Valid values: <li>Standard: standard mode;</li> <li>Professional: high-quality mode;</li></p>
                     * @return GenerationMode <p>Generation mode. Valid values: <li>Standard: standard mode;</li> <li>Professional: high-quality mode;</li></p>
                     * 
                     */
                    std::string GetGenerationMode() const;

                    /**
                     * 设置<p>Generation mode. Valid values: <li>Standard: standard mode;</li> <li>Professional: high-quality mode;</li></p>
                     * @param _generationMode <p>Generation mode. Valid values: <li>Standard: standard mode;</li> <li>Professional: high-quality mode;</li></p>
                     * 
                     */
                    void SetGenerationMode(const std::string& _generationMode);

                    /**
                     * 判断参数 GenerationMode 是否已赋值
                     * @return GenerationMode 是否已赋值
                     * 
                     */
                    bool GenerationModeHasBeenSet() const;

                    /**
                     * 获取<p>Output result file output for AIGC image generation.</p>
                     * @return OutputConfig <p>Output result file output for AIGC image generation.</p>
                     * 
                     */
                    AigcVideoOutputConfig GetOutputConfig() const;

                    /**
                     * 设置<p>Output result file output for AIGC image generation.</p>
                     * @param _outputConfig <p>Output result file output for AIGC image generation.</p>
                     * 
                     */
                    void SetOutputConfig(const AigcVideoOutputConfig& _outputConfig);

                    /**
                     * 判断参数 OutputConfig 是否已赋值
                     * @return OutputConfig 是否已赋值
                     * 
                     */
                    bool OutputConfigHasBeenSet() const;

                    /**
                     * 获取<p>Region information of the input file. If the file url is a foreign address, selectable Oversea. Default: Mainland.</p>
                     * @return InputRegion <p>Region information of the input file. If the file url is a foreign address, selectable Oversea. Default: Mainland.</p>
                     * 
                     */
                    std::string GetInputRegion() const;

                    /**
                     * 设置<p>Region information of the input file. If the file url is a foreign address, selectable Oversea. Default: Mainland.</p>
                     * @param _inputRegion <p>Region information of the input file. If the file url is a foreign address, selectable Oversea. Default: Mainland.</p>
                     * 
                     */
                    void SetInputRegion(const std::string& _inputRegion);

                    /**
                     * 判断参数 InputRegion 是否已赋值
                     * @return InputRegion 是否已赋值
                     * 
                     */
                    bool InputRegionHasBeenSet() const;

                    /**
                     * 获取<p>Scenario type. Values are as follows: <li>When ModelName is Kling, the value motion_control means action control;</li><li>Not currently supported for other ModelName.</li></p>
                     * @return SceneType <p>Scenario type. Values are as follows: <li>When ModelName is Kling, the value motion_control means action control;</li><li>Not currently supported for other ModelName.</li></p>
                     * 
                     */
                    std::string GetSceneType() const;

                    /**
                     * 设置<p>Scenario type. Values are as follows: <li>When ModelName is Kling, the value motion_control means action control;</li><li>Not currently supported for other ModelName.</li></p>
                     * @param _sceneType <p>Scenario type. Values are as follows: <li>When ModelName is Kling, the value motion_control means action control;</li><li>Not currently supported for other ModelName.</li></p>
                     * 
                     */
                    void SetSceneType(const std::string& _sceneType);

                    /**
                     * 判断参数 SceneType 是否已赋值
                     * @return SceneType 是否已赋值
                     * 
                     */
                    bool SceneTypeHasBeenSet() const;

                    /**
                     * 获取<p>Random seed of the model.</p>
                     * @return Seed <p>Random seed of the model.</p>
                     * 
                     */
                    int64_t GetSeed() const;

                    /**
                     * 设置<p>Random seed of the model.</p>
                     * @param _seed <p>Random seed of the model.</p>
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
                     * 获取<p>Pass-through parameter.</p>
                     * @return ExtInfo <p>Pass-through parameter.</p>
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置<p>Pass-through parameter.</p>
                     * @param _extInfo <p>Pass-through parameter.</p>
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                private:

                    /**
                     * <p>Model name.</p>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * <p>Model version.</p>
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * <p>Input file information for an AIGC video generation task.</p>
                     */
                    std::vector<AigcVideoTaskInputFileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * <p>Fixed subject input information for the AIGC task.</p>
                     */
                    std::vector<AigcVideoTaskInputSubjectInfo> m_subjectInfos;
                    bool m_subjectInfosHasBeenSet;

                    /**
                     * <p>Media file ID used as the tail frame to generate a video. This globally unique identifier of the file in VOD is assigned by the VOD backend after successful upload. You can obtain this field in the <a href="https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1">video upload completion event notification</a> or the <a href="https://console.cloud.tencent.com/vod/media">VOD console</a>.</p>
                     */
                    std::string m_lastFrameFileId;
                    bool m_lastFrameFileIdHasBeenSet;

                    /**
                     * <p>URL of the media file used as the last frame to generate video. Description:</p><ol><li>Only GV, Kling, and Vidu models are supported. Other models are not currently supported. When ModelName is GV, if you specify this parameter, you must also specify FileInfos as the first frame of the video to be generated. When ModelName is Kling, ModelVersion is 2.1, and the output resolution Resolution is 1080P, you can specify this parameter. When ModelName is Vidu and ModelVersion is q2-pro or q2-turbo, you can specify this parameter.</li><li>The image size must be less than 5M.</li><li><ol start="3"><li>The value of the image format is: jpeg, jpg, png, webp.</li></ol></li></ol>
                     */
                    std::string m_lastFrameUrl;
                    bool m_lastFrameUrlHasBeenSet;

                    /**
                     * <p>Prompt for video generation. Supports up to 1000 characters. This parameter is required when FileInfos is empty.</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>Prompt to prevent the model from generating video. Supports up to 1000 characters.</p>
                     */
                    std::string m_negativePrompt;
                    bool m_negativePromptHasBeenSet;

                    /**
                     * <p>Whether to optimize Prompt content automatically. When Enabled, the passed-in Prompt will be optimized automatically to enhance generation quality. Valid values: <li>Enabled: enable;</li> <li>Disabled: disable;</li></p>
                     */
                    std::string m_enhancePrompt;
                    bool m_enhancePromptHasBeenSet;

                    /**
                     * <p>Generation mode. Valid values: <li>Standard: standard mode;</li> <li>Professional: high-quality mode;</li></p>
                     */
                    std::string m_generationMode;
                    bool m_generationModeHasBeenSet;

                    /**
                     * <p>Output result file output for AIGC image generation.</p>
                     */
                    AigcVideoOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                    /**
                     * <p>Region information of the input file. If the file url is a foreign address, selectable Oversea. Default: Mainland.</p>
                     */
                    std::string m_inputRegion;
                    bool m_inputRegionHasBeenSet;

                    /**
                     * <p>Scenario type. Values are as follows: <li>When ModelName is Kling, the value motion_control means action control;</li><li>Not currently supported for other ModelName.</li></p>
                     */
                    std::string m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * <p>Random seed of the model.</p>
                     */
                    int64_t m_seed;
                    bool m_seedHasBeenSet;

                    /**
                     * <p>Pass-through parameter.</p>
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCVIDEOTASKINPUT_H_
