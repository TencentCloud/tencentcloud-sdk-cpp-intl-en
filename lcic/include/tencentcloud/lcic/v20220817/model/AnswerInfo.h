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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_ANSWERINFO_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_ANSWERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * The answer to a quiz question.
                */
                class AnswerInfo : public AbstractModel
                {
                public:
                    AnswerInfo();
                    ~AnswerInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The username.
                     * @return Name The username.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置The username.
                     * @param _name The username.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取The answer. Bits are used to indicate the options chosen. For example, `0x1` indicates that option A is chosen; `0x11` indicates that A and B are chosen, and so on.
                     * @return Answer The answer. Bits are used to indicate the options chosen. For example, `0x1` indicates that option A is chosen; `0x11` indicates that A and B are chosen, and so on.
                     * 
                     */
                    uint64_t GetAnswer() const;

                    /**
                     * 设置The answer. Bits are used to indicate the options chosen. For example, `0x1` indicates that option A is chosen; `0x11` indicates that A and B are chosen, and so on.
                     * @param _answer The answer. Bits are used to indicate the options chosen. For example, `0x1` indicates that option A is chosen; `0x11` indicates that A and B are chosen, and so on.
                     * 
                     */
                    void SetAnswer(const uint64_t& _answer);

                    /**
                     * 判断参数 Answer 是否已赋值
                     * @return Answer 是否已赋值
                     * 
                     */
                    bool AnswerHasBeenSet() const;

                    /**
                     * 获取The time used.
                     * @return CostTime The time used.
                     * 
                     */
                    uint64_t GetCostTime() const;

                    /**
                     * 设置The time used.
                     * @param _costTime The time used.
                     * 
                     */
                    void SetCostTime(const uint64_t& _costTime);

                    /**
                     * 判断参数 CostTime 是否已赋值
                     * @return CostTime 是否已赋值
                     * 
                     */
                    bool CostTimeHasBeenSet() const;

                    /**
                     * 获取The user ID.
                     * @return UserId The user ID.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置The user ID.
                     * @param _userId The user ID.
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取Whether the answer is correct. `1`: Correct; `0`: Incorrect.
                     * @return IsCorrect Whether the answer is correct. `1`: Correct; `0`: Incorrect.
                     * 
                     */
                    uint64_t GetIsCorrect() const;

                    /**
                     * 设置Whether the answer is correct. `1`: Correct; `0`: Incorrect.
                     * @param _isCorrect Whether the answer is correct. `1`: Correct; `0`: Incorrect.
                     * 
                     */
                    void SetIsCorrect(const uint64_t& _isCorrect);

                    /**
                     * 判断参数 IsCorrect 是否已赋值
                     * @return IsCorrect 是否已赋值
                     * 
                     */
                    bool IsCorrectHasBeenSet() const;

                private:

                    /**
                     * The username.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * The answer. Bits are used to indicate the options chosen. For example, `0x1` indicates that option A is chosen; `0x11` indicates that A and B are chosen, and so on.
                     */
                    uint64_t m_answer;
                    bool m_answerHasBeenSet;

                    /**
                     * The time used.
                     */
                    uint64_t m_costTime;
                    bool m_costTimeHasBeenSet;

                    /**
                     * The user ID.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Whether the answer is correct. `1`: Correct; `0`: Incorrect.
                     */
                    uint64_t m_isCorrect;
                    bool m_isCorrectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_ANSWERINFO_H_
