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
                     * 获取Product information list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Business Product information list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<BusinessInfo> GetBusiness() const;

                    /**
                     * 设置Product information list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _business Product information list
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Original price
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OriginalCost Original price
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetOriginalCost() const;

                    /**
                     * 设置Original price
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _originalCost Original price
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Voucher amount
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VoucherPayAmount Voucher amount
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetVoucherPayAmount() const;

                    /**
                     * 设置Voucher amount
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _voucherPayAmount Voucher amount
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Daily deduction
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RICost Daily deduction
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRICost() const;

                    /**
                     * 设置Daily deduction
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _rICost Daily deduction
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Total amount
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalCost Total amount
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTotalCost() const;

                    /**
                     * 设置Total amount
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _totalCost Total amount
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Summary key by classification dimension Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GroupKey Summary key by classification dimension Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGroupKey() const;

                    /**
                     * 设置Summary key by classification dimension Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _groupKey Summary key by classification dimension Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取 Summary value by classification dimension
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return GroupValue  Summary value by classification dimension
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetGroupValue() const;

                    /**
                     * 设置 Summary value by classification dimension
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _groupValue  Summary value by classification dimension
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * Product information list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<BusinessInfo> m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * Original price
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_originalCost;
                    bool m_originalCostHasBeenSet;

                    /**
                     * Voucher amount
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_voucherPayAmount;
                    bool m_voucherPayAmountHasBeenSet;

                    /**
                     * Daily deduction
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_rICost;
                    bool m_rICostHasBeenSet;

                    /**
                     * Total amount
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_totalCost;
                    bool m_totalCostHasBeenSet;

                    /**
                     * Summary key by classification dimension Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_groupKey;
                    bool m_groupKeyHasBeenSet;

                    /**
                     *  Summary value by classification dimension
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_groupValue;
                    bool m_groupValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_SUMMARYDETAILS_H_
