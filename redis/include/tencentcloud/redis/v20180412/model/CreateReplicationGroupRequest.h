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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_CREATEREPLICATIONGROUPREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_CREATEREPLICATIONGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * CreateReplicationGroup request structure.
                */
                class CreateReplicationGroupRequest : public AbstractModel
                {
                public:
                    CreateReplicationGroupRequest();
                    ~CreateReplicationGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the primary instance in the replication group. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * @return InstanceId ID of the primary instance in the replication group. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the primary instance in the replication group. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * @param _instanceId ID of the primary instance in the replication group. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
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
                     * 获取Replication group name. The name should contain 2 to 64 characters, including only letters, digits, underscores (_), and hyphens (-).
                     * @return GroupName Replication group name. The name should contain 2 to 64 characters, including only letters, digits, underscores (_), and hyphens (-).
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置Replication group name. The name should contain 2 to 64 characters, including only letters, digits, underscores (_), and hyphens (-).
                     * @param _groupName Replication group name. The name should contain 2 to 64 characters, including only letters, digits, underscores (_), and hyphens (-).
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
                     * 获取Remark information.
                     * @return Remark Remark information.
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remark information.
                     * @param _remark Remark information.
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * ID of the primary instance in the replication group. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Replication group name. The name should contain 2 to 64 characters, including only letters, digits, underscores (_), and hyphens (-).
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Remark information.
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_CREATEREPLICATIONGROUPREQUEST_H_
