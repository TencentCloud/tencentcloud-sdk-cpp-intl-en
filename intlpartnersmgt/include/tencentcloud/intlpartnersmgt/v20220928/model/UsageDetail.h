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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_USAGEDETAIL_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_USAGEDETAIL_H_

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
                * Voucher usage details
                */
                class UsageDetail : public AbstractModel
                {
                public:
                    UsageDetail();
                    ~UsageDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Voucher log ID
                     * @return Id Voucher log ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置Voucher log ID
                     * @param _id Voucher log ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Voucher ID.
                     * @return VoucherId Voucher ID.
                     * 
                     */
                    std::string GetVoucherId() const;

                    /**
                     * 设置Voucher ID.
                     * @param _voucherId Voucher ID.
                     * 
                     */
                    void SetVoucherId(const std::string& _voucherId);

                    /**
                     * 判断参数 VoucherId 是否已赋值
                     * @return VoucherId 是否已赋值
                     * 
                     */
                    bool VoucherIdHasBeenSet() const;

                    /**
                     * 获取Order ID
                     * @return DealName Order ID
                     * 
                     */
                    std::string GetDealName() const;

                    /**
                     * 设置Order ID
                     * @param _dealName Order ID
                     * 
                     */
                    void SetDealName(const std::string& _dealName);

                    /**
                     * 判断参数 DealName 是否已赋值
                     * @return DealName 是否已赋值
                     * 
                     */
                    bool DealNameHasBeenSet() const;

                    /**
                     * 获取Billing ID
                     * @return BillId Billing ID
                     * 
                     */
                    std::string GetBillId() const;

                    /**
                     * 设置Billing ID
                     * @param _billId Billing ID
                     * 
                     */
                    void SetBillId(const std::string& _billId);

                    /**
                     * 判断参数 BillId 是否已赋值
                     * @return BillId 是否已赋值
                     * 
                     */
                    bool BillIdHasBeenSet() const;

                    /**
                     * 获取Amount
                     * @return Amount Amount
                     * 
                     */
                    double GetAmount() const;

                    /**
                     * 设置Amount
                     * @param _amount Amount
                     * 
                     */
                    void SetAmount(const double& _amount);

                    /**
                     * 判断参数 Amount 是否已赋值
                     * @return Amount 是否已赋值
                     * 
                     */
                    bool AmountHasBeenSet() const;

                    /**
                     * 获取Payment mode
                     * @return PayMode Payment mode
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 设置Payment mode
                     * @param _payMode Payment mode
                     * 
                     */
                    void SetPayMode(const std::string& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取Order product code
                     * @return ProductCode Order product code
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置Order product code
                     * @param _productCode Order product code
                     * 
                     */
                    void SetProductCode(const std::string& _productCode);

                    /**
                     * 判断参数 ProductCode 是否已赋值
                     * @return ProductCode 是否已赋值
                     * 
                     */
                    bool ProductCodeHasBeenSet() const;

                    /**
                     * 获取Sub-product code
                     * @return SubProductCode Sub-product code
                     * 
                     */
                    std::string GetSubProductCode() const;

                    /**
                     * 设置Sub-product code
                     * @param _subProductCode Sub-product code
                     * 
                     */
                    void SetSubProductCode(const std::string& _subProductCode);

                    /**
                     * 判断参数 SubProductCode 是否已赋值
                     * @return SubProductCode 是否已赋值
                     * 
                     */
                    bool SubProductCodeHasBeenSet() const;

                    /**
                     * 获取Product name of the order
                     * @return ProductCodeName Product name of the order
                     * 
                     */
                    std::string GetProductCodeName() const;

                    /**
                     * 设置Product name of the order
                     * @param _productCodeName Product name of the order
                     * 
                     */
                    void SetProductCodeName(const std::string& _productCodeName);

                    /**
                     * 判断参数 ProductCodeName 是否已赋值
                     * @return ProductCodeName 是否已赋值
                     * 
                     */
                    bool ProductCodeNameHasBeenSet() const;

                    /**
                     * 获取Subproduct name of the order
                     * @return SubProductCodeName Subproduct name of the order
                     * 
                     */
                    std::string GetSubProductCodeName() const;

                    /**
                     * 设置Subproduct name of the order
                     * @param _subProductCodeName Subproduct name of the order
                     * 
                     */
                    void SetSubProductCodeName(const std::string& _subProductCodeName);

                    /**
                     * 判断参数 SubProductCodeName 是否已赋值
                     * @return SubProductCodeName 是否已赋值
                     * 
                     */
                    bool SubProductCodeNameHasBeenSet() const;

                    /**
                     * 获取Order payment time
                     * @return PayTime Order payment time
                     * 
                     */
                    std::string GetPayTime() const;

                    /**
                     * 设置Order payment time
                     * @param _payTime Order payment time
                     * 
                     */
                    void SetPayTime(const std::string& _payTime);

                    /**
                     * 判断参数 PayTime 是否已赋值
                     * @return PayTime 是否已赋值
                     * 
                     */
                    bool PayTimeHasBeenSet() const;

                    /**
                     * 获取Order completion time
                     * @return CompletionTime Order completion time
                     * 
                     */
                    std::string GetCompletionTime() const;

                    /**
                     * 设置Order completion time
                     * @param _completionTime Order completion time
                     * 
                     */
                    void SetCompletionTime(const std::string& _completionTime);

                    /**
                     * 判断参数 CompletionTime 是否已赋值
                     * @return CompletionTime 是否已赋值
                     * 
                     */
                    bool CompletionTimeHasBeenSet() const;

                    /**
                     * 获取Order owner uin
                     * @return OwnerUin Order owner uin
                     * 
                     */
                    int64_t GetOwnerUin() const;

                    /**
                     * 设置Order owner uin
                     * @param _ownerUin Order owner uin
                     * 
                     */
                    void SetOwnerUin(const int64_t& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                private:

                    /**
                     * Voucher log ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Voucher ID.
                     */
                    std::string m_voucherId;
                    bool m_voucherIdHasBeenSet;

                    /**
                     * Order ID
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                    /**
                     * Billing ID
                     */
                    std::string m_billId;
                    bool m_billIdHasBeenSet;

                    /**
                     * Amount
                     */
                    double m_amount;
                    bool m_amountHasBeenSet;

                    /**
                     * Payment mode
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * Order product code
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * Sub-product code
                     */
                    std::string m_subProductCode;
                    bool m_subProductCodeHasBeenSet;

                    /**
                     * Product name of the order
                     */
                    std::string m_productCodeName;
                    bool m_productCodeNameHasBeenSet;

                    /**
                     * Subproduct name of the order
                     */
                    std::string m_subProductCodeName;
                    bool m_subProductCodeNameHasBeenSet;

                    /**
                     * Order payment time
                     */
                    std::string m_payTime;
                    bool m_payTimeHasBeenSet;

                    /**
                     * Order completion time
                     */
                    std::string m_completionTime;
                    bool m_completionTimeHasBeenSet;

                    /**
                     * Order owner uin
                     */
                    int64_t m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_USAGEDETAIL_H_
