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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_DIDCLUSTER_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_DIDCLUSTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * The information of DID blockchain networks.
                */
                class DidCluster : public AbstractModel
                {
                public:
                    DidCluster();
                    ~DidCluster() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The chain ID.
                     * @return ChainId The chain ID.
                     * 
                     */
                    uint64_t GetChainId() const;

                    /**
                     * 设置The chain ID.
                     * @param _chainId The chain ID.
                     * 
                     */
                    void SetChainId(const uint64_t& _chainId);

                    /**
                     * 判断参数 ChainId 是否已赋值
                     * @return ChainId 是否已赋值
                     * 
                     */
                    bool ChainIdHasBeenSet() const;

                    /**
                     * 获取The chain name.
                     * @return ChainName The chain name.
                     * 
                     */
                    std::string GetChainName() const;

                    /**
                     * 设置The chain name.
                     * @param _chainName The chain name.
                     * 
                     */
                    void SetChainName(const std::string& _chainName);

                    /**
                     * 判断参数 ChainName 是否已赋值
                     * @return ChainName 是否已赋值
                     * 
                     */
                    bool ChainNameHasBeenSet() const;

                    /**
                     * 获取The number of organizations.
                     * @return AgencyCount The number of organizations.
                     * 
                     */
                    uint64_t GetAgencyCount() const;

                    /**
                     * 设置The number of organizations.
                     * @param _agencyCount The number of organizations.
                     * 
                     */
                    void SetAgencyCount(const uint64_t& _agencyCount);

                    /**
                     * 判断参数 AgencyCount 是否已赋值
                     * @return AgencyCount 是否已赋值
                     * 
                     */
                    bool AgencyCountHasBeenSet() const;

                    /**
                     * 获取The consortium ID.
                     * @return ConsortiumId The consortium ID.
                     * 
                     */
                    uint64_t GetConsortiumId() const;

                    /**
                     * 设置The consortium ID.
                     * @param _consortiumId The consortium ID.
                     * 
                     */
                    void SetConsortiumId(const uint64_t& _consortiumId);

                    /**
                     * 判断参数 ConsortiumId 是否已赋值
                     * @return ConsortiumId 是否已赋值
                     * 
                     */
                    bool ConsortiumIdHasBeenSet() const;

                    /**
                     * 获取The creation time.
                     * @return CreateTime The creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置The creation time.
                     * @param _createTime The creation time.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取The expiration time.
                     * @return ExpireTime The expiration time.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置The expiration time.
                     * @param _expireTime The expiration time.
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取The network status.
                     * @return ChainStatus The network status.
                     * 
                     */
                    uint64_t GetChainStatus() const;

                    /**
                     * 设置The network status.
                     * @param _chainStatus The network status.
                     * 
                     */
                    void SetChainStatus(const uint64_t& _chainStatus);

                    /**
                     * 判断参数 ChainStatus 是否已赋值
                     * @return ChainStatus 是否已赋值
                     * 
                     */
                    bool ChainStatusHasBeenSet() const;

                    /**
                     * 获取The resource ID.
                     * @return ResourceId The resource ID.
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置The resource ID.
                     * @param _resourceId The resource ID.
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取The network ID.
                     * @return ClusterId The network ID.
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置The network ID.
                     * @param _clusterId The network ID.
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
                     * 获取The consortium name.
                     * @return ConsortiumName The consortium name.
                     * 
                     */
                    std::string GetConsortiumName() const;

                    /**
                     * 设置The consortium name.
                     * @param _consortiumName The consortium name.
                     * 
                     */
                    void SetConsortiumName(const std::string& _consortiumName);

                    /**
                     * 判断参数 ConsortiumName 是否已赋值
                     * @return ConsortiumName 是否已赋值
                     * 
                     */
                    bool ConsortiumNameHasBeenSet() const;

                    /**
                     * 获取The organization ID.
                     * @return AgencyId The organization ID.
                     * 
                     */
                    uint64_t GetAgencyId() const;

                    /**
                     * 设置The organization ID.
                     * @param _agencyId The organization ID.
                     * 
                     */
                    void SetAgencyId(const uint64_t& _agencyId);

                    /**
                     * 判断参数 AgencyId 是否已赋值
                     * @return AgencyId 是否已赋值
                     * 
                     */
                    bool AgencyIdHasBeenSet() const;

                    /**
                     * 获取Whether auto-renewal is enabled.
                     * @return AutoRenewFlag Whether auto-renewal is enabled.
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置Whether auto-renewal is enabled.
                     * @param _autoRenewFlag Whether auto-renewal is enabled.
                     * 
                     */
                    void SetAutoRenewFlag(const uint64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取The total number of network nodes.
                     * @return TotalNetworkNode The total number of network nodes.
                     * 
                     */
                    uint64_t GetTotalNetworkNode() const;

                    /**
                     * 设置The total number of network nodes.
                     * @param _totalNetworkNode The total number of network nodes.
                     * 
                     */
                    void SetTotalNetworkNode(const uint64_t& _totalNetworkNode);

                    /**
                     * 判断参数 TotalNetworkNode 是否已赋值
                     * @return TotalNetworkNode 是否已赋值
                     * 
                     */
                    bool TotalNetworkNodeHasBeenSet() const;

                    /**
                     * 获取The number of nodes of the current organization.
                     * @return TotalCreateNode The number of nodes of the current organization.
                     * 
                     */
                    uint64_t GetTotalCreateNode() const;

                    /**
                     * 设置The number of nodes of the current organization.
                     * @param _totalCreateNode The number of nodes of the current organization.
                     * 
                     */
                    void SetTotalCreateNode(const uint64_t& _totalCreateNode);

                    /**
                     * 判断参数 TotalCreateNode 是否已赋值
                     * @return TotalCreateNode 是否已赋值
                     * 
                     */
                    bool TotalCreateNodeHasBeenSet() const;

                    /**
                     * 获取The total number of groups.
                     * @return TotalGroups The total number of groups.
                     * 
                     */
                    uint64_t GetTotalGroups() const;

                    /**
                     * 设置The total number of groups.
                     * @param _totalGroups The total number of groups.
                     * 
                     */
                    void SetTotalGroups(const uint64_t& _totalGroups);

                    /**
                     * 判断参数 TotalGroups 是否已赋值
                     * @return TotalGroups 是否已赋值
                     * 
                     */
                    bool TotalGroupsHasBeenSet() const;

                    /**
                     * 获取The total number of DIDs.
                     * @return DidCount The total number of DIDs.
                     * 
                     */
                    uint64_t GetDidCount() const;

                    /**
                     * 设置The total number of DIDs.
                     * @param _didCount The total number of DIDs.
                     * 
                     */
                    void SetDidCount(const uint64_t& _didCount);

                    /**
                     * 判断参数 DidCount 是否已赋值
                     * @return DidCount 是否已赋值
                     * 
                     */
                    bool DidCountHasBeenSet() const;

                private:

                    /**
                     * The chain ID.
                     */
                    uint64_t m_chainId;
                    bool m_chainIdHasBeenSet;

                    /**
                     * The chain name.
                     */
                    std::string m_chainName;
                    bool m_chainNameHasBeenSet;

                    /**
                     * The number of organizations.
                     */
                    uint64_t m_agencyCount;
                    bool m_agencyCountHasBeenSet;

                    /**
                     * The consortium ID.
                     */
                    uint64_t m_consortiumId;
                    bool m_consortiumIdHasBeenSet;

                    /**
                     * The creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * The expiration time.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * The network status.
                     */
                    uint64_t m_chainStatus;
                    bool m_chainStatusHasBeenSet;

                    /**
                     * The resource ID.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * The network ID.
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * The consortium name.
                     */
                    std::string m_consortiumName;
                    bool m_consortiumNameHasBeenSet;

                    /**
                     * The organization ID.
                     */
                    uint64_t m_agencyId;
                    bool m_agencyIdHasBeenSet;

                    /**
                     * Whether auto-renewal is enabled.
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * The total number of network nodes.
                     */
                    uint64_t m_totalNetworkNode;
                    bool m_totalNetworkNodeHasBeenSet;

                    /**
                     * The number of nodes of the current organization.
                     */
                    uint64_t m_totalCreateNode;
                    bool m_totalCreateNodeHasBeenSet;

                    /**
                     * The total number of groups.
                     */
                    uint64_t m_totalGroups;
                    bool m_totalGroupsHasBeenSet;

                    /**
                     * The total number of DIDs.
                     */
                    uint64_t m_didCount;
                    bool m_didCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_DIDCLUSTER_H_
