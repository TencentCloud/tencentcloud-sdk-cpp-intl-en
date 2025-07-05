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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_INSTANCECHARGEPREPAID_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_INSTANCECHARGEPREPAID_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * Description on the billing mode of an instance
                */
                class InstanceChargePrepaid : public AbstractModel
                {
                public:
                    InstanceChargePrepaid();
                    ~InstanceChargePrepaid() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Purchased usage period (in month). Valid values: `1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36`. Default value: `1`.
(This parameter is required in `InquirePriceRenewDBInstances` and `RenewDBInstances` APIs.)
                     * @return Period Purchased usage period (in month). Valid values: `1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36`. Default value: `1`.
(This parameter is required in `InquirePriceRenewDBInstances` and `RenewDBInstances` APIs.)
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Purchased usage period (in month). Valid values: `1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36`. Default value: `1`.
(This parameter is required in `InquirePriceRenewDBInstances` and `RenewDBInstances` APIs.)
                     * @param _period Purchased usage period (in month). Valid values: `1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36`. Default value: `1`.
(This parameter is required in `InquirePriceRenewDBInstances` and `RenewDBInstances` APIs.)
                     * 
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Auto-renewal flag. Valid values:
`NOTIFY_AND_AUTO_RENEW`: notify expiration and renew automatically
`NOTIFY_AND_MANUAL_RENEW`: notify expiration but not renew automatically
`DISABLE_NOTIFY_AND_MANUAL_RENEW`: neither notify expiration nor renew automatically

Default value: `NOTIFY_AND_MANUAL_RENEW`. If this parameter is specified as `NOTIFY_AND_AUTO_RENEW`, the instance will be automatically renewed on a monthly basis when the account balance is sufficient.
(This parameter is required in `InquirePriceRenewDBInstances` and `RenewDBInstances` APIs.)
                     * @return RenewFlag Auto-renewal flag. Valid values:
`NOTIFY_AND_AUTO_RENEW`: notify expiration and renew automatically
`NOTIFY_AND_MANUAL_RENEW`: notify expiration but not renew automatically
`DISABLE_NOTIFY_AND_MANUAL_RENEW`: neither notify expiration nor renew automatically

Default value: `NOTIFY_AND_MANUAL_RENEW`. If this parameter is specified as `NOTIFY_AND_AUTO_RENEW`, the instance will be automatically renewed on a monthly basis when the account balance is sufficient.
(This parameter is required in `InquirePriceRenewDBInstances` and `RenewDBInstances` APIs.)
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置Auto-renewal flag. Valid values:
`NOTIFY_AND_AUTO_RENEW`: notify expiration and renew automatically
`NOTIFY_AND_MANUAL_RENEW`: notify expiration but not renew automatically
`DISABLE_NOTIFY_AND_MANUAL_RENEW`: neither notify expiration nor renew automatically

Default value: `NOTIFY_AND_MANUAL_RENEW`. If this parameter is specified as `NOTIFY_AND_AUTO_RENEW`, the instance will be automatically renewed on a monthly basis when the account balance is sufficient.
(This parameter is required in `InquirePriceRenewDBInstances` and `RenewDBInstances` APIs.)
                     * @param _renewFlag Auto-renewal flag. Valid values:
`NOTIFY_AND_AUTO_RENEW`: notify expiration and renew automatically
`NOTIFY_AND_MANUAL_RENEW`: notify expiration but not renew automatically
`DISABLE_NOTIFY_AND_MANUAL_RENEW`: neither notify expiration nor renew automatically

Default value: `NOTIFY_AND_MANUAL_RENEW`. If this parameter is specified as `NOTIFY_AND_AUTO_RENEW`, the instance will be automatically renewed on a monthly basis when the account balance is sufficient.
(This parameter is required in `InquirePriceRenewDBInstances` and `RenewDBInstances` APIs.)
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
                     * Purchased usage period (in month). Valid values: `1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36`. Default value: `1`.
(This parameter is required in `InquirePriceRenewDBInstances` and `RenewDBInstances` APIs.)
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Auto-renewal flag. Valid values:
`NOTIFY_AND_AUTO_RENEW`: notify expiration and renew automatically
`NOTIFY_AND_MANUAL_RENEW`: notify expiration but not renew automatically
`DISABLE_NOTIFY_AND_MANUAL_RENEW`: neither notify expiration nor renew automatically

Default value: `NOTIFY_AND_MANUAL_RENEW`. If this parameter is specified as `NOTIFY_AND_AUTO_RENEW`, the instance will be automatically renewed on a monthly basis when the account balance is sufficient.
(This parameter is required in `InquirePriceRenewDBInstances` and `RenewDBInstances` APIs.)
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_INSTANCECHARGEPREPAID_H_
