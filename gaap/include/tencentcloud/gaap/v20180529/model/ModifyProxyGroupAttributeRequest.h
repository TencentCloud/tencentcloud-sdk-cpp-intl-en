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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYPROXYGROUPATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYPROXYGROUPATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * ModifyProxyGroupAttribute request structure.
                */
                class ModifyProxyGroupAttributeRequest : public AbstractModel
                {
                public:
                    ModifyProxyGroupAttributeRequest();
                    ~ModifyProxyGroupAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the connection group to be modified.
                     * @return GroupId ID of the connection group to be modified.
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置ID of the connection group to be modified.
                     * @param _groupId ID of the connection group to be modified.
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取New connection group name. Up to 30 characters. The extra characters will be truncated.
                     * @return GroupName New connection group name. Up to 30 characters. The extra characters will be truncated.
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置New connection group name. Up to 30 characters. The extra characters will be truncated.
                     * @param _groupName New connection group name. Up to 30 characters. The extra characters will be truncated.
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * ID of the connection group to be modified.
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * New connection group name. Up to 30 characters. The extra characters will be truncated.
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * Project ID
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_MODIFYPROXYGROUPATTRIBUTEREQUEST_H_
