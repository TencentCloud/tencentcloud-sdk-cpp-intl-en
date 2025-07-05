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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTEROVERVIEWRESPONSE_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTEROVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdc/v20201214/model/VpngwBandwidthData.h>
#include <tencentcloud/cdc/v20201214/model/LocalNetInfo.h>
#include <tencentcloud/cdc/v20201214/model/HostDetailInfo.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * DescribeDedicatedClusterOverview response structure.
                */
                class DescribeDedicatedClusterOverviewResponse : public AbstractModel
                {
                public:
                    DescribeDedicatedClusterOverviewResponse();
                    ~DescribeDedicatedClusterOverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of CVMs
                     * @return CvmCount Number of CVMs
                     * 
                     */
                    uint64_t GetCvmCount() const;

                    /**
                     * 判断参数 CvmCount 是否已赋值
                     * @return CvmCount 是否已赋值
                     * 
                     */
                    bool CvmCountHasBeenSet() const;

                    /**
                     * 获取Number of hosts
                     * @return HostCount Number of hosts
                     * 
                     */
                    uint64_t GetHostCount() const;

                    /**
                     * 判断参数 HostCount 是否已赋值
                     * @return HostCount 是否已赋值
                     * 
                     */
                    bool HostCountHasBeenSet() const;

                    /**
                     * 获取VPN channel status 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return VpnConnectionState VPN channel status 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    std::string GetVpnConnectionState() const;

                    /**
                     * 判断参数 VpnConnectionState 是否已赋值
                     * @return VpnConnectionState 是否已赋值
                     * 
                     */
                    bool VpnConnectionStateHasBeenSet() const;

                    /**
                     * 获取VPN gateway monitoring data 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return VpngwBandwidthData VPN gateway monitoring data 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    VpngwBandwidthData GetVpngwBandwidthData() const;

                    /**
                     * 判断参数 VpngwBandwidthData 是否已赋值
                     * @return VpngwBandwidthData 是否已赋值
                     * 
                     */
                    bool VpngwBandwidthDataHasBeenSet() const;

                    /**
                     * 获取Local gateway information 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return LocalNetInfo Local gateway information 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    LocalNetInfo GetLocalNetInfo() const;

                    /**
                     * 判断参数 LocalNetInfo 是否已赋值
                     * @return LocalNetInfo 是否已赋值
                     * 
                     */
                    bool LocalNetInfoHasBeenSet() const;

                    /**
                     * 获取VPN gateway channel monitoring data 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * @return VpnConnectionBandwidthData VPN gateway channel monitoring data 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     * 
                     */
                    std::vector<VpngwBandwidthData> GetVpnConnectionBandwidthData() const;

                    /**
                     * 判断参数 VpnConnectionBandwidthData 是否已赋值
                     * @return VpnConnectionBandwidthData 是否已赋值
                     * 
                     */
                    bool VpnConnectionBandwidthDataHasBeenSet() const;

                    /**
                     * 获取
                     * @return HostDetailInfo 
                     * 
                     */
                    std::vector<HostDetailInfo> GetHostDetailInfo() const;

                    /**
                     * 判断参数 HostDetailInfo 是否已赋值
                     * @return HostDetailInfo 是否已赋值
                     * 
                     */
                    bool HostDetailInfoHasBeenSet() const;

                    /**
                     * 获取
                     * @return HostStandbyCount 
                     * 
                     */
                    uint64_t GetHostStandbyCount() const;

                    /**
                     * 判断参数 HostStandbyCount 是否已赋值
                     * @return HostStandbyCount 是否已赋值
                     * 
                     */
                    bool HostStandbyCountHasBeenSet() const;

                    /**
                     * 获取
                     * @return HostNormalCount 
                     * 
                     */
                    uint64_t GetHostNormalCount() const;

                    /**
                     * 判断参数 HostNormalCount 是否已赋值
                     * @return HostNormalCount 是否已赋值
                     * 
                     */
                    bool HostNormalCountHasBeenSet() const;

                private:

                    /**
                     * Number of CVMs
                     */
                    uint64_t m_cvmCount;
                    bool m_cvmCountHasBeenSet;

                    /**
                     * Number of hosts
                     */
                    uint64_t m_hostCount;
                    bool m_hostCountHasBeenSet;

                    /**
                     * VPN channel status 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    std::string m_vpnConnectionState;
                    bool m_vpnConnectionStateHasBeenSet;

                    /**
                     * VPN gateway monitoring data 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    VpngwBandwidthData m_vpngwBandwidthData;
                    bool m_vpngwBandwidthDataHasBeenSet;

                    /**
                     * Local gateway information 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    LocalNetInfo m_localNetInfo;
                    bool m_localNetInfoHasBeenSet;

                    /**
                     * VPN gateway channel monitoring data 
Note: The returned value of this field may be null, indicating that no valid value is obtained.
                     */
                    std::vector<VpngwBandwidthData> m_vpnConnectionBandwidthData;
                    bool m_vpnConnectionBandwidthDataHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<HostDetailInfo> m_hostDetailInfo;
                    bool m_hostDetailInfoHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_hostStandbyCount;
                    bool m_hostStandbyCountHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_hostNormalCount;
                    bool m_hostNormalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTEROVERVIEWRESPONSE_H_
