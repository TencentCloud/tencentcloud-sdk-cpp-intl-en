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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DELETELIBRADBCLUSTERACCOUNTSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DELETELIBRADBCLUSTERACCOUNTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/InputAccount.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DeleteLibraDBClusterAccounts request structure.
                */
                class DeleteLibraDBClusterAccountsRequest : public AbstractModel
                {
                public:
                    DeleteLibraDBClusterAccountsRequest();
                    ~DeleteLibraDBClusterAccountsRequest() = default;
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
                     * 获取Account
                     * @return Accounts Account
                     * 
                     */
                    std::vector<InputAccount> GetAccounts() const;

                    /**
                     * 设置Account
                     * @param _accounts Account
                     * 
                     */
                    void SetAccounts(const std::vector<InputAccount>& _accounts);

                    /**
                     * 判断参数 Accounts 是否已赋值
                     * @return Accounts 是否已赋值
                     * 
                     */
                    bool AccountsHasBeenSet() const;

                private:

                    /**
                     * Analysis Cluster id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Account
                     */
                    std::vector<InputAccount> m_accounts;
                    bool m_accountsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DELETELIBRADBCLUSTERACCOUNTSREQUEST_H_
