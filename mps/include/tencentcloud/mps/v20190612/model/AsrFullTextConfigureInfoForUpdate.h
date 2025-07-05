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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_ASRFULLTEXTCONFIGUREINFOFORUPDATE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_ASRFULLTEXTCONFIGUREINFOFORUPDATE_H_

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
                class AsrFullTextConfigureInfoForUpdate : public AbstractModel
                {
                public:
                    AsrFullTextConfigureInfoForUpdate();
                    ~AsrFullTextConfigureInfoForUpdate() = default;
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
                     * 获取Format of the generated subtitles file. If an empty string is entered, no subtitles files will be generated. Valid value:
<li>vtt: Generates a WebVTT subtitles file.</li>
                     * @return SubtitleFormat Format of the generated subtitles file. If an empty string is entered, no subtitles files will be generated. Valid value:
<li>vtt: Generates a WebVTT subtitles file.</li>
                     * 
                     */
                    std::string GetSubtitleFormat() const;

                    /**
                     * 设置Format of the generated subtitles file. If an empty string is entered, no subtitles files will be generated. Valid value:
<li>vtt: Generates a WebVTT subtitles file.</li>
                     * @param _subtitleFormat Format of the generated subtitles file. If an empty string is entered, no subtitles files will be generated. Valid value:
<li>vtt: Generates a WebVTT subtitles file.</li>
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
                     * Format of the generated subtitles file. If an empty string is entered, no subtitles files will be generated. Valid value:
<li>vtt: Generates a WebVTT subtitles file.</li>
                     */
                    std::string m_subtitleFormat;
                    bool m_subtitleFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ASRFULLTEXTCONFIGUREINFOFORUPDATE_H_
