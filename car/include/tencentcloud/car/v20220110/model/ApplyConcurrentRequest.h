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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_APPLYCONCURRENTREQUEST_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_APPLYCONCURRENTREQUEST_H_

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
                * ApplyConcurrent request structure.
                */
                class ApplyConcurrentRequest : public AbstractModel
                {
                public:
                    ApplyConcurrentRequest();
                    ~ApplyConcurrentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique user ID, which is customized by you and is not parsed by CAR. Based on your needs, you can either define unique IDs for users or use timestamps to generate random IDs. Make sure the same ID is used when a user reconnects to your application.
                     * @return UserId Unique user ID, which is customized by you and is not parsed by CAR. Based on your needs, you can either define unique IDs for users or use timestamps to generate random IDs. Make sure the same ID is used when a user reconnects to your application.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置Unique user ID, which is customized by you and is not parsed by CAR. Based on your needs, you can either define unique IDs for users or use timestamps to generate random IDs. Make sure the same ID is used when a user reconnects to your application.
                     * @param _userId Unique user ID, which is customized by you and is not parsed by CAR. Based on your needs, you can either define unique IDs for users or use timestamps to generate random IDs. Make sure the same ID is used when a user reconnects to your application.
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取Public IP address of the user's client, which is used for nearby scheduling.
                     * @return UserIp Public IP address of the user's client, which is used for nearby scheduling.
                     * 
                     */
                    std::string GetUserIp() const;

                    /**
                     * 设置Public IP address of the user's client, which is used for nearby scheduling.
                     * @param _userIp Public IP address of the user's client, which is used for nearby scheduling.
                     * 
                     */
                    void SetUserIp(const std::string& _userIp);

                    /**
                     * 判断参数 UserIp 是否已赋值
                     * @return UserIp 是否已赋值
                     * 
                     */
                    bool UserIpHasBeenSet() const;

                    /**
                     * 获取Project ID.
                     * @return ProjectId Project ID.
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID.
                     * @param _projectId Project ID.
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取Application version ID. If the application of the current version is requested, you do not need to fill in this field. If the application of the other versions is requested, you need to specify the version through this field.
                     * @return ApplicationVersionId Application version ID. If the application of the current version is requested, you do not need to fill in this field. If the application of the other versions is requested, you need to specify the version through this field.
                     * 
                     */
                    std::string GetApplicationVersionId() const;

                    /**
                     * 设置Application version ID. If the application of the current version is requested, you do not need to fill in this field. If the application of the other versions is requested, you need to specify the version through this field.
                     * @param _applicationVersionId Application version ID. If the application of the current version is requested, you do not need to fill in this field. If the application of the other versions is requested, you need to specify the version through this field.
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
                     * 获取Application ID, which is used only by the multi-application project to specify applications. For a single-application project, this parameter is ignored, and the application bound to the project will be used.
                     * @return ApplicationId Application ID, which is used only by the multi-application project to specify applications. For a single-application project, this parameter is ignored, and the application bound to the project will be used.
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置Application ID, which is used only by the multi-application project to specify applications. For a single-application project, this parameter is ignored, and the application bound to the project will be used.
                     * @param _applicationId Application ID, which is used only by the multi-application project to specify applications. For a single-application project, this parameter is ignored, and the application bound to the project will be used.
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                private:

                    /**
                     * Unique user ID, which is customized by you and is not parsed by CAR. Based on your needs, you can either define unique IDs for users or use timestamps to generate random IDs. Make sure the same ID is used when a user reconnects to your application.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Public IP address of the user's client, which is used for nearby scheduling.
                     */
                    std::string m_userIp;
                    bool m_userIpHasBeenSet;

                    /**
                     * Project ID.
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * Application version ID. If the application of the current version is requested, you do not need to fill in this field. If the application of the other versions is requested, you need to specify the version through this field.
                     */
                    std::string m_applicationVersionId;
                    bool m_applicationVersionIdHasBeenSet;

                    /**
                     * Application ID, which is used only by the multi-application project to specify applications. For a single-application project, this parameter is ignored, and the application bound to the project will be used.
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_APPLYCONCURRENTREQUEST_H_
