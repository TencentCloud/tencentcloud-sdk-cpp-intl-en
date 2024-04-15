/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
                     * 获取Replication group ID.
                     * @return GroupId Replication group ID.
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Replication group ID.
                     * @param _groupId Replication group ID.
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
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
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
                     * 获取Data synchronization type. Valid values: true (Strong synchronization is required.) and false (Strong synchronization is not required. This value applies only to primary instance deletion.)
                     * @return SyncType Data synchronization type. Valid values: true (Strong synchronization is required.) and false (Strong synchronization is not required. This value applies only to primary instance deletion.)
                     * 
                     */
                    bool GetSyncType() const;

                    /**
                     * 设置Data synchronization type. Valid values: true (Strong synchronization is required.) and false (Strong synchronization is not required. This value applies only to primary instance deletion.)
                     * @param _syncType Data synchronization type. Valid values: true (Strong synchronization is required.) and false (Strong synchronization is not required. This value applies only to primary instance deletion.)
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
                     * Replication group ID.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Data synchronization type. Valid values: true (Strong synchronization is required.) and false (Strong synchronization is not required. This value applies only to primary instance deletion.)
                     */
                    bool m_syncType;
                    bool m_syncTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DELETEREPLICATIONINSTANCEREQUEST_H_
