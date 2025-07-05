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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSESUBTITLEITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSESUBTITLEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ComposeTrackTime.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * The subtitle element information of a video editing/compositing task.
                */
                class ComposeSubtitleItem : public AbstractModel
                {
                public:
                    ComposeSubtitleItem();
                    ~ComposeSubtitleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The subtitle style ID, which corresponds to the `Id` field of `ComposeStyles`.
                     * @return StyleId The subtitle style ID, which corresponds to the `Id` field of `ComposeStyles`.
                     * 
                     */
                    std::string GetStyleId() const;

                    /**
                     * 设置The subtitle style ID, which corresponds to the `Id` field of `ComposeStyles`.
                     * @param _styleId The subtitle style ID, which corresponds to the `Id` field of `ComposeStyles`.
                     * 
                     */
                    void SetStyleId(const std::string& _styleId);

                    /**
                     * 判断参数 StyleId 是否已赋值
                     * @return StyleId 是否已赋值
                     * 
                     */
                    bool StyleIdHasBeenSet() const;

                    /**
                     * 获取The subtitle text.
                     * @return Text The subtitle text.
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置The subtitle text.
                     * @param _text The subtitle text.
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取The time of the element in the timeline. If this is not specified, the element will follow the previous element.	
                     * @return TrackTime The time of the element in the timeline. If this is not specified, the element will follow the previous element.	
                     * 
                     */
                    ComposeTrackTime GetTrackTime() const;

                    /**
                     * 设置The time of the element in the timeline. If this is not specified, the element will follow the previous element.	
                     * @param _trackTime The time of the element in the timeline. If this is not specified, the element will follow the previous element.	
                     * 
                     */
                    void SetTrackTime(const ComposeTrackTime& _trackTime);

                    /**
                     * 判断参数 TrackTime 是否已赋值
                     * @return TrackTime 是否已赋值
                     * 
                     */
                    bool TrackTimeHasBeenSet() const;

                private:

                    /**
                     * The subtitle style ID, which corresponds to the `Id` field of `ComposeStyles`.
                     */
                    std::string m_styleId;
                    bool m_styleIdHasBeenSet;

                    /**
                     * The subtitle text.
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * The time of the element in the timeline. If this is not specified, the element will follow the previous element.	
                     */
                    ComposeTrackTime m_trackTime;
                    bool m_trackTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSESUBTITLEITEM_H_
