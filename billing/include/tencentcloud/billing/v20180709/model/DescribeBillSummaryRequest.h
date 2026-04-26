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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLSUMMARYREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLSUMMARYREQUEST_H_

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
                * DescribeBillSummary request structure.
                */
                class DescribeBillSummaryRequest : public AbstractModel
                {
                public:
                    DescribeBillSummaryRequest();
                    ~DescribeBillSummaryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Bill month, formatted as 2023-04</p>
                     * @return Month <p>Bill month, formatted as 2023-04</p>
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置<p>Bill month, formatted as 2023-04</p>
                     * @param _month <p>Bill month, formatted as 2023-04</p>
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
                     * 获取<p>Billing dimension type. Enumeration values as follows: business, project, region, payMode, tag</p>
                     * @return GroupType <p>Billing dimension type. Enumeration values as follows: business, project, region, payMode, tag</p>
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置<p>Billing dimension type. Enumeration values as follows: business, project, region, payMode, tag</p>
                     * @param _groupType <p>Billing dimension type. Enumeration values as follows: business, project, region, payMode, tag</p>
                     * 
                     */
                    void SetGroupType(const std::string& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     * 
                     */
                    bool GroupTypeHasBeenSet() const;

                    /**
                     * 获取<p>Tag key. Pass GroupType=tag when obtaining dimensional billing by tag.</p>
                     * @return TagKey <p>Tag key. Pass GroupType=tag when obtaining dimensional billing by tag.</p>
                     * 
                     */
                    std::vector<std::string> GetTagKey() const;

                    /**
                     * 设置<p>Tag key. Pass GroupType=tag when obtaining dimensional billing by tag.</p>
                     * @param _tagKey <p>Tag key. Pass GroupType=tag when obtaining dimensional billing by tag.</p>
                     * 
                     */
                    void SetTagKey(const std::vector<std::string>& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     * 
                     */
                    bool TagKeyHasBeenSet() const;

                    /**
                     * 获取<p>Operator UIN: Operator account ID (ID of the prepaid resource order or postpaid operation, activate postpaid resource account or role ID)</p>
                     * @return OperateUin <p>Operator UIN: Operator account ID (ID of the prepaid resource order or postpaid operation, activate postpaid resource account or role ID)</p>
                     * 
                     */
                    std::string GetOperateUin() const;

                    /**
                     * 设置<p>Operator UIN: Operator account ID (ID of the prepaid resource order or postpaid operation, activate postpaid resource account or role ID)</p>
                     * @param _operateUin <p>Operator UIN: Operator account ID (ID of the prepaid resource order or postpaid operation, activate postpaid resource account or role ID)</p>
                     * 
                     */
                    void SetOperateUin(const std::string& _operateUin);

                    /**
                     * 判断参数 OperateUin 是否已赋值
                     * @return OperateUin 是否已赋值
                     * 
                     */
                    bool OperateUinHasBeenSet() const;

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
                     * <p>Bill month, formatted as 2023-04</p>
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * <p>Billing dimension type. Enumeration values as follows: business, project, region, payMode, tag</p>
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * <p>Tag key. Pass GroupType=tag when obtaining dimensional billing by tag.</p>
                     */
                    std::vector<std::string> m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * <p>Operator UIN: Operator account ID (ID of the prepaid resource order or postpaid operation, activate postpaid resource account or role ID)</p>
                     */
                    std::string m_operateUin;
                    bool m_operateUinHasBeenSet;

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

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEBILLSUMMARYREQUEST_H_
