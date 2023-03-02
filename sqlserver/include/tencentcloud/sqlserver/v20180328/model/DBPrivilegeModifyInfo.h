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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBPRIVILEGEMODIFYINFO_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBPRIVILEGEMODIFYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * Database permission change information
                */
                class DBPrivilegeModifyInfo : public AbstractModel
                {
                public:
                    DBPrivilegeModifyInfo();
                    ~DBPrivilegeModifyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Database name
                     * @return DBName Database name
                     */
                    std::string GetDBName() const;

                    /**
                     * 设置Database name
                     * @param DBName Database name
                     */
                    void SetDBName(const std::string& _dBName);

                    /**
                     * 判断参数 DBName 是否已赋值
                     * @return DBName 是否已赋值
                     */
                    bool DBNameHasBeenSet() const;

                    /**
                     * 获取Permission modification information. Valid values: `ReadWrite` (read-write), `ReadOnly` (read-only), `Delete` (delete the account's permission to this database), `DBOwner` (owner).
                     * @return Privilege Permission modification information. Valid values: `ReadWrite` (read-write), `ReadOnly` (read-only), `Delete` (delete the account's permission to this database), `DBOwner` (owner).
                     */
                    std::string GetPrivilege() const;

                    /**
                     * 设置Permission modification information. Valid values: `ReadWrite` (read-write), `ReadOnly` (read-only), `Delete` (delete the account's permission to this database), `DBOwner` (owner).
                     * @param Privilege Permission modification information. Valid values: `ReadWrite` (read-write), `ReadOnly` (read-only), `Delete` (delete the account's permission to this database), `DBOwner` (owner).
                     */
                    void SetPrivilege(const std::string& _privilege);

                    /**
                     * 判断参数 Privilege 是否已赋值
                     * @return Privilege 是否已赋值
                     */
                    bool PrivilegeHasBeenSet() const;

                private:

                    /**
                     * Database name
                     */
                    std::string m_dBName;
                    bool m_dBNameHasBeenSet;

                    /**
                     * Permission modification information. Valid values: `ReadWrite` (read-write), `ReadOnly` (read-only), `Delete` (delete the account's permission to this database), `DBOwner` (owner).
                     */
                    std::string m_privilege;
                    bool m_privilegeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DBPRIVILEGEMODIFYINFO_H_
