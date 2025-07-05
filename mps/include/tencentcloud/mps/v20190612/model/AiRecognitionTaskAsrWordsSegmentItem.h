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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKASRWORDSSEGMENTITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKASRWORDSSEGMENTITEM_H_

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
                * Speech recognition segment.
                */
                class AiRecognitionTaskAsrWordsSegmentItem : public AbstractModel
                {
                public:
                    AiRecognitionTaskAsrWordsSegmentItem();
                    ~AiRecognitionTaskAsrWordsSegmentItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Start time offset of a recognition segment in seconds.
                     * @return StartTimeOffset Start time offset of a recognition segment in seconds.
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置Start time offset of a recognition segment in seconds.
                     * @param _startTimeOffset Start time offset of a recognition segment in seconds.
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
                     * 获取End time offset of a recognition segment in seconds.
                     * @return EndTimeOffset End time offset of a recognition segment in seconds.
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置End time offset of a recognition segment in seconds.
                     * @param _endTimeOffset End time offset of a recognition segment in seconds.
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
                     * 获取Confidence of a recognition segment. Value range: 0-100.
                     * @return Confidence Confidence of a recognition segment. Value range: 0-100.
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Confidence of a recognition segment. Value range: 0-100.
                     * @param _confidence Confidence of a recognition segment. Value range: 0-100.
                     * 
                     */
                    void SetConfidence(const double& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     * 
                     */
                    bool ConfidenceHasBeenSet() const;

                private:

                    /**
                     * Start time offset of a recognition segment in seconds.
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * End time offset of a recognition segment in seconds.
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * Confidence of a recognition segment. Value range: 0-100.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKASRWORDSSEGMENTITEM_H_
