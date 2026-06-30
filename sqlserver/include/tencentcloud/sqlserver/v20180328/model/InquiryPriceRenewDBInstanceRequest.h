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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INQUIRYPRICERENEWDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INQUIRYPRICERENEWDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * InquiryPriceRenewDBInstance request structure.
                */
                class InquiryPriceRenewDBInstanceRequest : public AbstractModel
                {
                public:
                    InquiryPriceRenewDBInstanceRequest();
                    ~InquiryPriceRenewDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Renewal duration. It can be up to 48 months for monthly renewal. By default, the price of a one-month renewal is queried.
                     * @return Period Renewal duration. It can be up to 48 months for monthly renewal. By default, the price of a one-month renewal is queried.
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置Renewal duration. It can be up to 48 months for monthly renewal. By default, the price of a one-month renewal is queried.
                     * @param _period Renewal duration. It can be up to 48 months for monthly renewal. By default, the price of a one-month renewal is queried.
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
                     * 获取Renewal duration unit. month: monthly renewal. Currently, only monthly renewal is supported.
                     * @return TimeUnit Renewal duration unit. month: monthly renewal. Currently, only monthly renewal is supported.
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置Renewal duration unit. month: monthly renewal. Currently, only monthly renewal is supported.
                     * @param _timeUnit Renewal duration unit. month: monthly renewal. Currently, only monthly renewal is supported.
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
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Renewal duration. It can be up to 48 months for monthly renewal. By default, the price of a one-month renewal is queried.
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Renewal duration unit. month: monthly renewal. Currently, only monthly renewal is supported.
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_INQUIRYPRICERENEWDBINSTANCEREQUEST_H_
