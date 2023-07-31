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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_INTERNETACCESSIBLE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_INTERNETACCESSIBLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Network billing mode based on maximum outbound bandwidth
                */
                class InternetAccessible : public AbstractModel
                {
                public:
                    InternetAccessible();
                    ~InternetAccessible() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取TRAFFIC_POSTPAID_BY_HOUR: hourly pay-as-you-go by traffic; BANDWIDTH_POSTPAID_BY_HOUR: hourly pay-as-you-go by bandwidth;
BANDWIDTH_PACKAGE: billed by bandwidth package (currently, this method is supported only if the ISP is specified)
                     * @return InternetChargeType TRAFFIC_POSTPAID_BY_HOUR: hourly pay-as-you-go by traffic; BANDWIDTH_POSTPAID_BY_HOUR: hourly pay-as-you-go by bandwidth;
BANDWIDTH_PACKAGE: billed by bandwidth package (currently, this method is supported only if the ISP is specified)
                     * 
                     */
                    std::string GetInternetChargeType() const;

                    /**
                     * 设置TRAFFIC_POSTPAID_BY_HOUR: hourly pay-as-you-go by traffic; BANDWIDTH_POSTPAID_BY_HOUR: hourly pay-as-you-go by bandwidth;
BANDWIDTH_PACKAGE: billed by bandwidth package (currently, this method is supported only if the ISP is specified)
                     * @param _internetChargeType TRAFFIC_POSTPAID_BY_HOUR: hourly pay-as-you-go by traffic; BANDWIDTH_POSTPAID_BY_HOUR: hourly pay-as-you-go by bandwidth;
BANDWIDTH_PACKAGE: billed by bandwidth package (currently, this method is supported only if the ISP is specified)
                     * 
                     */
                    void SetInternetChargeType(const std::string& _internetChargeType);

                    /**
                     * 判断参数 InternetChargeType 是否已赋值
                     * @return InternetChargeType 是否已赋值
                     * 
                     */
                    bool InternetChargeTypeHasBeenSet() const;

                    /**
                     * 获取Maximum outgoing bandwidth in Mbps. It works on LCU-supported instances on private networks and all instances on public networks.
- For shared and dedicated CLB instances on public networks, the range is 1Mbps-2048Mbps.
- For all LCU-supported CLB instances:
  - It defaults to General LCU-supported instance. SLA corresponds to Super Large 1, and the range of maximum outgoing bandwidth is 1 Mbps - 10240 Mbps.
  - If you have enabled Super Large specification, the range of maximum outgoing bandwidth is 1 Mbps - 61440 Mbps Super u200dLarge LCU-supported specification is in beta now. u200cu200dTo join the beta, [submit a ticket](https://console.cloud.tencent.com/workorder/category).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InternetMaxBandwidthOut Maximum outgoing bandwidth in Mbps. It works on LCU-supported instances on private networks and all instances on public networks.
- For shared and dedicated CLB instances on public networks, the range is 1Mbps-2048Mbps.
- For all LCU-supported CLB instances:
  - It defaults to General LCU-supported instance. SLA corresponds to Super Large 1, and the range of maximum outgoing bandwidth is 1 Mbps - 10240 Mbps.
  - If you have enabled Super Large specification, the range of maximum outgoing bandwidth is 1 Mbps - 61440 Mbps Super u200dLarge LCU-supported specification is in beta now. u200cu200dTo join the beta, [submit a ticket](https://console.cloud.tencent.com/workorder/category).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置Maximum outgoing bandwidth in Mbps. It works on LCU-supported instances on private networks and all instances on public networks.
- For shared and dedicated CLB instances on public networks, the range is 1Mbps-2048Mbps.
- For all LCU-supported CLB instances:
  - It defaults to General LCU-supported instance. SLA corresponds to Super Large 1, and the range of maximum outgoing bandwidth is 1 Mbps - 10240 Mbps.
  - If you have enabled Super Large specification, the range of maximum outgoing bandwidth is 1 Mbps - 61440 Mbps Super u200dLarge LCU-supported specification is in beta now. u200cu200dTo join the beta, [submit a ticket](https://console.cloud.tencent.com/workorder/category).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _internetMaxBandwidthOut Maximum outgoing bandwidth in Mbps. It works on LCU-supported instances on private networks and all instances on public networks.
- For shared and dedicated CLB instances on public networks, the range is 1Mbps-2048Mbps.
- For all LCU-supported CLB instances:
  - It defaults to General LCU-supported instance. SLA corresponds to Super Large 1, and the range of maximum outgoing bandwidth is 1 Mbps - 10240 Mbps.
  - If you have enabled Super Large specification, the range of maximum outgoing bandwidth is 1 Mbps - 61440 Mbps Super u200dLarge LCU-supported specification is in beta now. u200cu200dTo join the beta, [submit a ticket](https://console.cloud.tencent.com/workorder/category).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInternetMaxBandwidthOut(const int64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取Bandwidth package type, such as SINGLEISP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BandwidthpkgSubType Bandwidth package type, such as SINGLEISP
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBandwidthpkgSubType() const;

                    /**
                     * 设置Bandwidth package type, such as SINGLEISP
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _bandwidthpkgSubType Bandwidth package type, such as SINGLEISP
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBandwidthpkgSubType(const std::string& _bandwidthpkgSubType);

                    /**
                     * 判断参数 BandwidthpkgSubType 是否已赋值
                     * @return BandwidthpkgSubType 是否已赋值
                     * 
                     */
                    bool BandwidthpkgSubTypeHasBeenSet() const;

                private:

                    /**
                     * TRAFFIC_POSTPAID_BY_HOUR: hourly pay-as-you-go by traffic; BANDWIDTH_POSTPAID_BY_HOUR: hourly pay-as-you-go by bandwidth;
BANDWIDTH_PACKAGE: billed by bandwidth package (currently, this method is supported only if the ISP is specified)
                     */
                    std::string m_internetChargeType;
                    bool m_internetChargeTypeHasBeenSet;

                    /**
                     * Maximum outgoing bandwidth in Mbps. It works on LCU-supported instances on private networks and all instances on public networks.
- For shared and dedicated CLB instances on public networks, the range is 1Mbps-2048Mbps.
- For all LCU-supported CLB instances:
  - It defaults to General LCU-supported instance. SLA corresponds to Super Large 1, and the range of maximum outgoing bandwidth is 1 Mbps - 10240 Mbps.
  - If you have enabled Super Large specification, the range of maximum outgoing bandwidth is 1 Mbps - 61440 Mbps Super u200dLarge LCU-supported specification is in beta now. u200cu200dTo join the beta, [submit a ticket](https://console.cloud.tencent.com/workorder/category).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * Bandwidth package type, such as SINGLEISP
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_bandwidthpkgSubType;
                    bool m_bandwidthpkgSubTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_INTERNETACCESSIBLE_H_
