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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_PRIVILEGEINFO_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_PRIVILEGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/PrivilegeResource.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Permission information
                */
                class PrivilegeInfo : public AbstractModel
                {
                public:
                    PrivilegeInfo();
                    ~PrivilegeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Permission name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Permission name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Permission name.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Permission name.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Display name of the permission.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DisplayName Display name of the permission.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置Display name of the permission.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _displayName Display name of the permission.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取Permission description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Permission description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Permission description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _description Permission description.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Whether read permission.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsRead Whether read permission.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsRead() const;

                    /**
                     * 设置Whether read permission.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isRead Whether read permission.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsRead(const bool& _isRead);

                    /**
                     * 判断参数 IsRead 是否已赋值
                     * @return IsRead 是否已赋值
                     * 
                     */
                    bool IsReadHasBeenSet() const;

                    /**
                     * 获取Whether it is a management permission.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsManage Whether it is a management permission.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsManage() const;

                    /**
                     * 设置Whether it is a management permission.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isManage Whether it is a management permission.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsManage(const bool& _isManage);

                    /**
                     * 判断参数 IsManage 是否已赋值
                     * @return IsManage 是否已赋值
                     * 
                     */
                    bool IsManageHasBeenSet() const;

                    /**
                     * 获取Checks whether the permission is available. used when checking permissions.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Granted Checks whether the permission is available. used when checking permissions.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetGranted() const;

                    /**
                     * 设置Checks whether the permission is available. used when checking permissions.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _granted Checks whether the permission is available. used when checking permissions.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetGranted(const bool& _granted);

                    /**
                     * 判断参数 Granted 是否已赋值
                     * @return Granted 是否已赋值
                     * 
                     */
                    bool GrantedHasBeenSet() const;

                    /**
                     * 获取Specifies the resource it inherits from. used when querying permission details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InheritedObject Specifies the resource it inherits from. used when querying permission details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    PrivilegeResource GetInheritedObject() const;

                    /**
                     * 设置Specifies the resource it inherits from. used when querying permission details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _inheritedObject Specifies the resource it inherits from. used when querying permission details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInheritedObject(const PrivilegeResource& _inheritedObject);

                    /**
                     * 判断参数 InheritedObject 是否已赋值
                     * @return InheritedObject 是否已赋值
                     * 
                     */
                    bool InheritedObjectHasBeenSet() const;

                    /**
                     * 获取Not inheritable, used when querying permission details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Inherited Not inheritable, used when querying permission details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetInherited() const;

                    /**
                     * 设置Not inheritable, used when querying permission details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _inherited Not inheritable, used when querying permission details.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInherited(const bool& _inherited);

                    /**
                     * 判断参数 Inherited 是否已赋值
                     * @return Inherited 是否已赋值
                     * 
                     */
                    bool InheritedHasBeenSet() const;

                    /**
                     * 获取Whether edit permission.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsEdit Whether edit permission.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsEdit() const;

                    /**
                     * 设置Whether edit permission.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isEdit Whether edit permission.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsEdit(const bool& _isEdit);

                    /**
                     * 判断参数 IsEdit 是否已赋值
                     * @return IsEdit 是否已赋值
                     * 
                     */
                    bool IsEditHasBeenSet() const;

                    /**
                     * 获取Whether metadata permissions (displayed on the front-end).
                     * @return IsMetaDataPermission Whether metadata permissions (displayed on the front-end).
                     * 
                     */
                    bool GetIsMetaDataPermission() const;

                    /**
                     * 设置Whether metadata permissions (displayed on the front-end).
                     * @param _isMetaDataPermission Whether metadata permissions (displayed on the front-end).
                     * 
                     */
                    void SetIsMetaDataPermission(const bool& _isMetaDataPermission);

                    /**
                     * 判断参数 IsMetaDataPermission 是否已赋值
                     * @return IsMetaDataPermission 是否已赋值
                     * 
                     */
                    bool IsMetaDataPermissionHasBeenSet() const;

                    /**
                     * 获取CatalogID (deprecated).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CatalogID CatalogID (deprecated).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCatalogID() const;

                    /**
                     * 设置CatalogID (deprecated).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _catalogID CatalogID (deprecated).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCatalogID(const std::string& _catalogID);

                    /**
                     * 判断参数 CatalogID 是否已赋值
                     * @return CatalogID 是否已赋值
                     * 
                     */
                    bool CatalogIDHasBeenSet() const;

                    /**
                     * 获取catalog name (deprecated).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CatalogName catalog name (deprecated).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCatalogName() const;

                    /**
                     * 设置catalog name (deprecated).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _catalogName catalog name (deprecated).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCatalogName(const std::string& _catalogName);

                    /**
                     * 判断参数 CatalogName 是否已赋值
                     * @return CatalogName 是否已赋值
                     * 
                     */
                    bool CatalogNameHasBeenSet() const;

                    /**
                     * 获取Space ID (deprecated).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WorkSpaceID Space ID (deprecated).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWorkSpaceID() const;

                    /**
                     * 设置Space ID (deprecated).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _workSpaceID Space ID (deprecated).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWorkSpaceID(const std::string& _workSpaceID);

                    /**
                     * 判断参数 WorkSpaceID 是否已赋值
                     * @return WorkSpaceID 是否已赋值
                     * 
                     */
                    bool WorkSpaceIDHasBeenSet() const;

                    /**
                     * 获取Space name (deprecated).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WorkSpaceName Space name (deprecated).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetWorkSpaceName() const;

                    /**
                     * 设置Space name (deprecated).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _workSpaceName Space name (deprecated).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWorkSpaceName(const std::string& _workSpaceName);

                    /**
                     * 判断参数 WorkSpaceName 是否已赋值
                     * @return WorkSpaceName 是否已赋值
                     * 
                     */
                    bool WorkSpaceNameHasBeenSet() const;

                private:

                    /**
                     * Permission name.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Display name of the permission.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * Permission description.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Whether read permission.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isRead;
                    bool m_isReadHasBeenSet;

                    /**
                     * Whether it is a management permission.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isManage;
                    bool m_isManageHasBeenSet;

                    /**
                     * Checks whether the permission is available. used when checking permissions.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_granted;
                    bool m_grantedHasBeenSet;

                    /**
                     * Specifies the resource it inherits from. used when querying permission details.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    PrivilegeResource m_inheritedObject;
                    bool m_inheritedObjectHasBeenSet;

                    /**
                     * Not inheritable, used when querying permission details.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_inherited;
                    bool m_inheritedHasBeenSet;

                    /**
                     * Whether edit permission.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isEdit;
                    bool m_isEditHasBeenSet;

                    /**
                     * Whether metadata permissions (displayed on the front-end).
                     */
                    bool m_isMetaDataPermission;
                    bool m_isMetaDataPermissionHasBeenSet;

                    /**
                     * CatalogID (deprecated).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_catalogID;
                    bool m_catalogIDHasBeenSet;

                    /**
                     * catalog name (deprecated).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_catalogName;
                    bool m_catalogNameHasBeenSet;

                    /**
                     * Space ID (deprecated).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_workSpaceID;
                    bool m_workSpaceIDHasBeenSet;

                    /**
                     * Space name (deprecated).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_workSpaceName;
                    bool m_workSpaceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_PRIVILEGEINFO_H_
