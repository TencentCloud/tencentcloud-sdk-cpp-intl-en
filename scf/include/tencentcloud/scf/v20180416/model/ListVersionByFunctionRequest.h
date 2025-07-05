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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_LISTVERSIONBYFUNCTIONREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_LISTVERSIONBYFUNCTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * ListVersionByFunction request structure.
                */
                class ListVersionByFunctionRequest : public AbstractModel
                {
                public:
                    ListVersionByFunctionRequest();
                    ~ListVersionByFunctionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Function Name
                     * @return FunctionName Function Name
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置Function Name
                     * @param _functionName Function Name
                     * 
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     * 
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取The namespace where the function locates
                     * @return Namespace The namespace where the function locates
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置The namespace where the function locates
                     * @param _namespace The namespace where the function locates
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取Data offset. The default value is `0`.
                     * @return Offset Data offset. The default value is `0`.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Data offset. The default value is `0`.
                     * @param _offset Data offset. The default value is `0`.
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
                     * 获取Return data length. The default value is `20`.
                     * @return Limit Return data length. The default value is `20`.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Return data length. The default value is `20`.
                     * @param _limit Return data length. The default value is `20`.
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
                     * 获取It specifies whether to return the results in ascending or descending order. The value is `ASC` or `DESC`.
                     * @return Order It specifies whether to return the results in ascending or descending order. The value is `ASC` or `DESC`.
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置It specifies whether to return the results in ascending or descending order. The value is `ASC` or `DESC`.
                     * @param _order It specifies whether to return the results in ascending or descending order. The value is `ASC` or `DESC`.
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
                     * 获取It specifies the sorting order of the results according to a specified field, such as `AddTime`, `ModTime`.
                     * @return OrderBy It specifies the sorting order of the results according to a specified field, such as `AddTime`, `ModTime`.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置It specifies the sorting order of the results according to a specified field, such as `AddTime`, `ModTime`.
                     * @param _orderBy It specifies the sorting order of the results according to a specified field, such as `AddTime`, `ModTime`.
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                private:

                    /**
                     * Function Name
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * The namespace where the function locates
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * Data offset. The default value is `0`.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Return data length. The default value is `20`.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * It specifies whether to return the results in ascending or descending order. The value is `ASC` or `DESC`.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * It specifies the sorting order of the results according to a specified field, such as `AddTime`, `ModTime`.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_LISTVERSIONBYFUNCTIONREQUEST_H_
