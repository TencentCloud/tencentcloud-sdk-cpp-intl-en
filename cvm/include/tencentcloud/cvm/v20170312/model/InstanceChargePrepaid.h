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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_INSTANCECHARGEPREPAID_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_INSTANCECHARGEPREPAID_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Describes the billing method of an instance.
                */
                class InstanceChargePrepaid : public AbstractModel
                {
                public:
                    InstanceChargePrepaid();
                    ~InstanceChargePrepaid() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Subscription period (in month). Valid values: `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, `36`, `48’, `60`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Period Subscription period (in month). Valid values: `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, `36`, `48’, `60`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Subscription period (in month). Valid values: `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, `36`, `48’, `60`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @param _period Subscription period (in month). Valid values: `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, `36`, `48’, `60`.
Note: This field may return `null`, indicating that no valid values can be obtained.
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
                     * 获取Auto-renewal flag. Valid values:<br><li>NOTIFY_AND_AUTO_RENEW: Notify of expiration and automatically renew.</li><br><li>NOTIFY_AND_MANUAL_RENEW: Notify of expiration and manually renew.</li><br><li>DISABLE_NOTIFY_AND_MANUAL_RENEW: Do not notify of expiration and do not automatically renew.</li><br><br>Default value: NOTIFY_AND_MANUAL_RENEW. If this parameter is set to NOTIFY_AND_AUTO_RENEW, an instance will be automatically renewed monthly after expiration, provided that the account balance is sufficient.
Note: This field may return null, indicating that no valid value is found.
                     * @return RenewFlag Auto-renewal flag. Valid values:<br><li>NOTIFY_AND_AUTO_RENEW: Notify of expiration and automatically renew.</li><br><li>NOTIFY_AND_MANUAL_RENEW: Notify of expiration and manually renew.</li><br><li>DISABLE_NOTIFY_AND_MANUAL_RENEW: Do not notify of expiration and do not automatically renew.</li><br><br>Default value: NOTIFY_AND_MANUAL_RENEW. If this parameter is set to NOTIFY_AND_AUTO_RENEW, an instance will be automatically renewed monthly after expiration, provided that the account balance is sufficient.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置Auto-renewal flag. Valid values:<br><li>NOTIFY_AND_AUTO_RENEW: Notify of expiration and automatically renew.</li><br><li>NOTIFY_AND_MANUAL_RENEW: Notify of expiration and manually renew.</li><br><li>DISABLE_NOTIFY_AND_MANUAL_RENEW: Do not notify of expiration and do not automatically renew.</li><br><br>Default value: NOTIFY_AND_MANUAL_RENEW. If this parameter is set to NOTIFY_AND_AUTO_RENEW, an instance will be automatically renewed monthly after expiration, provided that the account balance is sufficient.
Note: This field may return null, indicating that no valid value is found.
                     * @param _renewFlag Auto-renewal flag. Valid values:<br><li>NOTIFY_AND_AUTO_RENEW: Notify of expiration and automatically renew.</li><br><li>NOTIFY_AND_MANUAL_RENEW: Notify of expiration and manually renew.</li><br><li>DISABLE_NOTIFY_AND_MANUAL_RENEW: Do not notify of expiration and do not automatically renew.</li><br><br>Default value: NOTIFY_AND_MANUAL_RENEW. If this parameter is set to NOTIFY_AND_AUTO_RENEW, an instance will be automatically renewed monthly after expiration, provided that the account balance is sufficient.
Note: This field may return null, indicating that no valid value is found.
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
                     * Subscription period (in month). Valid values: `1`, `2`, `3`, `4`, `5`, `6`, `7`, `8`, `9`, `10`, `11`, `12`, `24`, `36`, `48’, `60`.
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Auto-renewal flag. Valid values:<br><li>NOTIFY_AND_AUTO_RENEW: Notify of expiration and automatically renew.</li><br><li>NOTIFY_AND_MANUAL_RENEW: Notify of expiration and manually renew.</li><br><li>DISABLE_NOTIFY_AND_MANUAL_RENEW: Do not notify of expiration and do not automatically renew.</li><br><br>Default value: NOTIFY_AND_MANUAL_RENEW. If this parameter is set to NOTIFY_AND_AUTO_RENEW, an instance will be automatically renewed monthly after expiration, provided that the account balance is sufficient.
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_INSTANCECHARGEPREPAID_H_
