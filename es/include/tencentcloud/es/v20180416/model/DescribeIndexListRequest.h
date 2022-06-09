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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINDEXLISTREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINDEXLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeIndexList request structure.
                */
                class DescribeIndexListRequest : public AbstractModel
                {
                public:
                    DescribeIndexListRequest();
                    ~DescribeIndexListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Index type. `auto`: Automated; `normal`: General.
                     * @return IndexType Index type. `auto`: Automated; `normal`: General.
                     */
                    std::string GetIndexType() const;

                    /**
                     * 设置Index type. `auto`: Automated; `normal`: General.
                     * @param IndexType Index type. `auto`: Automated; `normal`: General.
                     */
                    void SetIndexType(const std::string& _indexType);

                    /**
                     * 判断参数 IndexType 是否已赋值
                     * @return IndexType 是否已赋值
                     */
                    bool IndexTypeHasBeenSet() const;

                    /**
                     * 获取ES cluster ID
                     * @return InstanceId ES cluster ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ES cluster ID
                     * @param InstanceId ES cluster ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Index name. `null` indicates that all indexes are requested.
                     * @return IndexName Index name. `null` indicates that all indexes are requested.
                     */
                    std::string GetIndexName() const;

                    /**
                     * 设置Index name. `null` indicates that all indexes are requested.
                     * @param IndexName Index name. `null` indicates that all indexes are requested.
                     */
                    void SetIndexName(const std::string& _indexName);

                    /**
                     * 判断参数 IndexName 是否已赋值
                     * @return IndexName 是否已赋值
                     */
                    bool IndexNameHasBeenSet() const;

                    /**
                     * 获取Username for cluster access
                     * @return Username Username for cluster access
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置Username for cluster access
                     * @param Username Username for cluster access
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取Password for cluster access
                     * @return Password Password for cluster access
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Password for cluster access
                     * @param Password Password for cluster access
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取The starting position of paging
                     * @return Offset The starting position of paging
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置The starting position of paging
                     * @param Offset The starting position of paging
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取The number of results per page
                     * @return Limit The number of results per page
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置The number of results per page
                     * @param Limit The number of results per page
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Sorting condition field, which can be `IndexName`, `IndexStorage`, or `IndexCreateTime`.
                     * @return OrderBy Sorting condition field, which can be `IndexName`, `IndexStorage`, or `IndexCreateTime`.
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sorting condition field, which can be `IndexName`, `IndexStorage`, or `IndexCreateTime`.
                     * @param OrderBy Sorting condition field, which can be `IndexName`, `IndexStorage`, or `IndexCreateTime`.
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取Filtering by index status
                     * @return IndexStatusList Filtering by index status
                     */
                    std::vector<std::string> GetIndexStatusList() const;

                    /**
                     * 设置Filtering by index status
                     * @param IndexStatusList Filtering by index status
                     */
                    void SetIndexStatusList(const std::vector<std::string>& _indexStatusList);

                    /**
                     * 判断参数 IndexStatusList 是否已赋值
                     * @return IndexStatusList 是否已赋值
                     */
                    bool IndexStatusListHasBeenSet() const;

                    /**
                     * 获取Sorting mode, which can be `asc` and `desc`.
                     * @return Order Sorting mode, which can be `asc` and `desc`.
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sorting mode, which can be `asc` and `desc`.
                     * @param Order Sorting mode, which can be `asc` and `desc`.
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * Index type. `auto`: Automated; `normal`: General.
                     */
                    std::string m_indexType;
                    bool m_indexTypeHasBeenSet;

                    /**
                     * ES cluster ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Index name. `null` indicates that all indexes are requested.
                     */
                    std::string m_indexName;
                    bool m_indexNameHasBeenSet;

                    /**
                     * Username for cluster access
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * Password for cluster access
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * The starting position of paging
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The number of results per page
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Sorting condition field, which can be `IndexName`, `IndexStorage`, or `IndexCreateTime`.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Filtering by index status
                     */
                    std::vector<std::string> m_indexStatusList;
                    bool m_indexStatusListHasBeenSet;

                    /**
                     * Sorting mode, which can be `asc` and `desc`.
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINDEXLISTREQUEST_H_
