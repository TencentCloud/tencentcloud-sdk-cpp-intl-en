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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEINVOCATIONSRESPONSE_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEINVOCATIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tat/v20201028/model/Invocation.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * DescribeInvocations response structure.
                */
                class DescribeInvocationsResponse : public AbstractModel
                {
                public:
                    DescribeInvocationsResponse();
                    ~DescribeInvocationsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of matching execution activities.
                     * @return TotalCount Total number of matching execution activities.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取List of execution activities.
                     * @return InvocationSet List of execution activities.
                     * 
                     */
                    std::vector<Invocation> GetInvocationSet() const;

                    /**
                     * 判断参数 InvocationSet 是否已赋值
                     * @return InvocationSet 是否已赋值
                     * 
                     */
                    bool InvocationSetHasBeenSet() const;

                private:

                    /**
                     * Total number of matching execution activities.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of execution activities.
                     */
                    std::vector<Invocation> m_invocationSet;
                    bool m_invocationSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_DESCRIBEINVOCATIONSRESPONSE_H_
