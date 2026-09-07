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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_INSTANCECHARGEPREPAID_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_INSTANCECHARGEPREPAID_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * { 
        "Period": 12,
        "RenewFlag": "NOTIFY_AND_AUTO_RENEW"
}
                */
                class InstanceChargePrepaid : public AbstractModel
                {
                public:
                    InstanceChargePrepaid();
                    ~InstanceChargePrepaid() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Purchase duration. unit: month.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Period Purchase duration. unit: month.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置Purchase duration. unit: month.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _period Purchase duration. unit: month.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取NOTIFY_AND_MANUAL_RENEW: notifies that the account is about to expire but does not automatically renew the account.
NOTIFY_AND_AUTO_RENEW: specifies expiration notification and auto-renewal.
DISABLE_NOTIFY_AND_MANUAL_RENEW: no notification is sent upon expiration, and the instance is not renewed automatically.
Defaults to notify expiration without auto-renew.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RenewFlag NOTIFY_AND_MANUAL_RENEW: notifies that the account is about to expire but does not automatically renew the account.
NOTIFY_AND_AUTO_RENEW: specifies expiration notification and auto-renewal.
DISABLE_NOTIFY_AND_MANUAL_RENEW: no notification is sent upon expiration, and the instance is not renewed automatically.
Defaults to notify expiration without auto-renew.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置NOTIFY_AND_MANUAL_RENEW: notifies that the account is about to expire but does not automatically renew the account.
NOTIFY_AND_AUTO_RENEW: specifies expiration notification and auto-renewal.
DISABLE_NOTIFY_AND_MANUAL_RENEW: no notification is sent upon expiration, and the instance is not renewed automatically.
Defaults to notify expiration without auto-renew.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _renewFlag NOTIFY_AND_MANUAL_RENEW: notifies that the account is about to expire but does not automatically renew the account.
NOTIFY_AND_AUTO_RENEW: specifies expiration notification and auto-renewal.
DISABLE_NOTIFY_AND_MANUAL_RENEW: no notification is sent upon expiration, and the instance is not renewed automatically.
Defaults to notify expiration without auto-renew.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Purchase duration. unit: month.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * NOTIFY_AND_MANUAL_RENEW: notifies that the account is about to expire but does not automatically renew the account.
NOTIFY_AND_AUTO_RENEW: specifies expiration notification and auto-renewal.
DISABLE_NOTIFY_AND_MANUAL_RENEW: no notification is sent upon expiration, and the instance is not renewed automatically.
Defaults to notify expiration without auto-renew.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_INSTANCECHARGEPREPAID_H_
