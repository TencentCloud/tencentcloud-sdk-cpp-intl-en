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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISKCHARGEPREPAID_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISKCHARGEPREPAID_H_

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
                * Parameter settings for the monthly subscribed cloud disk
                */
                class DiskChargePrepaid : public AbstractModel
                {
                public:
                    DiskChargePrepaid();
                    ~DiskChargePrepaid() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Purchase duration.
                     * @return Period Purchase duration.
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Purchase duration.
                     * @param _period Purchase duration.
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
                     * 获取Auto-Renewal flag. Valid values:

`NOTIFY_AND_AUTO_RENEW`: Trigger expiration notification and renew automatically
`NOTIFY_AND_MANUAL_RENEW`: Trigger expiration notification but do not renew
`u200cDISABLE_NOTIFY_AND_AUTO_RENEW`: Neither trigger expiration notification nor renew

Default: `NOTIFY_AND_MANUAL_RENEW`. If `NOTIFY_AND_AUTO_RENEW` is specified, the instance is automatically renewed on a monthly basis when the account balance is sufficient.
                     * @return RenewFlag Auto-Renewal flag. Valid values:

`NOTIFY_AND_AUTO_RENEW`: Trigger expiration notification and renew automatically
`NOTIFY_AND_MANUAL_RENEW`: Trigger expiration notification but do not renew
`u200cDISABLE_NOTIFY_AND_AUTO_RENEW`: Neither trigger expiration notification nor renew

Default: `NOTIFY_AND_MANUAL_RENEW`. If `NOTIFY_AND_AUTO_RENEW` is specified, the instance is automatically renewed on a monthly basis when the account balance is sufficient.
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置Auto-Renewal flag. Valid values:

`NOTIFY_AND_AUTO_RENEW`: Trigger expiration notification and renew automatically
`NOTIFY_AND_MANUAL_RENEW`: Trigger expiration notification but do not renew
`u200cDISABLE_NOTIFY_AND_AUTO_RENEW`: Neither trigger expiration notification nor renew

Default: `NOTIFY_AND_MANUAL_RENEW`. If `NOTIFY_AND_AUTO_RENEW` is specified, the instance is automatically renewed on a monthly basis when the account balance is sufficient.
                     * @param _renewFlag Auto-Renewal flag. Valid values:

`NOTIFY_AND_AUTO_RENEW`: Trigger expiration notification and renew automatically
`NOTIFY_AND_MANUAL_RENEW`: Trigger expiration notification but do not renew
`u200cDISABLE_NOTIFY_AND_AUTO_RENEW`: Neither trigger expiration notification nor renew

Default: `NOTIFY_AND_MANUAL_RENEW`. If `NOTIFY_AND_AUTO_RENEW` is specified, the instance is automatically renewed on a monthly basis when the account balance is sufficient.
                     * 
                     */
                    void SetRenewFlag(const std::string& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取Purchase duration unit. Default value: "m" (month)
                     * @return TimeUnit Purchase duration unit. Default value: "m" (month)
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置Purchase duration unit. Default value: "m" (month)
                     * @param _timeUnit Purchase duration unit. Default value: "m" (month)
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
                     * Purchase duration.
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Auto-Renewal flag. Valid values:

`NOTIFY_AND_AUTO_RENEW`: Trigger expiration notification and renew automatically
`NOTIFY_AND_MANUAL_RENEW`: Trigger expiration notification but do not renew
`u200cDISABLE_NOTIFY_AND_AUTO_RENEW`: Neither trigger expiration notification nor renew

Default: `NOTIFY_AND_MANUAL_RENEW`. If `NOTIFY_AND_AUTO_RENEW` is specified, the instance is automatically renewed on a monthly basis when the account balance is sufficient.
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * Purchase duration unit. Default value: "m" (month)
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DISKCHARGEPREPAID_H_
