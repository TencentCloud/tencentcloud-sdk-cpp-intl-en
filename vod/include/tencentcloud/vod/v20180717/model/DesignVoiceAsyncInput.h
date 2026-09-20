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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESIGNVOICEASYNCINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESIGNVOICEASYNCINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/VoiceSettings.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Input of the timbre design task.
                */
                class DesignVoiceAsyncInput : public AbstractModel
                {
                public:
                    DesignVoiceAsyncInput();
                    ~DesignVoiceAsyncInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Voice description.</p>
                     * @return Prompt <p>Voice description.</p>
                     * 
                     */
                    std::string GetPrompt() const;

                    /**
                     * 设置<p>Voice description.</p>
                     * @param _prompt <p>Voice description.</p>
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
                     * 获取<p>Tone information</p>
                     * @return VoiceSettings <p>Tone information</p>
                     * 
                     */
                    VoiceSettings GetVoiceSettings() const;

                    /**
                     * 设置<p>Tone information</p>
                     * @param _voiceSettings <p>Tone information</p>
                     * 
                     */
                    void SetVoiceSettings(const VoiceSettings& _voiceSettings);

                    /**
                     * 判断参数 VoiceSettings 是否已赋值
                     * @return VoiceSettings 是否已赋值
                     * 
                     */
                    bool VoiceSettingsHasBeenSet() const;

                    /**
                     * 获取<p>Trial text.</p>
                     * @return PreviewText <p>Trial text.</p>
                     * 
                     */
                    std::string GetPreviewText() const;

                    /**
                     * 设置<p>Trial text.</p>
                     * @param _previewText <p>Trial text.</p>
                     * 
                     */
                    void SetPreviewText(const std::string& _previewText);

                    /**
                     * 判断参数 PreviewText 是否已赋值
                     * @return PreviewText 是否已赋值
                     * 
                     */
                    bool PreviewTextHasBeenSet() const;

                    /**
                     * 获取<p>Extended parameters in the format of a JSON string.</p>
                     * @return ExtParam <p>Extended parameters in the format of a JSON string.</p>
                     * 
                     */
                    std::string GetExtParam() const;

                    /**
                     * 设置<p>Extended parameters in the format of a JSON string.</p>
                     * @param _extParam <p>Extended parameters in the format of a JSON string.</p>
                     * 
                     */
                    void SetExtParam(const std::string& _extParam);

                    /**
                     * 判断参数 ExtParam 是否已赋值
                     * @return ExtParam 是否已赋值
                     * 
                     */
                    bool ExtParamHasBeenSet() const;

                private:

                    /**
                     * <p>Voice description.</p>
                     */
                    std::string m_prompt;
                    bool m_promptHasBeenSet;

                    /**
                     * <p>Tone information</p>
                     */
                    VoiceSettings m_voiceSettings;
                    bool m_voiceSettingsHasBeenSet;

                    /**
                     * <p>Trial text.</p>
                     */
                    std::string m_previewText;
                    bool m_previewTextHasBeenSet;

                    /**
                     * <p>Extended parameters in the format of a JSON string.</p>
                     */
                    std::string m_extParam;
                    bool m_extParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESIGNVOICEASYNCINPUT_H_
