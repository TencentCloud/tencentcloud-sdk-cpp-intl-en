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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_INSTANCECHARGEPREPAID_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_INSTANCECHARGEPREPAID_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * Monthly subscription configuration
                */
                class InstanceChargePrepaid : public AbstractModel
                {
                public:
                    InstanceChargePrepaid();
                    ~InstanceChargePrepaid() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Billing cycle of the pay-as-you-go mode (unit: month):
1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36, 48, 60
                     * @return Period Billing cycle of the pay-as-you-go mode (unit: month):
1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36, 48, 60
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置Billing cycle of the pay-as-you-go mode (unit: month):
1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36, 48, 60
                     * @param _period Billing cycle of the pay-as-you-go mode (unit: month):
1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36, 48, 60
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Renewal method of the prepayment mode:
- NOTIFY_AND_AUTO_RENEW: Notify the user of expiration and auto-renew (default)
- NOTIFY_AND_MANUAL_RENEW: Notify the user of expiration but do not auto-renew
- DISABLE_NOTIFY_AND_MANUAL_RENEW: Do not notify the user of expiration and do not auto-renew

                     * @return RenewFlag Renewal method of the prepayment mode:
- NOTIFY_AND_AUTO_RENEW: Notify the user of expiration and auto-renew (default)
- NOTIFY_AND_MANUAL_RENEW: Notify the user of expiration but do not auto-renew
- DISABLE_NOTIFY_AND_MANUAL_RENEW: Do not notify the user of expiration and do not auto-renew

                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置Renewal method of the prepayment mode:
- NOTIFY_AND_AUTO_RENEW: Notify the user of expiration and auto-renew (default)
- NOTIFY_AND_MANUAL_RENEW: Notify the user of expiration but do not auto-renew
- DISABLE_NOTIFY_AND_MANUAL_RENEW: Do not notify the user of expiration and do not auto-renew

                     * @param _renewFlag Renewal method of the prepayment mode:
- NOTIFY_AND_AUTO_RENEW: Notify the user of expiration and auto-renew (default)
- NOTIFY_AND_MANUAL_RENEW: Notify the user of expiration but do not auto-renew
- DISABLE_NOTIFY_AND_MANUAL_RENEW: Do not notify the user of expiration and do not auto-renew

                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                private:

                    /**
                     * Billing cycle of the pay-as-you-go mode (unit: month):
1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36, 48, 60
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Renewal method of the prepayment mode:
- NOTIFY_AND_AUTO_RENEW: Notify the user of expiration and auto-renew (default)
- NOTIFY_AND_MANUAL_RENEW: Notify the user of expiration but do not auto-renew
- DISABLE_NOTIFY_AND_MANUAL_RENEW: Do not notify the user of expiration and do not auto-renew

                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_INSTANCECHARGEPREPAID_H_
