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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKTRANSTEXTSEGMENTITEM_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKTRANSTEXTSEGMENTITEM_H_

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
                * The translated segments.
                */
                class AiRecognitionTaskTransTextSegmentItem : public AbstractModel
                {
                public:
                    AiRecognitionTaskTransTextSegmentItem();
                    ~AiRecognitionTaskTransTextSegmentItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取The start time offset (seconds) of a segment.
                     * @return StartTimeOffset The start time offset (seconds) of a segment.
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置The start time offset (seconds) of a segment.
                     * @param _startTimeOffset The start time offset (seconds) of a segment.
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
                     * 获取The end time offset (seconds) of a segment.
                     * @return EndTimeOffset The end time offset (seconds) of a segment.
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置The end time offset (seconds) of a segment.
                     * @param _endTimeOffset The end time offset (seconds) of a segment.
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

                    /**
                     * 获取Word timestamp information.
                     * @return Wordlist Word timestamp information.
                     * 
                     */
                    std::vector<WordResult> GetWordlist() const;

                    /**
                     * 设置Word timestamp information.
                     * @param _wordlist Word timestamp information.
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
                     * The confidence score for a segment. Value range: 0-100.
                     */
                    double m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * The start time offset (seconds) of a segment.
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * The end time offset (seconds) of a segment.
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * The text transcript.
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * The translation.
                     */
                    std::string m_trans;
                    bool m_transHasBeenSet;

                    /**
                     * Word timestamp information.
                     */
                    std::vector<WordResult> m_wordlist;
                    bool m_wordlistHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AIRECOGNITIONTASKTRANSTEXTSEGMENTITEM_H_
