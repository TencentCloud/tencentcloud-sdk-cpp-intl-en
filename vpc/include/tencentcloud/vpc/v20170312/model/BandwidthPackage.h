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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_BANDWIDTHPACKAGE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_BANDWIDTHPACKAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Resource.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * The structure of information of the bandwidth package.
                */
                class BandwidthPackage : public AbstractModel
                {
                public:
                    BandwidthPackage();
                    ~BandwidthPackage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The unique ID of the bandwidth package.
                     * @return BandwidthPackageId The unique ID of the bandwidth package.
                     * 
                     */
                    std::string GetBandwidthPackageId() const;

                    /**
                     * 设置The unique ID of the bandwidth package.
                     * @param _bandwidthPackageId The unique ID of the bandwidth package.
                     * 
                     */
                    void SetBandwidthPackageId(const std::string& _bandwidthPackageId);

                    /**
                     * 判断参数 BandwidthPackageId 是否已赋值
                     * @return BandwidthPackageId 是否已赋值
                     * 
                     */
                    bool BandwidthPackageIdHasBeenSet() const;

                    /**
                     * 获取Bandwidth package type, includes:
<li>BGP: General BGP bandwidth package</li>
<li>HIGH_QUALITY_BGP: Dedicated BGP bandwidth package</li>
<li>ANYCAST: AIA BGP bandwidth package</li>
<li>SINGLEISP_CMCC: CMCC bandwidth package</li>
<li>SINGLEISP_CTCC: CTCC bandwidth package</li>
<li>SINGLEISP_CUCC: CUCC bandwidth package</li>
                     * @return NetworkType Bandwidth package type, includes:
<li>BGP: General BGP bandwidth package</li>
<li>HIGH_QUALITY_BGP: Dedicated BGP bandwidth package</li>
<li>ANYCAST: AIA BGP bandwidth package</li>
<li>SINGLEISP_CMCC: CMCC bandwidth package</li>
<li>SINGLEISP_CTCC: CTCC bandwidth package</li>
<li>SINGLEISP_CUCC: CUCC bandwidth package</li>
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置Bandwidth package type, includes:
<li>BGP: General BGP bandwidth package</li>
<li>HIGH_QUALITY_BGP: Dedicated BGP bandwidth package</li>
<li>ANYCAST: AIA BGP bandwidth package</li>
<li>SINGLEISP_CMCC: CMCC bandwidth package</li>
<li>SINGLEISP_CTCC: CTCC bandwidth package</li>
<li>SINGLEISP_CUCC: CUCC bandwidth package</li>
                     * @param _networkType Bandwidth package type, includes:
<li>BGP: General BGP bandwidth package</li>
<li>HIGH_QUALITY_BGP: Dedicated BGP bandwidth package</li>
<li>ANYCAST: AIA BGP bandwidth package</li>
<li>SINGLEISP_CMCC: CMCC bandwidth package</li>
<li>SINGLEISP_CTCC: CTCC bandwidth package</li>
<li>SINGLEISP_CUCC: CUCC bandwidth package</li>
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
                     * 获取Bandwidth package billing type, includes:
<li>ENHANCED95_POSTPAID_BY_MONTH: Pay-as-you-go - Enhanced 95th percentile</li>
<li>PRIMARY_TRAFFIC_POSTPAID_BY_HOUR: Postpaid - Main Traffic Billing</li>
<li>BANDWIDTH_POSTPAID_BY_DAY: General BGP, Pay-as-you-go - Bandwidth-based</li>
<li>PEAK_BANDWIDTH_POSTPAID_BY_DAY: Static single-line, Pay-as-you-go - Daily billed</li>
<li>TOP5_POSTPAID_BY_MONTH: Pay-as-you-go - Monthly top 5th, If you need to use this Bglling mode, please submit a ticket</li>

                     * @return ChargeType Bandwidth package billing type, includes:
<li>ENHANCED95_POSTPAID_BY_MONTH: Pay-as-you-go - Enhanced 95th percentile</li>
<li>PRIMARY_TRAFFIC_POSTPAID_BY_HOUR: Postpaid - Main Traffic Billing</li>
<li>BANDWIDTH_POSTPAID_BY_DAY: General BGP, Pay-as-you-go - Bandwidth-based</li>
<li>PEAK_BANDWIDTH_POSTPAID_BY_DAY: Static single-line, Pay-as-you-go - Daily billed</li>
<li>TOP5_POSTPAID_BY_MONTH: Pay-as-you-go - Monthly top 5th, If you need to use this Bglling mode, please submit a ticket</li>

                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置Bandwidth package billing type, includes:
<li>ENHANCED95_POSTPAID_BY_MONTH: Pay-as-you-go - Enhanced 95th percentile</li>
<li>PRIMARY_TRAFFIC_POSTPAID_BY_HOUR: Postpaid - Main Traffic Billing</li>
<li>BANDWIDTH_POSTPAID_BY_DAY: General BGP, Pay-as-you-go - Bandwidth-based</li>
<li>PEAK_BANDWIDTH_POSTPAID_BY_DAY: Static single-line, Pay-as-you-go - Daily billed</li>
<li>TOP5_POSTPAID_BY_MONTH: Pay-as-you-go - Monthly top 5th, If you need to use this Bglling mode, please submit a ticket</li>

                     * @param _chargeType Bandwidth package billing type, includes:
<li>ENHANCED95_POSTPAID_BY_MONTH: Pay-as-you-go - Enhanced 95th percentile</li>
<li>PRIMARY_TRAFFIC_POSTPAID_BY_HOUR: Postpaid - Main Traffic Billing</li>
<li>BANDWIDTH_POSTPAID_BY_DAY: General BGP, Pay-as-you-go - Bandwidth-based</li>
<li>PEAK_BANDWIDTH_POSTPAID_BY_DAY: Static single-line, Pay-as-you-go - Daily billed</li>
<li>TOP5_POSTPAID_BY_MONTH: Pay-as-you-go - Monthly top 5th, If you need to use this Bglling mode, please submit a ticket</li>

                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取The name of the bandwidth package.
                     * @return BandwidthPackageName The name of the bandwidth package.
                     * 
                     */
                    std::string GetBandwidthPackageName() const;

                    /**
                     * 设置The name of the bandwidth package.
                     * @param _bandwidthPackageName The name of the bandwidth package.
                     * 
                     */
                    void SetBandwidthPackageName(const std::string& _bandwidthPackageName);

                    /**
                     * 判断参数 BandwidthPackageName 是否已赋值
                     * @return BandwidthPackageName 是否已赋值
                     * 
                     */
                    bool BandwidthPackageNameHasBeenSet() const;

                    /**
                     * 获取The creation time of the bandwidth package, which follows the `ISO8601` standard and uses `UTC` time in the format of `YYYY-MM-DDThh:mm:ssZ`.
                     * @return CreatedTime The creation time of the bandwidth package, which follows the `ISO8601` standard and uses `UTC` time in the format of `YYYY-MM-DDThh:mm:ssZ`.
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置The creation time of the bandwidth package, which follows the `ISO8601` standard and uses `UTC` time in the format of `YYYY-MM-DDThh:mm:ssZ`.
                     * @param _createdTime The creation time of the bandwidth package, which follows the `ISO8601` standard and uses `UTC` time in the format of `YYYY-MM-DDThh:mm:ssZ`.
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取The status of the bandwidth package. Valid values: 'CREATING', 'CREATED', 'DELETING', and 'DELETED'.
                     * @return Status The status of the bandwidth package. Valid values: 'CREATING', 'CREATED', 'DELETING', and 'DELETED'.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置The status of the bandwidth package. Valid values: 'CREATING', 'CREATED', 'DELETING', and 'DELETED'.
                     * @param _status The status of the bandwidth package. Valid values: 'CREATING', 'CREATED', 'DELETING', and 'DELETED'.
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取The resource information of the bandwidth package.
                     * @return ResourceSet The resource information of the bandwidth package.
                     * 
                     */
                    std::vector<Resource> GetResourceSet() const;

                    /**
                     * 设置The resource information of the bandwidth package.
                     * @param _resourceSet The resource information of the bandwidth package.
                     * 
                     */
                    void SetResourceSet(const std::vector<Resource>& _resourceSet);

                    /**
                     * 判断参数 ResourceSet 是否已赋值
                     * @return ResourceSet 是否已赋值
                     * 
                     */
                    bool ResourceSetHasBeenSet() const;

                    /**
                     * 获取The limit of the bandwidth package in Mbps. The value '-1' indicates there is no limit.
                     * @return Bandwidth The limit of the bandwidth package in Mbps. The value '-1' indicates there is no limit.
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置The limit of the bandwidth package in Mbps. The value '-1' indicates there is no limit.
                     * @param _bandwidth The limit of the bandwidth package in Mbps. The value '-1' indicates there is no limit.
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取Network egress. It defaults to `center_egress1`. Valid values:
center_egress1,center_egress2,center_egress3

                     * @return Egress Network egress. It defaults to `center_egress1`. Valid values:
center_egress1,center_egress2,center_egress3

                     * 
                     */
                    std::string GetEgress() const;

                    /**
                     * 设置Network egress. It defaults to `center_egress1`. Valid values:
center_egress1,center_egress2,center_egress3

                     * @param _egress Network egress. It defaults to `center_egress1`. Valid values:
center_egress1,center_egress2,center_egress3

                     * 
                     */
                    void SetEgress(const std::string& _egress);

                    /**
                     * 判断参数 Egress 是否已赋值
                     * @return Egress 是否已赋值
                     * 
                     */
                    bool EgressHasBeenSet() const;

                private:

                    /**
                     * The unique ID of the bandwidth package.
                     */
                    std::string m_bandwidthPackageId;
                    bool m_bandwidthPackageIdHasBeenSet;

                    /**
                     * Bandwidth package type, includes:
<li>BGP: General BGP bandwidth package</li>
<li>HIGH_QUALITY_BGP: Dedicated BGP bandwidth package</li>
<li>ANYCAST: AIA BGP bandwidth package</li>
<li>SINGLEISP_CMCC: CMCC bandwidth package</li>
<li>SINGLEISP_CTCC: CTCC bandwidth package</li>
<li>SINGLEISP_CUCC: CUCC bandwidth package</li>
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * Bandwidth package billing type, includes:
<li>ENHANCED95_POSTPAID_BY_MONTH: Pay-as-you-go - Enhanced 95th percentile</li>
<li>PRIMARY_TRAFFIC_POSTPAID_BY_HOUR: Postpaid - Main Traffic Billing</li>
<li>BANDWIDTH_POSTPAID_BY_DAY: General BGP, Pay-as-you-go - Bandwidth-based</li>
<li>PEAK_BANDWIDTH_POSTPAID_BY_DAY: Static single-line, Pay-as-you-go - Daily billed</li>
<li>TOP5_POSTPAID_BY_MONTH: Pay-as-you-go - Monthly top 5th, If you need to use this Bglling mode, please submit a ticket</li>

                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * The name of the bandwidth package.
                     */
                    std::string m_bandwidthPackageName;
                    bool m_bandwidthPackageNameHasBeenSet;

                    /**
                     * The creation time of the bandwidth package, which follows the `ISO8601` standard and uses `UTC` time in the format of `YYYY-MM-DDThh:mm:ssZ`.
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * The status of the bandwidth package. Valid values: 'CREATING', 'CREATED', 'DELETING', and 'DELETED'.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * The resource information of the bandwidth package.
                     */
                    std::vector<Resource> m_resourceSet;
                    bool m_resourceSetHasBeenSet;

                    /**
                     * The limit of the bandwidth package in Mbps. The value '-1' indicates there is no limit.
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * Network egress. It defaults to `center_egress1`. Valid values:
center_egress1,center_egress2,center_egress3

                     */
                    std::string m_egress;
                    bool m_egressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_BANDWIDTHPACKAGE_H_
