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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINECATEGORYITEMLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINECATEGORYITEMLISTREQUEST_H_

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
                * DescribeBaselineCategoryItemList request structure.
                */
                class DescribeBaselineCategoryItemListRequest : public AbstractModel
                {
                public:
                    DescribeBaselineCategoryItemListRequest();
                    ~DescribeBaselineCategoryItemListRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<p>ID of the parent category in the baseline, for filtering detection items under the specified parent category.</p>
                     * @return ParentCategoryID <p>ID of the parent category in the baseline, for filtering detection items under the specified parent category.</p>
                     * 
                     */
                    uint64_t GetParentCategoryID() const;

                    /**
                     * 设置<p>ID of the parent category in the baseline, for filtering detection items under the specified parent category.</p>
                     * @param _parentCategoryID <p>ID of the parent category in the baseline, for filtering detection items under the specified parent category.</p>
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
                     * 获取<p>Number of entries returned per page for paging query. Default value: 10. Maximum value: 100.</p>
                     * @return Limit <p>Number of entries returned per page for paging query. Default value: 10. Maximum value: 100.</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>Number of entries returned per page for paging query. Default value: 10. Maximum value: 100.</p>
                     * @param _limit <p>Number of entries returned per page for paging query. Default value: 10. Maximum value: 100.</p>
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
                     * 获取<p>Paginated query offset. Default value: 0.</p>
                     * @return Offset <p>Paginated query offset. Default value: 0.</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>Paginated query offset. Default value: 0.</p>
                     * @param _offset <p>Paginated query offset. Default value: 0.</p>
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
                     * 获取<p>List of Universal Filter Criteria. Supported filter fields:</p><ul><li>CategoryID: subcategory ID, exact match</li><li>Name: detection item name, fuzzy matching</li><li>RiskLevel: risk level, exact match. Values: LOW, MEDIUM, HIGH, CRITICAL</li><li>SupportCustomValue: whether editing is supported, exact match. Values: true, false</li></ul>
                     * @return Filters <p>List of Universal Filter Criteria. Supported filter fields:</p><ul><li>CategoryID: subcategory ID, exact match</li><li>Name: detection item name, fuzzy matching</li><li>RiskLevel: risk level, exact match. Values: LOW, MEDIUM, HIGH, CRITICAL</li><li>SupportCustomValue: whether editing is supported, exact match. Values: true, false</li></ul>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置<p>List of Universal Filter Criteria. Supported filter fields:</p><ul><li>CategoryID: subcategory ID, exact match</li><li>Name: detection item name, fuzzy matching</li><li>RiskLevel: risk level, exact match. Values: LOW, MEDIUM, HIGH, CRITICAL</li><li>SupportCustomValue: whether editing is supported, exact match. Values: true, false</li></ul>
                     * @param _filters <p>List of Universal Filter Criteria. Supported filter fields:</p><ul><li>CategoryID: subcategory ID, exact match</li><li>Name: detection item name, fuzzy matching</li><li>RiskLevel: risk level, exact match. Values: LOW, MEDIUM, HIGH, CRITICAL</li><li>SupportCustomValue: whether editing is supported, exact match. Values: true, false</li></ul>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>ID of the parent category in the baseline, for filtering detection items under the specified parent category.</p>
                     */
                    uint64_t m_parentCategoryID;
                    bool m_parentCategoryIDHasBeenSet;

                    /**
                     * <p>Number of entries returned per page for paging query. Default value: 10. Maximum value: 100.</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Paginated query offset. Default value: 0.</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>List of Universal Filter Criteria. Supported filter fields:</p><ul><li>CategoryID: subcategory ID, exact match</li><li>Name: detection item name, fuzzy matching</li><li>RiskLevel: risk level, exact match. Values: LOW, MEDIUM, HIGH, CRITICAL</li><li>SupportCustomValue: whether editing is supported, exact match. Values: true, false</li></ul>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINECATEGORYITEMLISTREQUEST_H_
