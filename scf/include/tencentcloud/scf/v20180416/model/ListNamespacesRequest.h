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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_LISTNAMESPACESREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_LISTNAMESPACESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/SearchKey.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * ListNamespaces request structure.
                */
                class ListNamespacesRequest : public AbstractModel
                {
                public:
                    ListNamespacesRequest();
                    ~ListNamespacesRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取It specifies the sorting order of the results according to a specified field, such as `Name` and `Updatetime`.
                     * @return Orderby It specifies the sorting order of the results according to a specified field, such as `Name` and `Updatetime`.
                     */
                    std::string GetOrderby() const;

                    /**
                     * 设置It specifies the sorting order of the results according to a specified field, such as `Name` and `Updatetime`.
                     * @param Orderby It specifies the sorting order of the results according to a specified field, such as `Name` and `Updatetime`.
                     */
                    void SetOrderby(const std::string& _orderby);

                    /**
                     * 判断参数 Orderby 是否已赋值
                     * @return Orderby 是否已赋值
                     */
                    bool OrderbyHasBeenSet() const;

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
                     * 获取Specifies the range and keyword for search. The value of `Key` can be `Namespace` or `Description`. Multiple AND conditions can be specified.
                     * @return SearchKey Specifies the range and keyword for search. The value of `Key` can be `Namespace` or `Description`. Multiple AND conditions can be specified.
                     */
                    std::vector<SearchKey> GetSearchKey() const;

                    /**
                     * 设置Specifies the range and keyword for search. The value of `Key` can be `Namespace` or `Description`. Multiple AND conditions can be specified.
                     * @param SearchKey Specifies the range and keyword for search. The value of `Key` can be `Namespace` or `Description`. Multiple AND conditions can be specified.
                     */
                    void SetSearchKey(const std::vector<SearchKey>& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     */
                    bool SearchKeyHasBeenSet() const;

                private:

                    /**
                     * Return data length. The default value is `20`.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Data offset. The default value is `0`.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * It specifies the sorting order of the results according to a specified field, such as `Name` and `Updatetime`.
                     */
                    std::string m_orderby;
                    bool m_orderbyHasBeenSet;

                    /**
                     * It specifies whether to return the results in ascending or descending order. The value is `ASC` or `DESC`.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * Specifies the range and keyword for search. The value of `Key` can be `Namespace` or `Description`. Multiple AND conditions can be specified.
                     */
                    std::vector<SearchKey> m_searchKey;
                    bool m_searchKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_LISTNAMESPACESREQUEST_H_
