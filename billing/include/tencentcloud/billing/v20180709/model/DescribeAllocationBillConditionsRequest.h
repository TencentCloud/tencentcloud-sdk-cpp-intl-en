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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONBILLCONDITIONSREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONBILLCONDITIONSREQUEST_H_

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
                * DescribeAllocationBillConditions request structure.
                */
                class DescribeAllocationBillConditionsRequest : public AbstractModel
                {
                public:
                    DescribeAllocationBillConditionsRequest();
                    ~DescribeAllocationBillConditionsRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取Date
                     * @return BillDates Date
                     * 
                     */
                    std::vector<std::string> GetBillDates() const;

                    /**
                     * 设置Date
                     * @param _billDates Date
                     * 
                     */
                    void SetBillDates(const std::vector<std::string>& _billDates);

                    /**
                     * 判断参数 BillDates 是否已赋值
                     * @return BillDates 是否已赋值
                     * 
                     */
                    bool BillDatesHasBeenSet() const;

                    /**
                     * 获取Product code
                     * @return BusinessCodes Product code
                     * 
                     */
                    std::vector<std::string> GetBusinessCodes() const;

                    /**
                     * 设置Product code
                     * @param _businessCodes Product code
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
                     * 获取User UIN
                     * @return OwnerUins User UIN
                     * 
                     */
                    std::vector<std::string> GetOwnerUins() const;

                    /**
                     * 设置User UIN
                     * @param _ownerUins User UIN
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
                     * 获取Operator UIN
                     * @return OperateUins Operator UIN
                     * 
                     */
                    std::vector<std::string> GetOperateUins() const;

                    /**
                     * 设置Operator UIN
                     * @param _operateUins Operator UIN
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
                     * 获取Billing mode code
                     * @return PayModes Billing mode code
                     * 
                     */
                    std::vector<std::string> GetPayModes() const;

                    /**
                     * 设置Billing mode code
                     * @param _payModes Billing mode code
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
                     * 获取Transaction type code
                     * @return ActionTypes Transaction type code
                     * 
                     */
                    std::vector<std::string> GetActionTypes() const;

                    /**
                     * 设置Transaction type code
                     * @param _actionTypes Transaction type code
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
                     * 获取Subproduct code
                     * @return ProductCodes Subproduct code
                     * 
                     */
                    std::vector<std::string> GetProductCodes() const;

                    /**
                     * 设置Subproduct code
                     * @param _productCodes Subproduct code
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
                     * 获取Region ID
                     * @return RegionIds Region ID
                     * 
                     */
                    std::vector<std::string> GetRegionIds() const;

                    /**
                     * 设置Region ID
                     * @param _regionIds Region ID
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
                     * 获取AZ ID
                     * @return ZoneIds AZ ID
                     * 
                     */
                    std::vector<std::string> GetZoneIds() const;

                    /**
                     * 设置AZ ID
                     * @param _zoneIds AZ ID
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
                     * 获取Instance type code
                     * @return InstanceTypes Instance type code
                     * 
                     */
                    std::vector<std::string> GetInstanceTypes() const;

                    /**
                     * 设置Instance type code
                     * @param _instanceTypes Instance type code
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
                     * 获取Tag
                     * @return Tag Tag
                     * 
                     */
                    std::vector<std::string> GetTag() const;

                    /**
                     * 设置Tag
                     * @param _tag Tag
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
                     * 获取Component type code
                     * @return ComponentCodes Component type code
                     * 
                     */
                    std::vector<std::string> GetComponentCodes() const;

                    /**
                     * 设置Component type code
                     * @param _componentCodes Component type code
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
                     * 获取Component name code
                     * @return ItemCodes Component name code
                     * 
                     */
                    std::vector<std::string> GetItemCodes() const;

                    /**
                     * 设置Component name code
                     * @param _itemCodes Component name code
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
                     * 获取Fuzzy search criteria
                     * @return SearchKey Fuzzy search criteria
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置Fuzzy search criteria
                     * @param _searchKey Fuzzy search criteria
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
                     * 获取Project ID
                     * @return ProjectIds Project ID
                     * 
                     */
                    std::vector<uint64_t> GetProjectIds() const;

                    /**
                     * 设置Project ID
                     * @param _projectIds Project ID
                     * 
                     */
                    void SetProjectIds(const std::vector<uint64_t>& _projectIds);

                    /**
                     * 判断参数 ProjectIds 是否已赋值
                     * @return ProjectIds 是否已赋值
                     * 
                     */
                    bool ProjectIdsHasBeenSet() const;

                    /**
                     * 获取Cost collection type
                     * @return AllocationType Cost collection type
                     * 
                     */
                    std::vector<int64_t> GetAllocationType() const;

                    /**
                     * 设置Cost collection type
                     * @param _allocationType Cost collection type
                     * 
                     */
                    void SetAllocationType(const std::vector<int64_t>& _allocationType);

                    /**
                     * 判断参数 AllocationType 是否已赋值
                     * @return AllocationType 是否已赋值
                     * 
                     */
                    bool AllocationTypeHasBeenSet() const;

                private:

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
                     * Date
                     */
                    std::vector<std::string> m_billDates;
                    bool m_billDatesHasBeenSet;

                    /**
                     * Product code
                     */
                    std::vector<std::string> m_businessCodes;
                    bool m_businessCodesHasBeenSet;

                    /**
                     * User UIN
                     */
                    std::vector<std::string> m_ownerUins;
                    bool m_ownerUinsHasBeenSet;

                    /**
                     * Operator UIN
                     */
                    std::vector<std::string> m_operateUins;
                    bool m_operateUinsHasBeenSet;

                    /**
                     * Billing mode code
                     */
                    std::vector<std::string> m_payModes;
                    bool m_payModesHasBeenSet;

                    /**
                     * Transaction type code
                     */
                    std::vector<std::string> m_actionTypes;
                    bool m_actionTypesHasBeenSet;

                    /**
                     * Subproduct code
                     */
                    std::vector<std::string> m_productCodes;
                    bool m_productCodesHasBeenSet;

                    /**
                     * Region ID
                     */
                    std::vector<std::string> m_regionIds;
                    bool m_regionIdsHasBeenSet;

                    /**
                     * AZ ID
                     */
                    std::vector<std::string> m_zoneIds;
                    bool m_zoneIdsHasBeenSet;

                    /**
                     * Instance type code
                     */
                    std::vector<std::string> m_instanceTypes;
                    bool m_instanceTypesHasBeenSet;

                    /**
                     * Tag
                     */
                    std::vector<std::string> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * Component type code
                     */
                    std::vector<std::string> m_componentCodes;
                    bool m_componentCodesHasBeenSet;

                    /**
                     * Component name code
                     */
                    std::vector<std::string> m_itemCodes;
                    bool m_itemCodesHasBeenSet;

                    /**
                     * Fuzzy search criteria
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * Project ID
                     */
                    std::vector<uint64_t> m_projectIds;
                    bool m_projectIdsHasBeenSet;

                    /**
                     * Cost collection type
                     */
                    std::vector<int64_t> m_allocationType;
                    bool m_allocationTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEALLOCATIONBILLCONDITIONSREQUEST_H_
