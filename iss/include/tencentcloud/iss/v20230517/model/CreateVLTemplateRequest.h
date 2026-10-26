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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_CREATEVLTEMPLATEREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_CREATEVLTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/EffectiveTime.h>
#include <tencentcloud/iss/v20230517/model/ImageSceneInfo.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * CreateVLTemplate request structure.
                */
                class CreateVLTemplateRequest : public AbstractModel
                {
                public:
                    CreateVLTemplateRequest();
                    ~CreateVLTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>AI model</p><p>Enumeration values:</p><ul><li>ivc-vl-1.0: View large model</li></ul>
                     * @return AIModel <p>AI model</p><p>Enumeration values:</p><ul><li>ivc-vl-1.0: View large model</li></ul>
                     * 
                     */
                    std::string GetAIModel() const;

                    /**
                     * 设置<p>AI model</p><p>Enumeration values:</p><ul><li>ivc-vl-1.0: View large model</li></ul>
                     * @param _aIModel <p>AI model</p><p>Enumeration values:</p><ul><li>ivc-vl-1.0: View large model</li></ul>
                     * 
                     */
                    void SetAIModel(const std::string& _aIModel);

                    /**
                     * 判断参数 AIModel 是否已赋值
                     * @return AIModel 是否已赋值
                     * 
                     */
                    bool AIModelHasBeenSet() const;

                    /**
                     * 获取<p>Template name. Supports only Chinese, English, digits, _, and -, with a maximum length of 32 characters.</p>
                     * @return Name <p>Template name. Supports only Chinese, English, digits, _, and -, with a maximum length of 32 characters.</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>Template name. Supports only Chinese, English, digits, _, and -, with a maximum length of 32 characters.</p>
                     * @param _name <p>Template name. Supports only Chinese, English, digits, _, and -, with a maximum length of 32 characters.</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>Prompt content, maximum 2MB</p>
                     * @return Prompt <p>Prompt content, maximum 2MB</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>Prompt content, maximum 2MB</p>
                     * @param _prompt <p>Prompt content, maximum 2MB</p>
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
                     * 获取<p>Analysis mode</p><p>Enumeration values:</p><ul><li>image: image mode</li><li>video: video mode</li></ul>
                     * @return AnalysisMode <p>Analysis mode</p><p>Enumeration values:</p><ul><li>image: image mode</li><li>video: video mode</li></ul>
                     * 
                     */
                    std::string GetAnalysisMode() const;

                    /**
                     * 设置<p>Analysis mode</p><p>Enumeration values:</p><ul><li>image: image mode</li><li>video: video mode</li></ul>
                     * @param _analysisMode <p>Analysis mode</p><p>Enumeration values:</p><ul><li>image: image mode</li><li>video: video mode</li></ul>
                     * 
                     */
                    void SetAnalysisMode(const std::string& _analysisMode);

                    /**
                     * 判断参数 AnalysisMode 是否已赋值
                     * @return AnalysisMode 是否已赋值
                     * 
                     */
                    bool AnalysisModeHasBeenSet() const;

                    /**
                     * 获取<p>List of effective periods, up to 100 entries</p>
                     * @return Times <p>List of effective periods, up to 100 entries</p>
                     * 
                     */
                    std::vector<EffectiveTime> GetTimes() const;

                    /**
                     * 设置<p>List of effective periods, up to 100 entries</p>
                     * @param _times <p>List of effective periods, up to 100 entries</p>
                     * 
                     */
                    void SetTimes(const std::vector<EffectiveTime>& _times);

                    /**
                     * 判断参数 Times 是否已赋值
                     * @return Times 是否已赋值
                     * 
                     */
                    bool TimesHasBeenSet() const;

                    /**
                     * 获取<p>Template description. Maximum length: 256 characters.</p>
                     * @return Describe <p>Template description. Maximum length: 256 characters.</p>
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 设置<p>Template description. Maximum length: 256 characters.</p>
                     * @param _describe <p>Template description. Maximum length: 256 characters.</p>
                     * 
                     */
                    void SetDescribe(const std::string& _describe);

                    /**
                     * 判断参数 Describe 是否已赋值
                     * @return Describe 是否已赋值
                     * 
                     */
                    bool DescribeHasBeenSet() const;

                    /**
                     * 获取<p>Image scenario configuration (required when AnalysisMode=image)</p>
                     * @return ImageConfig <p>Image scenario configuration (required when AnalysisMode=image)</p>
                     * 
                     */
                    ImageSceneInfo GetImageConfig() const;

                    /**
                     * 设置<p>Image scenario configuration (required when AnalysisMode=image)</p>
                     * @param _imageConfig <p>Image scenario configuration (required when AnalysisMode=image)</p>
                     * 
                     */
                    void SetImageConfig(const ImageSceneInfo& _imageConfig);

                    /**
                     * 判断参数 ImageConfig 是否已赋值
                     * @return ImageConfig 是否已赋值
                     * 
                     */
                    bool ImageConfigHasBeenSet() const;

                private:

                    /**
                     * <p>AI model</p><p>Enumeration values:</p><ul><li>ivc-vl-1.0: View large model</li></ul>
                     */
                    std::string m_aIModel;
                    bool m_aIModelHasBeenSet;

                    /**
                     * <p>Template name. Supports only Chinese, English, digits, _, and -, with a maximum length of 32 characters.</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Prompt content, maximum 2MB</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>Analysis mode</p><p>Enumeration values:</p><ul><li>image: image mode</li><li>video: video mode</li></ul>
                     */
                    std::string m_analysisMode;
                    bool m_analysisModeHasBeenSet;

                    /**
                     * <p>List of effective periods, up to 100 entries</p>
                     */
                    std::vector<EffectiveTime> m_times;
                    bool m_timesHasBeenSet;

                    /**
                     * <p>Template description. Maximum length: 256 characters.</p>
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * <p>Image scenario configuration (required when AnalysisMode=image)</p>
                     */
                    ImageSceneInfo m_imageConfig;
                    bool m_imageConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_CREATEVLTEMPLATEREQUEST_H_
