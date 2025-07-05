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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DBINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DBINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Database details
                */
                class DbInfo : public AbstractModel
                {
                public:
                    DbInfo();
                    ~DbInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Database status
                     * @return Status Database status
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Database status
                     * @param _status Database status
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

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
                     * 获取Specifies the remark of the database.
                     * @return Description Specifies the remark of the database.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Specifies the remark of the database.
                     * @param _description Specifies the remark of the database.
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
                     * 获取User permission
                     * @return UserHostPrivileges User permission
                     * 
                     */
                    std::vector<UserHostPrivilege> GetUserHostPrivileges() const;

                    /**
                     * 设置User permission
                     * @param _userHostPrivileges User permission
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
                     * 获取Database ID
                     * @return DbId Database ID
                     * 
                     */
                    int64_t GetDbId() const;

                    /**
                     * 设置Database ID
                     * @param _dbId Database ID
                     * 
                     */
                    void SetDbId(const int64_t& _dbId);

                    /**
                     * 判断参数 DbId 是否已赋值
                     * @return DbId 是否已赋值
                     * 
                     */
                    bool DbIdHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Update time.
                     * @return UpdateTime Update time.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Update time.
                     * @param _updateTime Update time.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取User appid.
                     * @return AppId User appid.
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置User appid.
                     * @param _appId User appid.
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取User UIN
                     * @return Uin User UIN
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置User UIN
                     * @param _uin User UIN
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

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

                private:

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
                     * Database status
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Collation
                     */
                    std::string m_collateRule;
                    bool m_collateRuleHasBeenSet;

                    /**
                     * Specifies the remark of the database.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * User permission
                     */
                    std::vector<UserHostPrivilege> m_userHostPrivileges;
                    bool m_userHostPrivilegesHasBeenSet;

                    /**
                     * Database ID
                     */
                    int64_t m_dbId;
                    bool m_dbIdHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Update time.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * User appid.
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * User UIN
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * Cluster ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DBINFO_H_
