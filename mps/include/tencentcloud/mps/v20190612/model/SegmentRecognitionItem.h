/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SEGMENTRECOGNITIONITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SEGMENTRECOGNITIONITEM_H_

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
                * 
                */
                class SegmentRecognitionItem : public AbstractModel
                {
                public:
                    SegmentRecognitionItem();
                    ~SegmentRecognitionItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return Confidence 
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置
                     * @param _confidence 
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
                     * 获取
                     * @return StartTimeOffset 
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置
                     * @param _startTimeOffset 
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
                     * 获取
                     * @return EndTimeOffset 
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置
                     * @param _endTimeOffset 
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
                     * @return SegmentUrl 
                     * 
                     */
                    std::string GetSegmentUrl() const;

                    /**
                     * 设置
                     * @param _segmentUrl 
                     * 
                     */
                    void SetSegmentUrl(const std::string& _segmentUrl);

                    /**
                     * 判断参数 SegmentUrl 是否已赋值
                     * @return SegmentUrl 是否已赋值
                     * 
                     */
                    bool SegmentUrlHasBeenSet() const;

                    /**
                     * 获取Segment cover.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return CovImgUrl Segment cover.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetCovImgUrl() const;

                    /**
                     * 设置Segment cover.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _covImgUrl Segment cover.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCovImgUrl(const std::string& _covImgUrl);

                    /**
                     * 判断参数 CovImgUrl 是否已赋值
                     * @return CovImgUrl 是否已赋值
                     * 
                     */
                    bool CovImgUrlHasBeenSet() const;

                    /**
                     * 获取Segment title.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Title Segment title.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置Segment title.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _title Segment title.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Segment summary.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Summary Segment summary.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSummary() const;

                    /**
                     * 设置Segment summary.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _summary Segment summary.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSummary(const std::string& _summary);

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     * 
                     */
                    bool SummaryHasBeenSet() const;

                    /**
                     * 获取Segmentation keywords.
                     * @return Keywords Segmentation keywords.
                     * 
                     */
                    std::vector<std::string> GetKeywords() const;

                    /**
                     * 设置Segmentation keywords.
                     * @param _keywords Segmentation keywords.
                     * 
                     */
                    void SetKeywords(const std::vector<std::string>& _keywords);

                    /**
                     * 判断参数 Keywords 是否已赋值
                     * @return Keywords 是否已赋值
                     * 
                     */
                    bool KeywordsHasBeenSet() const;

                    /**
                     * 获取The start time of a live streaming segment, in the ISO date format.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return BeginTime The start time of a live streaming segment, in the ISO date format.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置The start time of a live streaming segment, in the ISO date format.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _beginTime The start time of a live streaming segment, in the ISO date format.
Note: This field may return null, indicating that no valid value can be obtained.
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
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return EndTime The end time of a live streaming segment, in the ISO date format.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置The end time of a live streaming segment, in the ISO date format.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _endTime The end time of a live streaming segment, in the ISO date format.
Note: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取Specifies the character ID.
                     * @return PersonId Specifies the character ID.
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置Specifies the character ID.
                     * @param _personId Specifies the character ID.
                     * 
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * 
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_segmentUrl;
                    bool m_segmentUrlHasBeenSet;

                    /**
                     * Segment cover.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_covImgUrl;
                    bool m_covImgUrlHasBeenSet;

                    /**
                     * Segment title.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * Segment summary.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * Segmentation keywords.
                     */
                    std::vector<std::string> m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * The start time of a live streaming segment, in the ISO date format.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * The end time of a live streaming segment, in the ISO date format.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Specifies the character ID.
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SEGMENTRECOGNITIONITEM_H_
