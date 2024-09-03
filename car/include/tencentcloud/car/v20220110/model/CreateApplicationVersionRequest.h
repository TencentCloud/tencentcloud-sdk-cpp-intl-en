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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_CREATEAPPLICATIONVERSIONREQUEST_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_CREATEAPPLICATIONVERSIONREQUEST_H_

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
                * CreateApplicationVersion request structure.
                */
                class CreateApplicationVersionRequest : public AbstractModel
                {
                public:
                    CreateApplicationVersionRequest();
                    ~CreateApplicationVersionRequest() = default;
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
                     * 获取Application file name (desktop applications should be files in zip/rar/7z format, and mobile applications should be files in apk format).
                     * @return ApplicationFileName Application file name (desktop applications should be files in zip/rar/7z format, and mobile applications should be files in apk format).
                     * 
                     */
                    std::string GetApplicationFileName() const;

                    /**
                     * 设置Application file name (desktop applications should be files in zip/rar/7z format, and mobile applications should be files in apk format).
                     * @param _applicationFileName Application file name (desktop applications should be files in zip/rar/7z format, and mobile applications should be files in apk format).
                     * 
                     */
                    void SetApplicationFileName(const std::string& _applicationFileName);

                    /**
                     * 判断参数 ApplicationFileName 是否已赋值
                     * @return ApplicationFileName 是否已赋值
                     * 
                     */
                    bool ApplicationFileNameHasBeenSet() const;

                    /**
                     * 获取Region for application version distribution.
                     * @return ApplicationVersionRegions Region for application version distribution.
                     * 
                     */
                    std::vector<std::string> GetApplicationVersionRegions() const;

                    /**
                     * 设置Region for application version distribution.
                     * @param _applicationVersionRegions Region for application version distribution.
                     * 
                     */
                    void SetApplicationVersionRegions(const std::vector<std::string>& _applicationVersionRegions);

                    /**
                     * 判断参数 ApplicationVersionRegions 是否已赋值
                     * @return ApplicationVersionRegions 是否已赋值
                     * 
                     */
                    bool ApplicationVersionRegionsHasBeenSet() const;

                    /**
                     * 获取Application update method.
                     * @return ApplicationVersionUpdateMode Application update method.
                     * 
                     */
                    std::string GetApplicationVersionUpdateMode() const;

                    /**
                     * 设置Application update method.
                     * @param _applicationVersionUpdateMode Application update method.
                     * 
                     */
                    void SetApplicationVersionUpdateMode(const std::string& _applicationVersionUpdateMode);

                    /**
                     * 判断参数 ApplicationVersionUpdateMode 是否已赋值
                     * @return ApplicationVersionUpdateMode 是否已赋值
                     * 
                     */
                    bool ApplicationVersionUpdateModeHasBeenSet() const;

                private:

                    /**
                     * Application ID.
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Application file name (desktop applications should be files in zip/rar/7z format, and mobile applications should be files in apk format).
                     */
                    std::string m_applicationFileName;
                    bool m_applicationFileNameHasBeenSet;

                    /**
                     * Region for application version distribution.
                     */
                    std::vector<std::string> m_applicationVersionRegions;
                    bool m_applicationVersionRegionsHasBeenSet;

                    /**
                     * Application update method.
                     */
                    std::string m_applicationVersionUpdateMode;
                    bool m_applicationVersionUpdateModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_CREATEAPPLICATIONVERSIONREQUEST_H_
