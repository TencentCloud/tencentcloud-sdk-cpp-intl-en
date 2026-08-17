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
                * Intelligent highlight collection segments.
                */
                class HighlightSegmentItem : public AbstractModel
                {
                public:
                    HighlightSegmentItem();
                    ~HighlightSegmentItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Confidence degree.
                     * @return Confidence Confidence degree.
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Confidence degree.
                     * @param _confidence Confidence degree.
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
                     * 获取Segment start time offset.
                     * @return StartTimeOffset Segment start time offset.
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置Segment start time offset.
                     * @param _startTimeOffset Segment start time offset.
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
                     * 获取End time offset of the recording clip.
                     * @return EndTimeOffset End time offset of the recording clip.
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置End time offset of the recording clip.
                     * @param _endTimeOffset End time offset of the recording clip.
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
                     * 获取
                     * @return SegmentTags 
                     * 
                     */
                    std::vector<std::string> GetSegmentTags() const;

                    /**
                     * 设置
                     * @param _segmentTags 
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
                     * 获取The start time of a live streaming segment, in the ISO date format.	
                     * @return BeginTime The start time of a live streaming segment, in the ISO date format.	
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置The start time of a live streaming segment, in the ISO date format.	
                     * @param _beginTime The start time of a live streaming segment, in the ISO date format.	
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
                     * 获取The end time of a live streaming segment, in the ISO date format.	
                     * @return EndTime The end time of a live streaming segment, in the ISO date format.	
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置The end time of a live streaming segment, in the ISO date format.	
                     * @param _endTime The end time of a live streaming segment, in the ISO date format.	
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Highlight title.
                     * @return Title Highlight title.
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置Highlight title.
                     * @param _title Highlight title.
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取Highlight overview.
                     * @return Summary Highlight overview.
                     * 
                     */
                    std::string GetSummary() const;

                    /**
                     * 设置Highlight overview.
                     * @param _summary Highlight overview.
                     * 
                     */
                    void SetSummary(const std::string& _summary);

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     * 
                     */
                    bool SummaryHasBeenSet() const;

                private:

                    /**
                     * Confidence degree.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * Segment start time offset.
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * End time offset of the recording clip.
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_segmentTags;
                    bool m_segmentTagsHasBeenSet;

                    /**
                     * The start time of a live streaming segment, in the ISO date format.	
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * The end time of a live streaming segment, in the ISO date format.	
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Highlight title.
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * Highlight overview.
                     */
                    std::string m_summary;
                    bool m_summaryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_HIGHLIGHTSEGMENTITEM_H_
