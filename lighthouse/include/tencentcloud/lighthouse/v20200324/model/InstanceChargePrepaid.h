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
                     * 获取Subscription period in months. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36, 48, 60.
                     * @return Period Subscription period in months. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36, 48, 60.
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Subscription period in months. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36, 48, 60.
                     * @param Period Subscription period in months. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36, 48, 60.
                     */
                    void SetPeriod(const int64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Auto-Renewal flag. Valid values: <br><li>NOTIFY_AND_AUTO_RENEW: notify upon expiration and renew automatically <br><li>NOTIFY_AND_MANUAL_RENEW: notify upon expiration but do not renew automatically. You need to manually renew <br><li>DISABLE_NOTIFY_AND_AUTO_RENEW: neither notify upon expiration nor renew automatically<br><br>Default value: NOTIFY_AND_MANUAL_RENEW. If this parameter is specified as `NOTIFY_AND_AUTO_RENEW`, the instance will be automatically renewed monthly if the account balance is sufficient.
                     * @return RenewFlag Auto-Renewal flag. Valid values: <br><li>NOTIFY_AND_AUTO_RENEW: notify upon expiration and renew automatically <br><li>NOTIFY_AND_MANUAL_RENEW: notify upon expiration but do not renew automatically. You need to manually renew <br><li>DISABLE_NOTIFY_AND_AUTO_RENEW: neither notify upon expiration nor renew automatically<br><br>Default value: NOTIFY_AND_MANUAL_RENEW. If this parameter is specified as `NOTIFY_AND_AUTO_RENEW`, the instance will be automatically renewed monthly if the account balance is sufficient.
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置Auto-Renewal flag. Valid values: <br><li>NOTIFY_AND_AUTO_RENEW: notify upon expiration and renew automatically <br><li>NOTIFY_AND_MANUAL_RENEW: notify upon expiration but do not renew automatically. You need to manually renew <br><li>DISABLE_NOTIFY_AND_AUTO_RENEW: neither notify upon expiration nor renew automatically<br><br>Default value: NOTIFY_AND_MANUAL_RENEW. If this parameter is specified as `NOTIFY_AND_AUTO_RENEW`, the instance will be automatically renewed monthly if the account balance is sufficient.
                     * @param RenewFlag Auto-Renewal flag. Valid values: <br><li>NOTIFY_AND_AUTO_RENEW: notify upon expiration and renew automatically <br><li>NOTIFY_AND_MANUAL_RENEW: notify upon expiration but do not renew automatically. You need to manually renew <br><li>DISABLE_NOTIFY_AND_AUTO_RENEW: neither notify upon expiration nor renew automatically<br><br>Default value: NOTIFY_AND_MANUAL_RENEW. If this parameter is specified as `NOTIFY_AND_AUTO_RENEW`, the instance will be automatically renewed monthly if the account balance is sufficient.
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     */
                    bool RenewFlagHasBeenSet() const;

                private:

                    /**
                     * Subscription period in months. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 24, 36, 48, 60.
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Auto-Renewal flag. Valid values: <br><li>NOTIFY_AND_AUTO_RENEW: notify upon expiration and renew automatically <br><li>NOTIFY_AND_MANUAL_RENEW: notify upon expiration but do not renew automatically. You need to manually renew <br><li>DISABLE_NOTIFY_AND_AUTO_RENEW: neither notify upon expiration nor renew automatically<br><br>Default value: NOTIFY_AND_MANUAL_RENEW. If this parameter is specified as `NOTIFY_AND_AUTO_RENEW`, the instance will be automatically renewed monthly if the account balance is sufficient.
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_INSTANCECHARGEPREPAID_H_
