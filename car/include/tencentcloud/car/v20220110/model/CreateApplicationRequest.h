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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_CREATEAPPLICATIONREQUEST_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_CREATEAPPLICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Car
    {
        namespace V20220110
        {
            namespace Model
            {
                /**
                * CreateApplication request structure.
                */
                class CreateApplicationRequest : public AbstractModel
                {
                public:
                    CreateApplicationRequest();
                    ~CreateApplicationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application name.
                     * @return ApplicationName Application name.
                     * 
                     */
                    std::string GetApplicationName() const;

                    /**
                     * 设置Application name.
                     * @param _applicationName Application name.
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
                     * 获取Application type (Application3D: cloud 3D; ApplicationXR: cloud XR; ApplicationAPK: cloud APK).
                     * @return ApplicationType Application type (Application3D: cloud 3D; ApplicationXR: cloud XR; ApplicationAPK: cloud APK).
                     * 
                     */
                    std::string GetApplicationType() const;

                    /**
                     * 设置Application type (Application3D: cloud 3D; ApplicationXR: cloud XR; ApplicationAPK: cloud APK).
                     * @param _applicationType Application type (Application3D: cloud 3D; ApplicationXR: cloud XR; ApplicationAPK: cloud APK).
                     * 
                     */
                    void SetApplicationType(const std::string& _applicationType);

                    /**
                     * 判断参数 ApplicationType 是否已赋值
                     * @return ApplicationType 是否已赋值
                     * 
                     */
                    bool ApplicationTypeHasBeenSet() const;

                private:

                    /**
                     * Application name.
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * Application type (Application3D: cloud 3D; ApplicationXR: cloud XR; ApplicationAPK: cloud APK).
                     */
                    std::string m_applicationType;
                    bool m_applicationTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_CREATEAPPLICATIONREQUEST_H_
