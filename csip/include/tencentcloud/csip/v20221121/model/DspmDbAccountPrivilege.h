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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMDBACCOUNTPRIVILEGE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMDBACCOUNTPRIVILEGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/DspmDatabasePrivilege.h>
#include <tencentcloud/csip/v20221121/model/DspmTablePrivilege.h>
#include <tencentcloud/csip/v20221121/model/DspmColumnPrivilege.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Database account permission information
                */
                class DspmDbAccountPrivilege : public AbstractModel
                {
                public:
                    DspmDbAccountPrivilege();
                    ~DspmDbAccountPrivilege() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Use the default permission. 0: inactive; 1: read-only permission, that is, SELECT permission; 2: all permissions, that is, all permissions at the global level.
                     * @return UseDefaultPrivilege Use the default permission. 0: inactive; 1: read-only permission, that is, SELECT permission; 2: all permissions, that is, all permissions at the global level.
                     * 
                     */
                    int64_t GetUseDefaultPrivilege() const;

                    /**
                     * 设置Use the default permission. 0: inactive; 1: read-only permission, that is, SELECT permission; 2: all permissions, that is, all permissions at the global level.
                     * @param _useDefaultPrivilege Use the default permission. 0: inactive; 1: read-only permission, that is, SELECT permission; 2: all permissions, that is, all permissions at the global level.
                     * 
                     */
                    void SetUseDefaultPrivilege(const int64_t& _useDefaultPrivilege);

                    /**
                     * 判断参数 UseDefaultPrivilege 是否已赋值
                     * @return UseDefaultPrivilege 是否已赋值
                     * 
                     */
                    bool UseDefaultPrivilegeHasBeenSet() const;

                    /**
                     * 获取Global permission array.
                     * @return GlobalPrivileges Global permission array.
                     * 
                     */
                    std::vector<std::string> GetGlobalPrivileges() const;

                    /**
                     * 设置Global permission array.
                     * @param _globalPrivileges Global permission array.
                     * 
                     */
                    void SetGlobalPrivileges(const std::vector<std::string>& _globalPrivileges);

                    /**
                     * 判断参数 GlobalPrivileges 是否已赋值
                     * @return GlobalPrivileges 是否已赋值
                     * 
                     */
                    bool GlobalPrivilegesHasBeenSet() const;

                    /**
                     * 获取Database permission array.
                     * @return DatabasePrivilegesList Database permission array.
                     * 
                     */
                    std::vector<DspmDatabasePrivilege> GetDatabasePrivilegesList() const;

                    /**
                     * 设置Database permission array.
                     * @param _databasePrivilegesList Database permission array.
                     * 
                     */
                    void SetDatabasePrivilegesList(const std::vector<DspmDatabasePrivilege>& _databasePrivilegesList);

                    /**
                     * 判断参数 DatabasePrivilegesList 是否已赋值
                     * @return DatabasePrivilegesList 是否已赋值
                     * 
                     */
                    bool DatabasePrivilegesListHasBeenSet() const;

                    /**
                     * 获取Array of table permissions in the database.
                     * @return TablePrivileges Array of table permissions in the database.
                     * 
                     */
                    std::vector<DspmTablePrivilege> GetTablePrivileges() const;

                    /**
                     * 设置Array of table permissions in the database.
                     * @param _tablePrivileges Array of table permissions in the database.
                     * 
                     */
                    void SetTablePrivileges(const std::vector<DspmTablePrivilege>& _tablePrivileges);

                    /**
                     * 判断参数 TablePrivileges 是否已赋值
                     * @return TablePrivileges 是否已赋值
                     * 
                     */
                    bool TablePrivilegesHasBeenSet() const;

                    /**
                     * 获取Column permission array in the database table.
                     * @return ColumnPrivileges Column permission array in the database table.
                     * 
                     */
                    std::vector<DspmColumnPrivilege> GetColumnPrivileges() const;

                    /**
                     * 设置Column permission array in the database table.
                     * @param _columnPrivileges Column permission array in the database table.
                     * 
                     */
                    void SetColumnPrivileges(const std::vector<DspmColumnPrivilege>& _columnPrivileges);

                    /**
                     * 判断参数 ColumnPrivileges 是否已赋值
                     * @return ColumnPrivileges 是否已赋值
                     * 
                     */
                    bool ColumnPrivilegesHasBeenSet() const;

                private:

                    /**
                     * Use the default permission. 0: inactive; 1: read-only permission, that is, SELECT permission; 2: all permissions, that is, all permissions at the global level.
                     */
                    int64_t m_useDefaultPrivilege;
                    bool m_useDefaultPrivilegeHasBeenSet;

                    /**
                     * Global permission array.
                     */
                    std::vector<std::string> m_globalPrivileges;
                    bool m_globalPrivilegesHasBeenSet;

                    /**
                     * Database permission array.
                     */
                    std::vector<DspmDatabasePrivilege> m_databasePrivilegesList;
                    bool m_databasePrivilegesListHasBeenSet;

                    /**
                     * Array of table permissions in the database.
                     */
                    std::vector<DspmTablePrivilege> m_tablePrivileges;
                    bool m_tablePrivilegesHasBeenSet;

                    /**
                     * Column permission array in the database table.
                     */
                    std::vector<DspmColumnPrivilege> m_columnPrivileges;
                    bool m_columnPrivilegesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMDBACCOUNTPRIVILEGE_H_
