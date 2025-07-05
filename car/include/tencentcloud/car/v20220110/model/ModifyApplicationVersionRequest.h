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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_MODIFYAPPLICATIONVERSIONREQUEST_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_MODIFYAPPLICATIONVERSIONREQUEST_H_

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
                * ModifyApplicationVersion request structure.
                */
                class ModifyApplicationVersionRequest : public AbstractModel
                {
                public:
                    ModifyApplicationVersionRequest();
                    ~ModifyApplicationVersionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Application ID.
                     * @return ApplicationId Application ID.
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置Application ID.
                     * @param _applicationId Application ID.
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
                     * 获取Application version ID.
                     * @return ApplicationVersionId Application version ID.
                     * 
                     */
                    std::string GetApplicationVersionId() const;

                    /**
                     * 设置Application version ID.
                     * @param _applicationVersionId Application version ID.
                     * 
                     */
                    void SetApplicationVersionId(const std::string& _applicationVersionId);

                    /**
                     * 判断参数 ApplicationVersionId 是否已赋值
                     * @return ApplicationVersionId 是否已赋值
                     * 
                     */
                    bool ApplicationVersionIdHasBeenSet() const;

                    /**
                     * 获取Application version name.
                     * @return ApplicationVersionName Application version name.
                     * 
                     */
                    std::string GetApplicationVersionName() const;

                    /**
                     * 设置Application version name.
                     * @param _applicationVersionName Application version name.
                     * 
                     */
                    void SetApplicationVersionName(const std::string& _applicationVersionName);

                    /**
                     * 判断参数 ApplicationVersionName 是否已赋值
                     * @return ApplicationVersionName 是否已赋值
                     * 
                     */
                    bool ApplicationVersionNameHasBeenSet() const;

                private:

                    /**
                     * Application ID.
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Application version ID.
                     */
                    std::string m_applicationVersionId;
                    bool m_applicationVersionIdHasBeenSet;

                    /**
                     * Application version name.
                     */
                    std::string m_applicationVersionName;
                    bool m_applicationVersionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_MODIFYAPPLICATIONVERSIONREQUEST_H_
