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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEQUESTIONLISTRESPONSE_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEQUESTIONLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lcic/v20220817/model/QuestionInfo.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * DescribeQuestionList response structure.
                */
                class DescribeQuestionListResponse : public AbstractModel
                {
                public:
                    DescribeQuestionListResponse();
                    ~DescribeQuestionListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The total number of quiz questions.
                     * @return Total The total number of quiz questions.
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取A list of the questions.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return QuestionInfo A list of the questions.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<QuestionInfo> GetQuestionInfo() const;

                    /**
                     * 判断参数 QuestionInfo 是否已赋值
                     * @return QuestionInfo 是否已赋值
                     * 
                     */
                    bool QuestionInfoHasBeenSet() const;

                private:

                    /**
                     * The total number of quiz questions.
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * A list of the questions.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<QuestionInfo> m_questionInfo;
                    bool m_questionInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEQUESTIONLISTRESPONSE_H_
