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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_ROLEPRIVILEGE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_ROLEPRIVILEGE_H_

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
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Role permission objects.
                */
                class RolePrivilege : public AbstractModel
                {
                public:
                    RolePrivilege();
                    ~RolePrivilege() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PrivilegeId id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPrivilegeId() const;

                    /**
                     * 设置id
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _privilegeId id
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPrivilegeId(const std::string& _privilegeId);

                    /**
                     * 判断参数 PrivilegeId 是否已赋值
                     * @return PrivilegeId 是否已赋值
                     * 
                     */
                    bool PrivilegeIdHasBeenSet() const;

                    /**
                     * 获取Name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return PrivilegeName Name

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetPrivilegeName() const;

                    /**
                     * 设置Name

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _privilegeName Name

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetPrivilegeName(const std::string& _privilegeName);

                    /**
                     * 判断参数 PrivilegeName 是否已赋值
                     * @return PrivilegeName 是否已赋值
                     * 
                     */
                    bool PrivilegeNameHasBeenSet() const;

                    /**
                     * 获取Path

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RestPath Path

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRestPath() const;

                    /**
                     * 设置Path

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _restPath Path

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRestPath(const std::string& _restPath);

                    /**
                     * 判断参数 RestPath 是否已赋值
                     * @return RestPath 是否已赋值
                     * 
                     */
                    bool RestPathHasBeenSet() const;

                    /**
                     * 获取Method.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RestMethod Method.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRestMethod() const;

                    /**
                     * 设置Method.

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _restMethod Method.

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRestMethod(const std::string& _restMethod);

                    /**
                     * 判断参数 RestMethod 是否已赋值
                     * @return RestMethod 是否已赋值
                     * 
                     */
                    bool RestMethodHasBeenSet() const;

                    /**
                     * 获取Description

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description Description

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Description

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _description Description

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
                     * 获取Module ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ModuleId Module ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetModuleId() const;

                    /**
                     * 设置Module ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _moduleId Module ID

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetModuleId(const std::string& _moduleId);

                    /**
                     * 判断参数 ModuleId 是否已赋值
                     * @return ModuleId 是否已赋值
                     * 
                     */
                    bool ModuleIdHasBeenSet() const;

                    /**
                     * 获取Permission type: N, R, RW, RWD.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type Permission type: N, R, RW, RWD.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Permission type: N, R, RW, RWD.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _type Permission type: N, R, RW, RWD.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * id
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_privilegeId;
                    bool m_privilegeIdHasBeenSet;

                    /**
                     * Name

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_privilegeName;
                    bool m_privilegeNameHasBeenSet;

                    /**
                     * Path

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_restPath;
                    bool m_restPathHasBeenSet;

                    /**
                     * Method.

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_restMethod;
                    bool m_restMethodHasBeenSet;

                    /**
                     * Description

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Module ID

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_moduleId;
                    bool m_moduleIdHasBeenSet;

                    /**
                     * Permission type: N, R, RW, RWD.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_ROLEPRIVILEGE_H_
