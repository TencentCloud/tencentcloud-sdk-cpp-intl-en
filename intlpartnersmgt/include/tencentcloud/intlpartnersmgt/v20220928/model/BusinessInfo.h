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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_BUSINESSINFO_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_BUSINESSINFO_H_

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
                * Product information
                */
                class BusinessInfo : public AbstractModel
                {
                public:
                    BusinessInfo();
                    ~BusinessInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Product name.
                     * @return BusinessCodeName Product name.
                     * 
                     */
                    std::string GetBusinessCodeName() const;

                    /**
                     * 设置Product name.
                     * @param _businessCodeName Product name.
                     * 
                     */
                    void SetBusinessCodeName(const std::string& _businessCodeName);

                    /**
                     * 判断参数 BusinessCodeName 是否已赋值
                     * @return BusinessCodeName 是否已赋值
                     * 
                     */
                    bool BusinessCodeNameHasBeenSet() const;

                    /**
                     * 获取Product code.
                     * @return BusinessCode Product code.
                     * 
                     */
                    std::string GetBusinessCode() const;

                    /**
                     * 设置Product code.
                     * @param _businessCode Product code.
                     * 
                     */
                    void SetBusinessCode(const std::string& _businessCode);

                    /**
                     * 判断参数 BusinessCode 是否已赋值
                     * @return BusinessCode 是否已赋值
                     * 
                     */
                    bool BusinessCodeHasBeenSet() const;

                    /**
                     * 获取Original price.
                     * @return OriginalCost Original price.
                     * 
                     */
                    std::string GetOriginalCost() const;

                    /**
                     * 设置Original price.
                     * @param _originalCost Original price.
                     * 
                     */
                    void SetOriginalCost(const std::string& _originalCost);

                    /**
                     * 判断参数 OriginalCost 是否已赋值
                     * @return OriginalCost 是否已赋值
                     * 
                     */
                    bool OriginalCostHasBeenSet() const;

                    /**
                     * 获取Voucher amount.
                     * @return VoucherPayAmount Voucher amount.
                     * 
                     */
                    std::string GetVoucherPayAmount() const;

                    /**
                     * 设置Voucher amount.
                     * @param _voucherPayAmount Voucher amount.
                     * 
                     */
                    void SetVoucherPayAmount(const std::string& _voucherPayAmount);

                    /**
                     * 判断参数 VoucherPayAmount 是否已赋值
                     * @return VoucherPayAmount 是否已赋值
                     * 
                     */
                    bool VoucherPayAmountHasBeenSet() const;

                    /**
                     * 获取RI deduction.
                     * @return RICost RI deduction.
                     * 
                     */
                    std::string GetRICost() const;

                    /**
                     * 设置RI deduction.
                     * @param _rICost RI deduction.
                     * 
                     */
                    void SetRICost(const std::string& _rICost);

                    /**
                     * 判断参数 RICost 是否已赋值
                     * @return RICost 是否已赋值
                     * 
                     */
                    bool RICostHasBeenSet() const;

                    /**
                     * 获取Total amount.
                     * @return TotalCost Total amount.
                     * 
                     */
                    std::string GetTotalCost() const;

                    /**
                     * 设置Total amount.
                     * @param _totalCost Total amount.
                     * 
                     */
                    void SetTotalCost(const std::string& _totalCost);

                    /**
                     * 判断参数 TotalCost 是否已赋值
                     * @return TotalCost 是否已赋值
                     * 
                     */
                    bool TotalCostHasBeenSet() const;

                private:

                    /**
                     * Product name.
                     */
                    std::string m_businessCodeName;
                    bool m_businessCodeNameHasBeenSet;

                    /**
                     * Product code.
                     */
                    std::string m_businessCode;
                    bool m_businessCodeHasBeenSet;

                    /**
                     * Original price.
                     */
                    std::string m_originalCost;
                    bool m_originalCostHasBeenSet;

                    /**
                     * Voucher amount.
                     */
                    std::string m_voucherPayAmount;
                    bool m_voucherPayAmountHasBeenSet;

                    /**
                     * RI deduction.
                     */
                    std::string m_rICost;
                    bool m_rICostHasBeenSet;

                    /**
                     * Total amount.
                     */
                    std::string m_totalCost;
                    bool m_totalCostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_BUSINESSINFO_H_
