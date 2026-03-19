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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEPOLICYREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * CreatePolicy request structure.
                */
                class CreatePolicyRequest : public AbstractModel
                {
                public:
                    CreatePolicyRequest();
                    ~CreatePolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Policy name.
The length ranges from 1 to 128 characters, and can contain chinese characters, english letters, digits, and underscores (_).
                     * @return Name Policy name.
The length ranges from 1 to 128 characters, and can contain chinese characters, english letters, digits, and underscores (_).
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Policy name.
The length ranges from 1 to 128 characters, and can contain chinese characters, english letters, digits, and underscores (_).
                     * @param _name Policy name.
The length ranges from 1 to 128 characters, and can contain chinese characters, english letters, digits, and underscores (_).
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
                     * 获取Policy content. See the CAM policy syntax.
                     * @return Content Policy content. See the CAM policy syntax.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Policy content. See the CAM policy syntax.
                     * @param _content Policy content. See the CAM policy syntax.
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Policy type. Valid values: SERVICE_CONTROL_POLICY: service control policy; TAG_POLICY: tag policy. The default value is SERVICE_CONTROL_POLICY.
                     * @return Type Policy type. Valid values: SERVICE_CONTROL_POLICY: service control policy; TAG_POLICY: tag policy. The default value is SERVICE_CONTROL_POLICY.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Policy type. Valid values: SERVICE_CONTROL_POLICY: service control policy; TAG_POLICY: tag policy. The default value is SERVICE_CONTROL_POLICY.
                     * @param _type Policy type. Valid values: SERVICE_CONTROL_POLICY: service control policy; TAG_POLICY: tag policy. The default value is SERVICE_CONTROL_POLICY.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Policy description
                     * @return Description Policy description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Policy description
                     * @param _description Policy description
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * Policy name.
The length ranges from 1 to 128 characters, and can contain chinese characters, english letters, digits, and underscores (_).
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Policy content. See the CAM policy syntax.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Policy type. Valid values: SERVICE_CONTROL_POLICY: service control policy; TAG_POLICY: tag policy. The default value is SERVICE_CONTROL_POLICY.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Policy description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEPOLICYREQUEST_H_
