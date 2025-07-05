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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPLICATIONINSTANCECREATETASKSREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPLICATIONINSTANCECREATETASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DescribeReplicationInstanceCreateTasks request structure.
                */
                class DescribeReplicationInstanceCreateTasksRequest : public AbstractModel
                {
                public:
                    DescribeReplicationInstanceCreateTasksRequest();
                    ~DescribeReplicationInstanceCreateTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Replication instance ID
                     * @return ReplicationRegistryId Replication instance ID
                     * 
                     */
                    std::string GetReplicationRegistryId() const;

                    /**
                     * 设置Replication instance ID
                     * @param _replicationRegistryId Replication instance ID
                     * 
                     */
                    void SetReplicationRegistryId(const std::string& _replicationRegistryId);

                    /**
                     * 判断参数 ReplicationRegistryId 是否已赋值
                     * @return ReplicationRegistryId 是否已赋值
                     * 
                     */
                    bool ReplicationRegistryIdHasBeenSet() const;

                    /**
                     * 获取Region ID of the replication instance
                     * @return ReplicationRegionId Region ID of the replication instance
                     * 
                     */
                    uint64_t GetReplicationRegionId() const;

                    /**
                     * 设置Region ID of the replication instance
                     * @param _replicationRegionId Region ID of the replication instance
                     * 
                     */
                    void SetReplicationRegionId(const uint64_t& _replicationRegionId);

                    /**
                     * 判断参数 ReplicationRegionId 是否已赋值
                     * @return ReplicationRegionId 是否已赋值
                     * 
                     */
                    bool ReplicationRegionIdHasBeenSet() const;

                private:

                    /**
                     * Replication instance ID
                     */
                    std::string m_replicationRegistryId;
                    bool m_replicationRegistryIdHasBeenSet;

                    /**
                     * Region ID of the replication instance
                     */
                    uint64_t m_replicationRegionId;
                    bool m_replicationRegionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPLICATIONINSTANCECREATETASKSREQUEST_H_
