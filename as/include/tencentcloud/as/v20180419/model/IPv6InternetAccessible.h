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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_IPV6INTERNETACCESSIBLE_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_IPV6INTERNETACCESSIBLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * This describes the IPv6 address public network accessibility of the instance created by a launch configuration and declares the public network usage billing method of the IPv6 address and the maximum bandwidth.
                */
                class IPv6InternetAccessible : public AbstractModel
                {
                public:
                    IPv6InternetAccessible();
                    ~IPv6InternetAccessible() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Network billing mode. Values include TRAFFIC_POSTPAID_BY_HOUR and BANDWIDTH_PACKAGE. Default value: TRAFFIC_POSTPAID_BY_HOUR. To view the current account type, see Account Type Description (https://www.tencentcloud.com/document/product/1199/49090?from_cn_redirect=1#judge).
<br><li> IPv6 supports TRAFFIC_POSTPAID_BY_HOUR for standard account type.
<br><li> IPv6 supports BANDWIDTH_PACKAGE for classic account type.
                     * @return InternetChargeType Network billing mode. Values include TRAFFIC_POSTPAID_BY_HOUR and BANDWIDTH_PACKAGE. Default value: TRAFFIC_POSTPAID_BY_HOUR. To view the current account type, see Account Type Description (https://www.tencentcloud.com/document/product/1199/49090?from_cn_redirect=1#judge).
<br><li> IPv6 supports TRAFFIC_POSTPAID_BY_HOUR for standard account type.
<br><li> IPv6 supports BANDWIDTH_PACKAGE for classic account type.
                     * 
                     */
                    std::string GetInternetChargeType() const;

                    /**
                     * 设置Network billing mode. Values include TRAFFIC_POSTPAID_BY_HOUR and BANDWIDTH_PACKAGE. Default value: TRAFFIC_POSTPAID_BY_HOUR. To view the current account type, see Account Type Description (https://www.tencentcloud.com/document/product/1199/49090?from_cn_redirect=1#judge).
<br><li> IPv6 supports TRAFFIC_POSTPAID_BY_HOUR for standard account type.
<br><li> IPv6 supports BANDWIDTH_PACKAGE for classic account type.
                     * @param _internetChargeType Network billing mode. Values include TRAFFIC_POSTPAID_BY_HOUR and BANDWIDTH_PACKAGE. Default value: TRAFFIC_POSTPAID_BY_HOUR. To view the current account type, see Account Type Description (https://www.tencentcloud.com/document/product/1199/49090?from_cn_redirect=1#judge).
<br><li> IPv6 supports TRAFFIC_POSTPAID_BY_HOUR for standard account type.
<br><li> IPv6 supports BANDWIDTH_PACKAGE for classic account type.
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
                     * 获取Public network outbound bandwidth cap, unit: Mbps.<br>Default value: 0. At this point, no public network bandwidth is allocated to IPv6. The bandwidth cap range varies by model, availability zone, and billing mode. For specific limitations, see [Public Network Bandwidth Limit](https://www.tencentcloud.com/document/product/213/12523?from_cn_redirect=1).
                     * @return InternetMaxBandwidthOut Public network outbound bandwidth cap, unit: Mbps.<br>Default value: 0. At this point, no public network bandwidth is allocated to IPv6. The bandwidth cap range varies by model, availability zone, and billing mode. For specific limitations, see [Public Network Bandwidth Limit](https://www.tencentcloud.com/document/product/213/12523?from_cn_redirect=1).
                     * 
                     */
                    uint64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置Public network outbound bandwidth cap, unit: Mbps.<br>Default value: 0. At this point, no public network bandwidth is allocated to IPv6. The bandwidth cap range varies by model, availability zone, and billing mode. For specific limitations, see [Public Network Bandwidth Limit](https://www.tencentcloud.com/document/product/213/12523?from_cn_redirect=1).
                     * @param _internetMaxBandwidthOut Public network outbound bandwidth cap, unit: Mbps.<br>Default value: 0. At this point, no public network bandwidth is allocated to IPv6. The bandwidth cap range varies by model, availability zone, and billing mode. For specific limitations, see [Public Network Bandwidth Limit](https://www.tencentcloud.com/document/product/213/12523?from_cn_redirect=1).
                     * 
                     */
                    void SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取Bandwidth package ID, which can be obtained from the `BandwidthPackageId` in the return value from the [DescribeBandwidthPackages](https://www.tencentcloud.com/document/api/215/19209?from_cn_redirect=1) API.
                     * @return BandwidthPackageId Bandwidth package ID, which can be obtained from the `BandwidthPackageId` in the return value from the [DescribeBandwidthPackages](https://www.tencentcloud.com/document/api/215/19209?from_cn_redirect=1) API.
                     * 
                     */
                    std::string GetBandwidthPackageId() const;

                    /**
                     * 设置Bandwidth package ID, which can be obtained from the `BandwidthPackageId` in the return value from the [DescribeBandwidthPackages](https://www.tencentcloud.com/document/api/215/19209?from_cn_redirect=1) API.
                     * @param _bandwidthPackageId Bandwidth package ID, which can be obtained from the `BandwidthPackageId` in the return value from the [DescribeBandwidthPackages](https://www.tencentcloud.com/document/api/215/19209?from_cn_redirect=1) API.
                     * 
                     */
                    void SetBandwidthPackageId(const std::string& _bandwidthPackageId);

                    /**
                     * 判断参数 BandwidthPackageId 是否已赋值
                     * @return BandwidthPackageId 是否已赋值
                     * 
                     */
                    bool BandwidthPackageIdHasBeenSet() const;

                private:

                    /**
                     * Network billing mode. Values include TRAFFIC_POSTPAID_BY_HOUR and BANDWIDTH_PACKAGE. Default value: TRAFFIC_POSTPAID_BY_HOUR. To view the current account type, see Account Type Description (https://www.tencentcloud.com/document/product/1199/49090?from_cn_redirect=1#judge).
<br><li> IPv6 supports TRAFFIC_POSTPAID_BY_HOUR for standard account type.
<br><li> IPv6 supports BANDWIDTH_PACKAGE for classic account type.
                     */
                    std::string m_internetChargeType;
                    bool m_internetChargeTypeHasBeenSet;

                    /**
                     * Public network outbound bandwidth cap, unit: Mbps.<br>Default value: 0. At this point, no public network bandwidth is allocated to IPv6. The bandwidth cap range varies by model, availability zone, and billing mode. For specific limitations, see [Public Network Bandwidth Limit](https://www.tencentcloud.com/document/product/213/12523?from_cn_redirect=1).
                     */
                    uint64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * Bandwidth package ID, which can be obtained from the `BandwidthPackageId` in the return value from the [DescribeBandwidthPackages](https://www.tencentcloud.com/document/api/215/19209?from_cn_redirect=1) API.
                     */
                    std::string m_bandwidthPackageId;
                    bool m_bandwidthPackageIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_IPV6INTERNETACCESSIBLE_H_
