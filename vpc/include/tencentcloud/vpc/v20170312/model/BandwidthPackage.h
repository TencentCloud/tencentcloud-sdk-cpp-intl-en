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
                     * 获取Bandwidth package type. Values: `BGP`, `SINGLEISP`, `ANYCAST`, `SINGLEISP_CMCC`, `SINGLEISP_CTCC`, `SINGLEISP_CUCC`
                     * @return NetworkType Bandwidth package type. Values: `BGP`, `SINGLEISP`, `ANYCAST`, `SINGLEISP_CMCC`, `SINGLEISP_CTCC`, `SINGLEISP_CUCC`
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置Bandwidth package type. Values: `BGP`, `SINGLEISP`, `ANYCAST`, `SINGLEISP_CMCC`, `SINGLEISP_CTCC`, `SINGLEISP_CUCC`
                     * @param _networkType Bandwidth package type. Values: `BGP`, `SINGLEISP`, `ANYCAST`, `SINGLEISP_CMCC`, `SINGLEISP_CTCC`, `SINGLEISP_CUCC`
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
                     * 获取The bandwidth package billing mode. Valid values: 'TOP5_POSTPAID_BY_MONTH' and 'PERCENT95_POSTPAID_BY_MONTH'
                     * @return ChargeType The bandwidth package billing mode. Valid values: 'TOP5_POSTPAID_BY_MONTH' and 'PERCENT95_POSTPAID_BY_MONTH'
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置The bandwidth package billing mode. Valid values: 'TOP5_POSTPAID_BY_MONTH' and 'PERCENT95_POSTPAID_BY_MONTH'
                     * @param _chargeType The bandwidth package billing mode. Valid values: 'TOP5_POSTPAID_BY_MONTH' and 'PERCENT95_POSTPAID_BY_MONTH'
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

                private:

                    /**
                     * The unique ID of the bandwidth package.
                     */
                    std::string m_bandwidthPackageId;
                    bool m_bandwidthPackageIdHasBeenSet;

                    /**
                     * Bandwidth package type. Values: `BGP`, `SINGLEISP`, `ANYCAST`, `SINGLEISP_CMCC`, `SINGLEISP_CTCC`, `SINGLEISP_CUCC`
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * The bandwidth package billing mode. Valid values: 'TOP5_POSTPAID_BY_MONTH' and 'PERCENT95_POSTPAID_BY_MONTH'
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_BANDWIDTHPACKAGE_H_
