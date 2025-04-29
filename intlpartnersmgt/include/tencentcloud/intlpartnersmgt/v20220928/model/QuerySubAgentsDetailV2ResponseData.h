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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYSUBAGENTSDETAILV2RESPONSEDATA_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYSUBAGENTSDETAILV2RESPONSEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * Second-Level reseller information.
                */
                class QuerySubAgentsDetailV2ResponseData : public AbstractModel
                {
                public:
                    QuerySubAgentsDetailV2ResponseData();
                    ~QuerySubAgentsDetailV2ResponseData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Second-level reseller UIN.
                     * @return SubAgentUin Second-level reseller UIN.
                     * 
                     */
                    int64_t GetSubAgentUin() const;

                    /**
                     * 设置Second-level reseller UIN.
                     * @param _subAgentUin Second-level reseller UIN.
                     * 
                     */
                    void SetSubAgentUin(const int64_t& _subAgentUin);

                    /**
                     * 判断参数 SubAgentUin 是否已赋值
                     * @return SubAgentUin 是否已赋值
                     * 
                     */
                    bool SubAgentUinHasBeenSet() const;

                    /**
                     * 获取Name
                     * @return Name Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name
                     * @param _name Name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Remark Remarks
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置Remarks
                     * @param _remark Remarks
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取Mobile number.
                     * @return Mobile Mobile number.
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置Mobile number.
                     * @param _mobile Mobile number.
                     * 
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     * 
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取Specifies the mailbox.
                     * @return Email Specifies the mailbox.
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置Specifies the mailbox.
                     * @param _email Specifies the mailbox.
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取Number of secondary dealer sub-customers.
                     * @return CountOfCustomers Number of secondary dealer sub-customers.
                     * 
                     */
                    int64_t GetCountOfCustomers() const;

                    /**
                     * 设置Number of secondary dealer sub-customers.
                     * @param _countOfCustomers Number of secondary dealer sub-customers.
                     * 
                     */
                    void SetCountOfCustomers(const int64_t& _countOfCustomers);

                    /**
                     * 判断参数 CountOfCustomers 是否已赋值
                     * @return CountOfCustomers 是否已赋值
                     * 
                     */
                    bool CountOfCustomersHasBeenSet() const;

                    /**
                     * 获取Binding time.
                     * @return BindTime Binding time.
                     * 
                     */
                    std::string GetBindTime() const;

                    /**
                     * 设置Binding time.
                     * @param _bindTime Binding time.
                     * 
                     */
                    void SetBindTime(const std::string& _bindTime);

                    /**
                     * 判断参数 BindTime 是否已赋值
                     * @return BindTime 是否已赋值
                     * 
                     */
                    bool BindTimeHasBeenSet() const;

                    /**
                     * 获取Credit limit pool of second-level reseller.
                     * @return Credit Credit limit pool of second-level reseller.
                     * 
                     */
                    double GetCredit() const;

                    /**
                     * 设置Credit limit pool of second-level reseller.
                     * @param _credit Credit limit pool of second-level reseller.
                     * 
                     */
                    void SetCredit(const double& _credit);

                    /**
                     * 判断参数 Credit 是否已赋值
                     * @return Credit 是否已赋值
                     * 
                     */
                    bool CreditHasBeenSet() const;

                    /**
                     * 获取Value pool of unconsumed credit limit for second-level reseller.
                     * @return RemainingCredit Value pool of unconsumed credit limit for second-level reseller.
                     * 
                     */
                    double GetRemainingCredit() const;

                    /**
                     * 设置Value pool of unconsumed credit limit for second-level reseller.
                     * @param _remainingCredit Value pool of unconsumed credit limit for second-level reseller.
                     * 
                     */
                    void SetRemainingCredit(const double& _remainingCredit);

                    /**
                     * 判断参数 RemainingCredit 是否已赋值
                     * @return RemainingCredit 是否已赋值
                     * 
                     */
                    bool RemainingCreditHasBeenSet() const;

                    /**
                     * 获取Cash coupon quota pool for second-level reseller.
                     * @return Voucher Cash coupon quota pool for second-level reseller.
                     * 
                     */
                    double GetVoucher() const;

                    /**
                     * 设置Cash coupon quota pool for second-level reseller.
                     * @param _voucher Cash coupon quota pool for second-level reseller.
                     * 
                     */
                    void SetVoucher(const double& _voucher);

                    /**
                     * 判断参数 Voucher 是否已赋值
                     * @return Voucher 是否已赋值
                     * 
                     */
                    bool VoucherHasBeenSet() const;

                    /**
                     * 获取Balance of cash coupon quota pool for second-level reseller.
                     * @return RemainingVoucher Balance of cash coupon quota pool for second-level reseller.
                     * 
                     */
                    double GetRemainingVoucher() const;

                    /**
                     * 设置Balance of cash coupon quota pool for second-level reseller.
                     * @param _remainingVoucher Balance of cash coupon quota pool for second-level reseller.
                     * 
                     */
                    void SetRemainingVoucher(const double& _remainingVoucher);

                    /**
                     * 判断参数 RemainingVoucher 是否已赋值
                     * @return RemainingVoucher 是否已赋值
                     * 
                     */
                    bool RemainingVoucherHasBeenSet() const;

                private:

                    /**
                     * Second-level reseller UIN.
                     */
                    int64_t m_subAgentUin;
                    bool m_subAgentUinHasBeenSet;

                    /**
                     * Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * Mobile number.
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * Specifies the mailbox.
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * Number of secondary dealer sub-customers.
                     */
                    int64_t m_countOfCustomers;
                    bool m_countOfCustomersHasBeenSet;

                    /**
                     * Binding time.
                     */
                    std::string m_bindTime;
                    bool m_bindTimeHasBeenSet;

                    /**
                     * Credit limit pool of second-level reseller.
                     */
                    double m_credit;
                    bool m_creditHasBeenSet;

                    /**
                     * Value pool of unconsumed credit limit for second-level reseller.
                     */
                    double m_remainingCredit;
                    bool m_remainingCreditHasBeenSet;

                    /**
                     * Cash coupon quota pool for second-level reseller.
                     */
                    double m_voucher;
                    bool m_voucherHasBeenSet;

                    /**
                     * Balance of cash coupon quota pool for second-level reseller.
                     */
                    double m_remainingVoucher;
                    bool m_remainingVoucherHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYSUBAGENTSDETAILV2RESPONSEDATA_H_
