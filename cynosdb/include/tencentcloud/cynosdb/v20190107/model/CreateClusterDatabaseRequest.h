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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATECLUSTERDATABASEREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATECLUSTERDATABASEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/UserHostPrivilege.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * CreateClusterDatabase request structure.
                */
                class CreateClusterDatabaseRequest : public AbstractModel
                {
                public:
                    CreateClusterDatabaseRequest();
                    ~CreateClusterDatabaseRequest() = default;
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
                     * 获取Database name
                     * @return DbName Database name
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置Database name
                     * @param _dbName Database name
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取Character set
                     * @return CharacterSet Character set
                     * 
                     */
                    std::string GetCharacterSet() const;

                    /**
                     * 设置Character set
                     * @param _characterSet Character set
                     * 
                     */
                    void SetCharacterSet(const std::string& _characterSet);

                    /**
                     * 判断参数 CharacterSet 是否已赋值
                     * @return CharacterSet 是否已赋值
                     * 
                     */
                    bool CharacterSetHasBeenSet() const;

                    /**
                     * 获取Collation
                     * @return CollateRule Collation
                     * 
                     */
                    std::string GetCollateRule() const;

                    /**
                     * 设置Collation
                     * @param _collateRule Collation
                     * 
                     */
                    void SetCollateRule(const std::string& _collateRule);

                    /**
                     * 判断参数 CollateRule 是否已赋值
                     * @return CollateRule 是否已赋值
                     * 
                     */
                    bool CollateRuleHasBeenSet() const;

                    /**
                     * 获取Host permissions of the authorized user
                     * @return UserHostPrivileges Host permissions of the authorized user
                     * 
                     */
                    std::vector<UserHostPrivilege> GetUserHostPrivileges() const;

                    /**
                     * 设置Host permissions of the authorized user
                     * @param _userHostPrivileges Host permissions of the authorized user
                     * 
                     */
                    void SetUserHostPrivileges(const std::vector<UserHostPrivilege>& _userHostPrivileges);

                    /**
                     * 判断参数 UserHostPrivileges 是否已赋值
                     * @return UserHostPrivileges 是否已赋值
                     * 
                     */
                    bool UserHostPrivilegesHasBeenSet() const;

                    /**
                     * 获取Remarks
                     * @return Description Remarks
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Remarks
                     * @param _description Remarks
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Database name
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * Character set
                     */
                    std::string m_characterSet;
                    bool m_characterSetHasBeenSet;

                    /**
                     * Collation
                     */
                    std::string m_collateRule;
                    bool m_collateRuleHasBeenSet;

                    /**
                     * Host permissions of the authorized user
                     */
                    std::vector<UserHostPrivilege> m_userHostPrivileges;
                    bool m_userHostPrivilegesHasBeenSet;

                    /**
                     * Remarks
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATECLUSTERDATABASEREQUEST_H_
