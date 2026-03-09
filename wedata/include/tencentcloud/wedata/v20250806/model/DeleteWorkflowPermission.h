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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_DELETEWORKFLOWPERMISSION_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_DELETEWORKFLOWPERMISSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * Data development authorization information to delete.
                */
                class DeleteWorkflowPermission : public AbstractModel
                {
                public:
                    DeleteWorkflowPermission();
                    ~DeleteWorkflowPermission() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Target type to delete (user: user, role: role, group: group).
                     * @return PermissionTargetType Target type to delete (user: user, role: role, group: group).
                     * 
                     */
                    std::string GetPermissionTargetType() const;

                    /**
                     * 设置Target type to delete (user: user, role: role, group: group).
                     * @param _permissionTargetType Target type to delete (user: user, role: role, group: group).
                     * 
                     */
                    void SetPermissionTargetType(const std::string& _permissionTargetType);

                    /**
                     * 判断参数 PermissionTargetType 是否已赋值
                     * @return PermissionTargetType 是否已赋值
                     * 
                     */
                    bool PermissionTargetTypeHasBeenSet() const;

                    /**
                     * 获取Authorization target id (userId/roleId) to delete.
                     * @return PermissionTargetId Authorization target id (userId/roleId) to delete.
                     * 
                     */
                    std::string GetPermissionTargetId() const;

                    /**
                     * 设置Authorization target id (userId/roleId) to delete.
                     * @param _permissionTargetId Authorization target id (userId/roleId) to delete.
                     * 
                     */
                    void SetPermissionTargetId(const std::string& _permissionTargetId);

                    /**
                     * 判断参数 PermissionTargetId 是否已赋值
                     * @return PermissionTargetId 是否已赋值
                     * 
                     */
                    bool PermissionTargetIdHasBeenSet() const;

                    /**
                     * 获取Type array of authorization permissions to delete (CAN_VIEW/CAN_RUN/CAN_EDIT/CAN_MANAGE, currently only support CAN_MANAGE).
                     * @return PermissionTypeList Type array of authorization permissions to delete (CAN_VIEW/CAN_RUN/CAN_EDIT/CAN_MANAGE, currently only support CAN_MANAGE).
                     * 
                     */
                    std::vector<std::string> GetPermissionTypeList() const;

                    /**
                     * 设置Type array of authorization permissions to delete (CAN_VIEW/CAN_RUN/CAN_EDIT/CAN_MANAGE, currently only support CAN_MANAGE).
                     * @param _permissionTypeList Type array of authorization permissions to delete (CAN_VIEW/CAN_RUN/CAN_EDIT/CAN_MANAGE, currently only support CAN_MANAGE).
                     * 
                     */
                    void SetPermissionTypeList(const std::vector<std::string>& _permissionTypeList);

                    /**
                     * 判断参数 PermissionTypeList 是否已赋值
                     * @return PermissionTypeList 是否已赋值
                     * 
                     */
                    bool PermissionTypeListHasBeenSet() const;

                private:

                    /**
                     * Target type to delete (user: user, role: role, group: group).
                     */
                    std::string m_permissionTargetType;
                    bool m_permissionTargetTypeHasBeenSet;

                    /**
                     * Authorization target id (userId/roleId) to delete.
                     */
                    std::string m_permissionTargetId;
                    bool m_permissionTargetIdHasBeenSet;

                    /**
                     * Type array of authorization permissions to delete (CAN_VIEW/CAN_RUN/CAN_EDIT/CAN_MANAGE, currently only support CAN_MANAGE).
                     */
                    std::vector<std::string> m_permissionTypeList;
                    bool m_permissionTypeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_DELETEWORKFLOWPERMISSION_H_
