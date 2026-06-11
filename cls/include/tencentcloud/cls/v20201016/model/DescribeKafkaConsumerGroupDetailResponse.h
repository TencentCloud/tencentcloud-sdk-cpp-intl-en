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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEKAFKACONSUMERGROUPDETAILRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEKAFKACONSUMERGROUPDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/GroupPartitionInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeKafkaConsumerGroupDetail response structure.
                */
                class DescribeKafkaConsumerGroupDetailResponse : public AbstractModel
                {
                public:
                    DescribeKafkaConsumerGroupDetailResponse();
                    ~DescribeKafkaConsumerGroupDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Logset id
                     * @return LogsetId Logset id
                     * 
                     */
                    std::string GetLogsetId() const;

                    /**
                     * 判断参数 LogsetId 是否已赋值
                     * @return LogsetId 是否已赋值
                     * 
                     */
                    bool LogsetIdHasBeenSet() const;

                    /**
                     * 获取Consumer group name
                     * @return Group Consumer group name
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     * 
                     */
                    bool GroupHasBeenSet() const;

                    /**
                     * 获取List of consumer group information
                     * @return PartitionInfos List of consumer group information
                     * 
                     */
                    std::vector<GroupPartitionInfo> GetPartitionInfos() const;

                    /**
                     * 判断参数 PartitionInfos 是否已赋值
                     * @return PartitionInfos 是否已赋值
                     * 
                     */
                    bool PartitionInfosHasBeenSet() const;

                    /**
                     * 获取Empty: The group has no members but has submitted offsets. All consumers have left but retained offsets.
Dead: No members in the group and no submitted offset. The group is deleted or has long-term inactivity.
Stable: Members in the group consume normally, and partition allocation is balanced. Normal operating status.
PreparingRebalance: The group is preparing to rebalance. A new member joins or an existing member leaves.
CompletingRebalance: The group is preparing to rebalance. New members join or existing members leave.
                     * @return State Empty: The group has no members but has submitted offsets. All consumers have left but retained offsets.
Dead: No members in the group and no submitted offset. The group is deleted or has long-term inactivity.
Stable: Members in the group consume normally, and partition allocation is balanced. Normal operating status.
PreparingRebalance: The group is preparing to rebalance. A new member joins or an existing member leaves.
CompletingRebalance: The group is preparing to rebalance. New members join or existing members leave.
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                private:

                    /**
                     * Logset id
                     */
                    std::string m_logsetId;
                    bool m_logsetIdHasBeenSet;

                    /**
                     * Consumer group name
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * List of consumer group information
                     */
                    std::vector<GroupPartitionInfo> m_partitionInfos;
                    bool m_partitionInfosHasBeenSet;

                    /**
                     * Empty: The group has no members but has submitted offsets. All consumers have left but retained offsets.
Dead: No members in the group and no submitted offset. The group is deleted or has long-term inactivity.
Stable: Members in the group consume normally, and partition allocation is balanced. Normal operating status.
PreparingRebalance: The group is preparing to rebalance. A new member joins or an existing member leaves.
CompletingRebalance: The group is preparing to rebalance. New members join or existing members leave.
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEKAFKACONSUMERGROUPDETAILRESPONSE_H_
