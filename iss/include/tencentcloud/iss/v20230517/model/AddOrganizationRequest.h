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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_ADDORGANIZATIONREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_ADDORGANIZATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * AddOrganization request structure.
                */
                class AddOrganizationRequest : public AbstractModel
                {
                public:
                    AddOrganizationRequest();
                    ~AddOrganizationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Organization name. Only Chinese, English, digits, spaces, Chinese and English parentheses, underscores (_), and hyphens (-) are supported. The length cannot exceed 64 characters, and the organization name must be unique.
                     * @return Name Organization name. Only Chinese, English, digits, spaces, Chinese and English parentheses, underscores (_), and hyphens (-) are supported. The length cannot exceed 64 characters, and the organization name must be unique.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Organization name. Only Chinese, English, digits, spaces, Chinese and English parentheses, underscores (_), and hyphens (-) are supported. The length cannot exceed 64 characters, and the organization name must be unique.
                     * @param _name Organization name. Only Chinese, English, digits, spaces, Chinese and English parentheses, underscores (_), and hyphens (-) are supported. The length cannot exceed 64 characters, and the organization name must be unique.
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
                     * 获取Organization parent node ID (obtain from the DescribeOrganization API; enter 0 for the root organization)
                     * @return ParentId Organization parent node ID (obtain from the DescribeOrganization API; enter 0 for the root organization)
                     * 
                     */
                    std::string GetParentId() const;

                    /**
                     * 设置Organization parent node ID (obtain from the DescribeOrganization API; enter 0 for the root organization)
                     * @param _parentId Organization parent node ID (obtain from the DescribeOrganization API; enter 0 for the root organization)
                     * 
                     */
                    void SetParentId(const std::string& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

                private:

                    /**
                     * Organization name. Only Chinese, English, digits, spaces, Chinese and English parentheses, underscores (_), and hyphens (-) are supported. The length cannot exceed 64 characters, and the organization name must be unique.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Organization parent node ID (obtain from the DescribeOrganization API; enter 0 for the root organization)
                     */
                    std::string m_parentId;
                    bool m_parentIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_ADDORGANIZATIONREQUEST_H_
