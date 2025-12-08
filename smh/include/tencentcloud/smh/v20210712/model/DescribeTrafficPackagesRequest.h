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

#ifndef TENCENTCLOUD_SMH_V20210712_MODEL_DESCRIBETRAFFICPACKAGESREQUEST_H_
#define TENCENTCLOUD_SMH_V20210712_MODEL_DESCRIBETRAFFICPACKAGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Smh
    {
        namespace V20210712
        {
            namespace Model
            {
                /**
                * DescribeTrafficPackages request structure.
                */
                class DescribeTrafficPackagesRequest : public AbstractModel
                {
                public:
                    DescribeTrafficPackagesRequest();
                    ~DescribeTrafficPackagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Specifies one or more resource ids for querying, with a maximum of 100 per request.
                     * @return ResourceIds Specifies one or more resource ids for querying, with a maximum of 100 per request.
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置Specifies one or more resource ids for querying, with a maximum of 100 per request.
                     * @param _resourceIds Specifies one or more resource ids for querying, with a maximum of 100 per request.
                     * 
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                    /**
                     * 获取Page number, int, used in conjunction with PageSize. default value is 1.
                     * @return PageNumber Page number, int, used in conjunction with PageSize. default value is 1.
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置Page number, int, used in conjunction with PageSize. default value is 1.
                     * @param _pageNumber Page number, int, used in conjunction with PageSize. default value is 1.
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取Number of items per page, integer, used in conjunction with PageNumber. default value is 20. maximum value is 100.
                     * @return PageSize Number of items per page, integer, used in conjunction with PageNumber. default value is 20. maximum value is 100.
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置Number of items per page, integer, used in conjunction with PageNumber. default value is 20. maximum value is 100.
                     * @param _pageSize Number of items per page, integer, used in conjunction with PageNumber. default value is 20. maximum value is 100.
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Specifies the column to sort.
                     * @return OrderBy Specifies the column to sort.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Specifies the column to sort.
                     * @param _orderBy Specifies the column to sort.
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
                     * 获取Sorting method.
                     * @return OrderByType Sorting method.
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置Sorting method.
                     * @param _orderByType Sorting method.
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                    /**
                     * 获取Specifies the source type filter criteria.
                     * @return Type Specifies the source type filter criteria.
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置Specifies the source type filter criteria.
                     * @param _type Specifies the source type filter criteria.
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * Specifies one or more resource ids for querying, with a maximum of 100 per request.
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * Page number, int, used in conjunction with PageSize. default value is 1.
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * Number of items per page, integer, used in conjunction with PageNumber. default value is 20. maximum value is 100.
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Specifies the column to sort.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Sorting method.
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                    /**
                     * Specifies the source type filter criteria.
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMH_V20210712_MODEL_DESCRIBETRAFFICPACKAGESREQUEST_H_
