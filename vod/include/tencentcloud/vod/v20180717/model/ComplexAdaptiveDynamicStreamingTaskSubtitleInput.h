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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_COMPLEXADAPTIVEDYNAMICSTREAMINGTASKSUBTITLEINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_COMPLEXADAPTIVEDYNAMICSTREAMINGTASKSUBTITLEINPUT_H_

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
                * Input parameters for subtitles in the complex adaptive bitrate streaming task.
                */
                class ComplexAdaptiveDynamicStreamingTaskSubtitleInput : public AbstractModel
                {
                public:
                    ComplexAdaptiveDynamicStreamingTaskSubtitleInput();
                    ~ComplexAdaptiveDynamicStreamingTaskSubtitleInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Subtitle ID, which must belongs to the main media.
                     * @return Id Subtitle ID, which must belongs to the main media.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Subtitle ID, which must belongs to the main media.
                     * @param _id Subtitle ID, which must belongs to the main media.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Whether to set as the default subtitle for adaptive bitrate streaming.
<li>YES: Set as the default subtitle;</li>
<li>NO: Not set as the default subtitle (default value).</li>
                     * @return Default Whether to set as the default subtitle for adaptive bitrate streaming.
<li>YES: Set as the default subtitle;</li>
<li>NO: Not set as the default subtitle (default value).</li>
                     * 
                     */
                    std::string GetDefault() const;

                    /**
                     * 设置Whether to set as the default subtitle for adaptive bitrate streaming.
<li>YES: Set as the default subtitle;</li>
<li>NO: Not set as the default subtitle (default value).</li>
                     * @param _default Whether to set as the default subtitle for adaptive bitrate streaming.
<li>YES: Set as the default subtitle;</li>
<li>NO: Not set as the default subtitle (default value).</li>
                     * 
                     */
                    void SetDefault(const std::string& _default);

                    /**
                     * 判断参数 Default 是否已赋值
                     * @return Default 是否已赋值
                     * 
                     */
                    bool DefaultHasBeenSet() const;

                private:

                    /**
                     * Subtitle ID, which must belongs to the main media.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Whether to set as the default subtitle for adaptive bitrate streaming.
<li>YES: Set as the default subtitle;</li>
<li>NO: Not set as the default subtitle (default value).</li>
                     */
                    std::string m_default;
                    bool m_defaultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_COMPLEXADAPTIVEDYNAMICSTREAMINGTASKSUBTITLEINPUT_H_
