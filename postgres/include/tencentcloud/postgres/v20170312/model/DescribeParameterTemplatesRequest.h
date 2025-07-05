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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEPARAMETERTEMPLATESREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEPARAMETERTEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/Filter.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeParameterTemplates request structure.
                */
                class DescribeParameterTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeParameterTemplatesRequest();
                    ~DescribeParameterTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Filter conditions. Valid values: `TemplateName`, `TemplateId`, `DBMajorVersion`, `DBEngine`.
                     * @return Filters Filter conditions. Valid values: `TemplateName`, `TemplateId`, `DBMajorVersion`, `DBEngine`.
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filter conditions. Valid values: `TemplateName`, `TemplateId`, `DBMajorVersion`, `DBEngine`.
                     * @param _filters Filter conditions. Valid values: `TemplateName`, `TemplateId`, `DBMajorVersion`, `DBEngine`.
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
                     * 获取The maximum number of results returned per page. Value range: 0-100. Default: `20`.
                     * @return Limit The maximum number of results returned per page. Value range: 0-100. Default: `20`.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The maximum number of results returned per page. Value range: 0-100. Default: `20`.
                     * @param _limit The maximum number of results returned per page. Value range: 0-100. Default: `20`.
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
                     * 获取Data offset
                     * @return Offset Data offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Data offset
                     * @param _offset Data offset
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
                     * 获取Sorting metric. Valid values: `CreateTime`, `TemplateName`, `DBMajorVersion`.
                     * @return OrderBy Sorting metric. Valid values: `CreateTime`, `TemplateName`, `DBMajorVersion`.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sorting metric. Valid values: `CreateTime`, `TemplateName`, `DBMajorVersion`.
                     * @param _orderBy Sorting metric. Valid values: `CreateTime`, `TemplateName`, `DBMajorVersion`.
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取Sorting order. Valid values: `asc` (ascending order),`desc` (descending order).
                     * @return OrderByType Sorting order. Valid values: `asc` (ascending order),`desc` (descending order).
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置Sorting order. Valid values: `asc` (ascending order),`desc` (descending order).
                     * @param _orderByType Sorting order. Valid values: `asc` (ascending order),`desc` (descending order).
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                private:

                    /**
                     * Filter conditions. Valid values: `TemplateName`, `TemplateId`, `DBMajorVersion`, `DBEngine`.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * The maximum number of results returned per page. Value range: 0-100. Default: `20`.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Data offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Sorting metric. Valid values: `CreateTime`, `TemplateName`, `DBMajorVersion`.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Sorting order. Valid values: `asc` (ascending order),`desc` (descending order).
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEPARAMETERTEMPLATESREQUEST_H_
