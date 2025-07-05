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
                * The modification of the subtitle format list.
                */
                class SubtitleFormatsOperation : public AbstractModel
                {
                public:
                    SubtitleFormatsOperation();
                    ~SubtitleFormatsOperation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The modification type. Valid values:
<li>add: Add the formats specified by `Formats`.</li>
<li>delete: Delete the formats specified by `Formats`.<l/i>
<li>reset: Reset the format list to formats specified by `Formats`.</li>
                     * @return Type The modification type. Valid values:
<li>add: Add the formats specified by `Formats`.</li>
<li>delete: Delete the formats specified by `Formats`.<l/i>
<li>reset: Reset the format list to formats specified by `Formats`.</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置The modification type. Valid values:
<li>add: Add the formats specified by `Formats`.</li>
<li>delete: Delete the formats specified by `Formats`.<l/i>
<li>reset: Reset the format list to formats specified by `Formats`.</li>
                     * @param _type The modification type. Valid values:
<li>add: Add the formats specified by `Formats`.</li>
<li>delete: Delete the formats specified by `Formats`.<l/i>
<li>reset: Reset the format list to formats specified by `Formats`.</li>
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
                     * 获取The subtitle format list. Valid values:
<li>vtt</li>
<li>srt</li>
                     * @return Formats The subtitle format list. Valid values:
<li>vtt</li>
<li>srt</li>
                     * 
                     */
                    std::vector<std::string> GetFormats() const;

                    /**
                     * 设置The subtitle format list. Valid values:
<li>vtt</li>
<li>srt</li>
                     * @param _formats The subtitle format list. Valid values:
<li>vtt</li>
<li>srt</li>
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
                     * The modification type. Valid values:
<li>add: Add the formats specified by `Formats`.</li>
<li>delete: Delete the formats specified by `Formats`.<l/i>
<li>reset: Reset the format list to formats specified by `Formats`.</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * The subtitle format list. Valid values:
<li>vtt</li>
<li>srt</li>
                     */
                    std::vector<std::string> m_formats;
                    bool m_formatsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SUBTITLEFORMATSOPERATION_H_
