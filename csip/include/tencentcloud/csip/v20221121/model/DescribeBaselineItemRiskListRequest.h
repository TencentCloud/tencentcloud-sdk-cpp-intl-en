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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEITEMRISKLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEITEMRISKLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filters.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeBaselineItemRiskList request structure.
                */
                class DescribeBaselineItemRiskListRequest : public AbstractModel
                {
                public:
                    DescribeBaselineItemRiskListRequest();
                    ~DescribeBaselineItemRiskListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Baseline policy ID list.</p>
                     * @return PolicyID <p>Baseline policy ID list.</p>
                     * 
                     */
                    std::vector<uint64_t> GetPolicyID() const;

                    /**
                     * 设置<p>Baseline policy ID list.</p>
                     * @param _policyID <p>Baseline policy ID list.</p>
                     * 
                     */
                    void SetPolicyID(const std::vector<uint64_t>& _policyID);

                    /**
                     * 判断参数 PolicyID 是否已赋值
                     * @return PolicyID 是否已赋值
                     * 
                     */
                    bool PolicyIDHasBeenSet() const;

                    /**
                     * 获取<p>Baseline system parent category ID.</p>
                     * @return ParentCategoryID <p>Baseline system parent category ID.</p>
                     * 
                     */
                    uint64_t GetParentCategoryID() const;

                    /**
                     * 设置<p>Baseline system parent category ID.</p>
                     * @param _parentCategoryID <p>Baseline system parent category ID.</p>
                     * 
                     */
                    void SetParentCategoryID(const uint64_t& _parentCategoryID);

                    /**
                     * 判断参数 ParentCategoryID 是否已赋值
                     * @return ParentCategoryID 是否已赋值
                     * 
                     */
                    bool ParentCategoryIDHasBeenSet() const;

                    /**
                     * 获取<p>Baseline detection item ID.</p>
                     * @return ItemID <p>Baseline detection item ID.</p>
                     * 
                     */
                    uint64_t GetItemID() const;

                    /**
                     * 设置<p>Baseline detection item ID.</p>
                     * @param _itemID <p>Baseline detection item ID.</p>
                     * 
                     */
                    void SetItemID(const uint64_t& _itemID);

                    /**
                     * 判断参数 ItemID 是否已赋值
                     * @return ItemID 是否已赋值
                     * 
                     */
                    bool ItemIDHasBeenSet() const;

                    /**
                     * 获取<p>List of asset types to detect. Element value is HOST or CLUSTER.</p>
                     * @return CheckAssetType <p>List of asset types to detect. Element value is HOST or CLUSTER.</p>
                     * 
                     */
                    std::vector<std::string> GetCheckAssetType() const;

                    /**
                     * 设置<p>List of asset types to detect. Element value is HOST or CLUSTER.</p>
                     * @param _checkAssetType <p>List of asset types to detect. Element value is HOST or CLUSTER.</p>
                     * 
                     */
                    void SetCheckAssetType(const std::vector<std::string>& _checkAssetType);

                    /**
                     * 判断参数 CheckAssetType 是否已赋值
                     * @return CheckAssetType 是否已赋值
                     * 
                     */
                    bool CheckAssetTypeHasBeenSet() const;

                    /**
                     * 获取<p>Baseline subcategory ID.</p>
                     * @return CategoryID <p>Baseline subcategory ID.</p>
                     * 
                     */
                    uint64_t GetCategoryID() const;

                    /**
                     * 设置<p>Baseline subcategory ID.</p>
                     * @param _categoryID <p>Baseline subcategory ID.</p>
                     * 
                     */
                    void SetCategoryID(const uint64_t& _categoryID);

                    /**
                     * 判断参数 CategoryID 是否已赋值
                     * @return CategoryID 是否已赋值
                     * 
                     */
                    bool CategoryIDHasBeenSet() const;

                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>Universal Filter Criteria. Supported Name: ResultStatus (pass status, Values: PASS/NOT_PASS), AssetName (asset name/ID, fuzzy search), IP (IP address, fuzzy search), Tag (asset tag, fuzzy search).</p>
                     * @return Filters <p>Universal Filter Criteria. Supported Name: ResultStatus (pass status, Values: PASS/NOT_PASS), AssetName (asset name/ID, fuzzy search), IP (IP address, fuzzy search), Tag (asset tag, fuzzy search).</p>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置<p>Universal Filter Criteria. Supported Name: ResultStatus (pass status, Values: PASS/NOT_PASS), AssetName (asset name/ID, fuzzy search), IP (IP address, fuzzy search), Tag (asset tag, fuzzy search).</p>
                     * @param _filters <p>Universal Filter Criteria. Supported Name: ResultStatus (pass status, Values: PASS/NOT_PASS), AssetName (asset name/ID, fuzzy search), IP (IP address, fuzzy search), Tag (asset tag, fuzzy search).</p>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>Number of items per page for paging query. Maximum value: 100. If exceeded, the server will automatically roll back to the default value 10.</p>
                     * @return Limit <p>Number of items per page for paging query. Maximum value: 100. If exceeded, the server will automatically roll back to the default value 10.</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Number of items per page for paging query. Maximum value: 100. If exceeded, the server will automatically roll back to the default value 10.</p>
                     * @param _limit <p>Number of items per page for paging query. Maximum value: 100. If exceeded, the server will automatically roll back to the default value 10.</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>Starting offset amount for paging query. It starts from 0.</p>
                     * @return Offset <p>Starting offset amount for paging query. It starts from 0.</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Starting offset amount for paging query. It starts from 0.</p>
                     * @param _offset <p>Starting offset amount for paging query. It starts from 0.</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>Sorting order. Valid values: asc (ascending) and desc (descending). Default value: desc.</p>
                     * @return Order <p>Sorting order. Valid values: asc (ascending) and desc (descending). Default value: desc.</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>Sorting order. Valid values: asc (ascending) and desc (descending). Default value: desc.</p>
                     * @param _order <p>Sorting order. Valid values: asc (ascending) and desc (descending). Default value: desc.</p>
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取<p>Sort field name, an optional field defined by the specific API.</p>
                     * @return By <p>Sort field name, an optional field defined by the specific API.</p>
                     * 
                     */
                    std::string GetBy() const;

                    /**
                     * 设置<p>Sort field name, an optional field defined by the specific API.</p>
                     * @param _by <p>Sort field name, an optional field defined by the specific API.</p>
                     * 
                     */
                    void SetBy(const std::string& _by);

                    /**
                     * 判断参数 By 是否已赋值
                     * @return By 是否已赋值
                     * 
                     */
                    bool ByHasBeenSet() const;

                private:

                    /**
                     * <p>Baseline policy ID list.</p>
                     */
                    std::vector<uint64_t> m_policyID;
                    bool m_policyIDHasBeenSet;

                    /**
                     * <p>Baseline system parent category ID.</p>
                     */
                    uint64_t m_parentCategoryID;
                    bool m_parentCategoryIDHasBeenSet;

                    /**
                     * <p>Baseline detection item ID.</p>
                     */
                    uint64_t m_itemID;
                    bool m_itemIDHasBeenSet;

                    /**
                     * <p>List of asset types to detect. Element value is HOST or CLUSTER.</p>
                     */
                    std::vector<std::string> m_checkAssetType;
                    bool m_checkAssetTypeHasBeenSet;

                    /**
                     * <p>Baseline subcategory ID.</p>
                     */
                    uint64_t m_categoryID;
                    bool m_categoryIDHasBeenSet;

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>Universal Filter Criteria. Supported Name: ResultStatus (pass status, Values: PASS/NOT_PASS), AssetName (asset name/ID, fuzzy search), IP (IP address, fuzzy search), Tag (asset tag, fuzzy search).</p>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Number of items per page for paging query. Maximum value: 100. If exceeded, the server will automatically roll back to the default value 10.</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Starting offset amount for paging query. It starts from 0.</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Sorting order. Valid values: asc (ascending) and desc (descending). Default value: desc.</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>Sort field name, an optional field defined by the specific API.</p>
                     */
                    std::string m_by;
                    bool m_byHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEITEMRISKLISTREQUEST_H_
