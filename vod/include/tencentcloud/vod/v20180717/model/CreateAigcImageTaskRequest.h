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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCIMAGETASKREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCIMAGETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AigcImageTaskInputFileInfo.h>
#include <tencentcloud/vod/v20180717/model/AigcImageOutputConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CreateAigcImageTask request structure.
                */
                class CreateAigcImageTaskRequest : public AbstractModel
                {
                public:
                    CreateAigcImageTaskRequest();
                    ~CreateAigcImageTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * @return SubAppId <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * @param _subAppId <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取Model name. valid values:.
<li>GEM:Gemini;</li>
<Li>Qwen: qianwen.</li>
<Li>Hunyuan: hunyuan.</li>
                     * @return ModelName Model name. valid values:.
<li>GEM:Gemini;</li>
<Li>Qwen: qianwen.</li>
<Li>Hunyuan: hunyuan.</li>
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置Model name. valid values:.
<li>GEM:Gemini;</li>
<Li>Qwen: qianwen.</li>
<Li>Hunyuan: hunyuan.</li>
                     * @param _modelName Model name. valid values:.
<li>GEM:Gemini;</li>
<Li>Qwen: qianwen.</li>
<Li>Hunyuan: hunyuan.</li>
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
                     * 获取Model version. valid values:.
<li>When ModelName is GEM, optional values are 2.5, 3.0;</li>
<li>When ModelName is Qwen, optional values are 0925.</li>
<li>When ModelName is Hunyuan, the optional values are 3.0.</li>
                     * @return ModelVersion Model version. valid values:.
<li>When ModelName is GEM, optional values are 2.5, 3.0;</li>
<li>When ModelName is Qwen, optional values are 0925.</li>
<li>When ModelName is Hunyuan, the optional values are 3.0.</li>
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置Model version. valid values:.
<li>When ModelName is GEM, optional values are 2.5, 3.0;</li>
<li>When ModelName is Qwen, optional values are 0925.</li>
<li>When ModelName is Hunyuan, the optional values are 3.0.</li>
                     * @param _modelVersion Model version. valid values:.
<li>When ModelName is GEM, optional values are 2.5, 3.0;</li>
<li>When ModelName is Qwen, optional values are 0925.</li>
<li>When ModelName is Hunyuan, the optional values are 3.0.</li>
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
                     * 获取File information of the input image for the AIGC image generation task. By default only one image can be specified; when using the GEM model, version 2.5 supports up to 3 images and version 3.0 supports up to 14 images.
                     * @return FileInfos File information of the input image for the AIGC image generation task. By default only one image can be specified; when using the GEM model, version 2.5 supports up to 3 images and version 3.0 supports up to 14 images.
                     * 
                     */
                    std::vector<AigcImageTaskInputFileInfo> GetFileInfos() const;

                    /**
                     * 设置File information of the input image for the AIGC image generation task. By default only one image can be specified; when using the GEM model, version 2.5 supports up to 3 images and version 3.0 supports up to 14 images.
                     * @param _fileInfos File information of the input image for the AIGC image generation task. By default only one image can be specified; when using the GEM model, version 2.5 supports up to 3 images and version 3.0 supports up to 14 images.
                     * 
                     */
                    void SetFileInfos(const std::vector<AigcImageTaskInputFileInfo>& _fileInfos);

                    /**
                     * 判断参数 FileInfos 是否已赋值
                     * @return FileInfos 是否已赋值
                     * 
                     */
                    bool FileInfosHasBeenSet() const;

                    /**
                     * 获取The prompt content for image generation. this parameter is required when FileInfos is empty.
                     * @return Prompt The prompt content for image generation. this parameter is required when FileInfos is empty.
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置The prompt content for image generation. this parameter is required when FileInfos is empty.
                     * @param _prompt The prompt content for image generation. this parameter is required when FileInfos is empty.
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
                     * 获取Prevent the model from generating image generation prompts.
                     * @return NegativePrompt Prevent the model from generating image generation prompts.
                     * 
                     */
                    std::string GetNegativePrompt() const;

                    /**
                     * 设置Prevent the model from generating image generation prompts.
                     * @param _negativePrompt Prevent the model from generating image generation prompts.
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
                     * 获取Whether to optimize Prompt content automatically. when Enabled, it will optimize the passed in Prompt automatically to enhance generation quality. valid values: <li>Enabled: turn on;</li> <li>Disabled: turn off;</li>
                     * @return EnhancePrompt Whether to optimize Prompt content automatically. when Enabled, it will optimize the passed in Prompt automatically to enhance generation quality. valid values: <li>Enabled: turn on;</li> <li>Disabled: turn off;</li>
                     * 
                     */
                    std::string GetEnhancePrompt() const;

                    /**
                     * 设置Whether to optimize Prompt content automatically. when Enabled, it will optimize the passed in Prompt automatically to enhance generation quality. valid values: <li>Enabled: turn on;</li> <li>Disabled: turn off;</li>
                     * @param _enhancePrompt Whether to optimize Prompt content automatically. when Enabled, it will optimize the passed in Prompt automatically to enhance generation quality. valid values: <li>Enabled: turn on;</li> <li>Disabled: turn off;</li>
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
                     * 获取Output media file configuration for the task.
                     * @return OutputConfig Output media file configuration for the task.
                     * 
                     */
                    AigcImageOutputConfig GetOutputConfig() const;

                    /**
                     * 设置Output media file configuration for the task.
                     * @param _outputConfig Output media file configuration for the task.
                     * 
                     */
                    void SetOutputConfig(const AigcImageOutputConfig& _outputConfig);

                    /**
                     * 判断参数 OutputConfig 是否已赋值
                     * @return OutputConfig 是否已赋值
                     * 
                     */
                    bool OutputConfigHasBeenSet() const;

                    /**
                     * 获取An identifier for deduplication. if there has been a request with the same identifier within the past 3 days, an error will be returned for the current request. the maximum length is 50 characters. leaving it blank or using an empty string indicates no deduplication.
                     * @return SessionId An identifier for deduplication. if there has been a request with the same identifier within the past 3 days, an error will be returned for the current request. the maximum length is 50 characters. leaving it blank or using an empty string indicates no deduplication.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置An identifier for deduplication. if there has been a request with the same identifier within the past 3 days, an error will be returned for the current request. the maximum length is 50 characters. leaving it blank or using an empty string indicates no deduplication.
                     * @param _sessionId An identifier for deduplication. if there has been a request with the same identifier within the past 3 days, an error will be returned for the current request. the maximum length is 50 characters. leaving it blank or using an empty string indicates no deduplication.
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取Source context, used to pass through user request information. the audio and video quality revival complete callback will return the value of this field. longest 1000 characters.
                     * @return SessionContext Source context, used to pass through user request information. the audio and video quality revival complete callback will return the value of this field. longest 1000 characters.
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置Source context, used to pass through user request information. the audio and video quality revival complete callback will return the value of this field. longest 1000 characters.
                     * @param _sessionContext Source context, used to pass through user request information. the audio and video quality revival complete callback will return the value of this field. longest 1000 characters.
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取Task priority. the higher the value, the higher the priority. value range is from -10 to 10. if left blank, the default value is 0.
                     * @return TasksPriority Task priority. the higher the value, the higher the priority. value range is from -10 to 10. if left blank, the default value is 0.
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置Task priority. the higher the value, the higher the priority. value range is from -10 to 10. if left blank, the default value is 0.
                     * @param _tasksPriority Task priority. the higher the value, the higher the priority. value range is from -10 to 10. if left blank, the default value is 0.
                     * 
                     */
                    void SetTasksPriority(const int64_t& _tasksPriority);

                    /**
                     * 判断参数 TasksPriority 是否已赋值
                     * @return TasksPriority 是否已赋值
                     * 
                     */
                    bool TasksPriorityHasBeenSet() const;

                    /**
                     * 获取Reserved field, used when special purpose.
                     * @return ExtInfo Reserved field, used when special purpose.
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置Reserved field, used when special purpose.
                     * @param _extInfo Reserved field, used when special purpose.
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
                     * <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Model name. valid values:.
<li>GEM:Gemini;</li>
<Li>Qwen: qianwen.</li>
<Li>Hunyuan: hunyuan.</li>
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * Model version. valid values:.
<li>When ModelName is GEM, optional values are 2.5, 3.0;</li>
<li>When ModelName is Qwen, optional values are 0925.</li>
<li>When ModelName is Hunyuan, the optional values are 3.0.</li>
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * File information of the input image for the AIGC image generation task. By default only one image can be specified; when using the GEM model, version 2.5 supports up to 3 images and version 3.0 supports up to 14 images.
                     */
                    std::vector<AigcImageTaskInputFileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * The prompt content for image generation. this parameter is required when FileInfos is empty.
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * Prevent the model from generating image generation prompts.
                     */
                    std::string m_negativePrompt;
                    bool m_negativePromptHasBeenSet;

                    /**
                     * Whether to optimize Prompt content automatically. when Enabled, it will optimize the passed in Prompt automatically to enhance generation quality. valid values: <li>Enabled: turn on;</li> <li>Disabled: turn off;</li>
                     */
                    std::string m_enhancePrompt;
                    bool m_enhancePromptHasBeenSet;

                    /**
                     * Output media file configuration for the task.
                     */
                    AigcImageOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                    /**
                     * An identifier for deduplication. if there has been a request with the same identifier within the past 3 days, an error will be returned for the current request. the maximum length is 50 characters. leaving it blank or using an empty string indicates no deduplication.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Source context, used to pass through user request information. the audio and video quality revival complete callback will return the value of this field. longest 1000 characters.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * Task priority. the higher the value, the higher the priority. value range is from -10 to 10. if left blank, the default value is 0.
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                    /**
                     * Reserved field, used when special purpose.
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATEAIGCIMAGETASKREQUEST_H_
