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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_CHANGEMASTERINSTANCEREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_CHANGEMASTERINSTANCEREQUEST_H_

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
                * ChangeMasterInstance request structure.
                */
                class ChangeMasterInstanceRequest : public AbstractModel
                {
                public:
                    ChangeMasterInstanceRequest();
                    ~ChangeMasterInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Replication group ID, such as `crs-rpl-m3zt****`. It is the unique identifier automatically assigned by the system when creating a replication group. Log in to the [TencentDB for Redis console](https://console.cloud.tencent.com/redis/replication), and get it in the global replication list.

                     * @return GroupId Replication group ID, such as `crs-rpl-m3zt****`. It is the unique identifier automatically assigned by the system when creating a replication group. Log in to the [TencentDB for Redis console](https://console.cloud.tencent.com/redis/replication), and get it in the global replication list.

                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Replication group ID, such as `crs-rpl-m3zt****`. It is the unique identifier automatically assigned by the system when creating a replication group. Log in to the [TencentDB for Redis console](https://console.cloud.tencent.com/redis/replication), and get it in the global replication list.

                     * @param _groupId Replication group ID, such as `crs-rpl-m3zt****`. It is the unique identifier automatically assigned by the system when creating a replication group. Log in to the [TencentDB for Redis console](https://console.cloud.tencent.com/redis/replication), and get it in the global replication list.

                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取ID of the read-only instance to be promoted to the master instance, such as `crs-xjhsdj****`. Log in to the the [TencentDB for Redis console](https://console.cloud.tencent.com/redis), and copy it in the instance list.


                     * @return InstanceId ID of the read-only instance to be promoted to the master instance, such as `crs-xjhsdj****`. Log in to the the [TencentDB for Redis console](https://console.cloud.tencent.com/redis), and copy it in the instance list.


                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the read-only instance to be promoted to the master instance, such as `crs-xjhsdj****`. Log in to the the [TencentDB for Redis console](https://console.cloud.tencent.com/redis), and copy it in the instance list.


                     * @param _instanceId ID of the read-only instance to be promoted to the master instance, such as `crs-xjhsdj****`. Log in to the the [TencentDB for Redis console](https://console.cloud.tencent.com/redis), and copy it in the instance list.


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
                     * 获取Whether to promote the read-only instance to the master instance forcibly. Valid values:
- `true`: Yes
- `false`: No
                     * @return ForceSwitch Whether to promote the read-only instance to the master instance forcibly. Valid values:
- `true`: Yes
- `false`: No
                     * 
                     */
                    bool GetForceSwitch() const;

                    /**
                     * 设置Whether to promote the read-only instance to the master instance forcibly. Valid values:
- `true`: Yes
- `false`: No
                     * @param _forceSwitch Whether to promote the read-only instance to the master instance forcibly. Valid values:
- `true`: Yes
- `false`: No
                     * 
                     */
                    void SetForceSwitch(const bool& _forceSwitch);

                    /**
                     * 判断参数 ForceSwitch 是否已赋值
                     * @return ForceSwitch 是否已赋值
                     * 
                     */
                    bool ForceSwitchHasBeenSet() const;

                private:

                    /**
                     * Replication group ID, such as `crs-rpl-m3zt****`. It is the unique identifier automatically assigned by the system when creating a replication group. Log in to the [TencentDB for Redis console](https://console.cloud.tencent.com/redis/replication), and get it in the global replication list.

                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * ID of the read-only instance to be promoted to the master instance, such as `crs-xjhsdj****`. Log in to the the [TencentDB for Redis console](https://console.cloud.tencent.com/redis), and copy it in the instance list.


                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Whether to promote the read-only instance to the master instance forcibly. Valid values:
- `true`: Yes
- `false`: No
                     */
                    bool m_forceSwitch;
                    bool m_forceSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_CHANGEMASTERINSTANCEREQUEST_H_
