/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_ASRFULLTEXTCONFIGUREINFOFORUPDATE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_ASRFULLTEXTCONFIGUREINFOFORUPDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Control parameter of full speech recognition task.
                */
                class AsrFullTextConfigureInfoForUpdate : public AbstractModel
                {
                public:
                    AsrFullTextConfigureInfoForUpdate();
                    ~AsrFullTextConfigureInfoForUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Switch of full speech recognition task. Valid values:
<li>ON: enables intelligent full speech recognition task;</li>
<li>OFF: disables intelligent full speech recognition task.</li>
                     * @return Switch Switch of full speech recognition task. Valid values:
<li>ON: enables intelligent full speech recognition task;</li>
<li>OFF: disables intelligent full speech recognition task.</li>
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Switch of full speech recognition task. Valid values:
<li>ON: enables intelligent full speech recognition task;</li>
<li>OFF: disables intelligent full speech recognition task.</li>
                     * @param Switch Switch of full speech recognition task. Valid values:
<li>ON: enables intelligent full speech recognition task;</li>
<li>OFF: disables intelligent full speech recognition task.</li>
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取Format of generated subtitles file. If an empty string is entered, no subtitles files will be generated. Valid values:
<li>vtt: generates a WebVTT subtitles file.</li>
                     * @return SubtitleFormat Format of generated subtitles file. If an empty string is entered, no subtitles files will be generated. Valid values:
<li>vtt: generates a WebVTT subtitles file.</li>
                     */
                    std::string GetSubtitleFormat() const;

                    /**
                     * 设置Format of generated subtitles file. If an empty string is entered, no subtitles files will be generated. Valid values:
<li>vtt: generates a WebVTT subtitles file.</li>
                     * @param SubtitleFormat Format of generated subtitles file. If an empty string is entered, no subtitles files will be generated. Valid values:
<li>vtt: generates a WebVTT subtitles file.</li>
                     */
                    void SetSubtitleFormat(const std::string& _subtitleFormat);

                    /**
                     * 判断参数 SubtitleFormat 是否已赋值
                     * @return SubtitleFormat 是否已赋值
                     */
                    bool SubtitleFormatHasBeenSet() const;

                private:

                    /**
                     * Switch of full speech recognition task. Valid values:
<li>ON: enables intelligent full speech recognition task;</li>
<li>OFF: disables intelligent full speech recognition task.</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * Format of generated subtitles file. If an empty string is entered, no subtitles files will be generated. Valid values:
<li>vtt: generates a WebVTT subtitles file.</li>
                     */
                    std::string m_subtitleFormat;
                    bool m_subtitleFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ASRFULLTEXTCONFIGUREINFOFORUPDATE_H_
