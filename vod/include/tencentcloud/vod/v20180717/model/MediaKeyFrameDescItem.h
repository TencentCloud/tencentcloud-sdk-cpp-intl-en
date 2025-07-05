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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAKEYFRAMEDESCITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAKEYFRAMEDESCITEM_H_

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
                * Video timestamp information
                */
                class MediaKeyFrameDescItem : public AbstractModel
                {
                public:
                    MediaKeyFrameDescItem();
                    ~MediaKeyFrameDescItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Offset time of video timestamp in seconds.
                     * @return TimeOffset Offset time of video timestamp in seconds.
                     * 
                     */
                    double GetTimeOffset() const;

                    /**
                     * 设置Offset time of video timestamp in seconds.
                     * @param _timeOffset Offset time of video timestamp in seconds.
                     * 
                     */
                    void SetTimeOffset(const double& _timeOffset);

                    /**
                     * 判断参数 TimeOffset 是否已赋值
                     * @return TimeOffset 是否已赋值
                     * 
                     */
                    bool TimeOffsetHasBeenSet() const;

                    /**
                     * 获取Content string of timestamp containing 1-128 characters.
                     * @return Content Content string of timestamp containing 1-128 characters.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Content string of timestamp containing 1-128 characters.
                     * @param _content Content string of timestamp containing 1-128 characters.
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * Offset time of video timestamp in seconds.
                     */
                    double m_timeOffset;
                    bool m_timeOffsetHasBeenSet;

                    /**
                     * Content string of timestamp containing 1-128 characters.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAKEYFRAMEDESCITEM_H_
