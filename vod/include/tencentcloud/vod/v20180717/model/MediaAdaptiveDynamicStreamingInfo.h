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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAADAPTIVEDYNAMICSTREAMINGINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAADAPTIVEDYNAMICSTREAMINGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AdaptiveDynamicStreamingInfoItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * Adaptive bitrate streaming information
                */
                class MediaAdaptiveDynamicStreamingInfo : public AbstractModel
                {
                public:
                    MediaAdaptiveDynamicStreamingInfo();
                    ~MediaAdaptiveDynamicStreamingInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Information array of adaptive bitrate streaming.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AdaptiveDynamicStreamingSet Information array of adaptive bitrate streaming.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AdaptiveDynamicStreamingInfoItem> GetAdaptiveDynamicStreamingSet() const;

                    /**
                     * 设置Information array of adaptive bitrate streaming.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _adaptiveDynamicStreamingSet Information array of adaptive bitrate streaming.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAdaptiveDynamicStreamingSet(const std::vector<AdaptiveDynamicStreamingInfoItem>& _adaptiveDynamicStreamingSet);

                    /**
                     * 判断参数 AdaptiveDynamicStreamingSet 是否已赋值
                     * @return AdaptiveDynamicStreamingSet 是否已赋值
                     * 
                     */
                    bool AdaptiveDynamicStreamingSetHasBeenSet() const;

                private:

                    /**
                     * Information array of adaptive bitrate streaming.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AdaptiveDynamicStreamingInfoItem> m_adaptiveDynamicStreamingSet;
                    bool m_adaptiveDynamicStreamingSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIAADAPTIVEDYNAMICSTREAMINGINFO_H_
