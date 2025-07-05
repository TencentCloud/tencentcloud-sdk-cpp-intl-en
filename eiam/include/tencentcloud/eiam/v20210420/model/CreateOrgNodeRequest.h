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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_CREATEORGNODEREQUEST_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_CREATEORGNODEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateOrgNode request structure.
                */
                class CreateOrgNodeRequest : public AbstractModel
                {
                public:
                    CreateOrgNodeRequest();
                    ~CreateOrgNodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Organization node name, which can contain up to 64 characters.
                     * @return DisplayName Organization node name, which can contain up to 64 characters.
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置Organization node name, which can contain up to 64 characters.
                     * @param _displayName Organization node name, which can contain up to 64 characters.
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
                     * 获取Parent organization node ID. If this parameter is left empty, the organization will be created under the root organization node by default.
                     * @return ParentOrgNodeId Parent organization node ID. If this parameter is left empty, the organization will be created under the root organization node by default.
                     * 
                     */
                    std::string GetParentOrgNodeId() const;

                    /**
                     * 设置Parent organization node ID. If this parameter is left empty, the organization will be created under the root organization node by default.
                     * @param _parentOrgNodeId Parent organization node ID. If this parameter is left empty, the organization will be created under the root organization node by default.
                     * 
                     */
                    void SetParentOrgNodeId(const std::string& _parentOrgNodeId);

                    /**
                     * 判断参数 ParentOrgNodeId 是否已赋值
                     * @return ParentOrgNodeId 是否已赋值
                     * 
                     */
                    bool ParentOrgNodeIdHasBeenSet() const;

                    /**
                     * 获取Organization node description.
                     * @return Description Organization node description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Organization node description.
                     * @param _description Organization node description.
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
                     * 获取External ID of the organization node, which is optional and customizable. If this parameter is specified, its uniqueness will be verified.
                     * @return CustomizedOrgNodeId External ID of the organization node, which is optional and customizable. If this parameter is specified, its uniqueness will be verified.
                     * 
                     */
                    std::string GetCustomizedOrgNodeId() const;

                    /**
                     * 设置External ID of the organization node, which is optional and customizable. If this parameter is specified, its uniqueness will be verified.
                     * @param _customizedOrgNodeId External ID of the organization node, which is optional and customizable. If this parameter is specified, its uniqueness will be verified.
                     * 
                     */
                    void SetCustomizedOrgNodeId(const std::string& _customizedOrgNodeId);

                    /**
                     * 判断参数 CustomizedOrgNodeId 是否已赋值
                     * @return CustomizedOrgNodeId 是否已赋值
                     * 
                     */
                    bool CustomizedOrgNodeIdHasBeenSet() const;

                private:

                    /**
                     * Organization node name, which can contain up to 64 characters.
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * Parent organization node ID. If this parameter is left empty, the organization will be created under the root organization node by default.
                     */
                    std::string m_parentOrgNodeId;
                    bool m_parentOrgNodeIdHasBeenSet;

                    /**
                     * Organization node description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * External ID of the organization node, which is optional and customizable. If this parameter is specified, its uniqueness will be verified.
                     */
                    std::string m_customizedOrgNodeId;
                    bool m_customizedOrgNodeIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_CREATEORGNODEREQUEST_H_
