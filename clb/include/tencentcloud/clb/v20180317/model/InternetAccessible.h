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
                     * 获取TRAFFIC_POSTPAID_BY_HOUR: Postpaid by traffic on an hourly basis. BANDWIDTH_POSTPAID_BY_HOUR: Postpaid by bandwidth on an hourly basis. International site users do not support this billing mode. BANDWIDTH_PACKAGE: Charged by bandwidth package. BANDWIDTH_PREPAID: Bandwidth prepaid.
                     * @return InternetChargeType TRAFFIC_POSTPAID_BY_HOUR: Postpaid by traffic on an hourly basis. BANDWIDTH_POSTPAID_BY_HOUR: Postpaid by bandwidth on an hourly basis. International site users do not support this billing mode. BANDWIDTH_PACKAGE: Charged by bandwidth package. BANDWIDTH_PREPAID: Bandwidth prepaid.
                     * 
                     */
                    std::string GetInternetChargeType() const;

                    /**
                     * 设置TRAFFIC_POSTPAID_BY_HOUR: Postpaid by traffic on an hourly basis. BANDWIDTH_POSTPAID_BY_HOUR: Postpaid by bandwidth on an hourly basis. International site users do not support this billing mode. BANDWIDTH_PACKAGE: Charged by bandwidth package. BANDWIDTH_PREPAID: Bandwidth prepaid.
                     * @param _internetChargeType TRAFFIC_POSTPAID_BY_HOUR: Postpaid by traffic on an hourly basis. BANDWIDTH_POSTPAID_BY_HOUR: Postpaid by bandwidth on an hourly basis. International site users do not support this billing mode. BANDWIDTH_PACKAGE: Charged by bandwidth package. BANDWIDTH_PREPAID: Bandwidth prepaid.
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
                     * 获取Maximum outbound bandwidth, in Mbps. This parameter is valid only for public network shared, LCU-supported, and exclusive CLB instances and private network LCU-supported CLB instances.
- The range of the maximum outbound bandwidth for public network shared and exclusive CLB instances is 1 Mbps to 2,048 Mbps.
- The range of the maximum outbound bandwidth for public network and private network LCU-supported CLB instances is 1 Mbps to 61,440 Mbps.
(If this parameter is not specified when CreateLoadBalancer is called to create a CLB instance, the default value of 10 Mbps is used. This value can be modified.)
                     * @return InternetMaxBandwidthOut Maximum outbound bandwidth, in Mbps. This parameter is valid only for public network shared, LCU-supported, and exclusive CLB instances and private network LCU-supported CLB instances.
- The range of the maximum outbound bandwidth for public network shared and exclusive CLB instances is 1 Mbps to 2,048 Mbps.
- The range of the maximum outbound bandwidth for public network and private network LCU-supported CLB instances is 1 Mbps to 61,440 Mbps.
(If this parameter is not specified when CreateLoadBalancer is called to create a CLB instance, the default value of 10 Mbps is used. This value can be modified.)
                     * 
                     */
                    int64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置Maximum outbound bandwidth, in Mbps. This parameter is valid only for public network shared, LCU-supported, and exclusive CLB instances and private network LCU-supported CLB instances.
- The range of the maximum outbound bandwidth for public network shared and exclusive CLB instances is 1 Mbps to 2,048 Mbps.
- The range of the maximum outbound bandwidth for public network and private network LCU-supported CLB instances is 1 Mbps to 61,440 Mbps.
(If this parameter is not specified when CreateLoadBalancer is called to create a CLB instance, the default value of 10 Mbps is used. This value can be modified.)
                     * @param _internetMaxBandwidthOut Maximum outbound bandwidth, in Mbps. This parameter is valid only for public network shared, LCU-supported, and exclusive CLB instances and private network LCU-supported CLB instances.
- The range of the maximum outbound bandwidth for public network shared and exclusive CLB instances is 1 Mbps to 2,048 Mbps.
- The range of the maximum outbound bandwidth for public network and private network LCU-supported CLB instances is 1 Mbps to 61,440 Mbps.
(If this parameter is not specified when CreateLoadBalancer is called to create a CLB instance, the default value of 10 Mbps is used. This value can be modified.)
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
                     * 获取Bandwidth package type, such as SINGLEISP (single-line) and BGP (multi-line).Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BandwidthpkgSubType Bandwidth package type, such as SINGLEISP (single-line) and BGP (multi-line).Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBandwidthpkgSubType() const;

                    /**
                     * 设置Bandwidth package type, such as SINGLEISP (single-line) and BGP (multi-line).Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _bandwidthpkgSubType Bandwidth package type, such as SINGLEISP (single-line) and BGP (multi-line).Note: This field may return null, indicating that no valid values can be obtained.
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
                     * TRAFFIC_POSTPAID_BY_HOUR: Postpaid by traffic on an hourly basis. BANDWIDTH_POSTPAID_BY_HOUR: Postpaid by bandwidth on an hourly basis. International site users do not support this billing mode. BANDWIDTH_PACKAGE: Charged by bandwidth package. BANDWIDTH_PREPAID: Bandwidth prepaid.
                     */
                    std::string m_internetChargeType;
                    bool m_internetChargeTypeHasBeenSet;

                    /**
                     * Maximum outbound bandwidth, in Mbps. This parameter is valid only for public network shared, LCU-supported, and exclusive CLB instances and private network LCU-supported CLB instances.
- The range of the maximum outbound bandwidth for public network shared and exclusive CLB instances is 1 Mbps to 2,048 Mbps.
- The range of the maximum outbound bandwidth for public network and private network LCU-supported CLB instances is 1 Mbps to 61,440 Mbps.
(If this parameter is not specified when CreateLoadBalancer is called to create a CLB instance, the default value of 10 Mbps is used. This value can be modified.)
                     */
                    int64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * Bandwidth package type, such as SINGLEISP (single-line) and BGP (multi-line).Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_bandwidthpkgSubType;
                    bool m_bandwidthpkgSubTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_INTERNETACCESSIBLE_H_
