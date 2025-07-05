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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_CHECKPROXYCREATEREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_CHECKPROXYCREATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * CheckProxyCreate request structure.
                */
                class CheckProxyCreateRequest : public AbstractModel
                {
                public:
                    CheckProxyCreateRequest();
                    ~CheckProxyCreateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Access (acceleration) region of the connection. The value can be obtained via the DescribeAccessRegionsByDestRegion API.
                     * @return AccessRegion Access (acceleration) region of the connection. The value can be obtained via the DescribeAccessRegionsByDestRegion API.
                     * 
                     */
                    std::string GetAccessRegion() const;

                    /**
                     * 设置Access (acceleration) region of the connection. The value can be obtained via the DescribeAccessRegionsByDestRegion API.
                     * @param _accessRegion Access (acceleration) region of the connection. The value can be obtained via the DescribeAccessRegionsByDestRegion API.
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
                     * 获取Origin server region of the connection. The value can be obtained via the DescribeDestRegions API.
                     * @return RealServerRegion Origin server region of the connection. The value can be obtained via the DescribeDestRegions API.
                     * 
                     */
                    std::string GetRealServerRegion() const;

                    /**
                     * 设置Origin server region of the connection. The value can be obtained via the DescribeDestRegions API.
                     * @param _realServerRegion Origin server region of the connection. The value can be obtained via the DescribeDestRegions API.
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
                     * 获取Connection group ID that needs to be entered when a connection is created in a connection group
                     * @return GroupId Connection group ID that needs to be entered when a connection is created in a connection group
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置Connection group ID that needs to be entered when a connection is created in a connection group
                     * @param _groupId Connection group ID that needs to be entered when a connection is created in a connection group
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
                     * 获取Network type. Valid values: `normal` (default), `cn2`
                     * @return NetworkType Network type. Valid values: `normal` (default), `cn2`
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置Network type. Valid values: `normal` (default), `cn2`
                     * @param _networkType Network type. Valid values: `normal` (default), `cn2`
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
                     * 获取Package type of connection groups. Valid values: `Thunder` (general connection group), `Accelerator` (game accelerator connection group), and `CrossBorder` (cross-border connection group).
                     * @return PackageType Package type of connection groups. Valid values: `Thunder` (general connection group), `Accelerator` (game accelerator connection group), and `CrossBorder` (cross-border connection group).
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置Package type of connection groups. Valid values: `Thunder` (general connection group), `Accelerator` (game accelerator connection group), and `CrossBorder` (cross-border connection group).
                     * @param _packageType Package type of connection groups. Valid values: `Thunder` (general connection group), `Accelerator` (game accelerator connection group), and `CrossBorder` (cross-border connection group).
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
                     * Access (acceleration) region of the connection. The value can be obtained via the DescribeAccessRegionsByDestRegion API.
                     */
                    std::string m_accessRegion;
                    bool m_accessRegionHasBeenSet;

                    /**
                     * Origin server region of the connection. The value can be obtained via the DescribeDestRegions API.
                     */
                    std::string m_realServerRegion;
                    bool m_realServerRegionHasBeenSet;

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
                     * Connection group ID that needs to be entered when a connection is created in a connection group
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * IP version. Valid values: `IPv4` (default), `IPv6`.
                     */
                    std::string m_iPAddressVersion;
                    bool m_iPAddressVersionHasBeenSet;

                    /**
                     * Network type. Valid values: `normal` (default), `cn2`
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * Package type of connection groups. Valid values: `Thunder` (general connection group), `Accelerator` (game accelerator connection group), and `CrossBorder` (cross-border connection group).
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

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CHECKPROXYCREATEREQUEST_H_
