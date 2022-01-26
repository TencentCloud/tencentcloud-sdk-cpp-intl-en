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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYBANDWIDTHPACKAGEATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYBANDWIDTHPACKAGEATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyBandwidthPackageAttribute request structure.
                */
                class ModifyBandwidthPackageAttributeRequest : public AbstractModel
                {
                public:
                    ModifyBandwidthPackageAttributeRequest();
                    ~ModifyBandwidthPackageAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The unique ID of the bandwidth package.
                     * @return BandwidthPackageId The unique ID of the bandwidth package.
                     */
                    std::string GetBandwidthPackageId() const;

                    /**
                     * 设置The unique ID of the bandwidth package.
                     * @param BandwidthPackageId The unique ID of the bandwidth package.
                     */
                    void SetBandwidthPackageId(const std::string& _bandwidthPackageId);

                    /**
                     * 判断参数 BandwidthPackageId 是否已赋值
                     * @return BandwidthPackageId 是否已赋值
                     */
                    bool BandwidthPackageIdHasBeenSet() const;

                    /**
                     * 获取The name of the bandwidth package.
                     * @return BandwidthPackageName The name of the bandwidth package.
                     */
                    std::string GetBandwidthPackageName() const;

                    /**
                     * 设置The name of the bandwidth package.
                     * @param BandwidthPackageName The name of the bandwidth package.
                     */
                    void SetBandwidthPackageName(const std::string& _bandwidthPackageName);

                    /**
                     * 判断参数 BandwidthPackageName 是否已赋值
                     * @return BandwidthPackageName 是否已赋值
                     */
                    bool BandwidthPackageNameHasBeenSet() const;

                    /**
                     * 获取The billing mode of the bandwidth package.
                     * @return ChargeType The billing mode of the bandwidth package.
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置The billing mode of the bandwidth package.
                     * @param ChargeType The billing mode of the bandwidth package.
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取When a monthly-subscribed bandwidth package is returned, whether to convert it to a pay-as-you-go bandwidth packages. Default value: `No`
                     * @return MigrateOnRefund When a monthly-subscribed bandwidth package is returned, whether to convert it to a pay-as-you-go bandwidth packages. Default value: `No`
                     */
                    bool GetMigrateOnRefund() const;

                    /**
                     * 设置When a monthly-subscribed bandwidth package is returned, whether to convert it to a pay-as-you-go bandwidth packages. Default value: `No`
                     * @param MigrateOnRefund When a monthly-subscribed bandwidth package is returned, whether to convert it to a pay-as-you-go bandwidth packages. Default value: `No`
                     */
                    void SetMigrateOnRefund(const bool& _migrateOnRefund);

                    /**
                     * 判断参数 MigrateOnRefund 是否已赋值
                     * @return MigrateOnRefund 是否已赋值
                     */
                    bool MigrateOnRefundHasBeenSet() const;

                private:

                    /**
                     * The unique ID of the bandwidth package.
                     */
                    std::string m_bandwidthPackageId;
                    bool m_bandwidthPackageIdHasBeenSet;

                    /**
                     * The name of the bandwidth package.
                     */
                    std::string m_bandwidthPackageName;
                    bool m_bandwidthPackageNameHasBeenSet;

                    /**
                     * The billing mode of the bandwidth package.
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * When a monthly-subscribed bandwidth package is returned, whether to convert it to a pay-as-you-go bandwidth packages. Default value: `No`
                     */
                    bool m_migrateOnRefund;
                    bool m_migrateOnRefundHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYBANDWIDTHPACKAGEATTRIBUTEREQUEST_H_
