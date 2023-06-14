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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEANSWERLISTRESPONSE_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEANSWERLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lcic/v20220817/model/AnswerInfo.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * DescribeAnswerList response structure.
                */
                class DescribeAnswerListResponse : public AbstractModel
                {
                public:
                    DescribeAnswerListResponse();
                    ~DescribeAnswerListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The total number of answers.
                     * @return Total The total number of answers.
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
                     * 获取A list of the answers.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AnswerInfo A list of the answers.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AnswerInfo> GetAnswerInfo() const;

                    /**
                     * 判断参数 AnswerInfo 是否已赋值
                     * @return AnswerInfo 是否已赋值
                     * 
                     */
                    bool AnswerInfoHasBeenSet() const;

                private:

                    /**
                     * The total number of answers.
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * A list of the answers.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AnswerInfo> m_answerInfo;
                    bool m_answerInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEANSWERLISTRESPONSE_H_
