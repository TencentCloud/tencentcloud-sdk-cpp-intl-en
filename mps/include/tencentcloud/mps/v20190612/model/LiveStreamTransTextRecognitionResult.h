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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMTRANSTEXTRECOGNITIONRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMTRANSTEXTRECOGNITIONRESULT_H_

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
                * The live stream translation result.
                */
                class LiveStreamTransTextRecognitionResult : public AbstractModel
                {
                public:
                    LiveStreamTransTextRecognitionResult();
                    ~LiveStreamTransTextRecognitionResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The text transcript.
                     * @return Text The text transcript.
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置The text transcript.
                     * @param _text The text transcript.
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取The PTS (seconds) of the start of a segment.
                     * @return StartPtsTime The PTS (seconds) of the start of a segment.
                     * 
                     */
                    double GetStartPtsTime() const;

                    /**
                     * 设置The PTS (seconds) of the start of a segment.
                     * @param _startPtsTime The PTS (seconds) of the start of a segment.
                     * 
                     */
                    void SetStartPtsTime(const double& _startPtsTime);

                    /**
                     * 判断参数 StartPtsTime 是否已赋值
                     * @return StartPtsTime 是否已赋值
                     * 
                     */
                    bool StartPtsTimeHasBeenSet() const;

                    /**
                     * 获取The PTS (seconds) of the end of a segment.
                     * @return EndPtsTime The PTS (seconds) of the end of a segment.
                     * 
                     */
                    double GetEndPtsTime() const;

                    /**
                     * 设置The PTS (seconds) of the end of a segment.
                     * @param _endPtsTime The PTS (seconds) of the end of a segment.
                     * 
                     */
                    void SetEndPtsTime(const double& _endPtsTime);

                    /**
                     * 判断参数 EndPtsTime 是否已赋值
                     * @return EndPtsTime 是否已赋值
                     * 
                     */
                    bool EndPtsTimeHasBeenSet() const;

                    /**
                     * 获取The confidence score for a segment. Value range: 0-100.
                     * @return Confidence The confidence score for a segment. Value range: 0-100.
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置The confidence score for a segment. Value range: 0-100.
                     * @param _confidence The confidence score for a segment. Value range: 0-100.
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
                     * 获取The translation.
                     * @return Trans The translation.
                     * 
                     */
                    std::string GetTrans() const;

                    /**
                     * 设置The translation.
                     * @param _trans The translation.
                     * 
                     */
                    void SetTrans(const std::string& _trans);

                    /**
                     * 判断参数 Trans 是否已赋值
                     * @return Trans 是否已赋值
                     * 
                     */
                    bool TransHasBeenSet() const;

                private:

                    /**
                     * The text transcript.
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * The PTS (seconds) of the start of a segment.
                     */
                    double m_startPtsTime;
                    bool m_startPtsTimeHasBeenSet;

                    /**
                     * The PTS (seconds) of the end of a segment.
                     */
                    double m_endPtsTime;
                    bool m_endPtsTimeHasBeenSet;

                    /**
                     * The confidence score for a segment. Value range: 0-100.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * The translation.
                     */
                    std::string m_trans;
                    bool m_transHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMTRANSTEXTRECOGNITIONRESULT_H_
