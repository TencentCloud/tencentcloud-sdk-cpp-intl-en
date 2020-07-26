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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_LISTFUNCTIONSREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_LISTFUNCTIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/Filter.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * ListFunctions request structure.
                */
                class ListFunctionsRequest : public AbstractModel
                {
                public:
                    ListFunctionsRequest();
                    ~ListFunctionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取It specifies whether to return the results in ascending or descending order. The value is `ASC` or `DESC`.
                     * @return Order It specifies whether to return the results in ascending or descending order. The value is `ASC` or `DESC`.
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置It specifies whether to return the results in ascending or descending order. The value is `ASC` or `DESC`.
                     * @param Order It specifies whether to return the results in ascending or descending order. The value is `ASC` or `DESC`.
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取It specifies the sorting order of the results according to a specified field, such as `AddTime`, `ModTime`, and `FunctionName`.
                     * @return Orderby It specifies the sorting order of the results according to a specified field, such as `AddTime`, `ModTime`, and `FunctionName`.
                     */
                    std::string GetOrderby() const;

                    /**
                     * 设置It specifies the sorting order of the results according to a specified field, such as `AddTime`, `ModTime`, and `FunctionName`.
                     * @param Orderby It specifies the sorting order of the results according to a specified field, such as `AddTime`, `ModTime`, and `FunctionName`.
                     */
                    void SetOrderby(const std::string& _orderby);

                    /**
                     * 判断参数 Orderby 是否已赋值
                     * @return Orderby 是否已赋值
                     */
                    bool OrderbyHasBeenSet() const;

                    /**
                     * 获取Data offset. The default value is `0`.
                     * @return Offset Data offset. The default value is `0`.
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Data offset. The default value is `0`.
                     * @param Offset Data offset. The default value is `0`.
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Return data length. The default value is `20`.
                     * @return Limit Return data length. The default value is `20`.
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Return data length. The default value is `20`.
                     * @param Limit Return data length. The default value is `20`.
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取It specifies whether to support fuzzy matching for the function name.
                     * @return SearchKey It specifies whether to support fuzzy matching for the function name.
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置It specifies whether to support fuzzy matching for the function name.
                     * @param SearchKey It specifies whether to support fuzzy matching for the function name.
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     */
                    bool SearchKeyHasBeenSet() const;

                    /**
                     * 获取Namespace
                     * @return Namespace Namespace
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace
                     * @param Namespace Namespace
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Function description. Fuzzy search is supported.
                     * @return Description Function description. Fuzzy search is supported.
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Function description. Fuzzy search is supported.
                     * @param Description Function description. Fuzzy search is supported.
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Filters
- tag:tag-key - String - Required: No - Filtering criteria based on tag-key - value pairs. Replace `tag-key` with a specific tag-key.

The maximum number of `Filters` for each request is 10, and that of `Filter.Values` is 5.
                     * @return Filters Filters
- tag:tag-key - String - Required: No - Filtering criteria based on tag-key - value pairs. Replace `tag-key` with a specific tag-key.

The maximum number of `Filters` for each request is 10, and that of `Filter.Values` is 5.
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Filters
- tag:tag-key - String - Required: No - Filtering criteria based on tag-key - value pairs. Replace `tag-key` with a specific tag-key.

The maximum number of `Filters` for each request is 10, and that of `Filter.Values` is 5.
                     * @param Filters Filters
- tag:tag-key - String - Required: No - Filtering criteria based on tag-key - value pairs. Replace `tag-key` with a specific tag-key.

The maximum number of `Filters` for each request is 10, and that of `Filter.Values` is 5.
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * It specifies whether to return the results in ascending or descending order. The value is `ASC` or `DESC`.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * It specifies the sorting order of the results according to a specified field, such as `AddTime`, `ModTime`, and `FunctionName`.
                     */
                    std::string m_orderby;
                    bool m_orderbyHasBeenSet;

                    /**
                     * Data offset. The default value is `0`.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Return data length. The default value is `20`.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * It specifies whether to support fuzzy matching for the function name.
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * Namespace
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Function description. Fuzzy search is supported.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Filters
- tag:tag-key - String - Required: No - Filtering criteria based on tag-key - value pairs. Replace `tag-key` with a specific tag-key.

The maximum number of `Filters` for each request is 10, and that of `Filter.Values` is 5.
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_LISTFUNCTIONSREQUEST_H_
