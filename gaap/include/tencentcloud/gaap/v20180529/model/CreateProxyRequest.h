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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEPROXYREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEPROXYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/TagPair.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * CreateProxy request structure.
                */
                class CreateProxyRequest : public AbstractModel
                {
                public:
                    CreateProxyRequest();
                    ~CreateProxyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID of connection.
                     * @return ProjectId Project ID of connection.
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置Project ID of connection.
                     * @param _projectId Project ID of connection.
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Name of the connection
                     * @return ProxyName Name of the connection
                     * 
                     */
                    std::string GetProxyName() const;

                    /**
                     * 设置Name of the connection
                     * @param _proxyName Name of the connection
                     * 
                     */
                    void SetProxyName(const std::string& _proxyName);

                    /**
                     * 判断参数 ProxyName 是否已赋值
                     * @return ProxyName 是否已赋值
                     * 
                     */
                    bool ProxyNameHasBeenSet() const;

                    /**
                     * 获取Access region.
                     * @return AccessRegion Access region.
                     * 
                     */
                    std::string GetAccessRegion() const;

                    /**
                     * 设置Access region.
                     * @param _accessRegion Access region.
                     * 
                     */
                    void SetAccessRegion(const std::string& _accessRegion);

                    /**
                     * 判断参数 AccessRegion 是否已赋值
                     * @return AccessRegion 是否已赋值
                     * 
                     */
                    bool AccessRegionHasBeenSet() const;

                    /**
                     * 获取Connection bandwidth cap. Unit: Mbps.
                     * @return Bandwidth Connection bandwidth cap. Unit: Mbps.
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置Connection bandwidth cap. Unit: Mbps.
                     * @param _bandwidth Connection bandwidth cap. Unit: Mbps.
                     * 
                     */
                    void SetBandwidth(const uint64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取Connection concurrence cap, which indicates the maximum number of simultaneous online connections. Unit: 10,000 connections.
                     * @return Concurrent Connection concurrence cap, which indicates the maximum number of simultaneous online connections. Unit: 10,000 connections.
                     * 
                     */
                    uint64_t GetConcurrent() const;

                    /**
                     * 设置Connection concurrence cap, which indicates the maximum number of simultaneous online connections. Unit: 10,000 connections.
                     * @param _concurrent Connection concurrence cap, which indicates the maximum number of simultaneous online connections. Unit: 10,000 connections.
                     * 
                     */
                    void SetConcurrent(const uint64_t& _concurrent);

                    /**
                     * 判断参数 Concurrent 是否已赋值
                     * @return Concurrent 是否已赋值
                     * 
                     */
                    bool ConcurrentHasBeenSet() const;

                    /**
                     * 获取Origin server region. If GroupId exists, the origin server region is the one of connection group, and this field is not required. If GroupId does not exist, this field is reuqired.
                     * @return RealServerRegion Origin server region. If GroupId exists, the origin server region is the one of connection group, and this field is not required. If GroupId does not exist, this field is reuqired.
                     * 
                     */
                    std::string GetRealServerRegion() const;

                    /**
                     * 设置Origin server region. If GroupId exists, the origin server region is the one of connection group, and this field is not required. If GroupId does not exist, this field is reuqired.
                     * @param _realServerRegion Origin server region. If GroupId exists, the origin server region is the one of connection group, and this field is not required. If GroupId does not exist, this field is reuqired.
                     * 
                     */
                    void SetRealServerRegion(const std::string& _realServerRegion);

                    /**
                     * 判断参数 RealServerRegion 是否已赋值
                     * @return RealServerRegion 是否已赋值
                     * 
                     */
                    bool RealServerRegionHasBeenSet() const;

                    /**
                     * 获取A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idem-potency of the request cannot be guaranteed.
For more information, please see How to Ensure Idempotence.
                     * @return ClientToken A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idem-potency of the request cannot be guaranteed.
For more information, please see How to Ensure Idempotence.
                     * 
                     */
                    std::string GetClientToken() const;

                    /**
                     * 设置A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idem-potency of the request cannot be guaranteed.
For more information, please see How to Ensure Idempotence.
                     * @param _clientToken A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idem-potency of the request cannot be guaranteed.
For more information, please see How to Ensure Idempotence.
                     * 
                     */
                    void SetClientToken(const std::string& _clientToken);

                    /**
                     * 判断参数 ClientToken 是否已赋值
                     * @return ClientToken 是否已赋值
                     * 
                     */
                    bool ClientTokenHasBeenSet() const;

                    /**
                     * 获取Connection group ID. This parameter is required when the connection is created in the connection group. Otherwise, this field is ignored.
                     * @return GroupId Connection group ID. This parameter is required when the connection is created in the connection group. Otherwise, this field is ignored.
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Connection group ID. This parameter is required when the connection is created in the connection group. Otherwise, this field is ignored.
                     * @param _groupId Connection group ID. This parameter is required when the connection is created in the connection group. Otherwise, this field is ignored.
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
                     * 获取List of tags to be added for connection.
                     * @return TagSet List of tags to be added for connection.
                     * 
                     */
                    std::vector<TagPair> GetTagSet() const;

                    /**
                     * 设置List of tags to be added for connection.
                     * @param _tagSet List of tags to be added for connection.
                     * 
                     */
                    void SetTagSet(const std::vector<TagPair>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取ID of the replicated connection. Only a running connection can be replicated.
The connection is to be replicated if this parameter is set.
                     * @return ClonedProxyId ID of the replicated connection. Only a running connection can be replicated.
The connection is to be replicated if this parameter is set.
                     * 
                     */
                    std::string GetClonedProxyId() const;

                    /**
                     * 设置ID of the replicated connection. Only a running connection can be replicated.
The connection is to be replicated if this parameter is set.
                     * @param _clonedProxyId ID of the replicated connection. Only a running connection can be replicated.
The connection is to be replicated if this parameter is set.
                     * 
                     */
                    void SetClonedProxyId(const std::string& _clonedProxyId);

                    /**
                     * 判断参数 ClonedProxyId 是否已赋值
                     * @return ClonedProxyId 是否已赋值
                     * 
                     */
                    bool ClonedProxyIdHasBeenSet() const;

                    /**
                     * 获取Billing mode (0: bill-by-bandwidth, 1: bill-by-traffic. Default value: bill-by-bandwidth)
                     * @return BillingType Billing mode (0: bill-by-bandwidth, 1: bill-by-traffic. Default value: bill-by-bandwidth)
                     * 
                     */
                    int64_t GetBillingType() const;

                    /**
                     * 设置Billing mode (0: bill-by-bandwidth, 1: bill-by-traffic. Default value: bill-by-bandwidth)
                     * @param _billingType Billing mode (0: bill-by-bandwidth, 1: bill-by-traffic. Default value: bill-by-bandwidth)
                     * 
                     */
                    void SetBillingType(const int64_t& _billingType);

                    /**
                     * 判断参数 BillingType 是否已赋值
                     * @return BillingType 是否已赋值
                     * 
                     */
                    bool BillingTypeHasBeenSet() const;

                    /**
                     * 获取IP version. Valid values: `IPv4` (default), `IPv6`.
                     * @return IPAddressVersion IP version. Valid values: `IPv4` (default), `IPv6`.
                     * 
                     */
                    std::string GetIPAddressVersion() const;

                    /**
                     * 设置IP version. Valid values: `IPv4` (default), `IPv6`.
                     * @param _iPAddressVersion IP version. Valid values: `IPv4` (default), `IPv6`.
                     * 
                     */
                    void SetIPAddressVersion(const std::string& _iPAddressVersion);

                    /**
                     * 判断参数 IPAddressVersion 是否已赋值
                     * @return IPAddressVersion 是否已赋值
                     * 
                     */
                    bool IPAddressVersionHasBeenSet() const;

                    /**
                     * 获取Network type. `normal`: general BGP; `cn2`: dedicated BGP; `triple`: Non-BGP (provided by the top 3 ISPs in the Chinese mainland).
                     * @return NetworkType Network type. `normal`: general BGP; `cn2`: dedicated BGP; `triple`: Non-BGP (provided by the top 3 ISPs in the Chinese mainland).
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置Network type. `normal`: general BGP; `cn2`: dedicated BGP; `triple`: Non-BGP (provided by the top 3 ISPs in the Chinese mainland).
                     * @param _networkType Network type. `normal`: general BGP; `cn2`: dedicated BGP; `triple`: Non-BGP (provided by the top 3 ISPs in the Chinese mainland).
                     * 
                     */
                    void SetNetworkType(const std::string& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     * 
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取Package type of connection groups. Valid values: `Thunder` (general), `Accelerator` (specific for games), and `CrossBorder` (cross-MLC-border connection).
                     * @return PackageType Package type of connection groups. Valid values: `Thunder` (general), `Accelerator` (specific for games), and `CrossBorder` (cross-MLC-border connection).
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置Package type of connection groups. Valid values: `Thunder` (general), `Accelerator` (specific for games), and `CrossBorder` (cross-MLC-border connection).
                     * @param _packageType Package type of connection groups. Valid values: `Thunder` (general), `Accelerator` (specific for games), and `CrossBorder` (cross-MLC-border connection).
                     * 
                     */
                    void SetPackageType(const std::string& _packageType);

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     * 
                     */
                    bool PackageTypeHasBeenSet() const;

                    /**
                     * 获取(Disused) HTTP3.0 is supported by default when `IPAddressVersion` is `IPv4`.
                     * @return Http3Supported (Disused) HTTP3.0 is supported by default when `IPAddressVersion` is `IPv4`.
                     * 
                     */
                    int64_t GetHttp3Supported() const;

                    /**
                     * 设置(Disused) HTTP3.0 is supported by default when `IPAddressVersion` is `IPv4`.
                     * @param _http3Supported (Disused) HTTP3.0 is supported by default when `IPAddressVersion` is `IPv4`.
                     * 
                     */
                    void SetHttp3Supported(const int64_t& _http3Supported);

                    /**
                     * 判断参数 Http3Supported 是否已赋值
                     * @return Http3Supported 是否已赋值
                     * 
                     */
                    bool Http3SupportedHasBeenSet() const;

                private:

                    /**
                     * Project ID of connection.
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Name of the connection
                     */
                    std::string m_proxyName;
                    bool m_proxyNameHasBeenSet;

                    /**
                     * Access region.
                     */
                    std::string m_accessRegion;
                    bool m_accessRegionHasBeenSet;

                    /**
                     * Connection bandwidth cap. Unit: Mbps.
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * Connection concurrence cap, which indicates the maximum number of simultaneous online connections. Unit: 10,000 connections.
                     */
                    uint64_t m_concurrent;
                    bool m_concurrentHasBeenSet;

                    /**
                     * Origin server region. If GroupId exists, the origin server region is the one of connection group, and this field is not required. If GroupId does not exist, this field is reuqired.
                     */
                    std::string m_realServerRegion;
                    bool m_realServerRegionHasBeenSet;

                    /**
                     * A unique string supplied by the client to ensure that the request is idempotent. Its maximum length is 64 ASCII characters. If this parameter is not specified, the idem-potency of the request cannot be guaranteed.
For more information, please see How to Ensure Idempotence.
                     */
                    std::string m_clientToken;
                    bool m_clientTokenHasBeenSet;

                    /**
                     * Connection group ID. This parameter is required when the connection is created in the connection group. Otherwise, this field is ignored.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * List of tags to be added for connection.
                     */
                    std::vector<TagPair> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * ID of the replicated connection. Only a running connection can be replicated.
The connection is to be replicated if this parameter is set.
                     */
                    std::string m_clonedProxyId;
                    bool m_clonedProxyIdHasBeenSet;

                    /**
                     * Billing mode (0: bill-by-bandwidth, 1: bill-by-traffic. Default value: bill-by-bandwidth)
                     */
                    int64_t m_billingType;
                    bool m_billingTypeHasBeenSet;

                    /**
                     * IP version. Valid values: `IPv4` (default), `IPv6`.
                     */
                    std::string m_iPAddressVersion;
                    bool m_iPAddressVersionHasBeenSet;

                    /**
                     * Network type. `normal`: general BGP; `cn2`: dedicated BGP; `triple`: Non-BGP (provided by the top 3 ISPs in the Chinese mainland).
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * Package type of connection groups. Valid values: `Thunder` (general), `Accelerator` (specific for games), and `CrossBorder` (cross-MLC-border connection).
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * (Disused) HTTP3.0 is supported by default when `IPAddressVersion` is `IPv4`.
                     */
                    int64_t m_http3Supported;
                    bool m_http3SupportedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEPROXYREQUEST_H_
