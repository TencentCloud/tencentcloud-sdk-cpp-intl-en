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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYACCOUNTHOSTREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYACCOUNTHOSTREQUEST_H_

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
                * ModifyAccountHost request structure.
                */
                class ModifyAccountHostRequest : public AbstractModel
                {
                public:
                    ModifyAccountHostRequest();
                    ~ModifyAccountHostRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cluster ID
                     * @return ClusterId Cluster ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置Cluster ID
                     * @param _clusterId Cluster ID
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
                     * 获取New host
                     * @return NewHost New host
                     * 
                     */
                    std::string GetNewHost() const;

                    /**
                     * 设置New host
                     * @param _newHost New host
                     * 
                     */
                    void SetNewHost(const std::string& _newHost);

                    /**
                     * 判断参数 NewHost 是否已赋值
                     * @return NewHost 是否已赋值
                     * 
                     */
                    bool NewHostHasBeenSet() const;

                    /**
                     * 获取Account infomation
                     * @return Account Account infomation
                     * 
                     */
                    InputAccount GetAccount() const;

                    /**
                     * 设置Account infomation
                     * @param _account Account infomation
                     * 
                     */
                    void SetAccount(const InputAccount& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * New host
                     */
                    std::string m_newHost;
                    bool m_newHostHasBeenSet;

                    /**
                     * Account infomation
                     */
                    InputAccount m_account;
                    bool m_accountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYACCOUNTHOSTREQUEST_H_
