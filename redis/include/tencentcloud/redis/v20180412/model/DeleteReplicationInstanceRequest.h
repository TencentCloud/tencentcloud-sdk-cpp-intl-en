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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DELETEREPLICATIONINSTANCEREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DELETEREPLICATIONINSTANCEREQUEST_H_

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
                * DeleteReplicationInstance request structure.
                */
                class DeleteReplicationInstanceRequest : public AbstractModel
                {
                public:
                    DeleteReplicationInstanceRequest();
                    ~DeleteReplicationInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Replication group ID. Log in to the [global replication](https://console.tencentcloud.com/redis/replication) page of the Redis console and obtain it.
                     * @return GroupId Replication group ID. Log in to the [global replication](https://console.tencentcloud.com/redis/replication) page of the Redis console and obtain it.
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Replication group ID. Log in to the [global replication](https://console.tencentcloud.com/redis/replication) page of the Redis console and obtain it.
                     * @param _groupId Replication group ID. Log in to the [global replication](https://console.tencentcloud.com/redis/replication) page of the Redis console and obtain it.
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
                     * 获取Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * @return InstanceId Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     * @param _instanceId Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
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
                     * 获取Data synchronization type.
- true: Strong synchronization is required.
- false: Strong synchronization is not required, and only the primary instance can be deleted.
                     * @return SyncType Data synchronization type.
- true: Strong synchronization is required.
- false: Strong synchronization is not required, and only the primary instance can be deleted.
                     * 
                     */
                    bool GetSyncType() const;

                    /**
                     * 设置Data synchronization type.
- true: Strong synchronization is required.
- false: Strong synchronization is not required, and only the primary instance can be deleted.
                     * @param _syncType Data synchronization type.
- true: Strong synchronization is required.
- false: Strong synchronization is not required, and only the primary instance can be deleted.
                     * 
                     */
                    void SetSyncType(const bool& _syncType);

                    /**
                     * 判断参数 SyncType 是否已赋值
                     * @return SyncType 是否已赋值
                     * 
                     */
                    bool SyncTypeHasBeenSet() const;

                private:

                    /**
                     * Replication group ID. Log in to the [global replication](https://console.tencentcloud.com/redis/replication) page of the Redis console and obtain it.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Instance ID. Log in to the [Redis console](https://console.tencentcloud.com/redis/instance) and copy it in the instance list.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Data synchronization type.
- true: Strong synchronization is required.
- false: Strong synchronization is not required, and only the primary instance can be deleted.
                     */
                    bool m_syncType;
                    bool m_syncTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DELETEREPLICATIONINSTANCEREQUEST_H_
