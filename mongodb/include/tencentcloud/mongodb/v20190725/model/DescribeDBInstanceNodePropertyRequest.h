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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCENODEPROPERTYREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCENODEPROPERTYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/NodeTag.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeDBInstanceNodeProperty request structure.
                */
                class DescribeDBInstanceNodePropertyRequest : public AbstractModel
                {
                public:
                    DescribeDBInstanceNodePropertyRequest();
                    ~DescribeDBInstanceNodePropertyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.
                     * @return InstanceId Instance ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.
                     * @param _instanceId Instance ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Node ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), go to Node Management, and copy the node ID.
                     * @return NodeIds Node ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), go to Node Management, and copy the node ID.
                     * 
                     */
                    std::vector<std::string> GetNodeIds() const;

                    /**
                     * 设置Node ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), go to Node Management, and copy the node ID.
                     * @param _nodeIds Node ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), go to Node Management, and copy the node ID.
                     * 
                     */
                    void SetNodeIds(const std::vector<std::string>& _nodeIds);

                    /**
                     * 判断参数 NodeIds 是否已赋值
                     * @return NodeIds 是否已赋值
                     * 
                     */
                    bool NodeIdsHasBeenSet() const;

                    /**
                     * 获取Node role. Valid values:
- PRIMARY: primary node.
- SECONDARY: secondary node.
- READONLY: read-only node.
- ARBITER: arbitration node.
                     * @return Roles Node role. Valid values:
- PRIMARY: primary node.
- SECONDARY: secondary node.
- READONLY: read-only node.
- ARBITER: arbitration node.
                     * 
                     */
                    std::vector<std::string> GetRoles() const;

                    /**
                     * 设置Node role. Valid values:
- PRIMARY: primary node.
- SECONDARY: secondary node.
- READONLY: read-only node.
- ARBITER: arbitration node.
                     * @param _roles Node role. Valid values:
- PRIMARY: primary node.
- SECONDARY: secondary node.
- READONLY: read-only node.
- ARBITER: arbitration node.
                     * 
                     */
                    void SetRoles(const std::vector<std::string>& _roles);

                    /**
                     * 判断参数 Roles 是否已赋值
                     * @return Roles 是否已赋值
                     * 
                     */
                    bool RolesHasBeenSet() const;

                    /**
                     * 获取Whether the node is a hidden node. Default value: false.
                     * @return OnlyHidden Whether the node is a hidden node. Default value: false.
                     * 
                     */
                    bool GetOnlyHidden() const;

                    /**
                     * 设置Whether the node is a hidden node. Default value: false.
                     * @param _onlyHidden Whether the node is a hidden node. Default value: false.
                     * 
                     */
                    void SetOnlyHidden(const bool& _onlyHidden);

                    /**
                     * 判断参数 OnlyHidden 是否已赋值
                     * @return OnlyHidden 是否已赋值
                     * 
                     */
                    bool OnlyHiddenHasBeenSet() const;

                    /**
                     * 获取Priority of the node for electing it as the new primary node. Value range: [0, 100]. A larger value indicates a higher priority.
                     * @return Priority Priority of the node for electing it as the new primary node. Value range: [0, 100]. A larger value indicates a higher priority.
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置Priority of the node for electing it as the new primary node. Value range: [0, 100]. A larger value indicates a higher priority.
                     * @param _priority Priority of the node for electing it as the new primary node. Value range: [0, 100]. A larger value indicates a higher priority.
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取Node voting right.- 1: The node has the right to vote.
- 0: The node does not have the right to vote.
                     * @return Votes Node voting right.- 1: The node has the right to vote.
- 0: The node does not have the right to vote.
                     * 
                     */
                    int64_t GetVotes() const;

                    /**
                     * 设置Node voting right.- 1: The node has the right to vote.
- 0: The node does not have the right to vote.
                     * @param _votes Node voting right.- 1: The node has the right to vote.
- 0: The node does not have the right to vote.
                     * 
                     */
                    void SetVotes(const int64_t& _votes);

                    /**
                     * 判断参数 Votes 是否已赋值
                     * @return Votes 是否已赋值
                     * 
                     */
                    bool VotesHasBeenSet() const;

                    /**
                     * 获取Node tag.
                     * @return Tags Node tag.
                     * 
                     */
                    std::vector<NodeTag> GetTags() const;

                    /**
                     * 设置Node tag.
                     * @param _tags Node tag.
                     * 
                     */
                    void SetTags(const std::vector<NodeTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * Instance ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), and copy the instance ID from the instance list.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Node ID. Log in to the [TencentDB for MongoDB console](https://console.cloud.tencent.com/mongodb), go to Node Management, and copy the node ID.
                     */
                    std::vector<std::string> m_nodeIds;
                    bool m_nodeIdsHasBeenSet;

                    /**
                     * Node role. Valid values:
- PRIMARY: primary node.
- SECONDARY: secondary node.
- READONLY: read-only node.
- ARBITER: arbitration node.
                     */
                    std::vector<std::string> m_roles;
                    bool m_rolesHasBeenSet;

                    /**
                     * Whether the node is a hidden node. Default value: false.
                     */
                    bool m_onlyHidden;
                    bool m_onlyHiddenHasBeenSet;

                    /**
                     * Priority of the node for electing it as the new primary node. Value range: [0, 100]. A larger value indicates a higher priority.
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * Node voting right.- 1: The node has the right to vote.
- 0: The node does not have the right to vote.
                     */
                    int64_t m_votes;
                    bool m_votesHasBeenSet;

                    /**
                     * Node tag.
                     */
                    std::vector<NodeTag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEDBINSTANCENODEPROPERTYREQUEST_H_
