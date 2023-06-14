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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_APPLICATIONAUTHORIZATIONINFO_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_APPLICATIONAUTHORIZATIONINFO_H_

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
                * Application information list.
                */
                class ApplicationAuthorizationInfo : public AbstractModel
                {
                public:
                    ApplicationAuthorizationInfo();
                    ~ApplicationAuthorizationInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取List of the user's accounts under authorized applications
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationAccounts List of the user's accounts under authorized applications
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetApplicationAccounts() const;

                    /**
                     * 设置List of the user's accounts under authorized applications
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _applicationAccounts List of the user's accounts under authorized applications
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApplicationAccounts(const std::vector<std::string>& _applicationAccounts);

                    /**
                     * 判断参数 ApplicationAccounts 是否已赋值
                     * @return ApplicationAccounts 是否已赋值
                     * 
                     */
                    bool ApplicationAccountsHasBeenSet() const;

                    /**
                     * 获取Application ID, which is globally unique.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationId Application ID, which is globally unique.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置Application ID, which is globally unique.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _applicationId Application ID, which is globally unique.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取List of IDs of the user's user groups and organization nodes that have access to the application.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return InheritedForm List of IDs of the user's user groups and organization nodes that have access to the application.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    InheritedForm GetInheritedForm() const;

                    /**
                     * 设置List of IDs of the user's user groups and organization nodes that have access to the application.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _inheritedForm List of IDs of the user's user groups and organization nodes that have access to the application.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetInheritedForm(const InheritedForm& _inheritedForm);

                    /**
                     * 判断参数 InheritedForm 是否已赋值
                     * @return InheritedForm 是否已赋值
                     * 
                     */
                    bool InheritedFormHasBeenSet() const;

                    /**
                     * 获取Application name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ApplicationName Application name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置Application name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _applicationName Application name.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetApplicationName(const std::string& _applicationName);

                    /**
                     * 判断参数 ApplicationName 是否已赋值
                     * @return ApplicationName 是否已赋值
                     * 
                     */
                    bool ApplicationNameHasBeenSet() const;

                    /**
                     * 获取Application creation time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CreatedDate Application creation time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreatedDate() const;

                    /**
                     * 设置Application creation time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _createdDate Application creation time.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCreatedDate(const std::string& _createdDate);

                    /**
                     * 判断参数 CreatedDate 是否已赋值
                     * @return CreatedDate 是否已赋值
                     * 
                     */
                    bool CreatedDateHasBeenSet() const;

                private:

                    /**
                     * List of the user's accounts under authorized applications
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_applicationAccounts;
                    bool m_applicationAccountsHasBeenSet;

                    /**
                     * Application ID, which is globally unique.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * List of IDs of the user's user groups and organization nodes that have access to the application.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    InheritedForm m_inheritedForm;
                    bool m_inheritedFormHasBeenSet;

                    /**
                     * Application name.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * Application creation time.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createdDate;
                    bool m_createdDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_APPLICATIONAUTHORIZATIONINFO_H_
