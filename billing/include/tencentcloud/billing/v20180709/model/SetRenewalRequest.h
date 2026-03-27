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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_SETRENEWALREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_SETRENEWALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * SetRenewal request structure.
                */
                class SetRenewalRequest : public AbstractModel
                {
                public:
                    SetRenewalRequest();
                    ~SetRenewalRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Product code.
                     * @return ProductCode Product code.
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置Product code.
                     * @param _productCode Product code.
                     * 
                     */
                    void SetProductCode(const std::string& _productCode);

                    /**
                     * 判断参数 ProductCode 是否已赋值
                     * @return ProductCode 是否已赋值
                     * 
                     */
                    bool ProductCodeHasBeenSet() const;

                    /**
                     * 获取Region code.
                     * @return RegionCode Region code.
                     * 
                     */
                    std::string GetRegionCode() const;

                    /**
                     * 设置Region code.
                     * @param _regionCode Region code.
                     * 
                     */
                    void SetRegionCode(const std::string& _regionCode);

                    /**
                     * 判断参数 RegionCode 是否已赋值
                     * @return RegionCode 是否已赋值
                     * 
                     */
                    bool RegionCodeHasBeenSet() const;

                    /**
                     * 获取Instance ID. Only one can be specified.
                     * @return InstanceId Instance ID. Only one can be specified.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID. Only one can be specified.
                     * @param _instanceId Instance ID. Only one can be specified.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Renewal flag. Enumeration values are as follows:
NOTIFY_AND_MANUAL_RENEW: manual renewal.
NOTIFY_AND_AUTO_RENEW: automatic renewal.
DISABLE_NOTIFY_AND_MANUAL_RENEW: non-renewal upon expiration.
                     * @return RenewFlag Renewal flag. Enumeration values are as follows:
NOTIFY_AND_MANUAL_RENEW: manual renewal.
NOTIFY_AND_AUTO_RENEW: automatic renewal.
DISABLE_NOTIFY_AND_MANUAL_RENEW: non-renewal upon expiration.
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置Renewal flag. Enumeration values are as follows:
NOTIFY_AND_MANUAL_RENEW: manual renewal.
NOTIFY_AND_AUTO_RENEW: automatic renewal.
DISABLE_NOTIFY_AND_MANUAL_RENEW: non-renewal upon expiration.
                     * @param _renewFlag Renewal flag. Enumeration values are as follows:
NOTIFY_AND_MANUAL_RENEW: manual renewal.
NOTIFY_AND_AUTO_RENEW: automatic renewal.
DISABLE_NOTIFY_AND_MANUAL_RENEW: non-renewal upon expiration.
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取Automatic renewal cycle length. If left empty, the default value set by product is used.
If it is month, support: 1-11
If it is year, support: 1-5.
Supported range mainly depends on the product side.
                     * @return RenewPeriod Automatic renewal cycle length. If left empty, the default value set by product is used.
If it is month, support: 1-11
If it is year, support: 1-5.
Supported range mainly depends on the product side.
                     * 
                     */
                    std::string GetRenewPeriod() const;

                    /**
                     * 设置Automatic renewal cycle length. If left empty, the default value set by product is used.
If it is month, support: 1-11
If it is year, support: 1-5.
Supported range mainly depends on the product side.
                     * @param _renewPeriod Automatic renewal cycle length. If left empty, the default value set by product is used.
If it is month, support: 1-11
If it is year, support: 1-5.
Supported range mainly depends on the product side.
                     * 
                     */
                    void SetRenewPeriod(const std::string& _renewPeriod);

                    /**
                     * 判断参数 RenewPeriod 是否已赋值
                     * @return RenewPeriod 是否已赋值
                     * 
                     */
                    bool RenewPeriodHasBeenSet() const;

                    /**
                     * 获取Automatic renewal cycle unit. If left empty, the default value set by the product is used.
Year y, month m
Supported range mainly depends on the product side.
                     * @return RenewPeriodUnit Automatic renewal cycle unit. If left empty, the default value set by the product is used.
Year y, month m
Supported range mainly depends on the product side.
                     * 
                     */
                    std::string GetRenewPeriodUnit() const;

                    /**
                     * 设置Automatic renewal cycle unit. If left empty, the default value set by the product is used.
Year y, month m
Supported range mainly depends on the product side.
                     * @param _renewPeriodUnit Automatic renewal cycle unit. If left empty, the default value set by the product is used.
Year y, month m
Supported range mainly depends on the product side.
                     * 
                     */
                    void SetRenewPeriodUnit(const std::string& _renewPeriodUnit);

                    /**
                     * 判断参数 RenewPeriodUnit 是否已赋值
                     * @return RenewPeriodUnit 是否已赋值
                     * 
                     */
                    bool RenewPeriodUnitHasBeenSet() const;

                private:

                    /**
                     * Product code.
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * Region code.
                     */
                    std::string m_regionCode;
                    bool m_regionCodeHasBeenSet;

                    /**
                     * Instance ID. Only one can be specified.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Renewal flag. Enumeration values are as follows:
NOTIFY_AND_MANUAL_RENEW: manual renewal.
NOTIFY_AND_AUTO_RENEW: automatic renewal.
DISABLE_NOTIFY_AND_MANUAL_RENEW: non-renewal upon expiration.
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * Automatic renewal cycle length. If left empty, the default value set by product is used.
If it is month, support: 1-11
If it is year, support: 1-5.
Supported range mainly depends on the product side.
                     */
                    std::string m_renewPeriod;
                    bool m_renewPeriodHasBeenSet;

                    /**
                     * Automatic renewal cycle unit. If left empty, the default value set by the product is used.
Year y, month m
Supported range mainly depends on the product side.
                     */
                    std::string m_renewPeriodUnit;
                    bool m_renewPeriodUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_SETRENEWALREQUEST_H_
