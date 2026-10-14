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
                     * 获取Index type. auto: autonomous index; normal: general index
                     * @return IndexType Index type. auto: autonomous index; normal: general index
                     * 
                     */
                    std::string GetIndexType() const;

                    /**
                     * 设置Index type. auto: autonomous index; normal: general index
                     * @param _indexType Index type. auto: autonomous index; normal: general index
                     * 
                     */
                    void SetIndexType(const std::string& _indexType);

                    /**
                     * 判断参数 IndexType 是否已赋值
                     * @return IndexType 是否已赋值
                     * 
                     */
                    bool IndexTypeHasBeenSet() const;

                    /**
                     * 获取ES cluster ID
                     * @return InstanceId ES cluster ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ES cluster ID
                     * @param _instanceId ES cluster ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Index name. If this parameter is left empty, all indexes are obtained.
                     * @return IndexName Index name. If this parameter is left empty, all indexes are obtained.
                     * 
                     */
                    std::string GetIndexName() const;

                    /**
                     * 设置Index name. If this parameter is left empty, all indexes are obtained.
                     * @param _indexName Index name. If this parameter is left empty, all indexes are obtained.
                     * 
                     */
                    void SetIndexName(const std::string& _indexName);

                    /**
                     * 判断参数 IndexName 是否已赋值
                     * @return IndexName 是否已赋值
                     * 
                     */
                    bool IndexNameHasBeenSet() const;

                    /**
                     * 获取Cluster access username.
                     * @return Username Cluster access username.
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置Cluster access username.
                     * @param _username Cluster access username.
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取Cluster access password
                     * @return Password Cluster access password
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Cluster access password
                     * @param _password Cluster access password
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取Paging start position
                     * @return Offset Paging start position
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Paging start position
                     * @param _offset Paging start position
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
                     * 获取Number of items displayed per page
                     * @return Limit Number of items displayed per page
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of items displayed per page
                     * @param _limit Number of items displayed per page
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
                     * 获取Sorting fields, which support the following index names: IndexName, IndexStorage, and IndexCreateTime.
                     * @return OrderBy Sorting fields, which support the following index names: IndexName, IndexStorage, and IndexCreateTime.
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sorting fields, which support the following index names: IndexName, IndexStorage, and IndexCreateTime.
                     * @param _orderBy Sorting fields, which support the following index names: IndexName, IndexStorage, and IndexCreateTime.
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
                     * 获取Filter by index status
                     * @return IndexStatusList Filter by index status
                     * 
                     */
                    std::vector<std::string> GetIndexStatusList() const;

                    /**
                     * 设置Filter by index status
                     * @param _indexStatusList Filter by index status
                     * 
                     */
                    void SetIndexStatusList(const std::vector<std::string>& _indexStatusList);

                    /**
                     * 判断参数 IndexStatusList 是否已赋值
                     * @return IndexStatusList 是否已赋值
                     * 
                     */
                    bool IndexStatusListHasBeenSet() const;

                    /**
                     * 获取Sort order. Supports asc and desc. Defaults to desc. Data format: "asc", "desc"
                     * @return Order Sort order. Supports asc and desc. Defaults to desc. Data format: "asc", "desc"
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置Sort order. Supports asc and desc. Defaults to desc. Data format: "asc", "desc"
                     * @param _order Sort order. Supports asc and desc. Defaults to desc. Data format: "asc", "desc"
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                private:

                    /**
                     * Index type. auto: autonomous index; normal: general index
                     */
                    std::string m_indexType;
                    bool m_indexTypeHasBeenSet;

                    /**
                     * ES cluster ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Index name. If this parameter is left empty, all indexes are obtained.
                     */
                    std::string m_indexName;
                    bool m_indexNameHasBeenSet;

                    /**
                     * Cluster access username.
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * Cluster access password
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Paging start position
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of items displayed per page
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Sorting fields, which support the following index names: IndexName, IndexStorage, and IndexCreateTime.
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Filter by index status
                     */
                    std::vector<std::string> m_indexStatusList;
                    bool m_indexStatusListHasBeenSet;

                    /**
                     * Sort order. Supports asc and desc. Defaults to desc. Data format: "asc", "desc"
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEINDEXLISTREQUEST_H_
