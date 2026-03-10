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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LIVESMARTSUBTITLERESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LIVESMARTSUBTITLERESULT_H_

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
                * Smart subtitle task result for live stream.
                */
                class LiveSmartSubtitleResult : public AbstractModel
                {
                public:
                    LiveSmartSubtitleResult();
                    ~LiveSmartSubtitleResult() = default;
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
                     * 获取Translate the starting PTS time of a segment, in seconds.
                     * @return StartPTSTime Translate the starting PTS time of a segment, in seconds.
                     * 
                     */
                    double GetStartPTSTime() const;

                    /**
                     * 设置Translate the starting PTS time of a segment, in seconds.
                     * @param _startPTSTime Translate the starting PTS time of a segment, in seconds.
                     * 
                     */
                    void SetStartPTSTime(const double& _startPTSTime);

                    /**
                     * 判断参数 StartPTSTime 是否已赋值
                     * @return StartPTSTime 是否已赋值
                     * 
                     */
                    bool StartPTSTimeHasBeenSet() const;

                    /**
                     * 获取End PTS time of a translated segment, in seconds.
                     * @return EndPTSTime End PTS time of a translated segment, in seconds.
                     * 
                     */
                    double GetEndPTSTime() const;

                    /**
                     * 设置End PTS time of a translated segment, in seconds.
                     * @param _endPTSTime End PTS time of a translated segment, in seconds.
                     * 
                     */
                    void SetEndPTSTime(const double& _endPTSTime);

                    /**
                     * 判断参数 EndPTSTime 是否已赋值
                     * @return EndPTSTime 是否已赋值
                     * 
                     */
                    bool EndPTSTimeHasBeenSet() const;

                    /**
                     * 获取Translated text.
                     * @return Trans Translated text.
                     * 
                     */
                    std::string GetTrans() const;

                    /**
                     * 设置Translated text.
                     * @param _trans Translated text.
                     * 
                     */
                    void SetTrans(const std::string& _trans);

                    /**
                     * 判断参数 Trans 是否已赋值
                     * @return Trans 是否已赋值
                     * 
                     */
                    bool TransHasBeenSet() const;

                    /**
                     * 获取Translation started at UTC time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StartTime Translation started at UTC time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Translation started at UTC time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _startTime Translation started at UTC time.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Translation ends at UTC time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndTime Translation ends at UTC time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Translation ends at UTC time.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _endTime Translation ends at UTC time.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Steady-State tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SteadyState Steady-State tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetSteadyState() const;

                    /**
                     * 设置Steady-State tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _steadyState Steady-State tag.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取websocket and trtc real-time translation UserId.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UserId websocket and trtc real-time translation UserId.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置websocket and trtc real-time translation UserId.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _userId websocket and trtc real-time translation UserId.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Translate the starting PTS time of a segment, in seconds.
                     */
                    double m_startPTSTime;
                    bool m_startPTSTimeHasBeenSet;

                    /**
                     * End PTS time of a translated segment, in seconds.
                     */
                    double m_endPTSTime;
                    bool m_endPTSTimeHasBeenSet;

                    /**
                     * Translated text.
                     */
                    std::string m_trans;
                    bool m_transHasBeenSet;

                    /**
                     * Translation started at UTC time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Translation ends at UTC time.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Steady-State tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_steadyState;
                    bool m_steadyStateHasBeenSet;

                    /**
                     * websocket and trtc real-time translation UserId.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVESMARTSUBTITLERESULT_H_
