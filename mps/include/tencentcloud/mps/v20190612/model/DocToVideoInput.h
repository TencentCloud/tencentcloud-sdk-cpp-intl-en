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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DOCTOVIDEOINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DOCTOVIDEOINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 
                */
                class DocToVideoInput : public AbstractModel
                {
                public:
                    DocToVideoInput();
                    ~DocToVideoInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return FileUrl 
                     * 
                     */
                    std::vector<std::string> GetFileUrl() const;

                    /**
                     * 设置
                     * @param _fileUrl 
                     * 
                     */
                    void SetFileUrl(const std::vector<std::string>& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     * 
                     */
                    bool FileUrlHasBeenSet() const;

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
                     * @return ModelName 
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置
                     * @param _modelName 
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
                     * 获取
                     * @return ModelVersion 
                     * 
                     */
                    std::string GetModelVersion() const;

                    /**
                     * 设置
                     * @param _modelVersion 
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
                     * 获取
                     * @return Ratio 
                     * 
                     */
                    std::string GetRatio() const;

                    /**
                     * 设置
                     * @param _ratio 
                     * 
                     */
                    void SetRatio(const std::string& _ratio);

                    /**
                     * 判断参数 Ratio 是否已赋值
                     * @return Ratio 是否已赋值
                     * 
                     */
                    bool RatioHasBeenSet() const;

                    /**
                     * 获取
                     * @return Language 
                     * 
                     */
                    std::string GetLanguage() const;

                    /**
                     * 设置
                     * @param _language 
                     * 
                     */
                    void SetLanguage(const std::string& _language);

                    /**
                     * 判断参数 Language 是否已赋值
                     * @return Language 是否已赋值
                     * 
                     */
                    bool LanguageHasBeenSet() const;

                    /**
                     * 获取
                     * @return ReferenceDuration 
                     * 
                     */
                    int64_t GetReferenceDuration() const;

                    /**
                     * 设置
                     * @param _referenceDuration 
                     * 
                     */
                    void SetReferenceDuration(const int64_t& _referenceDuration);

                    /**
                     * 判断参数 ReferenceDuration 是否已赋值
                     * @return ReferenceDuration 是否已赋值
                     * 
                     */
                    bool ReferenceDurationHasBeenSet() const;

                    /**
                     * 获取
                     * @return EnableTTS 
                     * 
                     */
                    bool GetEnableTTS() const;

                    /**
                     * 设置
                     * @param _enableTTS 
                     * 
                     */
                    void SetEnableTTS(const bool& _enableTTS);

                    /**
                     * 判断参数 EnableTTS 是否已赋值
                     * @return EnableTTS 是否已赋值
                     * 
                     */
                    bool EnableTTSHasBeenSet() const;

                    /**
                     * 获取
                     * @return VoiceId 
                     * 
                     */
                    std::string GetVoiceId() const;

                    /**
                     * 设置
                     * @param _voiceId 
                     * 
                     */
                    void SetVoiceId(const std::string& _voiceId);

                    /**
                     * 判断参数 VoiceId 是否已赋值
                     * @return VoiceId 是否已赋值
                     * 
                     */
                    bool VoiceIdHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::vector<std::string> m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_modelVersion;
                    bool m_modelVersionHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_ratio;
                    bool m_ratioHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_language;
                    bool m_languageHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_referenceDuration;
                    bool m_referenceDurationHasBeenSet;

                    /**
                     * 
                     */
                    bool m_enableTTS;
                    bool m_enableTTSHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_voiceId;
                    bool m_voiceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DOCTOVIDEOINPUT_H_
