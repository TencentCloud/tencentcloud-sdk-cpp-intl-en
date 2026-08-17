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
                * Live stream smart subtitle result
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
                     * 获取Start PTS time of a translated recording clip, in seconds.
                     * @return StartPTSTime Start PTS time of a translated recording clip, in seconds.
                     * 
                     */
                    double GetStartPTSTime() const;

                    /**
                     * 设置Start PTS time of a translated recording clip, in seconds.
                     * @param _startPTSTime Start PTS time of a translated recording clip, in seconds.
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
                     * 获取End PTS time of a translated recording clip, in seconds.
                     * @return EndPTSTime End PTS time of a translated recording clip, in seconds.
                     * 
                     */
                    double GetEndPTSTime() const;

                    /**
                     * 设置End PTS time of a translated recording clip, in seconds.
                     * @param _endPTSTime End PTS time of a translated recording clip, in seconds.
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
                     * 获取
                     * @return UserId 
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置
                     * @param _userId 
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
                     * Start PTS time of a translated recording clip, in seconds.
                     */
                    double m_startPTSTime;
                    bool m_startPTSTimeHasBeenSet;

                    /**
                     * End PTS time of a translated recording clip, in seconds.
                     */
                    double m_endPTSTime;
                    bool m_endPTSTimeHasBeenSet;

                    /**
                     * Translated text.
                     */
                    std::string m_trans;
                    bool m_transHasBeenSet;

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
                     * 
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVESMARTSUBTITLERESULT_H_
