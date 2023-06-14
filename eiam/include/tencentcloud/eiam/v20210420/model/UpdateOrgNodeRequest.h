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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_UPDATEORGNODEREQUEST_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_UPDATEORGNODEREQUEST_H_

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
                * UpdateOrgNode request structure.
                */
                class UpdateOrgNodeRequest : public AbstractModel
                {
                public:
                    UpdateOrgNodeRequest();
                    ~UpdateOrgNodeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Organization node ID, which is globally unique.
                     * @return OrgNodeId Organization node ID, which is globally unique.
                     * 
                     */
                    std::string GetOrgNodeId() const;

                    /**
                     * 设置Organization node ID, which is globally unique.
                     * @param _orgNodeId Organization node ID, which is globally unique.
                     * 
                     */
                    void SetOrgNodeId(const std::string& _orgNodeId);

                    /**
                     * 判断参数 OrgNodeId 是否已赋值
                     * @return OrgNodeId 是否已赋值
                     * 
                     */
                    bool OrgNodeIdHasBeenSet() const;

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
                     * Organization node ID, which is globally unique.
                     */
                    std::string m_orgNodeId;
                    bool m_orgNodeIdHasBeenSet;

                    /**
                     * Organization node name, which can contain up to 64 characters.
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

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

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_UPDATEORGNODEREQUEST_H_
