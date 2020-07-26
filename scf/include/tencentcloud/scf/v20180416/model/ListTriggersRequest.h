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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_LISTTRIGGERSREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_LISTTRIGGERSREQUEST_H_

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
                * ListTriggers request structure.
                */
                class ListTriggersRequest : public AbstractModel
                {
                public:
                    ListTriggersRequest();
                    ~ListTriggersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Function name
                     * @return FunctionName Function name
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置Function name
                     * @param FunctionName Function name
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取Namespace. Default value: default
                     * @return Namespace Namespace. Default value: default
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置Namespace. Default value: default
                     * @param Namespace Namespace. Default value: default
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Data offset. Default value: 0
                     * @return Offset Data offset. Default value: 0
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Data offset. Default value: 0
                     * @param Offset Data offset. Default value: 0
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of results to be returned. Default value: 20
                     * @return Limit Number of results to be returned. Default value: 20
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of results to be returned. Default value: 20
                     * @param Limit Number of results to be returned. Default value: 20
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Indicates by which field to sort the returned results. Valid values: AddTime, ModTime. Default value: ModTime
                     * @return OrderBy Indicates by which field to sort the returned results. Valid values: AddTime, ModTime. Default value: ModTime
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Indicates by which field to sort the returned results. Valid values: AddTime, ModTime. Default value: ModTime
                     * @param OrderBy Indicates by which field to sort the returned results. Valid values: AddTime, ModTime. Default value: ModTime
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取Indicates whether the returned results are sorted in ascending or descending order. Valid values: ASC, DESC. Default value: DESC
                     * @return Order Indicates whether the returned results are sorted in ascending or descending order. Valid values: ASC, DESC. Default value: DESC
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Indicates whether the returned results are sorted in ascending or descending order. Valid values: ASC, DESC. Default value: DESC
                     * @param Order Indicates whether the returned results are sorted in ascending or descending order. Valid values: ASC, DESC. Default value: DESC
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取* Qualifier:
Function version, i.e., alias
                     * @return Filters * Qualifier:
Function version, i.e., alias
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置* Qualifier:
Function version, i.e., alias
                     * @param Filters * Qualifier:
Function version, i.e., alias
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * Function name
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * Namespace. Default value: default
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Data offset. Default value: 0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results to be returned. Default value: 20
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Indicates by which field to sort the returned results. Valid values: AddTime, ModTime. Default value: ModTime
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Indicates whether the returned results are sorted in ascending or descending order. Valid values: ASC, DESC. Default value: DESC
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * * Qualifier:
Function version, i.e., alias
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_LISTTRIGGERSREQUEST_H_
