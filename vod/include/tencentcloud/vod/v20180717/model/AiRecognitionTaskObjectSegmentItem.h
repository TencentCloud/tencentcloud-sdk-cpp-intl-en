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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKOBJECTSEGMENTITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKOBJECTSEGMENTITEM_H_

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
                * Object recognition result fragment.
                */
                class AiRecognitionTaskObjectSegmentItem : public AbstractModel
                {
                public:
                    AiRecognitionTaskObjectSegmentItem();
                    ~AiRecognitionTaskObjectSegmentItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Identifies the offset time of the beginning of the segment, in seconds.
                     * @return StartTimeOffset Identifies the offset time of the beginning of the segment, in seconds.
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置Identifies the offset time of the beginning of the segment, in seconds.
                     * @param _startTimeOffset Identifies the offset time of the beginning of the segment, in seconds.
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
                     * 获取Offset time to identify the end of the segment, in seconds.
                     * @return EndTimeOffset Offset time to identify the end of the segment, in seconds.
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置Offset time to identify the end of the segment, in seconds.
                     * @param _endTimeOffset Offset time to identify the end of the segment, in seconds.
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
                     * 获取Identify segment confidence. Value: 0~100.
                     * @return Confidence Identify segment confidence. Value: 0~100.
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Identify segment confidence. Value: 0~100.
                     * @param _confidence Identify segment confidence. Value: 0~100.
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
                     * 获取The area coordinates of the recognition result. The array contains 4 elements [x1, y1, x2, y2], which in turn represent the horizontal and vertical coordinates of the upper left point and lower right point of the area.
                     * @return AreaCoordSet The area coordinates of the recognition result. The array contains 4 elements [x1, y1, x2, y2], which in turn represent the horizontal and vertical coordinates of the upper left point and lower right point of the area.
                     * 
                     */
                    std::vector<int64_t> GetAreaCoordSet() const;

                    /**
                     * 设置The area coordinates of the recognition result. The array contains 4 elements [x1, y1, x2, y2], which in turn represent the horizontal and vertical coordinates of the upper left point and lower right point of the area.
                     * @param _areaCoordSet The area coordinates of the recognition result. The array contains 4 elements [x1, y1, x2, y2], which in turn represent the horizontal and vertical coordinates of the upper left point and lower right point of the area.
                     * 
                     */
                    void SetAreaCoordSet(const std::vector<int64_t>& _areaCoordSet);

                    /**
                     * 判断参数 AreaCoordSet 是否已赋值
                     * @return AreaCoordSet 是否已赋值
                     * 
                     */
                    bool AreaCoordSetHasBeenSet() const;

                private:

                    /**
                     * Identifies the offset time of the beginning of the segment, in seconds.
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * Offset time to identify the end of the segment, in seconds.
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * Identify segment confidence. Value: 0~100.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * The area coordinates of the recognition result. The array contains 4 elements [x1, y1, x2, y2], which in turn represent the horizontal and vertical coordinates of the upper left point and lower right point of the area.
                     */
                    std::vector<int64_t> m_areaCoordSet;
                    bool m_areaCoordSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKOBJECTSEGMENTITEM_H_
