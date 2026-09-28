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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_LOADBALANCERBILLINGCONFIG_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_LOADBALANCERBILLINGCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * Billing configuration of an application CLB instance.
                */
                class LoadBalancerBillingConfig : public AbstractModel
                {
                public:
                    LoadBalancerBillingConfig();
                    ~LoadBalancerBillingConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Billing type of the instance.

Parameter value **POSTPAID_BY_HOUR**: pay-as-you-go.
                     * @return ChargeType Billing type of the instance.

Parameter value **POSTPAID_BY_HOUR**: pay-as-you-go.
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置Billing type of the instance.

Parameter value **POSTPAID_BY_HOUR**: pay-as-you-go.
                     * @param _chargeType Billing type of the instance.

Parameter value **POSTPAID_BY_HOUR**: pay-as-you-go.
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
                     * 获取Bandwidth package ID.
                     * @return BandwidthPackageId Bandwidth package ID.
                     * 
                     */
                    std::string GetBandwidthPackageId() const;

                    /**
                     * 设置Bandwidth package ID.
                     * @param _bandwidthPackageId Bandwidth package ID.
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
                     * Billing type of the instance.

Parameter value **POSTPAID_BY_HOUR**: pay-as-you-go.
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * Bandwidth package ID.
                     */
                    std::string m_bandwidthPackageId;
                    bool m_bandwidthPackageIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_LOADBALANCERBILLINGCONFIG_H_
