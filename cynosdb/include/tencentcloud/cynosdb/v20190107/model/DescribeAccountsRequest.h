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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEACCOUNTSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEACCOUNTSREQUEST_H_

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
                * DescribeAccounts request structure.
                */
                class DescribeAccountsRequest : public AbstractModel
                {
                public:
                    DescribeAccountsRequest();
                    ~DescribeAccountsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param ClusterId Cluster ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取List of accounts to be filtered
                     * @return AccountNames List of accounts to be filtered
                     */
                    std::vector<std::string> GetAccountNames() const;

                    /**
                     * 设置List of accounts to be filtered
                     * @param AccountNames List of accounts to be filtered
                     */
                    void SetAccountNames(const std::vector<std::string>& _accountNames);

                    /**
                     * 判断参数 AccountNames 是否已赋值
                     * @return AccountNames 是否已赋值
                     */
                    bool AccountNamesHasBeenSet() const;

                    /**
                     * 获取Database type. Valid values: 
<li> MYSQL </li>
                     * @return DbType Database type. Valid values: 
<li> MYSQL </li>
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置Database type. Valid values: 
<li> MYSQL </li>
                     * @param DbType Database type. Valid values: 
<li> MYSQL </li>
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     */
                    bool DbTypeHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * List of accounts to be filtered
                     */
                    std::vector<std::string> m_accountNames;
                    bool m_accountNamesHasBeenSet;

                    /**
                     * Database type. Valid values: 
<li> MYSQL </li>
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEACCOUNTSREQUEST_H_
