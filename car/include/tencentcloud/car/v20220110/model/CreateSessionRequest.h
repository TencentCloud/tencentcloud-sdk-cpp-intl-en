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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_CREATESESSIONREQUEST_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_CREATESESSIONREQUEST_H_

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
                * CreateSession request structure.
                */
                class CreateSessionRequest : public AbstractModel
                {
                public:
                    CreateSessionRequest();
                    ~CreateSessionRequest() = default;
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
                     * 获取Client-side session information, which is obtained from the SDK. If `RunMode` is `RunWithoutClient`, this parameter can be empty.
                     * @return ClientSession Client-side session information, which is obtained from the SDK. If `RunMode` is `RunWithoutClient`, this parameter can be empty.
                     * 
                     */
                    std::string GetClientSession() const;

                    /**
                     * 设置Client-side session information, which is obtained from the SDK. If `RunMode` is `RunWithoutClient`, this parameter can be empty.
                     * @param _clientSession Client-side session information, which is obtained from the SDK. If `RunMode` is `RunWithoutClient`, this parameter can be empty.
                     * 
                     */
                    void SetClientSession(const std::string& _clientSession);

                    /**
                     * 判断参数 ClientSession 是否已赋值
                     * @return ClientSession 是否已赋值
                     * 
                     */
                    bool ClientSessionHasBeenSet() const;

                    /**
                     * 获取On-cloud running mode.RunWithoutClient: Keeps the application running on the cloud even when there are no client connections.Empty string (default): Keeps the application running on the cloud only when there are client connections.
                     * @return RunMode On-cloud running mode.RunWithoutClient: Keeps the application running on the cloud even when there are no client connections.Empty string (default): Keeps the application running on the cloud only when there are client connections.
                     * 
                     */
                    std::string GetRunMode() const;

                    /**
                     * 设置On-cloud running mode.RunWithoutClient: Keeps the application running on the cloud even when there are no client connections.Empty string (default): Keeps the application running on the cloud only when there are client connections.
                     * @param _runMode On-cloud running mode.RunWithoutClient: Keeps the application running on the cloud even when there are no client connections.Empty string (default): Keeps the application running on the cloud only when there are client connections.
                     * 
                     */
                    void SetRunMode(const std::string& _runMode);

                    /**
                     * 判断参数 RunMode 是否已赋值
                     * @return RunMode 是否已赋值
                     * 
                     */
                    bool RunModeHasBeenSet() const;

                    /**
                     * 获取Application startup parameters.This parameter is effective for multi-application projects.
This parameter is effective for single-application projects with prelaunch disabled.This parameter is ineffective for single-application projects with prelaunch enabled.
Note: When this parameter is effective, it will be appended to the startup parameters of application or project configuration in the console.
For example, for a single-application project with prelaunch disabled, if its startup parameter `bar` is `0` for project configuration in the console and the `ApplicationParameters` parameter `foo` is `1`, the actual application startup parameters will be `bar=0 and foo=1`.
                     * @return ApplicationParameters Application startup parameters.This parameter is effective for multi-application projects.
This parameter is effective for single-application projects with prelaunch disabled.This parameter is ineffective for single-application projects with prelaunch enabled.
Note: When this parameter is effective, it will be appended to the startup parameters of application or project configuration in the console.
For example, for a single-application project with prelaunch disabled, if its startup parameter `bar` is `0` for project configuration in the console and the `ApplicationParameters` parameter `foo` is `1`, the actual application startup parameters will be `bar=0 and foo=1`.
                     * 
                     */
                    std::string GetApplicationParameters() const;

                    /**
                     * 设置Application startup parameters.This parameter is effective for multi-application projects.
This parameter is effective for single-application projects with prelaunch disabled.This parameter is ineffective for single-application projects with prelaunch enabled.
Note: When this parameter is effective, it will be appended to the startup parameters of application or project configuration in the console.
For example, for a single-application project with prelaunch disabled, if its startup parameter `bar` is `0` for project configuration in the console and the `ApplicationParameters` parameter `foo` is `1`, the actual application startup parameters will be `bar=0 and foo=1`.
                     * @param _applicationParameters Application startup parameters.This parameter is effective for multi-application projects.
This parameter is effective for single-application projects with prelaunch disabled.This parameter is ineffective for single-application projects with prelaunch enabled.
Note: When this parameter is effective, it will be appended to the startup parameters of application or project configuration in the console.
For example, for a single-application project with prelaunch disabled, if its startup parameter `bar` is `0` for project configuration in the console and the `ApplicationParameters` parameter `foo` is `1`, the actual application startup parameters will be `bar=0 and foo=1`.
                     * 
                     */
                    void SetApplicationParameters(const std::string& _applicationParameters);

                    /**
                     * 判断参数 ApplicationParameters 是否已赋值
                     * @return ApplicationParameters 是否已赋值
                     * 
                     */
                    bool ApplicationParametersHasBeenSet() const;

                    /**
                     * 获取[Multi-person Interaction] Homeowner's user ID, which is required in multi-person interaction mode.
If the user is the homeowner, HostUserID must be the same as UserID.
If the user is not the homeowner, HostUserID must be the homeowner's HostUserID.
                     * @return HostUserId [Multi-person Interaction] Homeowner's user ID, which is required in multi-person interaction mode.
If the user is the homeowner, HostUserID must be the same as UserID.
If the user is not the homeowner, HostUserID must be the homeowner's HostUserID.
                     * 
                     */
                    std::string GetHostUserId() const;

                    /**
                     * 设置[Multi-person Interaction] Homeowner's user ID, which is required in multi-person interaction mode.
If the user is the homeowner, HostUserID must be the same as UserID.
If the user is not the homeowner, HostUserID must be the homeowner's HostUserID.
                     * @param _hostUserId [Multi-person Interaction] Homeowner's user ID, which is required in multi-person interaction mode.
If the user is the homeowner, HostUserID must be the same as UserID.
If the user is not the homeowner, HostUserID must be the homeowner's HostUserID.
                     * 
                     */
                    void SetHostUserId(const std::string& _hostUserId);

                    /**
                     * 判断参数 HostUserId 是否已赋值
                     * @return HostUserId 是否已赋值
                     * 
                     */
                    bool HostUserIdHasBeenSet() const;

                    /**
                     * 获取[Multi-person Interaction] Role.
Player: a user who can operate the application via keyboard, mouse, etc.
Viewer: a user who can only watch the video in the room but cannot operate the application.
                     * @return Role [Multi-person Interaction] Role.
Player: a user who can operate the application via keyboard, mouse, etc.
Viewer: a user who can only watch the video in the room but cannot operate the application.
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置[Multi-person Interaction] Role.
Player: a user who can operate the application via keyboard, mouse, etc.
Viewer: a user who can only watch the video in the room but cannot operate the application.
                     * @param _role [Multi-person Interaction] Role.
Player: a user who can operate the application via keyboard, mouse, etc.
Viewer: a user who can only watch the video in the room but cannot operate the application.
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

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
                     * Client-side session information, which is obtained from the SDK. If `RunMode` is `RunWithoutClient`, this parameter can be empty.
                     */
                    std::string m_clientSession;
                    bool m_clientSessionHasBeenSet;

                    /**
                     * On-cloud running mode.RunWithoutClient: Keeps the application running on the cloud even when there are no client connections.Empty string (default): Keeps the application running on the cloud only when there are client connections.
                     */
                    std::string m_runMode;
                    bool m_runModeHasBeenSet;

                    /**
                     * Application startup parameters.This parameter is effective for multi-application projects.
This parameter is effective for single-application projects with prelaunch disabled.This parameter is ineffective for single-application projects with prelaunch enabled.
Note: When this parameter is effective, it will be appended to the startup parameters of application or project configuration in the console.
For example, for a single-application project with prelaunch disabled, if its startup parameter `bar` is `0` for project configuration in the console and the `ApplicationParameters` parameter `foo` is `1`, the actual application startup parameters will be `bar=0 and foo=1`.
                     */
                    std::string m_applicationParameters;
                    bool m_applicationParametersHasBeenSet;

                    /**
                     * [Multi-person Interaction] Homeowner's user ID, which is required in multi-person interaction mode.
If the user is the homeowner, HostUserID must be the same as UserID.
If the user is not the homeowner, HostUserID must be the homeowner's HostUserID.
                     */
                    std::string m_hostUserId;
                    bool m_hostUserIdHasBeenSet;

                    /**
                     * [Multi-person Interaction] Role.
Player: a user who can operate the application via keyboard, mouse, etc.
Viewer: a user who can only watch the video in the room but cannot operate the application.
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_CREATESESSIONREQUEST_H_
