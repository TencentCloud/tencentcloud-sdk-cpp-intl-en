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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATEUSERROLEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATEUSERROLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/CosPermission.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CreateUserRole request structure.
                */
                class CreateUserRoleRequest : public AbstractModel
                {
                public:
                    CreateUserRoleRequest();
                    ~CreateUserRoleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取RoleArn info
                     * @return Arn RoleArn info
                     * 
                     */
                    std::string GetArn() const;

                    /**
                     * 设置RoleArn info
                     * @param _arn RoleArn info
                     * 
                     */
                    void SetArn(const std::string& _arn);

                    /**
                     * 判断参数 Arn 是否已赋值
                     * @return Arn 是否已赋值
                     * 
                     */
                    bool ArnHasBeenSet() const;

                    /**
                     * 获取Role description
                     * @return Desc Role description
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置Role description
                     * @param _desc Role description
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取Role name
                     * @return Name Role name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Role name
                     * @param _name Role name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Authorized path list in cos
                     * @return CosPermissionList Authorized path list in cos
                     * 
                     */
                    std::vector<CosPermission> GetCosPermissionList() const;

                    /**
                     * 设置Authorized path list in cos
                     * @param _cosPermissionList Authorized path list in cos
                     * 
                     */
                    void SetCosPermissionList(const std::vector<CosPermission>& _cosPermissionList);

                    /**
                     * 判断参数 CosPermissionList 是否已赋值
                     * @return CosPermissionList 是否已赋值
                     * 
                     */
                    bool CosPermissionListHasBeenSet() const;

                    /**
                     * 获取cam policy json
                     * @return PermissionJson cam policy json
                     * 
                     */
                    std::string GetPermissionJson() const;

                    /**
                     * 设置cam policy json
                     * @param _permissionJson cam policy json
                     * 
                     */
                    void SetPermissionJson(const std::string& _permissionJson);

                    /**
                     * 判断参数 PermissionJson 是否已赋值
                     * @return PermissionJson 是否已赋值
                     * 
                     */
                    bool PermissionJsonHasBeenSet() const;

                    /**
                     * 获取Whether resident is set to: 1 non-resident (default), 2 resident (only able to set one resident).
                     * @return IsDefault Whether resident is set to: 1 non-resident (default), 2 resident (only able to set one resident).
                     * 
                     */
                    int64_t GetIsDefault() const;

                    /**
                     * 设置Whether resident is set to: 1 non-resident (default), 2 resident (only able to set one resident).
                     * @param _isDefault Whether resident is set to: 1 non-resident (default), 2 resident (only able to set one resident).
                     * 
                     */
                    void SetIsDefault(const int64_t& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                private:

                    /**
                     * RoleArn info
                     */
                    std::string m_arn;
                    bool m_arnHasBeenSet;

                    /**
                     * Role description
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * Role name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Authorized path list in cos
                     */
                    std::vector<CosPermission> m_cosPermissionList;
                    bool m_cosPermissionListHasBeenSet;

                    /**
                     * cam policy json
                     */
                    std::string m_permissionJson;
                    bool m_permissionJsonHasBeenSet;

                    /**
                     * Whether resident is set to: 1 non-resident (default), 2 resident (only able to set one resident).
                     */
                    int64_t m_isDefault;
                    bool m_isDefaultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATEUSERROLEREQUEST_H_
