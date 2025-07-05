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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_INTERNETACCESSIBLE_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_INTERNETACCESSIBLE_H_

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
                * This describes the internet accessibility of the instance created by a launch configuration and declares the internet usage billing method of the instance and the maximum bandwidth
                */
                class InternetAccessible : public AbstractModel
                {
                public:
                    InternetAccessible();
                    ~InternetAccessible() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Network billing type. Valid values: <li>BANDWIDTH_PREPAID: prepaid by bandwidth;</li> <li>TRAFFIC_POSTPAID_BY_HOUR: postpaid by traffic per hour;</li> <li>BANDWIDTH_POSTPAID_BY_HOUR: postpaid by bandwidth per hour;</li> <li>BANDWIDTH_PACKAGE: bandwidth package users.</li> Default value: TRAFFIC_POSTPAID_BY_HOUR.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InternetChargeType Network billing type. Valid values: <li>BANDWIDTH_PREPAID: prepaid by bandwidth;</li> <li>TRAFFIC_POSTPAID_BY_HOUR: postpaid by traffic per hour;</li> <li>BANDWIDTH_POSTPAID_BY_HOUR: postpaid by bandwidth per hour;</li> <li>BANDWIDTH_PACKAGE: bandwidth package users.</li> Default value: TRAFFIC_POSTPAID_BY_HOUR.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetInternetChargeType() const;

                    /**
                     * 设置Network billing type. Valid values: <li>BANDWIDTH_PREPAID: prepaid by bandwidth;</li> <li>TRAFFIC_POSTPAID_BY_HOUR: postpaid by traffic per hour;</li> <li>BANDWIDTH_POSTPAID_BY_HOUR: postpaid by bandwidth per hour;</li> <li>BANDWIDTH_PACKAGE: bandwidth package users.</li> Default value: TRAFFIC_POSTPAID_BY_HOUR.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _internetChargeType Network billing type. Valid values: <li>BANDWIDTH_PREPAID: prepaid by bandwidth;</li> <li>TRAFFIC_POSTPAID_BY_HOUR: postpaid by traffic per hour;</li> <li>BANDWIDTH_POSTPAID_BY_HOUR: postpaid by bandwidth per hour;</li> <li>BANDWIDTH_PACKAGE: bandwidth package users.</li> Default value: TRAFFIC_POSTPAID_BY_HOUR.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取The maximum outbound bandwidth in Mbps of the public network. The default value is 0 Mbps. The upper limit of bandwidth varies by model. For more information, see [Purchase Network Bandwidth](https://intl.cloud.tencent.com/document/product/213/509?from_cn_redirect=1).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InternetMaxBandwidthOut The maximum outbound bandwidth in Mbps of the public network. The default value is 0 Mbps. The upper limit of bandwidth varies by model. For more information, see [Purchase Network Bandwidth](https://intl.cloud.tencent.com/document/product/213/509?from_cn_redirect=1).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置The maximum outbound bandwidth in Mbps of the public network. The default value is 0 Mbps. The upper limit of bandwidth varies by model. For more information, see [Purchase Network Bandwidth](https://intl.cloud.tencent.com/document/product/213/509?from_cn_redirect=1).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _internetMaxBandwidthOut The maximum outbound bandwidth in Mbps of the public network. The default value is 0 Mbps. The upper limit of bandwidth varies by model. For more information, see [Purchase Network Bandwidth](https://intl.cloud.tencent.com/document/product/213/509?from_cn_redirect=1).
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether to assign a public IP address. Valid values: <li>TRUE: Allocate a public IP address.</li> <li>FALSE: Do not allocate a public IP address.</li> When the public network bandwidth is greater than 0 Mbps, you can choose whether to enable this feature based on your needs. By default, this feature is enabled. When the public network bandwidth is 0, public IP address assignment is not allowed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PublicIpAssigned Whether to assign a public IP address. Valid values: <li>TRUE: Allocate a public IP address.</li> <li>FALSE: Do not allocate a public IP address.</li> When the public network bandwidth is greater than 0 Mbps, you can choose whether to enable this feature based on your needs. By default, this feature is enabled. When the public network bandwidth is 0, public IP address assignment is not allowed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetPublicIpAssigned() const;

                    /**
                     * 设置Whether to assign a public IP address. Valid values: <li>TRUE: Allocate a public IP address.</li> <li>FALSE: Do not allocate a public IP address.</li> When the public network bandwidth is greater than 0 Mbps, you can choose whether to enable this feature based on your needs. By default, this feature is enabled. When the public network bandwidth is 0, public IP address assignment is not allowed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _publicIpAssigned Whether to assign a public IP address. Valid values: <li>TRUE: Allocate a public IP address.</li> <li>FALSE: Do not allocate a public IP address.</li> When the public network bandwidth is greater than 0 Mbps, you can choose whether to enable this feature based on your needs. By default, this feature is enabled. When the public network bandwidth is 0, public IP address assignment is not allowed.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPublicIpAssigned(const bool& _publicIpAssigned);

                    /**
                     * 判断参数 PublicIpAssigned 是否已赋值
                     * @return PublicIpAssigned 是否已赋值
                     * 
                     */
                    bool PublicIpAssignedHasBeenSet() const;

                    /**
                     * 获取Bandwidth package ID. You can obtain the ID from the `BandwidthPackageId` field in the response of the [DescribeBandwidthPackages](https://intl.cloud.tencent.com/document/api/215/19209?from_cn_redirect=1) API.
Note: this field may return null, indicating that no valid value was found.
                     * @return BandwidthPackageId Bandwidth package ID. You can obtain the ID from the `BandwidthPackageId` field in the response of the [DescribeBandwidthPackages](https://intl.cloud.tencent.com/document/api/215/19209?from_cn_redirect=1) API.
Note: this field may return null, indicating that no valid value was found.
                     * 
                     */
                    std::string GetBandwidthPackageId() const;

                    /**
                     * 设置Bandwidth package ID. You can obtain the ID from the `BandwidthPackageId` field in the response of the [DescribeBandwidthPackages](https://intl.cloud.tencent.com/document/api/215/19209?from_cn_redirect=1) API.
Note: this field may return null, indicating that no valid value was found.
                     * @param _bandwidthPackageId Bandwidth package ID. You can obtain the ID from the `BandwidthPackageId` field in the response of the [DescribeBandwidthPackages](https://intl.cloud.tencent.com/document/api/215/19209?from_cn_redirect=1) API.
Note: this field may return null, indicating that no valid value was found.
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
                     * Network billing type. Valid values: <li>BANDWIDTH_PREPAID: prepaid by bandwidth;</li> <li>TRAFFIC_POSTPAID_BY_HOUR: postpaid by traffic per hour;</li> <li>BANDWIDTH_POSTPAID_BY_HOUR: postpaid by bandwidth per hour;</li> <li>BANDWIDTH_PACKAGE: bandwidth package users.</li> Default value: TRAFFIC_POSTPAID_BY_HOUR.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_internetChargeType;
                    bool m_internetChargeTypeHasBeenSet;

                    /**
                     * The maximum outbound bandwidth in Mbps of the public network. The default value is 0 Mbps. The upper limit of bandwidth varies by model. For more information, see [Purchase Network Bandwidth](https://intl.cloud.tencent.com/document/product/213/509?from_cn_redirect=1).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * Whether to assign a public IP address. Valid values: <li>TRUE: Allocate a public IP address.</li> <li>FALSE: Do not allocate a public IP address.</li> When the public network bandwidth is greater than 0 Mbps, you can choose whether to enable this feature based on your needs. By default, this feature is enabled. When the public network bandwidth is 0, public IP address assignment is not allowed.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_publicIpAssigned;
                    bool m_publicIpAssignedHasBeenSet;

                    /**
                     * Bandwidth package ID. You can obtain the ID from the `BandwidthPackageId` field in the response of the [DescribeBandwidthPackages](https://intl.cloud.tencent.com/document/api/215/19209?from_cn_redirect=1) API.
Note: this field may return null, indicating that no valid value was found.
                     */
                    std::string m_bandwidthPackageId;
                    bool m_bandwidthPackageIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_INTERNETACCESSIBLE_H_
