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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_REPLICAGROUP_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_REPLICAGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/RedisNode.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * Information of the instance node group
                */
                class ReplicaGroup : public AbstractModel
                {
                public:
                    ReplicaGroup();
                    ~ReplicaGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Node group ID
                     * @return GroupId Node group ID
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置Node group ID
                     * @param _groupId Node group ID
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取Node group name, which is empty for the master node
                     * @return GroupName Node group name, which is empty for the master node
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Node group name, which is empty for the master node
                     * @param _groupName Node group name, which is empty for the master node
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取Node AZ ID, such as ap-guangzhou-1
                     * @return ZoneId Node AZ ID, such as ap-guangzhou-1
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Node AZ ID, such as ap-guangzhou-1
                     * @param _zoneId Node AZ ID, such as ap-guangzhou-1
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Node group type. master: primary node; replica: replica node.
                     * @return Role Node group type. master: primary node; replica: replica node.
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置Node group type. master: primary node; replica: replica node.
                     * @param _role Node group type. master: primary node; replica: replica node.
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
                     * 获取List of nodes in the node group
                     * @return RedisNodes List of nodes in the node group
                     * 
                     */
                    std::vector<RedisNode> GetRedisNodes() const;

                    /**
                     * 设置List of nodes in the node group
                     * @param _redisNodes List of nodes in the node group
                     * 
                     */
                    void SetRedisNodes(const std::vector<RedisNode>& _redisNodes);

                    /**
                     * 判断参数 RedisNodes 是否已赋值
                     * @return RedisNodes 是否已赋值
                     * 
                     */
                    bool RedisNodesHasBeenSet() const;

                private:

                    /**
                     * Node group ID
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Node group name, which is empty for the master node
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Node AZ ID, such as ap-guangzhou-1
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Node group type. master: primary node; replica: replica node.
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * List of nodes in the node group
                     */
                    std::vector<RedisNode> m_redisNodes;
                    bool m_redisNodesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_REPLICAGROUP_H_
