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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_LIVEREALTIMECLIPMEDIASEGMENTINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_LIVEREALTIMECLIPMEDIASEGMENTINFO_H_

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
                * The information of the segment clipped.
                */
                class LiveRealTimeClipMediaSegmentInfo : public AbstractModel
                {
                public:
                    LiveRealTimeClipMediaSegmentInfo();
                    ~LiveRealTimeClipMediaSegmentInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Segment start time. Format reference [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return StartTime Segment start time. Format reference [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Segment start time. Format reference [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _startTime Segment start time. Format reference [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Segment end time. Format reference [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return EndTime Segment end time. Format reference [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Segment end time. Format reference [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _endTime Segment end time. Format reference [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Segment start time. Format reference [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Segment end time. Format reference [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_LIVEREALTIMECLIPMEDIASEGMENTINFO_H_
