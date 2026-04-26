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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONBILLDETAILREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONBILLDETAILREQUEST_H_

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
                * DescribeAllocationBillDetail request structure.
                */
                class DescribeAllocationBillDetailRequest : public AbstractModel
                {
                public:
                    DescribeAllocationBillDetailRequest();
                    ~DescribeAllocationBillDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Quantity, with the maximum value of 1,000
                     * @return Limit Quantity, with the maximum value of 1,000
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Quantity, with the maximum value of 1,000
                     * @param _limit Quantity, with the maximum value of 1,000
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Pagination offset. If Offset is 0, it indicates the first page. If Limit is 100, then Offset is 100, and it indicates the second page. If Offset is 200, it indicates the third page, and so on.
                     * @return Offset Pagination offset. If Offset is 0, it indicates the first page. If Limit is 100, then Offset is 100, and it indicates the second page. If Offset is 200, it indicates the third page, and so on.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination offset. If Offset is 0, it indicates the first page. If Limit is 100, then Offset is 100, and it indicates the second page. If Offset is 200, it indicates the third page, and so on.
                     * @param _offset Pagination offset. If Offset is 0, it indicates the first page. If Limit is 100, then Offset is 100, and it indicates the second page. If Offset is 200, it indicates the third page, and so on.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Bill month, in the format of 2024-02, which is the current month by default if not provided
                     * @return Month Bill month, in the format of 2024-02, which is the current month by default if not provided
                     * 
                     */
                    std::string GetMonth() const;

                    /**
                     * 设置Bill month, in the format of 2024-02, which is the current month by default if not provided
                     * @param _month Bill month, in the format of 2024-02, which is the current month by default if not provided
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
                     * 获取Unique identifier of a billing unit, used for filtering
                     * @return TreeNodeUniqKeys Unique identifier of a billing unit, used for filtering
                     * 
                     */
                    std::vector<std::string> GetTreeNodeUniqKeys() const;

                    /**
                     * 设置Unique identifier of a billing unit, used for filtering
                     * @param _treeNodeUniqKeys Unique identifier of a billing unit, used for filtering
                     * 
                     */
                    void SetTreeNodeUniqKeys(const std::vector<std::string>& _treeNodeUniqKeys);

                    /**
                     * 判断参数 TreeNodeUniqKeys 是否已赋值
                     * @return TreeNodeUniqKeys 是否已赋值
                     * 
                     */
                    bool TreeNodeUniqKeysHasBeenSet() const;

                    /**
                     * 获取Sorting field, with the enumerated values as follows:
RiTimeSpan - Deduction duration of a reserved instance
ExtendPayAmount1 - Original price for the deduction duration of a reserved instance
RealCost - Discounted total
CashPayAmount - Cash amount
VoucherPayAmount - Amount of promo voucher
IncentivePayAmount - Amount of free credit
TransferPayAmount - Royalty amount
Cost - Original price of a component
                     * @return Sort Sorting field, with the enumerated values as follows:
RiTimeSpan - Deduction duration of a reserved instance
ExtendPayAmount1 - Original price for the deduction duration of a reserved instance
RealCost - Discounted total
CashPayAmount - Cash amount
VoucherPayAmount - Amount of promo voucher
IncentivePayAmount - Amount of free credit
TransferPayAmount - Royalty amount
Cost - Original price of a component
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置Sorting field, with the enumerated values as follows:
RiTimeSpan - Deduction duration of a reserved instance
ExtendPayAmount1 - Original price for the deduction duration of a reserved instance
RealCost - Discounted total
CashPayAmount - Cash amount
VoucherPayAmount - Amount of promo voucher
IncentivePayAmount - Amount of free credit
TransferPayAmount - Royalty amount
Cost - Original price of a component
                     * @param _sort Sorting field, with the enumerated values as follows:
RiTimeSpan - Deduction duration of a reserved instance
ExtendPayAmount1 - Original price for the deduction duration of a reserved instance
RealCost - Discounted total
CashPayAmount - Cash amount
VoucherPayAmount - Amount of promo voucher
IncentivePayAmount - Amount of free credit
TransferPayAmount - Royalty amount
Cost - Original price of a component
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取Sorting type, with the enumerated values as follows:
asc - Ascending
desc - Descending
                     * @return SortType Sorting type, with the enumerated values as follows:
asc - Ascending
desc - Descending
                     * 
                     */
                    std::string GetSortType() const;

                    /**
                     * 设置Sorting type, with the enumerated values as follows:
asc - Ascending
desc - Descending
                     * @param _sortType Sorting type, with the enumerated values as follows:
asc - Ascending
desc - Descending
                     * 
                     */
                    void SetSortType(const std::string& _sortType);

                    /**
                     * 判断参数 SortType 是否已赋值
                     * @return SortType 是否已赋值
                     * 
                     */
                    bool SortTypeHasBeenSet() const;

                    /**
                     * 获取Product code, used for filtering
                     * @return BusinessCodes Product code, used for filtering
                     * 
                     */
                    std::vector<std::string> GetBusinessCodes() const;

                    /**
                     * 设置Product code, used for filtering
                     * @param _businessCodes Product code, used for filtering
                     * 
                     */
                    void SetBusinessCodes(const std::vector<std::string>& _businessCodes);

                    /**
                     * 判断参数 BusinessCodes 是否已赋值
                     * @return BusinessCodes 是否已赋值
                     * 
                     */
                    bool BusinessCodesHasBeenSet() const;

                    /**
                     * 获取User UIN, used for filtering
                     * @return OwnerUins User UIN, used for filtering
                     * 
                     */
                    std::vector<std::string> GetOwnerUins() const;

                    /**
                     * 设置User UIN, used for filtering
                     * @param _ownerUins User UIN, used for filtering
                     * 
                     */
                    void SetOwnerUins(const std::vector<std::string>& _ownerUins);

                    /**
                     * 判断参数 OwnerUins 是否已赋值
                     * @return OwnerUins 是否已赋值
                     * 
                     */
                    bool OwnerUinsHasBeenSet() const;

                    /**
                     * 获取Operator UIN, used for filtering
                     * @return OperateUins Operator UIN, used for filtering
                     * 
                     */
                    std::vector<std::string> GetOperateUins() const;

                    /**
                     * 设置Operator UIN, used for filtering
                     * @param _operateUins Operator UIN, used for filtering
                     * 
                     */
                    void SetOperateUins(const std::vector<std::string>& _operateUins);

                    /**
                     * 判断参数 OperateUins 是否已赋值
                     * @return OperateUins 是否已赋值
                     * 
                     */
                    bool OperateUinsHasBeenSet() const;

                    /**
                     * 获取Billing mode code, used for filtering
                     * @return PayModes Billing mode code, used for filtering
                     * 
                     */
                    std::vector<std::string> GetPayModes() const;

                    /**
                     * 设置Billing mode code, used for filtering
                     * @param _payModes Billing mode code, used for filtering
                     * 
                     */
                    void SetPayModes(const std::vector<std::string>& _payModes);

                    /**
                     * 判断参数 PayModes 是否已赋值
                     * @return PayModes 是否已赋值
                     * 
                     */
                    bool PayModesHasBeenSet() const;

                    /**
                     * 获取Transaction type code, used for filtering
                     * @return ActionTypes Transaction type code, used for filtering
                     * 
                     */
                    std::vector<std::string> GetActionTypes() const;

                    /**
                     * 设置Transaction type code, used for filtering
                     * @param _actionTypes Transaction type code, used for filtering
                     * 
                     */
                    void SetActionTypes(const std::vector<std::string>& _actionTypes);

                    /**
                     * 判断参数 ActionTypes 是否已赋值
                     * @return ActionTypes 是否已赋值
                     * 
                     */
                    bool ActionTypesHasBeenSet() const;

                    /**
                     * 获取Subproduct code, used for filtering
                     * @return ProductCodes Subproduct code, used for filtering
                     * 
                     */
                    std::vector<std::string> GetProductCodes() const;

                    /**
                     * 设置Subproduct code, used for filtering
                     * @param _productCodes Subproduct code, used for filtering
                     * 
                     */
                    void SetProductCodes(const std::vector<std::string>& _productCodes);

                    /**
                     * 判断参数 ProductCodes 是否已赋值
                     * @return ProductCodes 是否已赋值
                     * 
                     */
                    bool ProductCodesHasBeenSet() const;

                    /**
                     * 获取Region ID, used for filtering
                     * @return RegionIds Region ID, used for filtering
                     * 
                     */
                    std::vector<std::string> GetRegionIds() const;

                    /**
                     * 设置Region ID, used for filtering
                     * @param _regionIds Region ID, used for filtering
                     * 
                     */
                    void SetRegionIds(const std::vector<std::string>& _regionIds);

                    /**
                     * 判断参数 RegionIds 是否已赋值
                     * @return RegionIds 是否已赋值
                     * 
                     */
                    bool RegionIdsHasBeenSet() const;

                    /**
                     * 获取AZ ID, used for filtering
                     * @return ZoneIds AZ ID, used for filtering
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置AZ ID, used for filtering
                     * @param _zoneIds AZ ID, used for filtering
                     * 
                     */
                    void SetZoneIds(const std::vector<std::string>& _zoneIds);

                    /**
                     * 判断参数 ZoneIds 是否已赋值
                     * @return ZoneIds 是否已赋值
                     * 
                     */
                    bool ZoneIdsHasBeenSet() const;

                    /**
                     * 获取Instance type code, used for filtering
                     * @return InstanceTypes Instance type code, used for filtering
                     * 
                     */
                    std::vector<std::string> GetInstanceTypes() const;

                    /**
                     * 设置Instance type code, used for filtering
                     * @param _instanceTypes Instance type code, used for filtering
                     * 
                     */
                    void SetInstanceTypes(const std::vector<std::string>& _instanceTypes);

                    /**
                     * 判断参数 InstanceTypes 是否已赋值
                     * @return InstanceTypes 是否已赋值
                     * 
                     */
                    bool InstanceTypesHasBeenSet() const;

                    /**
                     * 获取Tag, used for filtering
                     * @return Tag Tag, used for filtering
                     * 
                     */
                    std::vector<std::string> GetTag() const;

                    /**
                     * 设置Tag, used for filtering
                     * @param _tag Tag, used for filtering
                     * 
                     */
                    void SetTag(const std::vector<std::string>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取Component type code, used for filtering
                     * @return ComponentCodes Component type code, used for filtering
                     * 
                     */
                    std::vector<std::string> GetComponentCodes() const;

                    /**
                     * 设置Component type code, used for filtering
                     * @param _componentCodes Component type code, used for filtering
                     * 
                     */
                    void SetComponentCodes(const std::vector<std::string>& _componentCodes);

                    /**
                     * 判断参数 ComponentCodes 是否已赋值
                     * @return ComponentCodes 是否已赋值
                     * 
                     */
                    bool ComponentCodesHasBeenSet() const;

                    /**
                     * 获取Component name code, used for filtering
                     * @return ItemCodes Component name code, used for filtering
                     * 
                     */
                    std::vector<std::string> GetItemCodes() const;

                    /**
                     * 设置Component name code, used for filtering
                     * @param _itemCodes Component name code, used for filtering
                     * 
                     */
                    void SetItemCodes(const std::vector<std::string>& _itemCodes);

                    /**
                     * 判断参数 ItemCodes 是否已赋值
                     * @return ItemCodes 是否已赋值
                     * 
                     */
                    bool ItemCodesHasBeenSet() const;

                    /**
                     * 获取Fuzzy search: supports tag, resource ID, and resource alias.
                     * @return SearchKey Fuzzy search: supports tag, resource ID, and resource alias.
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置Fuzzy search: supports tag, resource ID, and resource alias.
                     * @param _searchKey Fuzzy search: supports tag, resource ID, and resource alias.
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                    /**
                     * 获取Project ID, used for filtering
                     * @return ProjectIds Project ID, used for filtering
                     * 
                     */
                    std::vector<uint64_t> GetProjectIds() const;

                    /**
                     * 设置Project ID, used for filtering
                     * @param _projectIds Project ID, used for filtering
                     * 
                     */
                    void SetProjectIds(const std::vector<uint64_t>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                private:

                    /**
                     * Quantity, with the maximum value of 1,000
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination offset. If Offset is 0, it indicates the first page. If Limit is 100, then Offset is 100, and it indicates the second page. If Offset is 200, it indicates the third page, and so on.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Bill month, in the format of 2024-02, which is the current month by default if not provided
                     */
                    std::string m_month;
                    bool m_monthHasBeenSet;

                    /**
                     * Unique identifier of a billing unit, used for filtering
                     */
                    std::vector<std::string> m_treeNodeUniqKeys;
                    bool m_treeNodeUniqKeysHasBeenSet;

                    /**
                     * Sorting field, with the enumerated values as follows:
RiTimeSpan - Deduction duration of a reserved instance
ExtendPayAmount1 - Original price for the deduction duration of a reserved instance
RealCost - Discounted total
CashPayAmount - Cash amount
VoucherPayAmount - Amount of promo voucher
IncentivePayAmount - Amount of free credit
TransferPayAmount - Royalty amount
Cost - Original price of a component
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * Sorting type, with the enumerated values as follows:
asc - Ascending
desc - Descending
                     */
                    std::string m_sortType;
                    bool m_sortTypeHasBeenSet;

                    /**
                     * Product code, used for filtering
                     */
                    std::vector<std::string> m_businessCodes;
                    bool m_businessCodesHasBeenSet;

                    /**
                     * User UIN, used for filtering
                     */
                    std::vector<std::string> m_ownerUins;
                    bool m_ownerUinsHasBeenSet;

                    /**
                     * Operator UIN, used for filtering
                     */
                    std::vector<std::string> m_operateUins;
                    bool m_operateUinsHasBeenSet;

                    /**
                     * Billing mode code, used for filtering
                     */
                    std::vector<std::string> m_payModes;
                    bool m_payModesHasBeenSet;

                    /**
                     * Transaction type code, used for filtering
                     */
                    std::vector<std::string> m_actionTypes;
                    bool m_actionTypesHasBeenSet;

                    /**
                     * Subproduct code, used for filtering
                     */
                    std::vector<std::string> m_productCodes;
                    bool m_productCodesHasBeenSet;

                    /**
                     * Region ID, used for filtering
                     */
                    std::vector<std::string> m_regionIds;
                    bool m_regionIdsHasBeenSet;

                    /**
                     * AZ ID, used for filtering
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * Instance type code, used for filtering
                     */
                    std::vector<std::string> m_instanceTypes;
                    bool m_instanceTypesHasBeenSet;

                    /**
                     * Tag, used for filtering
                     */
                    std::vector<std::string> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * Component type code, used for filtering
                     */
                    std::vector<std::string> m_componentCodes;
                    bool m_componentCodesHasBeenSet;

                    /**
                     * Component name code, used for filtering
                     */
                    std::vector<std::string> m_itemCodes;
                    bool m_itemCodesHasBeenSet;

                    /**
                     * Fuzzy search: supports tag, resource ID, and resource alias.
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * Project ID, used for filtering
                     */
                    std::vector<uint64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONBILLDETAILREQUEST_H_
