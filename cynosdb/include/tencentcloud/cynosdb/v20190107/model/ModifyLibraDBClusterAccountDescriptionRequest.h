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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYLIBRADBCLUSTERACCOUNTDESCRIPTIONREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYLIBRADBCLUSTERACCOUNTDESCRIPTIONREQUEST_H_

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
                * ModifyLibraDBClusterAccountDescription request structure.
                */
                class ModifyLibraDBClusterAccountDescriptionRequest : public AbstractModel
                {
                public:
                    ModifyLibraDBClusterAccountDescriptionRequest();
                    ~ModifyLibraDBClusterAccountDescriptionRequest() = default;
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
                     * @return AccountName Account name.
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置Account name.
                     * @param _accountName Account name.
                     * 
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取Description
                     * @return Description Description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description
                     * @param _description Description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取host name
                     * @return Host host name
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置host name
                     * @param _host host name
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                private:

                    /**
                     * Analysis Cluster id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Account name.
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * Description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * host name
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYLIBRADBCLUSTERACCOUNTDESCRIPTIONREQUEST_H_
