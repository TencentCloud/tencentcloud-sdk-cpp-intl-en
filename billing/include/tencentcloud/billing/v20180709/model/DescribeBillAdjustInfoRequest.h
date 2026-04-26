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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLADJUSTINFOREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLADJUSTINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeBillAdjustInfo request structure.
                */
                class DescribeBillAdjustInfoRequest : public AbstractModel
                {
                public:
                    DescribeBillAdjustInfoRequest();
                    ~DescribeBillAdjustInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Format: yyyy-MM<br>Bill month. Either month or timeFrom&amp;timeTo must be specified. If timeFrom&amp;timeTo is specified, the month field is invalid.</p>
                     * @return Month <p>Format: yyyy-MM<br>Bill month. Either month or timeFrom&amp;timeTo must be specified. If timeFrom&amp;timeTo is specified, the month field is invalid.</p>
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置<p>Format: yyyy-MM<br>Bill month. Either month or timeFrom&amp;timeTo must be specified. If timeFrom&amp;timeTo is specified, the month field is invalid.</p>
                     * @param _month <p>Format: yyyy-MM<br>Bill month. Either month or timeFrom&amp;timeTo must be specified. If timeFrom&amp;timeTo is specified, the month field is invalid.</p>
                     * 
                     */
                    void SetMonth(const std::string& _month);

                    /**
                     * 判断参数 Month 是否已赋值
                     * @return Month 是否已赋值
                     * 
                     */
                    bool MonthHasBeenSet() const;

                    /**
                     * 获取<p>Format: yyyy-MM-dd<br>Start time. Either month or timeFrom&amp;timeTo must be specified. If timeFrom&amp;timeTo is specified, the month field is invalid. timeFrom and timeTo must be specified together and must be in the same month. Cross-month queries are not supported and the query results are data for the entire month.</p>
                     * @return TimeFrom <p>Format: yyyy-MM-dd<br>Start time. Either month or timeFrom&amp;timeTo must be specified. If timeFrom&amp;timeTo is specified, the month field is invalid. timeFrom and timeTo must be specified together and must be in the same month. Cross-month queries are not supported and the query results are data for the entire month.</p>
                     * 
                     */
                    std::string GetTimeFrom() const;

                    /**
                     * 设置<p>Format: yyyy-MM-dd<br>Start time. Either month or timeFrom&amp;timeTo must be specified. If timeFrom&amp;timeTo is specified, the month field is invalid. timeFrom and timeTo must be specified together and must be in the same month. Cross-month queries are not supported and the query results are data for the entire month.</p>
                     * @param _timeFrom <p>Format: yyyy-MM-dd<br>Start time. Either month or timeFrom&amp;timeTo must be specified. If timeFrom&amp;timeTo is specified, the month field is invalid. timeFrom and timeTo must be specified together and must be in the same month. Cross-month queries are not supported and the query results are data for the entire month.</p>
                     * 
                     */
                    void SetTimeFrom(const std::string& _timeFrom);

                    /**
                     * 判断参数 TimeFrom 是否已赋值
                     * @return TimeFrom 是否已赋值
                     * 
                     */
                    bool TimeFromHasBeenSet() const;

                    /**
                     * 获取<p>Format: yyyy-MM-dd<br>End time. Either month or timeFrom&amp;timeTo must be specified. If this field is specified, the month field is invalid. timeFrom and timeTo must be passed together and be in the same month. Cross-month queries are not supported. The query result is data of the entire month.</p>
                     * @return TimeTo <p>Format: yyyy-MM-dd<br>End time. Either month or timeFrom&amp;timeTo must be specified. If this field is specified, the month field is invalid. timeFrom and timeTo must be passed together and be in the same month. Cross-month queries are not supported. The query result is data of the entire month.</p>
                     * 
                     */
                    std::string GetTimeTo() const;

                    /**
                     * 设置<p>Format: yyyy-MM-dd<br>End time. Either month or timeFrom&amp;timeTo must be specified. If this field is specified, the month field is invalid. timeFrom and timeTo must be passed together and be in the same month. Cross-month queries are not supported. The query result is data of the entire month.</p>
                     * @param _timeTo <p>Format: yyyy-MM-dd<br>End time. Either month or timeFrom&amp;timeTo must be specified. If this field is specified, the month field is invalid. timeFrom and timeTo must be passed together and be in the same month. Cross-month queries are not supported. The query result is data of the entire month.</p>
                     * 
                     */
                    void SetTimeTo(const std::string& _timeTo);

                    /**
                     * 判断参数 TimeTo 是否已赋值
                     * @return TimeTo 是否已赋值
                     * 
                     */
                    bool TimeToHasBeenSet() const;

                    /**
                     * 获取<p>Account ID of the payer (Account ID is the unique account identifier for the user in Tencent Cloud). By default, the query returns the account statement of the current account. If the group management account needs to query the self-pay bills of member accounts, enter the member account UIN in this field.</p>
                     * @return PayerUin <p>Account ID of the payer (Account ID is the unique account identifier for the user in Tencent Cloud). By default, the query returns the account statement of the current account. If the group management account needs to query the self-pay bills of member accounts, enter the member account UIN in this field.</p>
                     * 
                     */
                    std::string GetPayerUin() const;

                    /**
                     * 设置<p>Account ID of the payer (Account ID is the unique account identifier for the user in Tencent Cloud). By default, the query returns the account statement of the current account. If the group management account needs to query the self-pay bills of member accounts, enter the member account UIN in this field.</p>
                     * @param _payerUin <p>Account ID of the payer (Account ID is the unique account identifier for the user in Tencent Cloud). By default, the query returns the account statement of the current account. If the group management account needs to query the self-pay bills of member accounts, enter the member account UIN in this field.</p>
                     * 
                     */
                    void SetPayerUin(const std::string& _payerUin);

                    /**
                     * 判断参数 PayerUin 是否已赋值
                     * @return PayerUin 是否已赋值
                     * 
                     */
                    bool PayerUinHasBeenSet() const;

                private:

                    /**
                     * <p>Format: yyyy-MM<br>Bill month. Either month or timeFrom&amp;timeTo must be specified. If timeFrom&amp;timeTo is specified, the month field is invalid.</p>
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * <p>Format: yyyy-MM-dd<br>Start time. Either month or timeFrom&amp;timeTo must be specified. If timeFrom&amp;timeTo is specified, the month field is invalid. timeFrom and timeTo must be specified together and must be in the same month. Cross-month queries are not supported and the query results are data for the entire month.</p>
                     */
                    std::string m_timeFrom;
                    bool m_timeFromHasBeenSet;

                    /**
                     * <p>Format: yyyy-MM-dd<br>End time. Either month or timeFrom&amp;timeTo must be specified. If this field is specified, the month field is invalid. timeFrom and timeTo must be passed together and be in the same month. Cross-month queries are not supported. The query result is data of the entire month.</p>
                     */
                    std::string m_timeTo;
                    bool m_timeToHasBeenSet;

                    /**
                     * <p>Account ID of the payer (Account ID is the unique account identifier for the user in Tencent Cloud). By default, the query returns the account statement of the current account. If the group management account needs to query the self-pay bills of member accounts, enter the member account UIN in this field.</p>
                     */
                    std::string m_payerUin;
                    bool m_payerUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLADJUSTINFOREQUEST_H_
