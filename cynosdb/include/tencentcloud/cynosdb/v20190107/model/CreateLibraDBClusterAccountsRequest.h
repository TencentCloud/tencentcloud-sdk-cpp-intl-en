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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATELIBRADBCLUSTERACCOUNTSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATELIBRADBCLUSTERACCOUNTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/NewAccount.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * CreateLibraDBClusterAccounts request structure.
                */
                class CreateLibraDBClusterAccountsRequest : public AbstractModel
                {
                public:
                    CreateLibraDBClusterAccountsRequest();
                    ~CreateLibraDBClusterAccountsRequest() = default;
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
                     * 获取Account information
                     * @return Accounts Account information
                     * 
                     */
                    std::vector<NewAccount> GetAccounts() const;

                    /**
                     * 设置Account information
                     * @param _accounts Account information
                     * 
                     */
                    void SetAccounts(const std::vector<NewAccount>& _accounts);

                    /**
                     * 判断参数 Accounts 是否已赋值
                     * @return Accounts 是否已赋值
                     * 
                     */
                    bool AccountsHasBeenSet() const;

                    /**
                     * 获取Encryption method
                     * @return EncryptMethod Encryption method
                     * 
                     */
                    std::string GetEncryptMethod() const;

                    /**
                     * 设置Encryption method
                     * @param _encryptMethod Encryption method
                     * 
                     */
                    void SetEncryptMethod(const std::string& _encryptMethod);

                    /**
                     * 判断参数 EncryptMethod 是否已赋值
                     * @return EncryptMethod 是否已赋值
                     * 
                     */
                    bool EncryptMethodHasBeenSet() const;

                private:

                    /**
                     * Analysis Cluster id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Account information
                     */
                    std::vector<NewAccount> m_accounts;
                    bool m_accountsHasBeenSet;

                    /**
                     * Encryption method
                     */
                    std::string m_encryptMethod;
                    bool m_encryptMethodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATELIBRADBCLUSTERACCOUNTSREQUEST_H_
