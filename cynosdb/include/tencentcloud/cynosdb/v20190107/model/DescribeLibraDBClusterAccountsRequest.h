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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBELIBRADBCLUSTERACCOUNTSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBELIBRADBCLUSTERACCOUNTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeLibraDBClusterAccounts request structure.
                */
                class DescribeLibraDBClusterAccountsRequest : public AbstractModel
                {
                public:
                    DescribeLibraDBClusterAccountsRequest();
                    ~DescribeLibraDBClusterAccountsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Analysis Cluster id
                     * @return ClusterId Analysis Cluster id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Analysis Cluster id
                     * @param _clusterId Analysis Cluster id
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取Account name.
                     * @return AccountNames Account name.
                     * 
                     */
                    std::vector<std::string> GetAccountNames() const;

                    /**
                     * 设置Account name.
                     * @param _accountNames Account name.
                     * 
                     */
                    void SetAccountNames(const std::vector<std::string>& _accountNames);

                    /**
                     * 判断参数 AccountNames 是否已赋值
                     * @return AccountNames 是否已赋值
                     * 
                     */
                    bool AccountNamesHasBeenSet() const;

                    /**
                     * 获取Fuzzy matching keyword
                     * @return AccountRegular Fuzzy matching keyword
                     * 
                     */
                    std::string GetAccountRegular() const;

                    /**
                     * 设置Fuzzy matching keyword
                     * @param _accountRegular Fuzzy matching keyword
                     * 
                     */
                    void SetAccountRegular(const std::string& _accountRegular);

                    /**
                     * 判断参数 AccountRegular 是否已赋值
                     * @return AccountRegular 是否已赋值
                     * 
                     */
                    bool AccountRegularHasBeenSet() const;

                    /**
                     * 获取host name
                     * @return Hosts host name
                     * 
                     */
                    std::vector<std::string> GetHosts() const;

                    /**
                     * 设置host name
                     * @param _hosts host name
                     * 
                     */
                    void SetHosts(const std::vector<std::string>& _hosts);

                    /**
                     * 判断参数 Hosts 是否已赋值
                     * @return Hosts 是否已赋值
                     * 
                     */
                    bool HostsHasBeenSet() const;

                    /**
                     * 获取Limit
                     * @return Limit Limit
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Limit
                     * @param _limit Limit
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
                     * 获取Offset
                     * @return Offset Offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Offset
                     * @param _offset Offset
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Analysis Cluster id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Account name.
                     */
                    std::vector<std::string> m_accountNames;
                    bool m_accountNamesHasBeenSet;

                    /**
                     * Fuzzy matching keyword
                     */
                    std::string m_accountRegular;
                    bool m_accountRegularHasBeenSet;

                    /**
                     * host name
                     */
                    std::vector<std::string> m_hosts;
                    bool m_hostsHasBeenSet;

                    /**
                     * Limit
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBELIBRADBCLUSTERACCOUNTSREQUEST_H_
