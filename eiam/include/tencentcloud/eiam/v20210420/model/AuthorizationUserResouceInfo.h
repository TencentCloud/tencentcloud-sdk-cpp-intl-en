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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_AUTHORIZATIONUSERRESOUCEINFO_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_AUTHORIZATIONUSERRESOUCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eiam/v20210420/model/InheritedForm.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * Returned list of eligible user data
                */
                class AuthorizationUserResouceInfo : public AbstractModel
                {
                public:
                    AuthorizationUserResouceInfo();
                    ~AuthorizationUserResouceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Resource ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ResourceId Resource ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Resource ID
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ResourceId Resource ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取Resource type
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ResourceType Resource type
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置Resource type
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ResourceType Resource type
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取Authorized resource
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Resource Authorized resource
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetResource() const;

                    /**
                     * 设置Authorized resource
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Resource Authorized resource
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetResource(const std::string& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取Inheritance relationship
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return InheritedForm Inheritance relationship
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    InheritedForm GetInheritedForm() const;

                    /**
                     * 设置Inheritance relationship
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param InheritedForm Inheritance relationship
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInheritedForm(const InheritedForm& _inheritedForm);

                    /**
                     * 判断参数 InheritedForm 是否已赋值
                     * @return InheritedForm 是否已赋值
                     */
                    bool InheritedFormHasBeenSet() const;

                    /**
                     * 获取Application account
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationAccounts Application account
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetApplicationAccounts() const;

                    /**
                     * 设置Application account
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ApplicationAccounts Application account
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetApplicationAccounts(const std::vector<std::string>& _applicationAccounts);

                    /**
                     * 判断参数 ApplicationAccounts 是否已赋值
                     * @return ApplicationAccounts 是否已赋值
                     */
                    bool ApplicationAccountsHasBeenSet() const;

                    /**
                     * 获取Resource name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ResourceName Resource name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置Resource name
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param ResourceName Resource name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     */
                    bool ResourceNameHasBeenSet() const;

                private:

                    /**
                     * Resource ID
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Resource type
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * Authorized resource
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * Inheritance relationship
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    InheritedForm m_inheritedForm;
                    bool m_inheritedFormHasBeenSet;

                    /**
                     * Application account
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_applicationAccounts;
                    bool m_applicationAccountsHasBeenSet;

                    /**
                     * Resource name
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_AUTHORIZATIONUSERRESOUCEINFO_H_
