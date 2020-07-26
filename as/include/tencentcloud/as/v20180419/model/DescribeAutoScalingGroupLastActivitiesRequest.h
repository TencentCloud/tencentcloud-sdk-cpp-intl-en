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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBEAUTOSCALINGGROUPLASTACTIVITIESREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBEAUTOSCALINGGROUPLASTACTIVITIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * DescribeAutoScalingGroupLastActivities request structure.
                */
                class DescribeAutoScalingGroupLastActivitiesRequest : public AbstractModel
                {
                public:
                    DescribeAutoScalingGroupLastActivitiesRequest();
                    ~DescribeAutoScalingGroupLastActivitiesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID list of an auto scaling group.
                     * @return AutoScalingGroupIds ID list of an auto scaling group.
                     */
                    std::vector<std::string> GetAutoScalingGroupIds() const;

                    /**
                     * 设置ID list of an auto scaling group.
                     * @param AutoScalingGroupIds ID list of an auto scaling group.
                     */
                    void SetAutoScalingGroupIds(const std::vector<std::string>& _autoScalingGroupIds);

                    /**
                     * 判断参数 AutoScalingGroupIds 是否已赋值
                     * @return AutoScalingGroupIds 是否已赋值
                     */
                    bool AutoScalingGroupIdsHasBeenSet() const;

                private:

                    /**
                     * ID list of an auto scaling group.
                     */
                    std::vector<std::string> m_autoScalingGroupIds;
                    bool m_autoScalingGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_DESCRIBEAUTOSCALINGGROUPLASTACTIVITIESREQUEST_H_
