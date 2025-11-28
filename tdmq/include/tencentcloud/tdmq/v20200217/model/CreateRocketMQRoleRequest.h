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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQROLEREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQROLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * CreateRocketMQRole request structure.
                */
                class CreateRocketMQRoleRequest : public AbstractModel
                {
                public:
                    CreateRocketMQRoleRequest();
                    ~CreateRocketMQRoleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Role name. Does not support Chinese characters and special characters other than hyphens (-) and underscores (_), and must be greater than 0 and less than or equal to 32 in length.
                     * @return RoleName Role name. Does not support Chinese characters and special characters other than hyphens (-) and underscores (_), and must be greater than 0 and less than or equal to 32 in length.
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置Role name. Does not support Chinese characters and special characters other than hyphens (-) and underscores (_), and must be greater than 0 and less than or equal to 32 in length.
                     * @param _roleName Role name. Does not support Chinese characters and special characters other than hyphens (-) and underscores (_), and must be greater than 0 and less than or equal to 32 in length.
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取Required field, cluster ID
                     * @return ClusterId Required field, cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Required field, cluster ID
                     * @param _clusterId Required field, cluster ID
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
                     * 获取Remark description. Length must be greater than or equal to 0 and less than or equal to 128.
                     * @return Remark Remark description. Length must be greater than or equal to 0 and less than or equal to 128.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remark description. Length must be greater than or equal to 0 and less than or equal to 128.
                     * @param _remark Remark description. Length must be greater than or equal to 0 and less than or equal to 128.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Role authorization type (cluster: Cluster; topic or consumer group: TopicAndGroup).
                     * @return PermType Role authorization type (cluster: Cluster; topic or consumer group: TopicAndGroup).
                     * 
                     */
                    std::string GetPermType() const;

                    /**
                     * 设置Role authorization type (cluster: Cluster; topic or consumer group: TopicAndGroup).
                     * @param _permType Role authorization type (cluster: Cluster; topic or consumer group: TopicAndGroup).
                     * 
                     */
                    void SetPermType(const std::string& _permType);

                    /**
                     * 判断参数 PermType 是否已赋值
                     * @return PermType 是否已赋值
                     * 
                     */
                    bool PermTypeHasBeenSet() const;

                private:

                    /**
                     * Role name. Does not support Chinese characters and special characters other than hyphens (-) and underscores (_), and must be greater than 0 and less than or equal to 32 in length.
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * Required field, cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Remark description. Length must be greater than or equal to 0 and less than or equal to 128.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Role authorization type (cluster: Cluster; topic or consumer group: TopicAndGroup).
                     */
                    std::string m_permType;
                    bool m_permTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQROLEREQUEST_H_
