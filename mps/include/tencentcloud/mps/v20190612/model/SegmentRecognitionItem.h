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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SEGMENTRECOGNITIONITEM_H_
