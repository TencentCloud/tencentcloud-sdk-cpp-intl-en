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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_PAYDEALSREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_PAYDEALSREQUEST_H_

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
                * PayDeals request structure.
                */
                class PayDealsRequest : public AbstractModel
                {
                public:
                    PayDealsRequest();
                    ~PayDealsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies one or more Sub-order No. that need to pay. must pass either this parameter or the BigDealIds field, but not both.
                     * @return OrderIds Specifies one or more Sub-order No. that need to pay. must pass either this parameter or the BigDealIds field, but not both.
                     * 
                     */
                    std::vector<std::string> GetOrderIds() const;

                    /**
                     * 设置Specifies one or more Sub-order No. that need to pay. must pass either this parameter or the BigDealIds field, but not both.
                     * @param _orderIds Specifies one or more Sub-order No. that need to pay. must pass either this parameter or the BigDealIds field, but not both.
                     * 
                     */
                    void SetOrderIds(const std::vector<std::string>& _orderIds);

                    /**
                     * 判断参数 OrderIds 是否已赋值
                     * @return OrderIds 是否已赋值
                     * 
                     */
                    bool OrderIdsHasBeenSet() const;

                    /**
                     * 获取Whether to automatically use a voucher. valid values: 1 (yes), 0 (no). default: 0.
                     * @return AutoVoucher Whether to automatically use a voucher. valid values: 1 (yes), 0 (no). default: 0.
                     * 
                     */
                    int64_t GetAutoVoucher() const;

                    /**
                     * 设置Whether to automatically use a voucher. valid values: 1 (yes), 0 (no). default: 0.
                     * @param _autoVoucher Whether to automatically use a voucher. valid values: 1 (yes), 0 (no). default: 0.
                     * 
                     */
                    void SetAutoVoucher(const int64_t& _autoVoucher);

                    /**
                     * 判断参数 AutoVoucher 是否已赋值
                     * @return AutoVoucher 是否已赋值
                     * 
                     */
                    bool AutoVoucherHasBeenSet() const;

                    /**
                     * 获取Voucher ID list. currently only supports specifying one voucher.
                     * @return VoucherIds Voucher ID list. currently only supports specifying one voucher.
                     * 
                     */
                    std::vector<std::string> GetVoucherIds() const;

                    /**
                     * 设置Voucher ID list. currently only supports specifying one voucher.
                     * @param _voucherIds Voucher ID list. currently only supports specifying one voucher.
                     * 
                     */
                    void SetVoucherIds(const std::vector<std::string>& _voucherIds);

                    /**
                     * 判断参数 VoucherIds 是否已赋值
                     * @return VoucherIds 是否已赋值
                     * 
                     */
                    bool VoucherIdsHasBeenSet() const;

                    /**
                     * 获取Specifies one or more Order No. that need to pay. must pass either this parameter or the OrderIds field.
                     * @return BigDealIds Specifies one or more Order No. that need to pay. must pass either this parameter or the OrderIds field.
                     * 
                     */
                    std::vector<std::string> GetBigDealIds() const;

                    /**
                     * 设置Specifies one or more Order No. that need to pay. must pass either this parameter or the OrderIds field.
                     * @param _bigDealIds Specifies one or more Order No. that need to pay. must pass either this parameter or the OrderIds field.
                     * 
                     */
                    void SetBigDealIds(const std::vector<std::string>& _bigDealIds);

                    /**
                     * 判断参数 BigDealIds 是否已赋值
                     * @return BigDealIds 是否已赋值
                     * 
                     */
                    bool BigDealIdsHasBeenSet() const;

                    /**
                     * 获取0 self pay, 3 group agent, 4 reseller places a product-level payment order for customers. default 0.
                     * @return AgentPay 0 self pay, 3 group agent, 4 reseller places a product-level payment order for customers. default 0.
                     * 
                     */
                    int64_t GetAgentPay() const;

                    /**
                     * 设置0 self pay, 3 group agent, 4 reseller places a product-level payment order for customers. default 0.
                     * @param _agentPay 0 self pay, 3 group agent, 4 reseller places a product-level payment order for customers. default 0.
                     * 
                     */
                    void SetAgentPay(const int64_t& _agentPay);

                    /**
                     * 判断参数 AgentPay 是否已赋值
                     * @return AgentPay 是否已赋值
                     * 
                     */
                    bool AgentPayHasBeenSet() const;

                    /**
                     * 获取Disregard it.
                     * @return CpsUin Disregard it.
                     * 
                     */
                    std::string GetCpsUin() const;

                    /**
                     * 设置Disregard it.
                     * @param _cpsUin Disregard it.
                     * 
                     */
                    void SetCpsUin(const std::string& _cpsUin);

                    /**
                     * 判断参数 CpsUin 是否已赋值
                     * @return CpsUin 是否已赋值
                     * 
                     */
                    bool CpsUinHasBeenSet() const;

                private:

                    /**
                     * Specifies one or more Sub-order No. that need to pay. must pass either this parameter or the BigDealIds field, but not both.
                     */
                    std::vector<std::string> m_orderIds;
                    bool m_orderIdsHasBeenSet;

                    /**
                     * Whether to automatically use a voucher. valid values: 1 (yes), 0 (no). default: 0.
                     */
                    int64_t m_autoVoucher;
                    bool m_autoVoucherHasBeenSet;

                    /**
                     * Voucher ID list. currently only supports specifying one voucher.
                     */
                    std::vector<std::string> m_voucherIds;
                    bool m_voucherIdsHasBeenSet;

                    /**
                     * Specifies one or more Order No. that need to pay. must pass either this parameter or the OrderIds field.
                     */
                    std::vector<std::string> m_bigDealIds;
                    bool m_bigDealIdsHasBeenSet;

                    /**
                     * 0 self pay, 3 group agent, 4 reseller places a product-level payment order for customers. default 0.
                     */
                    int64_t m_agentPay;
                    bool m_agentPayHasBeenSet;

                    /**
                     * Disregard it.
                     */
                    std::string m_cpsUin;
                    bool m_cpsUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_PAYDEALSREQUEST_H_
