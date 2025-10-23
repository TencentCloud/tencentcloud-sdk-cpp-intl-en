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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_NODEPROPERTY_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_NODEPROPERTY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Node attributes.
                */
                class NodeProperty : public AbstractModel
                {
                public:
                    NodeProperty();
                    ~NodeProperty() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Node AZ.
                     * @return Zone Node AZ.
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置Node AZ.
                     * @param _zone Node AZ.
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取Node name.
                     * @return NodeName Node name.
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置Node name.
                     * @param _nodeName Node name.
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取Node access address.
                     * @return Address Node access address.
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置Node access address.
                     * @param _address Node access address.
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取Public network access address (IP address or domain name) of the node. The example value is an IP address.
                     * @return WanServiceAddress Public network access address (IP address or domain name) of the node. The example value is an IP address.
                     * 
                     */
                    std::string GetWanServiceAddress() const;

                    /**
                     * 设置Public network access address (IP address or domain name) of the node. The example value is an IP address.
                     * @param _wanServiceAddress Public network access address (IP address or domain name) of the node. The example value is an IP address.
                     * 
                     */
                    void SetWanServiceAddress(const std::string& _wanServiceAddress);

                    /**
                     * 判断参数 WanServiceAddress 是否已赋值
                     * @return WanServiceAddress 是否已赋值
                     * 
                     */
                    bool WanServiceAddressHasBeenSet() const;

                    /**
                     * 获取Node role.
- PRIMARY: primary node.
- SECONDARY: secondary node.
- READONLY: read-only node.
- ARBITER: arbitration node.
                     * @return Role Node role.
- PRIMARY: primary node.
- SECONDARY: secondary node.
- READONLY: read-only node.
- ARBITER: arbitration node.
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置Node role.
- PRIMARY: primary node.
- SECONDARY: secondary node.
- READONLY: read-only node.
- ARBITER: arbitration node.
                     * @param _role Node role.
- PRIMARY: primary node.
- SECONDARY: secondary node.
- READONLY: read-only node.
- ARBITER: arbitration node.
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取Whether the node is a hidden node.
- true: a hidden node.
- false: not a hidden node.
                     * @return Hidden Whether the node is a hidden node.
- true: a hidden node.
- false: not a hidden node.
                     * 
                     */
                    bool GetHidden() const;

                    /**
                     * 设置Whether the node is a hidden node.
- true: a hidden node.
- false: not a hidden node.
                     * @param _hidden Whether the node is a hidden node.
- true: a hidden node.
- false: not a hidden node.
                     * 
                     */
                    void SetHidden(const bool& _hidden);

                    /**
                     * 判断参数 Hidden 是否已赋值
                     * @return Hidden 是否已赋值
                     * 
                     */
                    bool HiddenHasBeenSet() const;

                    /**
                     * 获取Node status.
- NORMAL: running normally.
- STARTUP: starting.
- STARTUP2: starting and processing the intermediate data.
- RECOVERING: recovering and not available.
- DOWN: offline.
- UNKNOWN: unknown status.
- ROLLBACK: rolling back.
- REMOVED: removed.
                     * @return Status Node status.
- NORMAL: running normally.
- STARTUP: starting.
- STARTUP2: starting and processing the intermediate data.
- RECOVERING: recovering and not available.
- DOWN: offline.
- UNKNOWN: unknown status.
- ROLLBACK: rolling back.
- REMOVED: removed.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Node status.
- NORMAL: running normally.
- STARTUP: starting.
- STARTUP2: starting and processing the intermediate data.
- RECOVERING: recovering and not available.
- DOWN: offline.
- UNKNOWN: unknown status.
- ROLLBACK: rolling back.
- REMOVED: removed.
                     * @param _status Node status.
- NORMAL: running normally.
- STARTUP: starting.
- STARTUP2: starting and processing the intermediate data.
- RECOVERING: recovering and not available.
- DOWN: offline.
- UNKNOWN: unknown status.
- ROLLBACK: rolling back.
- REMOVED: removed.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Delay time of primary-secondary synchronization, in seconds.
                     * @return SlaveDelay Delay time of primary-secondary synchronization, in seconds.
                     * 
                     */
                    int64_t GetSlaveDelay() const;

                    /**
                     * 设置Delay time of primary-secondary synchronization, in seconds.
                     * @param _slaveDelay Delay time of primary-secondary synchronization, in seconds.
                     * 
                     */
                    void SetSlaveDelay(const int64_t& _slaveDelay);

                    /**
                     * 判断参数 SlaveDelay 是否已赋值
                     * @return SlaveDelay 是否已赋值
                     * 
                     */
                    bool SlaveDelayHasBeenSet() const;

                    /**
                     * 获取Node priority. Value range: [0, 100]. A larger value indicates a higher priority.
                     * @return Priority Node priority. Value range: [0, 100]. A larger value indicates a higher priority.
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置Node priority. Value range: [0, 100]. A larger value indicates a higher priority.
                     * @param _priority Node priority. Value range: [0, 100]. A larger value indicates a higher priority.
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
                     * 获取Node voting right.
- 1: The node has the right to vote.
- 0: The node does not have the right to vote.
                     * @return Votes Node voting right.
- 1: The node has the right to vote.
- 0: The node does not have the right to vote.
                     * 
                     */
                    int64_t GetVotes() const;

                    /**
                     * 设置Node voting right.
- 1: The node has the right to vote.
- 0: The node does not have the right to vote.
                     * @param _votes Node voting right.
- 1: The node has the right to vote.
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
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tags Node tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<NodeTag> GetTags() const;

                    /**
                     * 设置Node tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tags Node tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTags(const std::vector<NodeTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取Replica set ID.
                     * @return ReplicateSetId Replica set ID.
                     * 
                     */
                    std::string GetReplicateSetId() const;

                    /**
                     * 设置Replica set ID.
                     * @param _replicateSetId Replica set ID.
                     * 
                     */
                    void SetReplicateSetId(const std::string& _replicateSetId);

                    /**
                     * 判断参数 ReplicateSetId 是否已赋值
                     * @return ReplicateSetId 是否已赋值
                     * 
                     */
                    bool ReplicateSetIdHasBeenSet() const;

                private:

                    /**
                     * Node AZ.
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * Node name.
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * Node access address.
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * Public network access address (IP address or domain name) of the node. The example value is an IP address.
                     */
                    std::string m_wanServiceAddress;
                    bool m_wanServiceAddressHasBeenSet;

                    /**
                     * Node role.
- PRIMARY: primary node.
- SECONDARY: secondary node.
- READONLY: read-only node.
- ARBITER: arbitration node.
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * Whether the node is a hidden node.
- true: a hidden node.
- false: not a hidden node.
                     */
                    bool m_hidden;
                    bool m_hiddenHasBeenSet;

                    /**
                     * Node status.
- NORMAL: running normally.
- STARTUP: starting.
- STARTUP2: starting and processing the intermediate data.
- RECOVERING: recovering and not available.
- DOWN: offline.
- UNKNOWN: unknown status.
- ROLLBACK: rolling back.
- REMOVED: removed.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Delay time of primary-secondary synchronization, in seconds.
                     */
                    int64_t m_slaveDelay;
                    bool m_slaveDelayHasBeenSet;

                    /**
                     * Node priority. Value range: [0, 100]. A larger value indicates a higher priority.
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * Node voting right.
- 1: The node has the right to vote.
- 0: The node does not have the right to vote.
                     */
                    int64_t m_votes;
                    bool m_votesHasBeenSet;

                    /**
                     * Node tag.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<NodeTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * Replica set ID.
                     */
                    std::string m_replicateSetId;
                    bool m_replicateSetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_NODEPROPERTY_H_
