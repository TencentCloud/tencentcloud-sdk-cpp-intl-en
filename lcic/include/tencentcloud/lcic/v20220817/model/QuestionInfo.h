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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_QUESTIONINFO_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_QUESTIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lcic/v20220817/model/AnswerStat.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * A quiz question in a room.
                */
                class QuestionInfo : public AbstractModel
                {
                public:
                    QuestionInfo();
                    ~QuestionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The question ID.
                     * @return QuestionId The question ID.
                     * 
                     */
                    std::string GetQuestionId() const;

                    /**
                     * 设置The question ID.
                     * @param _questionId The question ID.
                     * 
                     */
                    void SetQuestionId(const std::string& _questionId);

                    /**
                     * 判断参数 QuestionId 是否已赋值
                     * @return QuestionId 是否已赋值
                     * 
                     */
                    bool QuestionIdHasBeenSet() const;

                    /**
                     * 获取The question.
                     * @return QuestionContent The question.
                     * 
                     */
                    std::string GetQuestionContent() const;

                    /**
                     * 设置The question.
                     * @param _questionContent The question.
                     * 
                     */
                    void SetQuestionContent(const std::string& _questionContent);

                    /**
                     * 判断参数 QuestionContent 是否已赋值
                     * @return QuestionContent 是否已赋值
                     * 
                     */
                    bool QuestionContentHasBeenSet() const;

                    /**
                     * 获取The time limit for the question. If you set this parameter to `0`, there will not be a time limit.
                     * @return Duration The time limit for the question. If you set this parameter to `0`, there will not be a time limit.
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置The time limit for the question. If you set this parameter to `0`, there will not be a time limit.
                     * @param _duration The time limit for the question. If you set this parameter to `0`, there will not be a time limit.
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取The correct answer. Bits are used to indicate the options that should be chosen. For example, `0x1` indicates option A; `0x11` indicates A and B, and so on.
                     * @return CorrectAnswer The correct answer. Bits are used to indicate the options that should be chosen. For example, `0x1` indicates option A; `0x11` indicates A and B, and so on.
                     * 
                     */
                    int64_t GetCorrectAnswer() const;

                    /**
                     * 设置The correct answer. Bits are used to indicate the options that should be chosen. For example, `0x1` indicates option A; `0x11` indicates A and B, and so on.
                     * @param _correctAnswer The correct answer. Bits are used to indicate the options that should be chosen. For example, `0x1` indicates option A; `0x11` indicates A and B, and so on.
                     * 
                     */
                    void SetCorrectAnswer(const int64_t& _correctAnswer);

                    /**
                     * 判断参数 CorrectAnswer 是否已赋值
                     * @return CorrectAnswer 是否已赋值
                     * 
                     */
                    bool CorrectAnswerHasBeenSet() const;

                    /**
                     * 获取The statistics for each type of answer.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AnswerStats The statistics for each type of answer.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AnswerStat> GetAnswerStats() const;

                    /**
                     * 设置The statistics for each type of answer.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _answerStats The statistics for each type of answer.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAnswerStats(const std::vector<AnswerStat>& _answerStats);

                    /**
                     * 判断参数 AnswerStats 是否已赋值
                     * @return AnswerStats 是否已赋值
                     * 
                     */
                    bool AnswerStatsHasBeenSet() const;

                private:

                    /**
                     * The question ID.
                     */
                    std::string m_questionId;
                    bool m_questionIdHasBeenSet;

                    /**
                     * The question.
                     */
                    std::string m_questionContent;
                    bool m_questionContentHasBeenSet;

                    /**
                     * The time limit for the question. If you set this parameter to `0`, there will not be a time limit.
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * The correct answer. Bits are used to indicate the options that should be chosen. For example, `0x1` indicates option A; `0x11` indicates A and B, and so on.
                     */
                    int64_t m_correctAnswer;
                    bool m_correctAnswerHasBeenSet;

                    /**
                     * The statistics for each type of answer.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AnswerStat> m_answerStats;
                    bool m_answerStatsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_QUESTIONINFO_H_
