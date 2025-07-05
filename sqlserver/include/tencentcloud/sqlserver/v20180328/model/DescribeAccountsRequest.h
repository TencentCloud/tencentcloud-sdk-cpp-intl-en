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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEACCOUNTSREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEACCOUNTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeAccounts request structure.
                */
                class DescribeAccountsRequest : public AbstractModel
                {
                public:
                    DescribeAccountsRequest();
                    ~DescribeAccountsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
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
                     * 获取Number of results per page. Value range: 1-100. Default value: 20
                     * @return Limit Number of results per page. Value range: 1-100. Default value: 20
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of results per page. Value range: 1-100. Default value: 20
                     * @param _limit Number of results per page. Value range: 1-100. Default value: 20
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
                     * 获取Page number. Default value: 0
                     * @return Offset Page number. Default value: 0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Page number. Default value: 0
                     * @param _offset Page number. Default value: 0
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
                     * 获取Account ID
                     * @return Name Account ID
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Account ID
                     * @param _name Account ID
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Sorting by `createTime`, `updateTime`, or `passTime`. Default value: `createTime` (desc).
                     * @return OrderBy Sorting by `createTime`, `updateTime`, or `passTime`. Default value: `createTime` (desc).
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Sorting by `createTime`, `updateTime`, or `passTime`. Default value: `createTime` (desc).
                     * @param _orderBy Sorting by `createTime`, `updateTime`, or `passTime`. Default value: `createTime` (desc).
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
                     * 获取Sorting rule. Valid values: `desc` (descending order), `asc` (ascending order). Default value: `desc`.
                     * @return OrderByType Sorting rule. Valid values: `desc` (descending order), `asc` (ascending order). Default value: `desc`.
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置Sorting rule. Valid values: `desc` (descending order), `asc` (ascending order). Default value: `desc`.
                     * @param _orderByType Sorting rule. Valid values: `desc` (descending order), `asc` (ascending order). Default value: `desc`.
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
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Number of results per page. Value range: 1-100. Default value: 20
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Page number. Default value: 0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Account ID
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Sorting by `createTime`, `updateTime`, or `passTime`. Default value: `createTime` (desc).
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Sorting rule. Valid values: `desc` (descending order), `asc` (ascending order). Default value: `desc`.
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEACCOUNTSREQUEST_H_
