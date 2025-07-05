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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_INHERITEDFORM_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_INHERITEDFORM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * Application information list.
                */
                class InheritedForm : public AbstractModel
                {
                public:
                    InheritedForm();
                    ~InheritedForm() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of IDs of the user's user groups.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UserGroupIds List of IDs of the user's user groups.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetUserGroupIds() const;

                    /**
                     * 设置List of IDs of the user's user groups.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _userGroupIds List of IDs of the user's user groups.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUserGroupIds(const std::vector<std::string>& _userGroupIds);

                    /**
                     * 判断参数 UserGroupIds 是否已赋值
                     * @return UserGroupIds 是否已赋值
                     * 
                     */
                    bool UserGroupIdsHasBeenSet() const;

                    /**
                     * 获取List of IDs of the user's organization nodes.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return OrgNodeIds List of IDs of the user's organization nodes.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetOrgNodeIds() const;

                    /**
                     * 设置List of IDs of the user's organization nodes.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _orgNodeIds List of IDs of the user's organization nodes.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetOrgNodeIds(const std::vector<std::string>& _orgNodeIds);

                    /**
                     * 判断参数 OrgNodeIds 是否已赋值
                     * @return OrgNodeIds 是否已赋值
                     * 
                     */
                    bool OrgNodeIdsHasBeenSet() const;

                private:

                    /**
                     * List of IDs of the user's user groups.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_userGroupIds;
                    bool m_userGroupIdsHasBeenSet;

                    /**
                     * List of IDs of the user's organization nodes.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_orgNodeIds;
                    bool m_orgNodeIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_INHERITEDFORM_H_
