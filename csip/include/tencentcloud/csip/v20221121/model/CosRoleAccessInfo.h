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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COSROLEACCESSINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COSROLEACCESSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * List of roles associated with the Cos bucket
                */
                class CosRoleAccessInfo : public AbstractModel
                {
                public:
                    CosRoleAccessInfo();
                    ~CosRoleAccessInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Role ID
                     * @return RoleId Role ID
                     * 
                     */
                    std::string GetRoleId() const;

                    /**
                     * 设置Role ID
                     * @param _roleId Role ID
                     * 
                     */
                    void SetRoleId(const std::string& _roleId);

                    /**
                     * 判断参数 RoleId 是否已赋值
                     * @return RoleId 是否已赋值
                     * 
                     */
                    bool RoleIdHasBeenSet() const;

                    /**
                     * 获取Role name.
                     * @return RoleName Role name.
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置Role name.
                     * @param _roleName Role name.
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取Role description
                     * @return RoleDescription Role description
                     * 
                     */
                    std::string GetRoleDescription() const;

                    /**
                     * 设置Role description
                     * @param _roleDescription Role description
                     * 
                     */
                    void SetRoleDescription(const std::string& _roleDescription);

                    /**
                     * 判断参数 RoleDescription 是否已赋值
                     * @return RoleDescription 是否已赋值
                     * 
                     */
                    bool RoleDescriptionHasBeenSet() const;

                    /**
                     * 获取Accessible permission count
                     * @return PermissionCount Accessible permission count
                     * 
                     */
                    uint64_t GetPermissionCount() const;

                    /**
                     * 设置Accessible permission count
                     * @param _permissionCount Accessible permission count
                     * 
                     */
                    void SetPermissionCount(const uint64_t& _permissionCount);

                    /**
                     * 判断参数 PermissionCount 是否已赋值
                     * @return PermissionCount 是否已赋值
                     * 
                     */
                    bool PermissionCountHasBeenSet() const;

                    /**
                     * 获取Policy creation time.
                     * @return CreateTime Policy creation time.
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置Policy creation time.
                     * @param _createTime Policy creation time.
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * Role ID
                     */
                    std::string m_roleId;
                    bool m_roleIdHasBeenSet;

                    /**
                     * Role name.
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * Role description
                     */
                    std::string m_roleDescription;
                    bool m_roleDescriptionHasBeenSet;

                    /**
                     * Accessible permission count
                     */
                    uint64_t m_permissionCount;
                    bool m_permissionCountHasBeenSet;

                    /**
                     * Policy creation time.
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COSROLEACCESSINFO_H_
