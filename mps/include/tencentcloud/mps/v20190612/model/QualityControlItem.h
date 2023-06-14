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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_QUALITYCONTROLITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_QUALITYCONTROLITEM_H_

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
                * The information of a checked segment in quality control.
                */
                class QualityControlItem : public AbstractModel
                {
                public:
                    QualityControlItem();
                    ~QualityControlItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The confidence score. Value range: 0-100.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Confidence The confidence score. Value range: 0-100.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetConfidence() const;

                    /**
                     * 设置The confidence score. Value range: 0-100.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _confidence The confidence score. Value range: 0-100.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetConfidence(const int64_t& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取The start timestamp (second) of the segment.
                     * @return StartTimeOffset The start timestamp (second) of the segment.
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置The start timestamp (second) of the segment.
                     * @param _startTimeOffset The start timestamp (second) of the segment.
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
                     * 获取The end timestamp (second) of the segment.
                     * @return EndTimeOffset The end timestamp (second) of the segment.
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置The end timestamp (second) of the segment.
                     * @param _endTimeOffset The end timestamp (second) of the segment.
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
                     * 获取The coordinates (px) of the top left and bottom right corner.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AreaCoordSet The coordinates (px) of the top left and bottom right corner.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetAreaCoordSet() const;

                    /**
                     * 设置The coordinates (px) of the top left and bottom right corner.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _areaCoordSet The coordinates (px) of the top left and bottom right corner.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * The confidence score. Value range: 0-100.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * The start timestamp (second) of the segment.
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * The end timestamp (second) of the segment.
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * The coordinates (px) of the top left and bottom right corner.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_areaCoordSet;
                    bool m_areaCoordSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_QUALITYCONTROLITEM_H_
