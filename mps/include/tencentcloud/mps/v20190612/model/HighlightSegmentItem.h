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
                     */
                    double GetConfidence() const;

                    /**
                     * 设置The confidence score.
                     * @param Confidence The confidence score.
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取The start time offset of the segment.
                     * @return StartTimeOffset The start time offset of the segment.
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置The start time offset of the segment.
                     * @param StartTimeOffset The start time offset of the segment.
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取The end time offset of the segment.
                     * @return EndTimeOffset The end time offset of the segment.
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置The end time offset of the segment.
                     * @param EndTimeOffset The end time offset of the segment.
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     */
                    bool EndTimeOffsetHasBeenSet() const;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_HIGHLIGHTSEGMENTITEM_H_
