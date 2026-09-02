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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEDRALERTCOUNTFORCONTAINERREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEDRALERTCOUNTFORCONTAINERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/EDRFilter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeEdrAlertCountForContainer request structure.
                */
                class DescribeEdrAlertCountForContainerRequest : public AbstractModel
                {
                public:
                    DescribeEdrAlertCountForContainerRequest();
                    ~DescribeEdrAlertCountForContainerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>Cluster ID list (≤500); group statistics by cluster when non-empty and ContainerIds is empty</p>
                     * @return ClusterIds <p>Cluster ID list (≤500); group statistics by cluster when non-empty and ContainerIds is empty</p>
                     * 
                     */
                    std::vector<std::string> GetClusterIds() const;

                    /**
                     * 设置<p>Cluster ID list (≤500); group statistics by cluster when non-empty and ContainerIds is empty</p>
                     * @param _clusterIds <p>Cluster ID list (≤500); group statistics by cluster when non-empty and ContainerIds is empty</p>
                     * 
                     */
                    void SetClusterIds(const std::vector<std::string>& _clusterIds);

                    /**
                     * 判断参数 ClusterIds 是否已赋值
                     * @return ClusterIds 是否已赋值
                     * 
                     */
                    bool ClusterIdsHasBeenSet() const;

                    /**
                     * 获取<p>Container ID list (≤500); if not empty, group statistics by container (higher priority than ClusterIds)</p>
                     * @return ContainerIds <p>Container ID list (≤500); if not empty, group statistics by container (higher priority than ClusterIds)</p>
                     * 
                     */
                    std::vector<std::string> GetContainerIds() const;

                    /**
                     * 设置<p>Container ID list (≤500); if not empty, group statistics by container (higher priority than ClusterIds)</p>
                     * @param _containerIds <p>Container ID list (≤500); if not empty, group statistics by container (higher priority than ClusterIds)</p>
                     * 
                     */
                    void SetContainerIds(const std::vector<std::string>& _containerIds);

                    /**
                     * 判断参数 ContainerIds 是否已赋值
                     * @return ContainerIds 是否已赋值
                     * 
                     */
                    bool ContainerIdsHasBeenSet() const;

                    /**
                     * 获取<li>PolicyType - int - Required: No - policy type</li><li>PolicyName - string - Required: No - Policy Name</li><li>Domain - string - Required: No - domain name (urlencode the domain name first, then base64)</li><li>PolicyAction- int - Required: No - policy action</li><li>IsEnabled - int - Required: No - whether it takes effect</li><li>ContainerId - string - Required: No - container ID (exact/IN, dimension filtering)</li><li>ClusterId - string - Required: No - Cluster ID (exact/IN, dimension filtering)</li><li>ClusterName - string - Required: No - cluster name (prefix blurry)</li><li>ContainerName - string - Required: No - Container name (prefix blurry)</li><li>AlertSource - string - Required: No - alarm source: HOST-host alarm / CONTAINER-container alarm. If not specified, return all</li>
                     * @return Filters <li>PolicyType - int - Required: No - policy type</li><li>PolicyName - string - Required: No - Policy Name</li><li>Domain - string - Required: No - domain name (urlencode the domain name first, then base64)</li><li>PolicyAction- int - Required: No - policy action</li><li>IsEnabled - int - Required: No - whether it takes effect</li><li>ContainerId - string - Required: No - container ID (exact/IN, dimension filtering)</li><li>ClusterId - string - Required: No - Cluster ID (exact/IN, dimension filtering)</li><li>ClusterName - string - Required: No - cluster name (prefix blurry)</li><li>ContainerName - string - Required: No - Container name (prefix blurry)</li><li>AlertSource - string - Required: No - alarm source: HOST-host alarm / CONTAINER-container alarm. If not specified, return all</li>
                     * 
                     */
                    std::vector<EDRFilter> GetFilters() const;

                    /**
                     * 设置<li>PolicyType - int - Required: No - policy type</li><li>PolicyName - string - Required: No - Policy Name</li><li>Domain - string - Required: No - domain name (urlencode the domain name first, then base64)</li><li>PolicyAction- int - Required: No - policy action</li><li>IsEnabled - int - Required: No - whether it takes effect</li><li>ContainerId - string - Required: No - container ID (exact/IN, dimension filtering)</li><li>ClusterId - string - Required: No - Cluster ID (exact/IN, dimension filtering)</li><li>ClusterName - string - Required: No - cluster name (prefix blurry)</li><li>ContainerName - string - Required: No - Container name (prefix blurry)</li><li>AlertSource - string - Required: No - alarm source: HOST-host alarm / CONTAINER-container alarm. If not specified, return all</li>
                     * @param _filters <li>PolicyType - int - Required: No - policy type</li><li>PolicyName - string - Required: No - Policy Name</li><li>Domain - string - Required: No - domain name (urlencode the domain name first, then base64)</li><li>PolicyAction- int - Required: No - policy action</li><li>IsEnabled - int - Required: No - whether it takes effect</li><li>ContainerId - string - Required: No - container ID (exact/IN, dimension filtering)</li><li>ClusterId - string - Required: No - Cluster ID (exact/IN, dimension filtering)</li><li>ClusterName - string - Required: No - cluster name (prefix blurry)</li><li>ContainerName - string - Required: No - Container name (prefix blurry)</li><li>AlertSource - string - Required: No - alarm source: HOST-host alarm / CONTAINER-container alarm. If not specified, return all</li>
                     * 
                     */
                    void SetFilters(const std::vector<EDRFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Cluster ID list (≤500); group statistics by cluster when non-empty and ContainerIds is empty</p>
                     */
                    std::vector<std::string> m_clusterIds;
                    bool m_clusterIdsHasBeenSet;

                    /**
                     * <p>Container ID list (≤500); if not empty, group statistics by container (higher priority than ClusterIds)</p>
                     */
                    std::vector<std::string> m_containerIds;
                    bool m_containerIdsHasBeenSet;

                    /**
                     * <li>PolicyType - int - Required: No - policy type</li><li>PolicyName - string - Required: No - Policy Name</li><li>Domain - string - Required: No - domain name (urlencode the domain name first, then base64)</li><li>PolicyAction- int - Required: No - policy action</li><li>IsEnabled - int - Required: No - whether it takes effect</li><li>ContainerId - string - Required: No - container ID (exact/IN, dimension filtering)</li><li>ClusterId - string - Required: No - Cluster ID (exact/IN, dimension filtering)</li><li>ClusterName - string - Required: No - cluster name (prefix blurry)</li><li>ContainerName - string - Required: No - Container name (prefix blurry)</li><li>AlertSource - string - Required: No - alarm source: HOST-host alarm / CONTAINER-container alarm. If not specified, return all</li>
                     */
                    std::vector<EDRFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEDRALERTCOUNTFORCONTAINERREQUEST_H_
