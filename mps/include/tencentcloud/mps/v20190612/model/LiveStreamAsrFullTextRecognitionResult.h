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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMASRFULLTEXTRECOGNITIONRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMASRFULLTEXTRECOGNITIONRESULT_H_

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
                * ASR-based full live stream recognition
                */
                class LiveStreamAsrFullTextRecognitionResult : public AbstractModel
                {
                public:
                    LiveStreamAsrFullTextRecognitionResult();
                    ~LiveStreamAsrFullTextRecognitionResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Recognized text.
                     * @return Text Recognized text.
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置Recognized text.
                     * @param _text Recognized text.
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
                     * 获取Start PTS time of recognized segment in seconds.
                     * @return StartPtsTime Start PTS time of recognized segment in seconds.
                     * 
                     */
                    double GetStartPtsTime() const;

                    /**
                     * 设置Start PTS time of recognized segment in seconds.
                     * @param _startPtsTime Start PTS time of recognized segment in seconds.
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
                     * 获取End PTS time of recognized segment in seconds.
                     * @return EndPtsTime End PTS time of recognized segment in seconds.
                     * 
                     */
                    double GetEndPtsTime() const;

                    /**
                     * 设置End PTS time of recognized segment in seconds.
                     * @param _endPtsTime End PTS time of recognized segment in seconds.
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
                     * 获取Confidence of recognized segment. Value range: 0–100.
                     * @return Confidence Confidence of recognized segment. Value range: 0–100.
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置Confidence of recognized segment. Value range: 0–100.
                     * @param _confidence Confidence of recognized segment. Value range: 0–100.
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
                     * @return StartTime 
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置
                     * @param _startTime 
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
                     * 获取
                     * @return EndTime 
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置
                     * @param _endTime 
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
                     * 获取
                     * @return SteadyState 
                     * 
                     */
                    bool GetSteadyState() const;

                    /**
                     * 设置
                     * @param _steadyState 
                     * 
                     */
                    void SetSteadyState(const bool& _steadyState);

                    /**
                     * 判断参数 SteadyState 是否已赋值
                     * @return SteadyState 是否已赋值
                     * 
                     */
                    bool SteadyStateHasBeenSet() const;

                    /**
                     * 获取User ID in the result of recognition via WebSocket and TRTC.Note: This field may return null, indicating that no valid value can be obtained.
                     * @return UserId User ID in the result of recognition via WebSocket and TRTC.Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置User ID in the result of recognition via WebSocket and TRTC.Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _userId User ID in the result of recognition via WebSocket and TRTC.Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * Recognized text.
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * Start PTS time of recognized segment in seconds.
                     */
                    double m_startPtsTime;
                    bool m_startPtsTimeHasBeenSet;

                    /**
                     * End PTS time of recognized segment in seconds.
                     */
                    double m_endPtsTime;
                    bool m_endPtsTimeHasBeenSet;

                    /**
                     * Confidence of recognized segment. Value range: 0–100.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 
                     */
                    bool m_steadyState;
                    bool m_steadyStateHasBeenSet;

                    /**
                     * User ID in the result of recognition via WebSocket and TRTC.Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVESTREAMASRFULLTEXTRECOGNITIONRESULT_H_
