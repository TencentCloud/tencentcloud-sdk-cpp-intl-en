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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLETASKTRANSTEXTSEGMENTITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLETASKTRANSTEXTSEGMENTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/WordResult.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * Translated segment.
                */
                class SmartSubtitleTaskTransTextSegmentItem : public AbstractModel
                {
                public:
                    SmartSubtitleTaskTransTextSegmentItem();
                    ~SmartSubtitleTaskTransTextSegmentItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Confidence of a recognized segment. Value range: 0-100.</p>
                     * @return Confidence <p>Confidence of a recognized segment. Value range: 0-100.</p>
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置<p>Confidence of a recognized segment. Value range: 0-100.</p>
                     * @param _confidence <p>Confidence of a recognized segment. Value range: 0-100.</p>
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
                     * 获取<p>Start time offset of a recognized segment, in seconds.</p>
                     * @return StartTimeOffset <p>Start time offset of a recognized segment, in seconds.</p>
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置<p>Start time offset of a recognized segment, in seconds.</p>
                     * @param _startTimeOffset <p>Start time offset of a recognized segment, in seconds.</p>
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
                     * 获取<p>End time offset of a recognized segment, in seconds.</p>
                     * @return EndTimeOffset <p>End time offset of a recognized segment, in seconds.</p>
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置<p>End time offset of a recognized segment, in seconds.</p>
                     * @param _endTimeOffset <p>End time offset of a recognized segment, in seconds.</p>
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
                     * 获取<p>Recognized text.</p>
                     * @return Text <p>Recognized text.</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>Recognized text.</p>
                     * @param _text <p>Recognized text.</p>
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
                     * 获取<p>Translated text.</p>
                     * @return Trans <p>Translated text.</p>
                     * 
                     */
                    std::string GetTrans() const;

                    /**
                     * 设置<p>Translated text.</p>
                     * @param _trans <p>Translated text.</p>
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
                     * 获取<p>Word timestamp information.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Wordlist <p>Word timestamp information.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<WordResult> GetWordlist() const;

                    /**
                     * 设置<p>Word timestamp information.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _wordlist <p>Word timestamp information.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWordlist(const std::vector<WordResult>& _wordlist);

                    /**
                     * 判断参数 Wordlist 是否已赋值
                     * @return Wordlist 是否已赋值
                     * 
                     */
                    bool WordlistHasBeenSet() const;

                    /**
                     * 获取<p>Speaker ID (if speaker recognition is enabled)</p>
                     * @return SpeakerId <p>Speaker ID (if speaker recognition is enabled)</p>
                     * 
                     */
                    std::string GetSpeakerId() const;

                    /**
                     * 设置<p>Speaker ID (if speaker recognition is enabled)</p>
                     * @param _speakerId <p>Speaker ID (if speaker recognition is enabled)</p>
                     * 
                     */
                    void SetSpeakerId(const std::string& _speakerId);

                    /**
                     * 判断参数 SpeakerId 是否已赋值
                     * @return SpeakerId 是否已赋值
                     * 
                     */
                    bool SpeakerIdHasBeenSet() const;

                private:

                    /**
                     * <p>Confidence of a recognized segment. Value range: 0-100.</p>
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * <p>Start time offset of a recognized segment, in seconds.</p>
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * <p>End time offset of a recognized segment, in seconds.</p>
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * <p>Recognized text.</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>Translated text.</p>
                     */
                    std::string m_trans;
                    bool m_transHasBeenSet;

                    /**
                     * <p>Word timestamp information.</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<WordResult> m_wordlist;
                    bool m_wordlistHasBeenSet;

                    /**
                     * <p>Speaker ID (if speaker recognition is enabled)</p>
                     */
                    std::string m_speakerId;
                    bool m_speakerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SMARTSUBTITLETASKTRANSTEXTSEGMENTITEM_H_
