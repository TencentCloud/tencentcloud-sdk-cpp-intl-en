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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEMODELSERVICEGROUPSREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEMODELSERVICEGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/Filter.h>
#include <tencentcloud/tione/v20211111/model/TagFilter.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribeModelServiceGroups request structure.
                */
                class DescribeModelServiceGroupsRequest : public AbstractModel
                {
                public:
                    DescribeModelServiceGroupsRequest();
                    ~DescribeModelServiceGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Offset. Default value: 0.
                     * @return Offset Offset. Default value: 0.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: 0.
                     * @param _offset Offset. Default value: 0.
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
                     * 获取Number of returned results. The default value is 20, and the maximum value is 100.
                     * @return Limit Number of returned results. The default value is 20, and the maximum value is 100.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. The default value is 20, and the maximum value is 100.
                     * @param _limit Number of returned results. The default value is 20, and the maximum value is 100.
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
                     * 获取The sorting order of the output list. Valid values: ASC (ascending order) and DESC (descending order).
                     * @return Order The sorting order of the output list. Valid values: ASC (ascending order) and DESC (descending order).
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置The sorting order of the output list. Valid values: ASC (ascending order) and DESC (descending order).
                     * @param _order The sorting order of the output list. Valid values: ASC (ascending order) and DESC (descending order).
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
                     * 获取Field to sort by. Valid values: CreateTime and UpdateTime.
                     * @return OrderField Field to sort by. Valid values: CreateTime and UpdateTime.
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置Field to sort by. Valid values: CreateTime and UpdateTime.
                     * @param _orderField Field to sort by. Valid values: CreateTime and UpdateTime.
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取Pagination parameters. Supported filterable field names include:["ClusterId", "ServiceId", "ServiceGroupName", "ServiceGroupId","Status","CreatedBy","ModelVersionId"]
                     * @return Filters Pagination parameters. Supported filterable field names include:["ClusterId", "ServiceId", "ServiceGroupName", "ServiceGroupId","Status","CreatedBy","ModelVersionId"]
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Pagination parameters. Supported filterable field names include:["ClusterId", "ServiceId", "ServiceGroupName", "ServiceGroupId","Status","CreatedBy","ModelVersionId"]
                     * @param _filters Pagination parameters. Supported filterable field names include:["ClusterId", "ServiceId", "ServiceGroupName", "ServiceGroupId","Status","CreatedBy","ModelVersionId"]
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取Tag filtering parameters.
                     * @return TagFilters Tag filtering parameters.
                     * 
                     */
                    std::vector<TagFilter> GetTagFilters() const;

                    /**
                     * 设置Tag filtering parameters.
                     * @param _tagFilters Tag filtering parameters.
                     * 
                     */
                    void SetTagFilters(const std::vector<TagFilter>& _tagFilters);

                    /**
                     * 判断参数 TagFilters 是否已赋值
                     * @return TagFilters 是否已赋值
                     * 
                     */
                    bool TagFiltersHasBeenSet() const;

                    /**
                     * 获取Service classification.
                     * @return ServiceCategory Service classification.
                     * 
                     */
                    std::string GetServiceCategory() const;

                    /**
                     * 设置Service classification.
                     * @param _serviceCategory Service classification.
                     * 
                     */
                    void SetServiceCategory(const std::string& _serviceCategory);

                    /**
                     * 判断参数 ServiceCategory 是否已赋值
                     * @return ServiceCategory 是否已赋值
                     * 
                     */
                    bool ServiceCategoryHasBeenSet() const;

                private:

                    /**
                     * Offset. Default value: 0.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results. The default value is 20, and the maximum value is 100.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * The sorting order of the output list. Valid values: ASC (ascending order) and DESC (descending order).
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Field to sort by. Valid values: CreateTime and UpdateTime.
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * Pagination parameters. Supported filterable field names include:["ClusterId", "ServiceId", "ServiceGroupName", "ServiceGroupId","Status","CreatedBy","ModelVersionId"]
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * Tag filtering parameters.
                     */
                    std::vector<TagFilter> m_tagFilters;
                    bool m_tagFiltersHasBeenSet;

                    /**
                     * Service classification.
                     */
                    std::string m_serviceCategory;
                    bool m_serviceCategoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEMODELSERVICEGROUPSREQUEST_H_
