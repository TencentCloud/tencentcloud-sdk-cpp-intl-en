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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_TRANSLATECONFIGUREINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_TRANSLATECONFIGUREINFO_H_

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
                * Control parameter of a full speech recognition task.
                */
                class TranslateConfigureInfo : public AbstractModel
                {
                public:
                    TranslateConfigureInfo();
                    ~TranslateConfigureInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Switch of a full speech recognition task. Valid values:
<li>ON: Enables an intelligent full speech recognition task;</li>
<li>OFF: Disables an intelligent full speech recognition task.</li>
                     * @return Switch Switch of a full speech recognition task. Valid values:
<li>ON: Enables an intelligent full speech recognition task;</li>
<li>OFF: Disables an intelligent full speech recognition task.</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Switch of a full speech recognition task. Valid values:
<li>ON: Enables an intelligent full speech recognition task;</li>
<li>OFF: Disables an intelligent full speech recognition task.</li>
                     * @param _switch Switch of a full speech recognition task. Valid values:
<li>ON: Enables an intelligent full speech recognition task;</li>
<li>OFF: Disables an intelligent full speech recognition task.</li>
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
                     * 获取
                     * @return SourceLanguage 
                     * 
                     */
                    std::string GetSourceLanguage() const;

                    /**
                     * 设置
                     * @param _sourceLanguage 
                     * 
                     */
                    void SetSourceLanguage(const std::string& _sourceLanguage);

                    /**
                     * 判断参数 SourceLanguage 是否已赋值
                     * @return SourceLanguage 是否已赋值
                     * 
                     */
                    bool SourceLanguageHasBeenSet() const;

                    /**
                     * 获取
                     * @return DestinationLanguage 
                     * 
                     */
                    std::string GetDestinationLanguage() const;

                    /**
                     * 设置
                     * @param _destinationLanguage 
                     * 
                     */
                    void SetDestinationLanguage(const std::string& _destinationLanguage);

                    /**
                     * 判断参数 DestinationLanguage 是否已赋值
                     * @return DestinationLanguage 是否已赋值
                     * 
                     */
                    bool DestinationLanguageHasBeenSet() const;

                    /**
                     * 获取Generated subtitle file format. Leaving it as an empty string means no subtitle file will be generated. Valid value:
<li>vtt: Generate a WebVTT subtitle file.</li>

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubtitleFormat Generated subtitle file format. Leaving it as an empty string means no subtitle file will be generated. Valid value:
<li>vtt: Generate a WebVTT subtitle file.</li>

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubtitleFormat() const;

                    /**
                     * 设置Generated subtitle file format. Leaving it as an empty string means no subtitle file will be generated. Valid value:
<li>vtt: Generate a WebVTT subtitle file.</li>

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subtitleFormat Generated subtitle file format. Leaving it as an empty string means no subtitle file will be generated. Valid value:
<li>vtt: Generate a WebVTT subtitle file.</li>

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubtitleFormat(const std::string& _subtitleFormat);

                    /**
                     * 判断参数 SubtitleFormat 是否已赋值
                     * @return SubtitleFormat 是否已赋值
                     * 
                     */
                    bool SubtitleFormatHasBeenSet() const;

                private:

                    /**
                     * Switch of a full speech recognition task. Valid values:
<li>ON: Enables an intelligent full speech recognition task;</li>
<li>OFF: Disables an intelligent full speech recognition task.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_sourceLanguage;
                    bool m_sourceLanguageHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_destinationLanguage;
                    bool m_destinationLanguageHasBeenSet;

                    /**
                     * Generated subtitle file format. Leaving it as an empty string means no subtitle file will be generated. Valid value:
<li>vtt: Generate a WebVTT subtitle file.</li>

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subtitleFormat;
                    bool m_subtitleFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_TRANSLATECONFIGUREINFO_H_
