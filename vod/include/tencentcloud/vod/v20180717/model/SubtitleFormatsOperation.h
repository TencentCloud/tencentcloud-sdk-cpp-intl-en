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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SUBTITLEFORMATSOPERATION_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SUBTITLEFORMATSOPERATION_H_

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
                * Subtitle format list operations.
                */
                class SubtitleFormatsOperation : public AbstractModel
                {
                public:
                    SubtitleFormatsOperation();
                    ~SubtitleFormatsOperation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Operation type. Value range:
<li>add: add the format list specified by Formats;</li>
<li>delete: delete the format list specified by Formats;<l/i>
<li>reset: Reset the configured format list to the format list specified by Formats.</li>
                     * @return Type Operation type. Value range:
<li>add: add the format list specified by Formats;</li>
<li>delete: delete the format list specified by Formats;<l/i>
<li>reset: Reset the configured format list to the format list specified by Formats.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Operation type. Value range:
<li>add: add the format list specified by Formats;</li>
<li>delete: delete the format list specified by Formats;<l/i>
<li>reset: Reset the configured format list to the format list specified by Formats.</li>
                     * @param _type Operation type. Value range:
<li>add: add the format list specified by Formats;</li>
<li>delete: delete the format list specified by Formats;<l/i>
<li>reset: Reset the configured format list to the format list specified by Formats.</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Subtitle format list. Value range:
<li>vtt: Generate a WebVTT subtitle file;</li>
<li>srt: generate SRT subtitle file.</li>
                     * @return Formats Subtitle format list. Value range:
<li>vtt: Generate a WebVTT subtitle file;</li>
<li>srt: generate SRT subtitle file.</li>
                     * 
                     */
                    std::vector<std::string> GetFormats() const;

                    /**
                     * 设置Subtitle format list. Value range:
<li>vtt: Generate a WebVTT subtitle file;</li>
<li>srt: generate SRT subtitle file.</li>
                     * @param _formats Subtitle format list. Value range:
<li>vtt: Generate a WebVTT subtitle file;</li>
<li>srt: generate SRT subtitle file.</li>
                     * 
                     */
                    void SetFormats(const std::vector<std::string>& _formats);

                    /**
                     * 判断参数 Formats 是否已赋值
                     * @return Formats 是否已赋值
                     * 
                     */
                    bool FormatsHasBeenSet() const;

                private:

                    /**
                     * Operation type. Value range:
<li>add: add the format list specified by Formats;</li>
<li>delete: delete the format list specified by Formats;<l/i>
<li>reset: Reset the configured format list to the format list specified by Formats.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Subtitle format list. Value range:
<li>vtt: Generate a WebVTT subtitle file;</li>
<li>srt: generate SRT subtitle file.</li>
                     */
                    std::vector<std::string> m_formats;
                    bool m_formatsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SUBTITLEFORMATSOPERATION_H_
