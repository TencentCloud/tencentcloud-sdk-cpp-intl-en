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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_ASRFULLTEXTCONFIGUREINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_ASRFULLTEXTCONFIGUREINFO_H_

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
                * Speech Full-text Recognition Task Control Parameter
                */
                class AsrFullTextConfigureInfo : public AbstractModel
                {
                public:
                    AsrFullTextConfigureInfo();
                    ~AsrFullTextConfigureInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Voice full-text recognition task switch, available values:
<li>ON: Enable intelligent voice full-text recognition task.</li>
<li>OFF: Disables the intelligent voice full-text recognition task.</li>
                     * @return Switch Voice full-text recognition task switch, available values:
<li>ON: Enable intelligent voice full-text recognition task.</li>
<li>OFF: Disables the intelligent voice full-text recognition task.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Voice full-text recognition task switch, available values:
<li>ON: Enable intelligent voice full-text recognition task.</li>
<li>OFF: Disables the intelligent voice full-text recognition task.</li>
                     * @param _switch Voice full-text recognition task switch, available values:
<li>ON: Enable intelligent voice full-text recognition task.</li>
<li>OFF: Disables the intelligent voice full-text recognition task.</li>
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Generated subtitle file format. Leaving it as an empty string or not filling it in means no subtitle file will be generated. Available values:
<li>vtt: Generate a WebVTT subtitle file.</li>
                     * @return SubtitleFormat Generated subtitle file format. Leaving it as an empty string or not filling it in means no subtitle file will be generated. Available values:
<li>vtt: Generate a WebVTT subtitle file.</li>
                     * 
                     */
                    std::string GetSubtitleFormat() const;

                    /**
                     * 设置Generated subtitle file format. Leaving it as an empty string or not filling it in means no subtitle file will be generated. Available values:
<li>vtt: Generate a WebVTT subtitle file.</li>
                     * @param _subtitleFormat Generated subtitle file format. Leaving it as an empty string or not filling it in means no subtitle file will be generated. Available values:
<li>vtt: Generate a WebVTT subtitle file.</li>
                     * 
                     */
                    void SetSubtitleFormat(const std::string& _subtitleFormat);

                    /**
                     * 判断参数 SubtitleFormat 是否已赋值
                     * @return SubtitleFormat 是否已赋值
                     * 
                     */
                    bool SubtitleFormatHasBeenSet() const;

                    /**
                     * 获取Video source language.
                     * @return SourceLanguage Video source language.
                     * 
                     */
                    std::string GetSourceLanguage() const;

                    /**
                     * 设置Video source language.
                     * @param _sourceLanguage Video source language.
                     * 
                     */
                    void SetSourceLanguage(const std::string& _sourceLanguage);

                    /**
                     * 判断参数 SourceLanguage 是否已赋值
                     * @return SourceLanguage 是否已赋值
                     * 
                     */
                    bool SourceLanguageHasBeenSet() const;

                private:

                    /**
                     * Voice full-text recognition task switch, available values:
<li>ON: Enable intelligent voice full-text recognition task.</li>
<li>OFF: Disables the intelligent voice full-text recognition task.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Generated subtitle file format. Leaving it as an empty string or not filling it in means no subtitle file will be generated. Available values:
<li>vtt: Generate a WebVTT subtitle file.</li>
                     */
                    std::string m_subtitleFormat;
                    bool m_subtitleFormatHasBeenSet;

                    /**
                     * Video source language.
                     */
                    std::string m_sourceLanguage;
                    bool m_sourceLanguageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ASRFULLTEXTCONFIGUREINFO_H_
