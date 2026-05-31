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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYLIBRADBCLUSTERACCOUNTHOSTREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYLIBRADBCLUSTERACCOUNTHOSTREQUEST_H_

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
                * ModifyLibraDBClusterAccountHost request structure.
                */
                class ModifyLibraDBClusterAccountHostRequest : public AbstractModel
                {
                public:
                    ModifyLibraDBClusterAccountHostRequest();
                    ~ModifyLibraDBClusterAccountHostRequest() = default;
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
                     * @return Account Account information
                     * 
                     */
                    InputAccount GetAccount() const;

                    /**
                     * 设置Account information
                     * @param _account Account information
                     * 
                     */
                    void SetAccount(const InputAccount& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取host name
                     * @return NewHost host name
                     * 
                     */
                    std::string GetNewHost() const;

                    /**
                     * 设置host name
                     * @param _newHost host name
                     * 
                     */
                    void SetNewHost(const std::string& _newHost);

                    /**
                     * 判断参数 NewHost 是否已赋值
                     * @return NewHost 是否已赋值
                     * 
                     */
                    bool NewHostHasBeenSet() const;

                private:

                    /**
                     * Analysis Cluster id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Account information
                     */
                    InputAccount m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * host name
                     */
                    std::string m_newHost;
                    bool m_newHostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYLIBRADBCLUSTERACCOUNTHOSTREQUEST_H_
