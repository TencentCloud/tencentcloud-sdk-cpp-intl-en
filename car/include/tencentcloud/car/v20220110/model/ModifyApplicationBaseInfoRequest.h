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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_MODIFYAPPLICATIONBASEINFOREQUEST_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_MODIFYAPPLICATIONBASEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/car/v20220110/model/ApplicationBaseInfo.h>
#include <tencentcloud/car/v20220110/model/UserApplicationStore.h>


namespace TencentCloud
{
    namespace Car
    {
        namespace V20220110
        {
            namespace Model
            {
                /**
                * ModifyApplicationBaseInfo request structure.
                */
                class ModifyApplicationBaseInfoRequest : public AbstractModel
                {
                public:
                    ModifyApplicationBaseInfoRequest();
                    ~ModifyApplicationBaseInfoRequest() = default;
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
                     * 获取Application program execution path.
                     * @return ApplicationExePath Application program execution path.
                     * 
                     */
                    std::string GetApplicationExePath() const;

                    /**
                     * 设置Application program execution path.
                     * @param _applicationExePath Application program execution path.
                     * 
                     */
                    void SetApplicationExePath(const std::string& _applicationExePath);

                    /**
                     * 判断参数 ApplicationExePath 是否已赋值
                     * @return ApplicationExePath 是否已赋值
                     * 
                     */
                    bool ApplicationExePathHasBeenSet() const;

                    /**
                     * 获取Application process list.
                     * @return ApplicationInterList Application process list.
                     * 
                     */
                    std::string GetApplicationInterList() const;

                    /**
                     * 设置Application process list.
                     * @param _applicationInterList Application process list.
                     * 
                     */
                    void SetApplicationInterList(const std::string& _applicationInterList);

                    /**
                     * 判断参数 ApplicationInterList 是否已赋值
                     * @return ApplicationInterList 是否已赋值
                     * 
                     */
                    bool ApplicationInterListHasBeenSet() const;

                    /**
                     * 获取Application basic data.
                     * @return ApplicationBaseInfo Application basic data.
                     * 
                     */
                    ApplicationBaseInfo GetApplicationBaseInfo() const;

                    /**
                     * 设置Application basic data.
                     * @param _applicationBaseInfo Application basic data.
                     * 
                     */
                    void SetApplicationBaseInfo(const ApplicationBaseInfo& _applicationBaseInfo);

                    /**
                     * 判断参数 ApplicationBaseInfo 是否已赋值
                     * @return ApplicationBaseInfo 是否已赋值
                     * 
                     */
                    bool ApplicationBaseInfoHasBeenSet() const;

                    /**
                     * 获取Application startup parameters.
                     * @return ApplicationParams Application startup parameters.
                     * 
                     */
                    std::string GetApplicationParams() const;

                    /**
                     * 设置Application startup parameters.
                     * @param _applicationParams Application startup parameters.
                     * 
                     */
                    void SetApplicationParams(const std::string& _applicationParams);

                    /**
                     * 判断参数 ApplicationParams 是否已赋值
                     * @return ApplicationParams 是否已赋值
                     * 
                     */
                    bool ApplicationParamsHasBeenSet() const;

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
                     * 获取Application repository information list.
                     * @return ApplicationStores Application repository information list.
                     * 
                     */
                    std::vector<UserApplicationStore> GetApplicationStores() const;

                    /**
                     * 设置Application repository information list.
                     * @param _applicationStores Application repository information list.
                     * 
                     */
                    void SetApplicationStores(const std::vector<UserApplicationStore>& _applicationStores);

                    /**
                     * 判断参数 ApplicationStores 是否已赋值
                     * @return ApplicationStores 是否已赋值
                     * 
                     */
                    bool ApplicationStoresHasBeenSet() const;

                private:

                    /**
                     * Application ID.
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * Application program execution path.
                     */
                    std::string m_applicationExePath;
                    bool m_applicationExePathHasBeenSet;

                    /**
                     * Application process list.
                     */
                    std::string m_applicationInterList;
                    bool m_applicationInterListHasBeenSet;

                    /**
                     * Application basic data.
                     */
                    ApplicationBaseInfo m_applicationBaseInfo;
                    bool m_applicationBaseInfoHasBeenSet;

                    /**
                     * Application startup parameters.
                     */
                    std::string m_applicationParams;
                    bool m_applicationParamsHasBeenSet;

                    /**
                     * Application name.
                     */
                    std::string m_applicationName;
                    bool m_applicationNameHasBeenSet;

                    /**
                     * Application repository information list.
                     */
                    std::vector<UserApplicationStore> m_applicationStores;
                    bool m_applicationStoresHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_MODIFYAPPLICATIONBASEINFOREQUEST_H_
