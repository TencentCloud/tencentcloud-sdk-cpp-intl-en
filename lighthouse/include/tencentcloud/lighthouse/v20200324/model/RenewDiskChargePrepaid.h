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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RENEWDISKCHARGEPREPAID_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RENEWDISKCHARGEPREPAID_H_

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
                * Parameter settings for renewing the monthly subscribed cloud disk
                */
                class RenewDiskChargePrepaid : public AbstractModel
                {
                public:
                    RenewDiskChargePrepaid();
                    ~RenewDiskChargePrepaid() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Renewal period
                     * @return Period Renewal period
                     * 
                     */
                    int64_t GetPeriod() const;

                    /**
                     * 设置Renewal period
                     * @param _period Renewal period
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
                     * 获取Whether to renew the disk automatically. Values:

`NOTIFY_AND_AUTO_RENEW`: Trigger expiration notification and renew automatically; `NOTIFY_AND_MANUAL_RENEW`: Trigger expiration notification but do not renew; `DISABLE_NOTIFY_AND_MANUAL_RENEW`: Do not trigger the notification and do not renew.

Default: `NOTIFY_AND_MANUAL_RENEW`. If `NOTIFY_AND_AUTO_RENEW` is specified, the instance is automatically renewed on a monthly basis when the account balance is sufficient.
                     * @return RenewFlag Whether to renew the disk automatically. Values:

`NOTIFY_AND_AUTO_RENEW`: Trigger expiration notification and renew automatically; `NOTIFY_AND_MANUAL_RENEW`: Trigger expiration notification but do not renew; `DISABLE_NOTIFY_AND_MANUAL_RENEW`: Do not trigger the notification and do not renew.

Default: `NOTIFY_AND_MANUAL_RENEW`. If `NOTIFY_AND_AUTO_RENEW` is specified, the instance is automatically renewed on a monthly basis when the account balance is sufficient.
                     * 
                     */
                    std::string GetRenewFlag() const;

                    /**
                     * 设置Whether to renew the disk automatically. Values:

`NOTIFY_AND_AUTO_RENEW`: Trigger expiration notification and renew automatically; `NOTIFY_AND_MANUAL_RENEW`: Trigger expiration notification but do not renew; `DISABLE_NOTIFY_AND_MANUAL_RENEW`: Do not trigger the notification and do not renew.

Default: `NOTIFY_AND_MANUAL_RENEW`. If `NOTIFY_AND_AUTO_RENEW` is specified, the instance is automatically renewed on a monthly basis when the account balance is sufficient.
                     * @param _renewFlag Whether to renew the disk automatically. Values:

`NOTIFY_AND_AUTO_RENEW`: Trigger expiration notification and renew automatically; `NOTIFY_AND_MANUAL_RENEW`: Trigger expiration notification but do not renew; `DISABLE_NOTIFY_AND_MANUAL_RENEW`: Do not trigger the notification and do not renew.

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
                     * 获取Unit of the period. Values: `m` (month).
                     * @return TimeUnit Unit of the period. Values: `m` (month).
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置Unit of the period. Values: `m` (month).
                     * @param _timeUnit Unit of the period. Values: `m` (month).
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
                     * 获取Expiration time of the current instance, such as "2018-01-01 00:00:00". Specify this parameter to align the expiration time of the instance and attached cloud disks. `CurInstanceDeadline` and `Period` cannot be both specified.
                     * @return CurInstanceDeadline Expiration time of the current instance, such as "2018-01-01 00:00:00". Specify this parameter to align the expiration time of the instance and attached cloud disks. `CurInstanceDeadline` and `Period` cannot be both specified.
                     * 
                     */
                    std::string GetCurInstanceDeadline() const;

                    /**
                     * 设置Expiration time of the current instance, such as "2018-01-01 00:00:00". Specify this parameter to align the expiration time of the instance and attached cloud disks. `CurInstanceDeadline` and `Period` cannot be both specified.
                     * @param _curInstanceDeadline Expiration time of the current instance, such as "2018-01-01 00:00:00". Specify this parameter to align the expiration time of the instance and attached cloud disks. `CurInstanceDeadline` and `Period` cannot be both specified.
                     * 
                     */
                    void SetCurInstanceDeadline(const std::string& _curInstanceDeadline);

                    /**
                     * 判断参数 CurInstanceDeadline 是否已赋值
                     * @return CurInstanceDeadline 是否已赋值
                     * 
                     */
                    bool CurInstanceDeadlineHasBeenSet() const;

                private:

                    /**
                     * Renewal period
                     */
                    int64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Whether to renew the disk automatically. Values:

`NOTIFY_AND_AUTO_RENEW`: Trigger expiration notification and renew automatically; `NOTIFY_AND_MANUAL_RENEW`: Trigger expiration notification but do not renew; `DISABLE_NOTIFY_AND_MANUAL_RENEW`: Do not trigger the notification and do not renew.

Default: `NOTIFY_AND_MANUAL_RENEW`. If `NOTIFY_AND_AUTO_RENEW` is specified, the instance is automatically renewed on a monthly basis when the account balance is sufficient.
                     */
                    std::string m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * Unit of the period. Values: `m` (month).
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * Expiration time of the current instance, such as "2018-01-01 00:00:00". Specify this parameter to align the expiration time of the instance and attached cloud disks. `CurInstanceDeadline` and `Period` cannot be both specified.
                     */
                    std::string m_curInstanceDeadline;
                    bool m_curInstanceDeadlineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_RENEWDISKCHARGEPREPAID_H_
