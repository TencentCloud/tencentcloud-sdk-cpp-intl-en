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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKASRFULLTEXTSEGMENTITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKASRFULLTEXTSEGMENTITEM_H_

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
                * Full speech recognition segment.
                */
                class AiRecognitionTaskAsrFullTextSegmentItem : public AbstractModel
                {
                public:
                    AiRecognitionTaskAsrFullTextSegmentItem();
                    ~AiRecognitionTaskAsrFullTextSegmentItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Confidence of the recognized segment. Value range: 0–100.</p>
                     * @return Confidence <p>Confidence of the recognized segment. Value range: 0–100.</p>
                     * 
                     */
                    double GetConfidence() const;

                    /**
                     * 设置<p>Confidence of the recognized segment. Value range: 0–100.</p>
                     * @param _confidence <p>Confidence of the recognized segment. Value range: 0–100.</p>
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
                     * 获取<p>Start time offset of the recognized segment, in seconds.</p>
                     * @return StartTimeOffset <p>Start time offset of the recognized segment, in seconds.</p>
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置<p>Start time offset of the recognized segment, in seconds.</p>
                     * @param _startTimeOffset <p>Start time offset of the recognized segment, in seconds.</p>
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
                     * 获取<p>End time offset of the recognized segment, in seconds.</p>
                     * @return EndTimeOffset <p>End time offset of the recognized segment, in seconds.</p>
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置<p>End time offset of the recognized segment, in seconds.</p>
                     * @param _endTimeOffset <p>End time offset of the recognized segment, in seconds.</p>
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
                     * 获取<p>Word timestamp information.</p>
                     * @return Wordlist <p>Word timestamp information.</p>
                     * 
                     */
                    std::vector<WordResult> GetWordlist() const;

                    /**
                     * 设置<p>Word timestamp information.</p>
                     * @param _wordlist <p>Word timestamp information.</p>
                     * 
                     */
                    void SetWordlist(const std::vector<WordResult>& _wordlist);

                    /**
                     * 判断参数 Wordlist 是否已赋值
                     * @return Wordlist 是否已赋值
                     * 
                     */
                    bool WordlistHasBeenSet() const;

                private:

                    /**
                     * <p>Confidence of the recognized segment. Value range: 0–100.</p>
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * <p>Start time offset of the recognized segment, in seconds.</p>
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * <p>End time offset of the recognized segment, in seconds.</p>
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * <p>Recognized text.</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>Word timestamp information.</p>
                     */
                    std::vector<WordResult> m_wordlist;
                    bool m_wordlistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKASRFULLTEXTSEGMENTITEM_H_
