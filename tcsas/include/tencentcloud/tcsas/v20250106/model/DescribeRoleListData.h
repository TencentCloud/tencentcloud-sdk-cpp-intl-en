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

#ifndef TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEROLELISTDATA_H_
#define TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEROLELISTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcsas
    {
        namespace V20250106
        {
            namespace Model
            {
                /**
                * Role management list
                */
                class DescribeRoleListData : public AbstractModel
                {
                public:
                    DescribeRoleListData();
                    ~DescribeRoleListData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Role ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RoleId Role ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRoleId() const;

                    /**
                     * 设置Role ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _roleId Role ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRoleId(const int64_t& _roleId);

                    /**
                     * 判断参数 RoleId 是否已赋值
                     * @return RoleId 是否已赋值
                     * 
                     */
                    bool RoleIdHasBeenSet() const;

                    /**
                     * 获取Role name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RoleName Role name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置Role name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _roleName Role name
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Team name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TeamName Team name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTeamName() const;

                    /**
                     * 设置Team name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _teamName Team name
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTeamName(const std::string& _teamName);

                    /**
                     * 判断参数 TeamName 是否已赋值
                     * @return TeamName 是否已赋值
                     * 
                     */
                    bool TeamNameHasBeenSet() const;

                    /**
                     * 获取Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreateTime Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _createTime Creation time
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Role type 1-Preset role 2-Custom role
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RoleType Role type 1-Preset role 2-Custom role
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRoleType() const;

                    /**
                     * 设置Role type 1-Preset role 2-Custom role
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _roleType Role type 1-Preset role 2-Custom role
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRoleType(const int64_t& _roleType);

                    /**
                     * 判断参数 RoleType 是否已赋值
                     * @return RoleType 是否已赋值
                     * 
                     */
                    bool RoleTypeHasBeenSet() const;

                private:

                    /**
                     * Role ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_roleId;
                    bool m_roleIdHasBeenSet;

                    /**
                     * Role name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * Team name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_teamName;
                    bool m_teamNameHasBeenSet;

                    /**
                     * Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Role type 1-Preset role 2-Custom role
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_roleType;
                    bool m_roleTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSAS_V20250106_MODEL_DESCRIBEROLELISTDATA_H_
