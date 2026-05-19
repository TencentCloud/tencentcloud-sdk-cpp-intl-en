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
                * Input parameter of adaptive bitrate task multilingual subtitles.
                */
                class ComplexAdaptiveDynamicStreamingTaskSubtitleInput : public AbstractModel
                {
                public:
                    ComplexAdaptiveDynamicStreamingTaskSubtitleInput();
                    ~ComplexAdaptiveDynamicStreamingTaskSubtitleInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Subtitle ID. The subtitle must belong to the input main media of the adaptive bitrate task.
                     * @return Id Subtitle ID. The subtitle must belong to the input main media of the adaptive bitrate task.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Subtitle ID. The subtitle must belong to the input main media of the adaptive bitrate task.
                     * @param _id Subtitle ID. The subtitle must belong to the input main media of the adaptive bitrate task.
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
                     * 获取Set as the default subtitle for adaptive bitrate. Value:
<li>YES: Set as default subtitle;</li>
<li>NO: Not set as default subtitle (default value).</li>
                     * @return Default Set as the default subtitle for adaptive bitrate. Value:
<li>YES: Set as default subtitle;</li>
<li>NO: Not set as default subtitle (default value).</li>
                     * 
                     */
                    std::string GetDefault() const;

                    /**
                     * 设置Set as the default subtitle for adaptive bitrate. Value:
<li>YES: Set as default subtitle;</li>
<li>NO: Not set as default subtitle (default value).</li>
                     * @param _default Set as the default subtitle for adaptive bitrate. Value:
<li>YES: Set as default subtitle;</li>
<li>NO: Not set as default subtitle (default value).</li>
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
                     * Subtitle ID. The subtitle must belong to the input main media of the adaptive bitrate task.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Set as the default subtitle for adaptive bitrate. Value:
<li>YES: Set as default subtitle;</li>
<li>NO: Not set as default subtitle (default value).</li>
                     */
                    std::string m_default;
                    bool m_defaultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_COMPLEXADAPTIVEDYNAMICSTREAMINGTASKSUBTITLEINPUT_H_
