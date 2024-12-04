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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEREDISCLUSTERSREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEREDISCLUSTERSREQUEST_H_

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
                * DescribeRedisClusters request structure.
                */
                class DescribeRedisClustersRequest : public AbstractModel
                {
                public:
                    DescribeRedisClustersRequest();
                    ~DescribeRedisClustersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Dedicated Redis cluster ID. Log in to the [CDC console](https://console.cloud.tencent.com/cdc/dedicatedcluster/index?rid=1),
switch to the **Cloud Service Management** page, select **TencentDB for Redis** from the drop-down list, and obtain the dedicated cluster ID.
                     * @return RedisClusterIds Dedicated Redis cluster ID. Log in to the [CDC console](https://console.cloud.tencent.com/cdc/dedicatedcluster/index?rid=1),
switch to the **Cloud Service Management** page, select **TencentDB for Redis** from the drop-down list, and obtain the dedicated cluster ID.
                     * 
                     */
                    std::vector<std::string> GetRedisClusterIds() const;

                    /**
                     * 设置Dedicated Redis cluster ID. Log in to the [CDC console](https://console.cloud.tencent.com/cdc/dedicatedcluster/index?rid=1),
switch to the **Cloud Service Management** page, select **TencentDB for Redis** from the drop-down list, and obtain the dedicated cluster ID.
                     * @param _redisClusterIds Dedicated Redis cluster ID. Log in to the [CDC console](https://console.cloud.tencent.com/cdc/dedicatedcluster/index?rid=1),
switch to the **Cloud Service Management** page, select **TencentDB for Redis** from the drop-down list, and obtain the dedicated cluster ID.
                     * 
                     */
                    void SetRedisClusterIds(const std::vector<std::string>& _redisClusterIds);

                    /**
                     * 判断参数 RedisClusterIds 是否已赋值
                     * @return RedisClusterIds 是否已赋值
                     * 
                     */
                    bool RedisClusterIdsHasBeenSet() const;

                    /**
                     * 获取Cluster status.
- 1: in process.
- 2: running.
- 3: isolated.
                     * @return Status Cluster status.
- 1: in process.
- 2: running.
- 3: isolated.
                     * 
                     */
                    std::vector<int64_t> GetStatus() const;

                    /**
                     * 设置Cluster status.
- 1: in process.
- 2: running.
- 3: isolated.
                     * @param _status Cluster status.
- 1: in process.
- 2: running.
- 3: isolated.
                     * 
                     */
                    void SetStatus(const std::vector<int64_t>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Project ID array. Log in to the [project management](https://console.tencentcloud.com/project) page and copy the project ID in **Project Name**.
                     * @return ProjectIds Project ID array. Log in to the [project management](https://console.tencentcloud.com/project) page and copy the project ID in **Project Name**.
                     * 
                     */
                    std::vector<int64_t> GetProjectIds() const;

                    /**
                     * 设置Project ID array. Log in to the [project management](https://console.tencentcloud.com/project) page and copy the project ID in **Project Name**.
                     * @param _projectIds Project ID array. Log in to the [project management](https://console.tencentcloud.com/project) page and copy the project ID in **Project Name**.
                     * 
                     */
                    void SetProjectIds(const std::vector<int64_t>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取Renewal mode.
- 0: default status (manual renewal).
- 1: automatic renewal.
- 2: no automatic renewal.
                     * @return AutoRenewFlag Renewal mode.
- 0: default status (manual renewal).
- 1: automatic renewal.
- 2: no automatic renewal.
                     * 
                     */
                    std::vector<int64_t> GetAutoRenewFlag() const;

                    /**
                     * 设置Renewal mode.
- 0: default status (manual renewal).
- 1: automatic renewal.
- 2: no automatic renewal.
                     * @param _autoRenewFlag Renewal mode.
- 0: default status (manual renewal).
- 1: automatic renewal.
- 2: no automatic renewal.
                     * 
                     */
                    void SetAutoRenewFlag(const std::vector<int64_t>& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取Dedicated Redis cluster name.
                     * @return ClusterName Dedicated Redis cluster name.
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置Dedicated Redis cluster name.
                     * @param _clusterName Dedicated Redis cluster name.
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取Search keyword. Valid values: cluster ID and cluster name.
                     * @return SearchKey Search keyword. Valid values: cluster ID and cluster name.
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置Search keyword. Valid values: cluster ID and cluster name.
                     * @param _searchKey Search keyword. Valid values: cluster ID and cluster name.
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                    /**
                     * 获取Limit on the number of records returned in pagination mode. If this parameter is not specified, the value 20 will be used by default.
                     * @return Limit Limit on the number of records returned in pagination mode. If this parameter is not specified, the value 20 will be used by default.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Limit on the number of records returned in pagination mode. If this parameter is not specified, the value 20 will be used by default.
                     * @param _limit Limit on the number of records returned in pagination mode. If this parameter is not specified, the value 20 will be used by default.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset, which is an integer multiple of Limit.
                     * @return Offset Offset, which is an integer multiple of Limit.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset, which is an integer multiple of Limit.
                     * @param _offset Offset, which is an integer multiple of Limit.
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
                     * 获取CDC ID. Log in to the [CDC console](https://console.cloud.tencent.com/cdc/dedicatedcluster/index?rid=1)
and obtain the cluster ID in the instance list.
                     * @return DedicatedClusterId CDC ID. Log in to the [CDC console](https://console.cloud.tencent.com/cdc/dedicatedcluster/index?rid=1)
and obtain the cluster ID in the instance list.
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置CDC ID. Log in to the [CDC console](https://console.cloud.tencent.com/cdc/dedicatedcluster/index?rid=1)
and obtain the cluster ID in the instance list.
                     * @param _dedicatedClusterId CDC ID. Log in to the [CDC console](https://console.cloud.tencent.com/cdc/dedicatedcluster/index?rid=1)
and obtain the cluster ID in the instance list.
                     * 
                     */
                    void SetDedicatedClusterId(const std::string& _dedicatedClusterId);

                    /**
                     * 判断参数 DedicatedClusterId 是否已赋值
                     * @return DedicatedClusterId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterIdHasBeenSet() const;

                private:

                    /**
                     * Dedicated Redis cluster ID. Log in to the [CDC console](https://console.cloud.tencent.com/cdc/dedicatedcluster/index?rid=1),
switch to the **Cloud Service Management** page, select **TencentDB for Redis** from the drop-down list, and obtain the dedicated cluster ID.
                     */
                    std::vector<std::string> m_redisClusterIds;
                    bool m_redisClusterIdsHasBeenSet;

                    /**
                     * Cluster status.
- 1: in process.
- 2: running.
- 3: isolated.
                     */
                    std::vector<int64_t> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Project ID array. Log in to the [project management](https://console.tencentcloud.com/project) page and copy the project ID in **Project Name**.
                     */
                    std::vector<int64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * Renewal mode.
- 0: default status (manual renewal).
- 1: automatic renewal.
- 2: no automatic renewal.
                     */
                    std::vector<int64_t> m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * Dedicated Redis cluster name.
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * Search keyword. Valid values: cluster ID and cluster name.
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * Limit on the number of records returned in pagination mode. If this parameter is not specified, the value 20 will be used by default.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset, which is an integer multiple of Limit.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * CDC ID. Log in to the [CDC console](https://console.cloud.tencent.com/cdc/dedicatedcluster/index?rid=1)
and obtain the cluster ID in the instance list.
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEREDISCLUSTERSREQUEST_H_
