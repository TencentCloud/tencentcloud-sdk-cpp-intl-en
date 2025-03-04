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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_CHARGEPROPERTIES_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_CHARGEPROPERTIES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * Billing time parameter.
                */
                class ChargeProperties : public AbstractModel
                {
                public:
                    ChargeProperties();
                    ~ChargeProperties() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取1: requires auto-renewal.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RenewFlag 1: requires auto-renewal.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置1: requires auto-renewal.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _renewFlag 1: requires auto-renewal.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRenewFlag(const int64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取Order time range.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TimeSpan Order time range.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置Order time range.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _timeSpan Order time range.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取Time unit. Valid values: h and m.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TimeUnit Time unit. Valid values: h and m.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置Time unit. Valid values: h and m.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _timeUnit Time unit. Valid values: h and m.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取Billing type: 0 indicates pay-as-you-go and 1 indicates monthly subscription.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PayMode Billing type: 0 indicates pay-as-you-go and 1 indicates monthly subscription.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置Billing type: 0 indicates pay-as-you-go and 1 indicates monthly subscription.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _payMode Billing type: 0 indicates pay-as-you-go and 1 indicates monthly subscription.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取PREPAID and POSTPAID_BY_HOUR
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ChargeType PREPAID and POSTPAID_BY_HOUR
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置PREPAID and POSTPAID_BY_HOUR
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _chargeType PREPAID and POSTPAID_BY_HOUR
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                private:

                    /**
                     * 1: requires auto-renewal.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * Order time range.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * Time unit. Valid values: h and m.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * Billing type: 0 indicates pay-as-you-go and 1 indicates monthly subscription.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * PREPAID and POSTPAID_BY_HOUR
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_CHARGEPROPERTIES_H_
