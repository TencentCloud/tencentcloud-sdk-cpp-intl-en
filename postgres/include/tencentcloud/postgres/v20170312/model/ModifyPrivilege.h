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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYPRIVILEGE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYPRIVILEGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/DatabasePrivilege.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Specifies the permissions for modifying a database object, including the data structure of the database object description, the list of permissions required for modification, and the modification type.
                */
                class ModifyPrivilege : public AbstractModel
                {
                public:
                    ModifyPrivilege();
                    ~ModifyPrivilege() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies the database object and permission list to be modified.
                     * @return DatabasePrivilege Specifies the database object and permission list to be modified.
                     * 
                     */
                    DatabasePrivilege GetDatabasePrivilege() const;

                    /**
                     * 设置Specifies the database object and permission list to be modified.
                     * @param _databasePrivilege Specifies the database object and permission list to be modified.
                     * 
                     */
                    void SetDatabasePrivilege(const DatabasePrivilege& _databasePrivilege);

                    /**
                     * 判断参数 DatabasePrivilege 是否已赋值
                     * @return DatabasePrivilege 是否已赋值
                     * 
                     */
                    bool DatabasePrivilegeHasBeenSet() const;

                    /**
                     * 获取Modifies via grantObject, revokeObject, or alterRole. grantObject represents authorization, revokeObject represents withdraw, alterRole represents modify account type.
                     * @return ModifyType Modifies via grantObject, revokeObject, or alterRole. grantObject represents authorization, revokeObject represents withdraw, alterRole represents modify account type.
                     * 
                     */
                    std::string GetModifyType() const;

                    /**
                     * 设置Modifies via grantObject, revokeObject, or alterRole. grantObject represents authorization, revokeObject represents withdraw, alterRole represents modify account type.
                     * @param _modifyType Modifies via grantObject, revokeObject, or alterRole. grantObject represents authorization, revokeObject represents withdraw, alterRole represents modify account type.
                     * 
                     */
                    void SetModifyType(const std::string& _modifyType);

                    /**
                     * 判断参数 ModifyType 是否已赋值
                     * @return ModifyType 是否已赋值
                     * 
                     */
                    bool ModifyTypeHasBeenSet() const;

                    /**
                     * 获取This parameter is required only when ModifyType is revokeObject. when set to true, the permission will be revoked with cascading effect. default false.
                     * @return IsCascade This parameter is required only when ModifyType is revokeObject. when set to true, the permission will be revoked with cascading effect. default false.
                     * 
                     */
                    bool GetIsCascade() const;

                    /**
                     * 设置This parameter is required only when ModifyType is revokeObject. when set to true, the permission will be revoked with cascading effect. default false.
                     * @param _isCascade This parameter is required only when ModifyType is revokeObject. when set to true, the permission will be revoked with cascading effect. default false.
                     * 
                     */
                    void SetIsCascade(const bool& _isCascade);

                    /**
                     * 判断参数 IsCascade 是否已赋值
                     * @return IsCascade 是否已赋值
                     * 
                     */
                    bool IsCascadeHasBeenSet() const;

                private:

                    /**
                     * Specifies the database object and permission list to be modified.
                     */
                    DatabasePrivilege m_databasePrivilege;
                    bool m_databasePrivilegeHasBeenSet;

                    /**
                     * Modifies via grantObject, revokeObject, or alterRole. grantObject represents authorization, revokeObject represents withdraw, alterRole represents modify account type.
                     */
                    std::string m_modifyType;
                    bool m_modifyTypeHasBeenSet;

                    /**
                     * This parameter is required only when ModifyType is revokeObject. when set to true, the permission will be revoked with cascading effect. default false.
                     */
                    bool m_isCascade;
                    bool m_isCascadeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYPRIVILEGE_H_
