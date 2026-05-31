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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQMIGRATIONTASKREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQMIGRATIONTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/RocketMQTopicConfig.h>
#include <tencentcloud/tdmq/v20200217/model/RocketMQGroupConfig.h>
#include <tencentcloud/tdmq/v20200217/model/RocketMQRoleConfig.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * CreateRocketMQMigrationTask request structure.
                */
                class CreateRocketMQMigrationTaskRequest : public AbstractModel
                {
                public:
                    CreateRocketMQMigrationTaskRequest();
                    ~CreateRocketMQMigrationTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Cluster ID.</p>
                     * @return ClusterId <p>Cluster ID.</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>Cluster ID.</p>
                     * @param _clusterId <p>Cluster ID.</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>Task type:<br>0, Cluster migration<br>1, Import To specified namespace</p>
                     * @return Type <p>Task type:<br>0, Cluster migration<br>1, Import To specified namespace</p>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>Task type:<br>0, Cluster migration<br>1, Import To specified namespace</p>
                     * @param _type <p>Task type:<br>0, Cluster migration<br>1, Import To specified namespace</p>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>List of Topics to Import</p>
                     * @return Topics <p>List of Topics to Import</p>
                     * 
                     */
                    std::vector<RocketMQTopicConfig> GetTopics() const;

                    /**
                     * 设置<p>List of Topics to Import</p>
                     * @param _topics <p>List of Topics to Import</p>
                     * 
                     */
                    void SetTopics(const std::vector<RocketMQTopicConfig>& _topics);

                    /**
                     * 判断参数 Topics 是否已赋值
                     * @return Topics 是否已赋值
                     * 
                     */
                    bool TopicsHasBeenSet() const;

                    /**
                     * 获取<p>List of consumer groups to be imported</p>
                     * @return Groups <p>List of consumer groups to be imported</p>
                     * 
                     */
                    std::vector<RocketMQGroupConfig> GetGroups() const;

                    /**
                     * 设置<p>List of consumer groups to be imported</p>
                     * @param _groups <p>List of consumer groups to be imported</p>
                     * 
                     */
                    void SetGroups(const std::vector<RocketMQGroupConfig>& _groups);

                    /**
                     * 判断参数 Groups 是否已赋值
                     * @return Groups 是否已赋值
                     * 
                     */
                    bool GroupsHasBeenSet() const;

                    /**
                     * 获取<p>List of roles to be imported</p>
                     * @return Roles <p>List of roles to be imported</p>
                     * 
                     */
                    std::vector<RocketMQRoleConfig> GetRoles() const;

                    /**
                     * 设置<p>List of roles to be imported</p>
                     * @param _roles <p>List of roles to be imported</p>
                     * 
                     */
                    void SetRoles(const std::vector<RocketMQRoleConfig>& _roles);

                    /**
                     * 判断参数 Roles 是否已赋值
                     * @return Roles 是否已赋值
                     * 
                     */
                    bool RolesHasBeenSet() const;

                    /**
                     * 获取<p>Specify the imported namespace</p>
                     * @return Namespace <p>Specify the imported namespace</p>
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置<p>Specify the imported namespace</p>
                     * @param _namespace <p>Specify the imported namespace</p>
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                private:

                    /**
                     * <p>Cluster ID.</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>Task type:<br>0, Cluster migration<br>1, Import To specified namespace</p>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>List of Topics to Import</p>
                     */
                    std::vector<RocketMQTopicConfig> m_topics;
                    bool m_topicsHasBeenSet;

                    /**
                     * <p>List of consumer groups to be imported</p>
                     */
                    std::vector<RocketMQGroupConfig> m_groups;
                    bool m_groupsHasBeenSet;

                    /**
                     * <p>List of roles to be imported</p>
                     */
                    std::vector<RocketMQRoleConfig> m_roles;
                    bool m_rolesHasBeenSet;

                    /**
                     * <p>Specify the imported namespace</p>
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQMIGRATIONTASKREQUEST_H_
