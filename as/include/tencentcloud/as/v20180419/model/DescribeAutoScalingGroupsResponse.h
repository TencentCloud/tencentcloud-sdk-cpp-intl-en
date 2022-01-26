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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBEAUTOSCALINGGROUPSRESPONSE_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBEAUTOSCALINGGROUPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/as/v20180419/model/AutoScalingGroup.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * DescribeAutoScalingGroups response structure.
                */
                class DescribeAutoScalingGroupsResponse : public AbstractModel
                {
                public:
                    DescribeAutoScalingGroupsResponse();
                    ~DescribeAutoScalingGroupsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of auto scaling group details.
                     * @return AutoScalingGroupSet List of auto scaling group details.
                     */
                    std::vector<AutoScalingGroup> GetAutoScalingGroupSet() const;

                    /**
                     * 判断参数 AutoScalingGroupSet 是否已赋值
                     * @return AutoScalingGroupSet 是否已赋值
                     */
                    bool AutoScalingGroupSetHasBeenSet() const;

                    /**
                     * 获取Number of eligible auto scaling groups.
                     * @return TotalCount Number of eligible auto scaling groups.
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * List of auto scaling group details.
                     */
                    std::vector<AutoScalingGroup> m_autoScalingGroupSet;
                    bool m_autoScalingGroupSetHasBeenSet;

                    /**
                     * Number of eligible auto scaling groups.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBEAUTOSCALINGGROUPSRESPONSE_H_
