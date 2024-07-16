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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CHARGEPROPERTIES_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CHARGEPROPERTIES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * Cluster billing-related information
                */
                class ChargeProperties : public AbstractModel
                {
                public:
                    ChargeProperties();
                    ~ChargeProperties() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Billing type: PREPAID for prepayment, and POSTPAID_BY_HOUR for postpayment.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ChargeType Billing type: PREPAID for prepayment, and POSTPAID_BY_HOUR for postpayment.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置Billing type: PREPAID for prepayment, and POSTPAID_BY_HOUR for postpayment.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _chargeType Billing type: PREPAID for prepayment, and POSTPAID_BY_HOUR for postpayment.
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

                    /**
                     * 获取Whether to automatically renew. 1 means automatic renewal is enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RenewFlag Whether to automatically renew. 1 means automatic renewal is enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置Whether to automatically renew. 1 means automatic renewal is enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _renewFlag Whether to automatically renew. 1 means automatic renewal is enabled.
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
                     * 获取Billing duration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TimeSpan Billing duration
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置Billing duration
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _timeSpan Billing duration
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
                     * 获取Billing time unit, and "m" means month, etc.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TimeUnit Billing time unit, and "m" means month, etc.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置Billing time unit, and "m" means month, etc.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _timeUnit Billing time unit, and "m" means month, etc.
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

                private:

                    /**
                     * Billing type: PREPAID for prepayment, and POSTPAID_BY_HOUR for postpayment.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * Whether to automatically renew. 1 means automatic renewal is enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * Billing duration
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * Billing time unit, and "m" means month, etc.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CHARGEPROPERTIES_H_
