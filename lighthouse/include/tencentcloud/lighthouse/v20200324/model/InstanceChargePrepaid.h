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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCECHARGEPREPAID_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCECHARGEPREPAID_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * Instance billing mode
                */
                class InstanceChargePrepaid : public AbstractModel
                {
                public:
                    InstanceChargePrepaid();
                    ~InstanceChargePrepaid() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Duration of instance purchase. measurement unit: month.
-Valid values when creating an instance: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36, 48, 60.
-When renewing an instance, valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36.
                     * @return Period Duration of instance purchase. measurement unit: month.
-Valid values when creating an instance: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36, 48, 60.
-When renewing an instance, valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36.
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Duration of instance purchase. measurement unit: month.
-Valid values when creating an instance: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36, 48, 60.
-When renewing an instance, valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36.
                     * @param _period Duration of instance purchase. measurement unit: month.
-Valid values when creating an instance: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36, 48, 60.
-When renewing an instance, valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36.
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
                     * 获取AUTO-Renewal flag. valid values:<br><li>NOTIFY_AND_AUTO_RENEW: NOTIFY AND AUTO-RENEW on expiration</li><br><li>NOTIFY_AND_MANUAL_RENEW: NOTIFY expiration without AUTO-RENEW. users need to manually RENEW.</li><br><li>DISABLE_NOTIFY_AND_MANUAL_RENEW: no AUTO-renewal AND no notification</li><br><br>default value: NOTIFY_AND_MANUAL_RENEW. if this parameter is set to NOTIFY_AND_AUTO_RENEW, the instance will automatically RENEW on a monthly basis after expiration when the account balance is sufficient.
                     * @return RenewFlag AUTO-Renewal flag. valid values:<br><li>NOTIFY_AND_AUTO_RENEW: NOTIFY AND AUTO-RENEW on expiration</li><br><li>NOTIFY_AND_MANUAL_RENEW: NOTIFY expiration without AUTO-RENEW. users need to manually RENEW.</li><br><li>DISABLE_NOTIFY_AND_MANUAL_RENEW: no AUTO-renewal AND no notification</li><br><br>default value: NOTIFY_AND_MANUAL_RENEW. if this parameter is set to NOTIFY_AND_AUTO_RENEW, the instance will automatically RENEW on a monthly basis after expiration when the account balance is sufficient.
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置AUTO-Renewal flag. valid values:<br><li>NOTIFY_AND_AUTO_RENEW: NOTIFY AND AUTO-RENEW on expiration</li><br><li>NOTIFY_AND_MANUAL_RENEW: NOTIFY expiration without AUTO-RENEW. users need to manually RENEW.</li><br><li>DISABLE_NOTIFY_AND_MANUAL_RENEW: no AUTO-renewal AND no notification</li><br><br>default value: NOTIFY_AND_MANUAL_RENEW. if this parameter is set to NOTIFY_AND_AUTO_RENEW, the instance will automatically RENEW on a monthly basis after expiration when the account balance is sufficient.
                     * @param _renewFlag AUTO-Renewal flag. valid values:<br><li>NOTIFY_AND_AUTO_RENEW: NOTIFY AND AUTO-RENEW on expiration</li><br><li>NOTIFY_AND_MANUAL_RENEW: NOTIFY expiration without AUTO-RENEW. users need to manually RENEW.</li><br><li>DISABLE_NOTIFY_AND_MANUAL_RENEW: no AUTO-renewal AND no notification</li><br><br>default value: NOTIFY_AND_MANUAL_RENEW. if this parameter is set to NOTIFY_AND_AUTO_RENEW, the instance will automatically RENEW on a monthly basis after expiration when the account balance is sufficient.
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
                     * Duration of instance purchase. measurement unit: month.
-Valid values when creating an instance: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36, 48, 60.
-When renewing an instance, valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36.
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * AUTO-Renewal flag. valid values:<br><li>NOTIFY_AND_AUTO_RENEW: NOTIFY AND AUTO-RENEW on expiration</li><br><li>NOTIFY_AND_MANUAL_RENEW: NOTIFY expiration without AUTO-RENEW. users need to manually RENEW.</li><br><li>DISABLE_NOTIFY_AND_MANUAL_RENEW: no AUTO-renewal AND no notification</li><br><br>default value: NOTIFY_AND_MANUAL_RENEW. if this parameter is set to NOTIFY_AND_AUTO_RENEW, the instance will automatically RENEW on a monthly basis after expiration when the account balance is sufficient.
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCECHARGEPREPAID_H_
