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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_REGIONSUMMARYOVERVIEWITEM_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_REGIONSUMMARYOVERVIEWITEM_H_

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
                * Region details in the customer bill data totaled by region
                */
                class RegionSummaryOverviewItem : public AbstractModel
                {
                public:
                    RegionSummaryOverviewItem();
                    ~RegionSummaryOverviewItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RegionId Region ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置Region ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RegionId Region ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Region name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RegionName Region name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetRegionName() const;

                    /**
                     * 设置Region name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param RegionName Region name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetRegionName(const std::string& _regionName);

                    /**
                     * 判断参数 RegionName 是否已赋值
                     * @return RegionName 是否已赋值
                     */
                    bool RegionNameHasBeenSet() const;

                    /**
                     * 获取The actual total consumption amount accurate down to eight decimal places
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return OriginalCost The actual total consumption amount accurate down to eight decimal places
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetOriginalCost() const;

                    /**
                     * 设置The actual total consumption amount accurate down to eight decimal places
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param OriginalCost The actual total consumption amount accurate down to eight decimal places
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetOriginalCost(const std::string& _originalCost);

                    /**
                     * 判断参数 OriginalCost 是否已赋值
                     * @return OriginalCost 是否已赋值
                     */
                    bool OriginalCostHasBeenSet() const;

                    /**
                     * 获取The deducted voucher amount accurate down to eight decimal places
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return VoucherPayAmount The deducted voucher amount accurate down to eight decimal places
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetVoucherPayAmount() const;

                    /**
                     * 设置The deducted voucher amount accurate down to eight decimal places
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param VoucherPayAmount The deducted voucher amount accurate down to eight decimal places
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetVoucherPayAmount(const std::string& _voucherPayAmount);

                    /**
                     * 判断参数 VoucherPayAmount 是否已赋值
                     * @return VoucherPayAmount 是否已赋值
                     */
                    bool VoucherPayAmountHasBeenSet() const;

                    /**
                     * 获取Total consumption amount accurate down to eight decimal places
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalCost Total consumption amount accurate down to eight decimal places
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTotalCost() const;

                    /**
                     * 设置Total consumption amount accurate down to eight decimal places
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TotalCost Total consumption amount accurate down to eight decimal places
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTotalCost(const std::string& _totalCost);

                    /**
                     * 判断参数 TotalCost 是否已赋值
                     * @return TotalCost 是否已赋值
                     */
                    bool TotalCostHasBeenSet() const;

                private:

                    /**
                     * Region ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Region name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_regionName;
                    bool m_regionNameHasBeenSet;

                    /**
                     * The actual total consumption amount accurate down to eight decimal places
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_originalCost;
                    bool m_originalCostHasBeenSet;

                    /**
                     * The deducted voucher amount accurate down to eight decimal places
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_voucherPayAmount;
                    bool m_voucherPayAmountHasBeenSet;

                    /**
                     * Total consumption amount accurate down to eight decimal places
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_totalCost;
                    bool m_totalCostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_REGIONSUMMARYOVERVIEWITEM_H_
