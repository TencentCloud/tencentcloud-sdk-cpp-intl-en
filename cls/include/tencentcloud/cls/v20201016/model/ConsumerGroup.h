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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_CONSUMERGROUP_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_CONSUMERGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Consumption group information over kafka protocol
                */
                class ConsumerGroup : public AbstractModel
                {
                public:
                    ConsumerGroup();
                    ~ConsumerGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Consumer group name
                     * @return Group Consumer group name
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置Consumer group name
                     * @param _group Consumer group name
                     * 
                     */
                    void SetGroup(const std::string& _group);

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     * 
                     */
                    bool GroupHasBeenSet() const;

                    /**
                     * 获取Status.

-Empty: The group has no members but has submitted offsets. All consumers left but retained offsets.
-Dead: The group has no members and no submitted offsets. The group is deleted or has long-term inactivity.
-Stable: Members in the group consume normally with balanced partition allocation. Normal operating status.
-PreparingRebalance: The group is preparing to rebalance. New members join or existing members leave.
-CompletingRebalance: The group is preparing to rebalance. New members join or existing members leave.

                     * @return State Status.

-Empty: The group has no members but has submitted offsets. All consumers left but retained offsets.
-Dead: The group has no members and no submitted offsets. The group is deleted or has long-term inactivity.
-Stable: Members in the group consume normally with balanced partition allocation. Normal operating status.
-PreparingRebalance: The group is preparing to rebalance. New members join or existing members leave.
-CompletingRebalance: The group is preparing to rebalance. New members join or existing members leave.

                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置Status.

-Empty: The group has no members but has submitted offsets. All consumers left but retained offsets.
-Dead: The group has no members and no submitted offsets. The group is deleted or has long-term inactivity.
-Stable: Members in the group consume normally with balanced partition allocation. Normal operating status.
-PreparingRebalance: The group is preparing to rebalance. New members join or existing members leave.
-CompletingRebalance: The group is preparing to rebalance. New members join or existing members leave.

                     * @param _state Status.

-Empty: The group has no members but has submitted offsets. All consumers left but retained offsets.
-Dead: The group has no members and no submitted offsets. The group is deleted or has long-term inactivity.
-Stable: Members in the group consume normally with balanced partition allocation. Normal operating status.
-PreparingRebalance: The group is preparing to rebalance. New members join or existing members leave.
-CompletingRebalance: The group is preparing to rebalance. New members join or existing members leave.

                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取Partition allocation policy balancing algorithm name.

-Common load balancing algorithms are as follows:
-range: Allocate by partition range
-roundrobin: Poll-based allocation
-sticky: Sticky assignment (avoid unnecessary rebalance)
                     * @return ProtocolName Partition allocation policy balancing algorithm name.

-Common load balancing algorithms are as follows:
-range: Allocate by partition range
-roundrobin: Poll-based allocation
-sticky: Sticky assignment (avoid unnecessary rebalance)
                     * 
                     */
                    std::string GetProtocolName() const;

                    /**
                     * 设置Partition allocation policy balancing algorithm name.

-Common load balancing algorithms are as follows:
-range: Allocate by partition range
-roundrobin: Poll-based allocation
-sticky: Sticky assignment (avoid unnecessary rebalance)
                     * @param _protocolName Partition allocation policy balancing algorithm name.

-Common load balancing algorithms are as follows:
-range: Allocate by partition range
-roundrobin: Poll-based allocation
-sticky: Sticky assignment (avoid unnecessary rebalance)
                     * 
                     */
                    void SetProtocolName(const std::string& _protocolName);

                    /**
                     * 判断参数 ProtocolName 是否已赋值
                     * @return ProtocolName 是否已赋值
                     * 
                     */
                    bool ProtocolNameHasBeenSet() const;

                private:

                    /**
                     * Consumer group name
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * Status.

-Empty: The group has no members but has submitted offsets. All consumers left but retained offsets.
-Dead: The group has no members and no submitted offsets. The group is deleted or has long-term inactivity.
-Stable: Members in the group consume normally with balanced partition allocation. Normal operating status.
-PreparingRebalance: The group is preparing to rebalance. New members join or existing members leave.
-CompletingRebalance: The group is preparing to rebalance. New members join or existing members leave.

                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * Partition allocation policy balancing algorithm name.

-Common load balancing algorithms are as follows:
-range: Allocate by partition range
-roundrobin: Poll-based allocation
-sticky: Sticky assignment (avoid unnecessary rebalance)
                     */
                    std::string m_protocolName;
                    bool m_protocolNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_CONSUMERGROUP_H_
