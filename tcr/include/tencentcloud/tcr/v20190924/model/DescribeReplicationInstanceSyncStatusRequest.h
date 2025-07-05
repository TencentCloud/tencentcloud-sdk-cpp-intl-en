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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPLICATIONINSTANCESYNCSTATUSREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPLICATIONINSTANCESYNCSTATUSREQUEST_H_

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
                * DescribeReplicationInstanceSyncStatus request structure.
                */
                class DescribeReplicationInstanceSyncStatusRequest : public AbstractModel
                {
                public:
                    DescribeReplicationInstanceSyncStatusRequest();
                    ~DescribeReplicationInstanceSyncStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Master instance ID
                     * @return RegistryId Master instance ID
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置Master instance ID
                     * @param _registryId Master instance ID
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

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

                    /**
                     * 获取Whether to show the synchronization log
                     * @return ShowReplicationLog Whether to show the synchronization log
                     * 
                     */
                    bool GetShowReplicationLog() const;

                    /**
                     * 设置Whether to show the synchronization log
                     * @param _showReplicationLog Whether to show the synchronization log
                     * 
                     */
                    void SetShowReplicationLog(const bool& _showReplicationLog);

                    /**
                     * 判断参数 ShowReplicationLog 是否已赋值
                     * @return ShowReplicationLog 是否已赋值
                     * 
                     */
                    bool ShowReplicationLogHasBeenSet() const;

                    /**
                     * 获取Page offset for log display. Default value: 0
                     * @return Offset Page offset for log display. Default value: 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Page offset for log display. Default value: 0
                     * @param _offset Page offset for log display. Default value: 0
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Maximum number of output entries. Default value: 5, maximum value: 20.
                     * @return Limit Maximum number of output entries. Default value: 5, maximum value: 20.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Maximum number of output entries. Default value: 5, maximum value: 20.
                     * @param _limit Maximum number of output entries. Default value: 5, maximum value: 20.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Master instance ID
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

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

                    /**
                     * Whether to show the synchronization log
                     */
                    bool m_showReplicationLog;
                    bool m_showReplicationLogHasBeenSet;

                    /**
                     * Page offset for log display. Default value: 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Maximum number of output entries. Default value: 5, maximum value: 20.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPLICATIONINSTANCESYNCSTATUSREQUEST_H_
