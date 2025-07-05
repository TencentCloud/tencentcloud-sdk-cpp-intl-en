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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_SUMMARYDETAILS_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_SUMMARYDETAILS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/BusinessInfo.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * Detailed summary by billing dimension
                */
                class SummaryDetails : public AbstractModel
                {
                public:
                    SummaryDetails();
                    ~SummaryDetails() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Product information list.
                     * @return Business Product information list.
                     * 
                     */
                    std::vector<BusinessInfo> GetBusiness() const;

                    /**
                     * 设置Product information list.
                     * @param _business Product information list.
                     * 
                     */
                    void SetBusiness(const std::vector<BusinessInfo>& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

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
                     * 获取<TOTAL_AMOUNT>.
                     * @return TotalCost <TOTAL_AMOUNT>.
                     * 
                     */
                    std::string GetTotalCost() const;

                    /**
                     * 设置<TOTAL_AMOUNT>.
                     * @param _totalCost <TOTAL_AMOUNT>.
                     * 
                     */
                    void SetTotalCost(const std::string& _totalCost);

                    /**
                     * 判断参数 TotalCost 是否已赋值
                     * @return TotalCost 是否已赋值
                     * 
                     */
                    bool TotalCostHasBeenSet() const;

                    /**
                     * 获取Classification dimension summary key.
                     * @return GroupKey Classification dimension summary key.
                     * 
                     */
                    std::string GetGroupKey() const;

                    /**
                     * 设置Classification dimension summary key.
                     * @param _groupKey Classification dimension summary key.
                     * 
                     */
                    void SetGroupKey(const std::string& _groupKey);

                    /**
                     * 判断参数 GroupKey 是否已赋值
                     * @return GroupKey 是否已赋值
                     * 
                     */
                    bool GroupKeyHasBeenSet() const;

                    /**
                     * 获取Summary value by classification dimension.
                     * @return GroupValue Summary value by classification dimension.
                     * 
                     */
                    std::string GetGroupValue() const;

                    /**
                     * 设置Summary value by classification dimension.
                     * @param _groupValue Summary value by classification dimension.
                     * 
                     */
                    void SetGroupValue(const std::string& _groupValue);

                    /**
                     * 判断参数 GroupValue 是否已赋值
                     * @return GroupValue 是否已赋值
                     * 
                     */
                    bool GroupValueHasBeenSet() const;

                private:

                    /**
                     * Product information list.
                     */
                    std::vector<BusinessInfo> m_business;
                    bool m_businessHasBeenSet;

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
                     * <TOTAL_AMOUNT>.
                     */
                    std::string m_totalCost;
                    bool m_totalCostHasBeenSet;

                    /**
                     * Classification dimension summary key.
                     */
                    std::string m_groupKey;
                    bool m_groupKeyHasBeenSet;

                    /**
                     * Summary value by classification dimension.
                     */
                    std::string m_groupValue;
                    bool m_groupValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_SUMMARYDETAILS_H_
