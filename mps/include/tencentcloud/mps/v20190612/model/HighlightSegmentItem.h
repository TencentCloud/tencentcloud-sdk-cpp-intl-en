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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_HIGHLIGHTSEGMENTITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_HIGHLIGHTSEGMENTITEM_H_

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
                * The information of a highlight segment.
                */
                class HighlightSegmentItem : public AbstractModel
                {
                public:
                    HighlightSegmentItem();
                    ~HighlightSegmentItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The confidence score.
                     * @return Confidence The confidence score.
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置The confidence score.
                     * @param _confidence The confidence score.
                     * 
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取The start time offset of the segment.
                     * @return StartTimeOffset The start time offset of the segment.
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置The start time offset of the segment.
                     * @param _startTimeOffset The start time offset of the segment.
                     * 
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     * 
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取The end time offset of the segment.
                     * @return EndTimeOffset The end time offset of the segment.
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置The end time offset of the segment.
                     * @param _endTimeOffset The end time offset of the segment.
                     * 
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     * 
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                    /**
                     * 获取Segment tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SegmentTags Segment tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetSegmentTags() const;

                    /**
                     * 设置Segment tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _segmentTags Segment tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSegmentTags(const std::vector<std::string>& _segmentTags);

                    /**
                     * 判断参数 SegmentTags 是否已赋值
                     * @return SegmentTags 是否已赋值
                     * 
                     */
                    bool SegmentTagsHasBeenSet() const;

                    /**
                     * 获取Start time of the live streaming segment in ISO date and time format.	
                     * @return BeginTime Start time of the live streaming segment in ISO date and time format.	
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置Start time of the live streaming segment in ISO date and time format.	
                     * @param _beginTime Start time of the live streaming segment in ISO date and time format.	
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取End time of the live streaming segment in ISO date and time format.	
                     * @return EndTime End time of the live streaming segment in ISO date and time format.	
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time of the live streaming segment in ISO date and time format.	
                     * @param _endTime End time of the live streaming segment in ISO date and time format.	
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
                     * The confidence score.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * The start time offset of the segment.
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * The end time offset of the segment.
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * Segment tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_segmentTags;
                    bool m_segmentTagsHasBeenSet;

                    /**
                     * Start time of the live streaming segment in ISO date and time format.	
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * End time of the live streaming segment in ISO date and time format.	
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_HIGHLIGHTSEGMENTITEM_H_
