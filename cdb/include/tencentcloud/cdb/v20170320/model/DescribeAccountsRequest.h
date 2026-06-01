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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEACCOUNTSREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEACCOUNTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
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
                     * 获取Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed in the TencentDB console.
                     * @return InstanceId Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed in the TencentDB console.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed in the TencentDB console.
                     * @param _instanceId Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed in the TencentDB console.
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
                     * 获取Record offset. Default value: `0`.
                     * @return Offset Record offset. Default value: `0`.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Record offset. Default value: `0`.
                     * @param _offset Record offset. Default value: `0`.
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
                     * 获取Number of results to be returned for a single request. Value range: 1-100. Default value: `20`.
                     * @return Limit Number of results to be returned for a single request. Value range: 1-100. Default value: `20`.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Number of results to be returned for a single request. Value range: 1-100. Default value: `20`.
                     * @param _limit Number of results to be returned for a single request. Value range: 1-100. Default value: `20`.
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
                     * 获取Regex for matching account names, which complies with the rules at MySQL's official website
                     * @return AccountRegexp Regex for matching account names, which complies with the rules at MySQL's official website
                     * 
                     */
                    std::string GetAccountRegexp() const;

                    /**
                     * 设置Regex for matching account names, which complies with the rules at MySQL's official website
                     * @param _accountRegexp Regex for matching account names, which complies with the rules at MySQL's official website
                     * 
                     */
                    void SetAccountRegexp(const std::string& _accountRegexp);

                    /**
                     * 判断参数 AccountRegexp 是否已赋值
                     * @return AccountRegexp 是否已赋值
                     * 
                     */
                    bool AccountRegexpHasBeenSet() const;

                    /**
                     * 获取Default none, support: ASC, DESC, asc, desc
                     * @return SortBy Default none, support: ASC, DESC, asc, desc
                     * 
                     */
                    std::string GetSortBy() const;

                    /**
                     * 设置Default none, support: ASC, DESC, asc, desc
                     * @param _sortBy Default none, support: ASC, DESC, asc, desc
                     * 
                     */
                    void SetSortBy(const std::string& _sortBy);

                    /**
                     * 判断参数 SortBy 是否已赋值
                     * @return SortBy 是否已赋值
                     * 
                     */
                    bool SortByHasBeenSet() const;

                    /**
                     * 获取Time field for sorting. Options: CreateTime (account creation time), ModifyTime (update time), ModifyPasswordTime (password modification time).
                     * @return OrderBy Time field for sorting. Options: CreateTime (account creation time), ModifyTime (update time), ModifyPasswordTime (password modification time).
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置Time field for sorting. Options: CreateTime (account creation time), ModifyTime (update time), ModifyPasswordTime (password modification time).
                     * @param _orderBy Time field for sorting. Options: CreateTime (account creation time), ModifyTime (update time), ModifyPasswordTime (password modification time).
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
                     * 获取Regular expression to match the account host address (Host). The rule is the same as that on the MySQL official website.
                     * @return HostRegexp Regular expression to match the account host address (Host). The rule is the same as that on the MySQL official website.
                     * 
                     */
                    std::string GetHostRegexp() const;

                    /**
                     * 设置Regular expression to match the account host address (Host). The rule is the same as that on the MySQL official website.
                     * @param _hostRegexp Regular expression to match the account host address (Host). The rule is the same as that on the MySQL official website.
                     * 
                     */
                    void SetHostRegexp(const std::string& _hostRegexp);

                    /**
                     * 判断参数 HostRegexp 是否已赋值
                     * @return HostRegexp 是否已赋值
                     * 
                     */
                    bool HostRegexpHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed in the TencentDB console.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Record offset. Default value: `0`.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results to be returned for a single request. Value range: 1-100. Default value: `20`.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Regex for matching account names, which complies with the rules at MySQL's official website
                     */
                    std::string m_accountRegexp;
                    bool m_accountRegexpHasBeenSet;

                    /**
                     * Default none, support: ASC, DESC, asc, desc
                     */
                    std::string m_sortBy;
                    bool m_sortByHasBeenSet;

                    /**
                     * Time field for sorting. Options: CreateTime (account creation time), ModifyTime (update time), ModifyPasswordTime (password modification time).
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * Regular expression to match the account host address (Host). The rule is the same as that on the MySQL official website.
                     */
                    std::string m_hostRegexp;
                    bool m_hostRegexpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEACCOUNTSREQUEST_H_
