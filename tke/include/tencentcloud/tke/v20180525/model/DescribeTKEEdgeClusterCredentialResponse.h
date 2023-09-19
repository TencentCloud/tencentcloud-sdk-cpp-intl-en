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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBETKEEDGECLUSTERCREDENTIALRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBETKEEDGECLUSTERCREDENTIALRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/IPAddress.h>
#include <tencentcloud/tke/v20180525/model/ClusterCredential.h>
#include <tencentcloud/tke/v20180525/model/EdgeClusterPublicLB.h>
#include <tencentcloud/tke/v20180525/model/EdgeClusterInternalLB.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeTKEEdgeClusterCredential response structure.
                */
                class DescribeTKEEdgeClusterCredentialResponse : public AbstractModel
                {
                public:
                    DescribeTKEEdgeClusterCredentialResponse();
                    ~DescribeTKEEdgeClusterCredentialResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Access address of the cluster
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Addresses Access address of the cluster
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<IPAddress> GetAddresses() const;

                    /**
                     * 判断参数 Addresses 是否已赋值
                     * @return Addresses 是否已赋值
                     * 
                     */
                    bool AddressesHasBeenSet() const;

                    /**
                     * 获取Cluster authentication information
                     * @return Credential Cluster authentication information
                     * 
                     */
                    ClusterCredential GetCredential() const;

                    /**
                     * 判断参数 Credential 是否已赋值
                     * @return Credential 是否已赋值
                     * 
                     */
                    bool CredentialHasBeenSet() const;

                    /**
                     * 获取Public network access information of the cluster
                     * @return PublicLB Public network access information of the cluster
                     * 
                     */
                    EdgeClusterPublicLB GetPublicLB() const;

                    /**
                     * 判断参数 PublicLB 是否已赋值
                     * @return PublicLB 是否已赋值
                     * 
                     */
                    bool PublicLBHasBeenSet() const;

                    /**
                     * 获取Private network access information of the cluster
                     * @return InternalLB Private network access information of the cluster
                     * 
                     */
                    EdgeClusterInternalLB GetInternalLB() const;

                    /**
                     * 判断参数 InternalLB 是否已赋值
                     * @return InternalLB 是否已赋值
                     * 
                     */
                    bool InternalLBHasBeenSet() const;

                    /**
                     * 获取CoreDns deployment information of the cluster
                     * @return CoreDns CoreDns deployment information of the cluster
                     * 
                     */
                    std::string GetCoreDns() const;

                    /**
                     * 判断参数 CoreDns 是否已赋值
                     * @return CoreDns 是否已赋值
                     * 
                     */
                    bool CoreDnsHasBeenSet() const;

                    /**
                     * 获取Multi-region health check deployment information of the cluster
                     * @return HealthRegion Multi-region health check deployment information of the cluster
                     * 
                     */
                    std::string GetHealthRegion() const;

                    /**
                     * 判断参数 HealthRegion 是否已赋值
                     * @return HealthRegion 是否已赋值
                     * 
                     */
                    bool HealthRegionHasBeenSet() const;

                    /**
                     * 获取Health check deployment information of the cluster
                     * @return Health Health check deployment information of the cluster
                     * 
                     */
                    std::string GetHealth() const;

                    /**
                     * 判断参数 Health 是否已赋值
                     * @return Health 是否已赋值
                     * 
                     */
                    bool HealthHasBeenSet() const;

                    /**
                     * 获取Whether to deploy GridDaemon to support headless service
                     * @return GridDaemon Whether to deploy GridDaemon to support headless service
                     * 
                     */
                    std::string GetGridDaemon() const;

                    /**
                     * 判断参数 GridDaemon 是否已赋值
                     * @return GridDaemon 是否已赋值
                     * 
                     */
                    bool GridDaemonHasBeenSet() const;

                    /**
                     * 获取Access kins clusters over the public network
                     * @return UnitCluster Access kins clusters over the public network
                     * 
                     */
                    std::string GetUnitCluster() const;

                    /**
                     * 判断参数 UnitCluster 是否已赋值
                     * @return UnitCluster 是否已赋值
                     * 
                     */
                    bool UnitClusterHasBeenSet() const;

                private:

                    /**
                     * Access address of the cluster
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<IPAddress> m_addresses;
                    bool m_addressesHasBeenSet;

                    /**
                     * Cluster authentication information
                     */
                    ClusterCredential m_credential;
                    bool m_credentialHasBeenSet;

                    /**
                     * Public network access information of the cluster
                     */
                    EdgeClusterPublicLB m_publicLB;
                    bool m_publicLBHasBeenSet;

                    /**
                     * Private network access information of the cluster
                     */
                    EdgeClusterInternalLB m_internalLB;
                    bool m_internalLBHasBeenSet;

                    /**
                     * CoreDns deployment information of the cluster
                     */
                    std::string m_coreDns;
                    bool m_coreDnsHasBeenSet;

                    /**
                     * Multi-region health check deployment information of the cluster
                     */
                    std::string m_healthRegion;
                    bool m_healthRegionHasBeenSet;

                    /**
                     * Health check deployment information of the cluster
                     */
                    std::string m_health;
                    bool m_healthHasBeenSet;

                    /**
                     * Whether to deploy GridDaemon to support headless service
                     */
                    std::string m_gridDaemon;
                    bool m_gridDaemonHasBeenSet;

                    /**
                     * Access kins clusters over the public network
                     */
                    std::string m_unitCluster;
                    bool m_unitClusterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBETKEEDGECLUSTERCREDENTIALRESPONSE_H_
