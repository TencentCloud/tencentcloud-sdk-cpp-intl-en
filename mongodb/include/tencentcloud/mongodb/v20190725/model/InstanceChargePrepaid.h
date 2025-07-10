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
                     * 获取Instance purchase duration. Unit: months. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36. Default value: 1.
                     * @return Period Instance purchase duration. Unit: months. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36. Default value: 1.
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Instance purchase duration. Unit: months. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36. Default value: 1.
                     * @param _period Instance purchase duration. Unit: months. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36. Default value: 1.
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
                     * 获取Automatic renewal flag. Valid values:
 - NOTIFY_AND_AUTO_RENEW: A notification is sent upon expiration, and the instance is renewed automatically. If the account balance is sufficient, the instance will be renewed automatically on a monthly basis after expiration.
 - NOTIFY_AND_MANUAL_RENEW: A notification is sent upon expiration, but the instance is not renewed automatically. Default value: NOTIFY_AND_MANUAL_RENEW.
 - DISABLE_NOTIFY_AND_MANUAL_RENEW: No notification is sent upon expiration, and the instance is not renewed automatically.
                     * @return RenewFlag Automatic renewal flag. Valid values:
 - NOTIFY_AND_AUTO_RENEW: A notification is sent upon expiration, and the instance is renewed automatically. If the account balance is sufficient, the instance will be renewed automatically on a monthly basis after expiration.
 - NOTIFY_AND_MANUAL_RENEW: A notification is sent upon expiration, but the instance is not renewed automatically. Default value: NOTIFY_AND_MANUAL_RENEW.
 - DISABLE_NOTIFY_AND_MANUAL_RENEW: No notification is sent upon expiration, and the instance is not renewed automatically.
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置Automatic renewal flag. Valid values:
 - NOTIFY_AND_AUTO_RENEW: A notification is sent upon expiration, and the instance is renewed automatically. If the account balance is sufficient, the instance will be renewed automatically on a monthly basis after expiration.
 - NOTIFY_AND_MANUAL_RENEW: A notification is sent upon expiration, but the instance is not renewed automatically. Default value: NOTIFY_AND_MANUAL_RENEW.
 - DISABLE_NOTIFY_AND_MANUAL_RENEW: No notification is sent upon expiration, and the instance is not renewed automatically.
                     * @param _renewFlag Automatic renewal flag. Valid values:
 - NOTIFY_AND_AUTO_RENEW: A notification is sent upon expiration, and the instance is renewed automatically. If the account balance is sufficient, the instance will be renewed automatically on a monthly basis after expiration.
 - NOTIFY_AND_MANUAL_RENEW: A notification is sent upon expiration, but the instance is not renewed automatically. Default value: NOTIFY_AND_MANUAL_RENEW.
 - DISABLE_NOTIFY_AND_MANUAL_RENEW: No notification is sent upon expiration, and the instance is not renewed automatically.
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
                     * Instance purchase duration. Unit: months. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, and 36. Default value: 1.
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Automatic renewal flag. Valid values:
 - NOTIFY_AND_AUTO_RENEW: A notification is sent upon expiration, and the instance is renewed automatically. If the account balance is sufficient, the instance will be renewed automatically on a monthly basis after expiration.
 - NOTIFY_AND_MANUAL_RENEW: A notification is sent upon expiration, but the instance is not renewed automatically. Default value: NOTIFY_AND_MANUAL_RENEW.
 - DISABLE_NOTIFY_AND_MANUAL_RENEW: No notification is sent upon expiration, and the instance is not renewed automatically.
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_INSTANCECHARGEPREPAID_H_
