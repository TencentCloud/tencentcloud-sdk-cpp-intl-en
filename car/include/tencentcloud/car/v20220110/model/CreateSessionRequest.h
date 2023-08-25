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
                     * 获取The user’s unique ID. Tencent Cloud does not parse the ID. You need to manage your own user IDs. Based on your needs, you can either define unique IDs for users or use timestamps to generate random IDs. Make sure the same ID is used when a user reconnects to your application.
                     * @return UserId The user’s unique ID. Tencent Cloud does not parse the ID. You need to manage your own user IDs. Based on your needs, you can either define unique IDs for users or use timestamps to generate random IDs. Make sure the same ID is used when a user reconnects to your application.
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置The user’s unique ID. Tencent Cloud does not parse the ID. You need to manage your own user IDs. Based on your needs, you can either define unique IDs for users or use timestamps to generate random IDs. Make sure the same ID is used when a user reconnects to your application.
                     * @param _userId The user’s unique ID. Tencent Cloud does not parse the ID. You need to manage your own user IDs. Based on your needs, you can either define unique IDs for users or use timestamps to generate random IDs. Make sure the same ID is used when a user reconnects to your application.
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
                     * 获取Public IP of user’s application client, which is used for nearby scheduling.
                     * @return UserIp Public IP of user’s application client, which is used for nearby scheduling.
                     * 
                     */
                    std::string GetUserIp() const;

                    /**
                     * 设置Public IP of user’s application client, which is used for nearby scheduling.
                     * @param _userIp Public IP of user’s application client, which is used for nearby scheduling.
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
                     * 获取The client-side session data, which is obtained from the SDK. If `RunMode` is `RunWithoutClient`, this parameter can be null.
                     * @return ClientSession The client-side session data, which is obtained from the SDK. If `RunMode` is `RunWithoutClient`, this parameter can be null.
                     * 
                     */
                    std::string GetClientSession() const;

                    /**
                     * 设置The client-side session data, which is obtained from the SDK. If `RunMode` is `RunWithoutClient`, this parameter can be null.
                     * @param _clientSession The client-side session data, which is obtained from the SDK. If `RunMode` is `RunWithoutClient`, this parameter can be null.
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
                     * 获取The on-cloud running mode.
`RunWithoutClient`: Keep the application running on the cloud even when there are no client connections.
Empty string (default): Keep the application running on the cloud only when there are client connections.
                     * @return RunMode The on-cloud running mode.
`RunWithoutClient`: Keep the application running on the cloud even when there are no client connections.
Empty string (default): Keep the application running on the cloud only when there are client connections.
                     * 
                     */
                    std::string GetRunMode() const;

                    /**
                     * 设置The on-cloud running mode.
`RunWithoutClient`: Keep the application running on the cloud even when there are no client connections.
Empty string (default): Keep the application running on the cloud only when there are client connections.
                     * @param _runMode The on-cloud running mode.
`RunWithoutClient`: Keep the application running on the cloud even when there are no client connections.
Empty string (default): Keep the application running on the cloud only when there are client connections.
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
                     * 获取Application startup parameter.
If the user requests a multi-application project or a prelaunch-disabled single-application project, this parameter takes effect.
 
If the user requests a prelaunch-enabled single-application project, this parameter is invalid.

Note: When this parameter takes effect, the `ApplicationParameters` parameter will be appended to the end of the application startup parameter. The application startup parameter is set in the application or project configuration in the console.
For example, for a prelaunch-disabled single-application project, if its application startup parameter `bar` is `0` and the `ApplicationParameters` parameter `foo` is `1`, the actual application startup parameters will be `bar=0 foo=1`.
                     * @return ApplicationParameters Application startup parameter.
If the user requests a multi-application project or a prelaunch-disabled single-application project, this parameter takes effect.
 
If the user requests a prelaunch-enabled single-application project, this parameter is invalid.

Note: When this parameter takes effect, the `ApplicationParameters` parameter will be appended to the end of the application startup parameter. The application startup parameter is set in the application or project configuration in the console.
For example, for a prelaunch-disabled single-application project, if its application startup parameter `bar` is `0` and the `ApplicationParameters` parameter `foo` is `1`, the actual application startup parameters will be `bar=0 foo=1`.
                     * 
                     */
                    std::string GetApplicationParameters() const;

                    /**
                     * 设置Application startup parameter.
If the user requests a multi-application project or a prelaunch-disabled single-application project, this parameter takes effect.
 
If the user requests a prelaunch-enabled single-application project, this parameter is invalid.

Note: When this parameter takes effect, the `ApplicationParameters` parameter will be appended to the end of the application startup parameter. The application startup parameter is set in the application or project configuration in the console.
For example, for a prelaunch-disabled single-application project, if its application startup parameter `bar` is `0` and the `ApplicationParameters` parameter `foo` is `1`, the actual application startup parameters will be `bar=0 foo=1`.
                     * @param _applicationParameters Application startup parameter.
If the user requests a multi-application project or a prelaunch-disabled single-application project, this parameter takes effect.
 
If the user requests a prelaunch-enabled single-application project, this parameter is invalid.

Note: When this parameter takes effect, the `ApplicationParameters` parameter will be appended to the end of the application startup parameter. The application startup parameter is set in the application or project configuration in the console.
For example, for a prelaunch-disabled single-application project, if its application startup parameter `bar` is `0` and the `ApplicationParameters` parameter `foo` is `1`, the actual application startup parameters will be `bar=0 foo=1`.
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
                     * 获取The user ID of the host in **multi-person interaction** scenarios, which is required.
If the current user is the host, `HostUserId` must be the same as their `UserId`; otherwise, `HostUserId` should be the host's `UserId`.
                     * @return HostUserId The user ID of the host in **multi-person interaction** scenarios, which is required.
If the current user is the host, `HostUserId` must be the same as their `UserId`; otherwise, `HostUserId` should be the host's `UserId`.
                     * 
                     */
                    std::string GetHostUserId() const;

                    /**
                     * 设置The user ID of the host in **multi-person interaction** scenarios, which is required.
If the current user is the host, `HostUserId` must be the same as their `UserId`; otherwise, `HostUserId` should be the host's `UserId`.
                     * @param _hostUserId The user ID of the host in **multi-person interaction** scenarios, which is required.
If the current user is the host, `HostUserId` must be the same as their `UserId`; otherwise, `HostUserId` should be the host's `UserId`.
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
                     * 获取The role in **multi-person interaction** scenarios. Valid values:
`Player`: A user who can operate an application by using a keyboard and mouse
`Viewer`: A user who can only watch the video in the room but cannot operate the application
                     * @return Role The role in **multi-person interaction** scenarios. Valid values:
`Player`: A user who can operate an application by using a keyboard and mouse
`Viewer`: A user who can only watch the video in the room but cannot operate the application
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置The role in **multi-person interaction** scenarios. Valid values:
`Player`: A user who can operate an application by using a keyboard and mouse
`Viewer`: A user who can only watch the video in the room but cannot operate the application
                     * @param _role The role in **multi-person interaction** scenarios. Valid values:
`Player`: A user who can operate an application by using a keyboard and mouse
`Viewer`: A user who can only watch the video in the room but cannot operate the application
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
                     * The user’s unique ID. Tencent Cloud does not parse the ID. You need to manage your own user IDs. Based on your needs, you can either define unique IDs for users or use timestamps to generate random IDs. Make sure the same ID is used when a user reconnects to your application.
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Public IP of user’s application client, which is used for nearby scheduling.
                     */
                    std::string m_userIp;
                    bool m_userIpHasBeenSet;

                    /**
                     * The client-side session data, which is obtained from the SDK. If `RunMode` is `RunWithoutClient`, this parameter can be null.
                     */
                    std::string m_clientSession;
                    bool m_clientSessionHasBeenSet;

                    /**
                     * The on-cloud running mode.
`RunWithoutClient`: Keep the application running on the cloud even when there are no client connections.
Empty string (default): Keep the application running on the cloud only when there are client connections.
                     */
                    std::string m_runMode;
                    bool m_runModeHasBeenSet;

                    /**
                     * Application startup parameter.
If the user requests a multi-application project or a prelaunch-disabled single-application project, this parameter takes effect.
 
If the user requests a prelaunch-enabled single-application project, this parameter is invalid.

Note: When this parameter takes effect, the `ApplicationParameters` parameter will be appended to the end of the application startup parameter. The application startup parameter is set in the application or project configuration in the console.
For example, for a prelaunch-disabled single-application project, if its application startup parameter `bar` is `0` and the `ApplicationParameters` parameter `foo` is `1`, the actual application startup parameters will be `bar=0 foo=1`.
                     */
                    std::string m_applicationParameters;
                    bool m_applicationParametersHasBeenSet;

                    /**
                     * The user ID of the host in **multi-person interaction** scenarios, which is required.
If the current user is the host, `HostUserId` must be the same as their `UserId`; otherwise, `HostUserId` should be the host's `UserId`.
                     */
                    std::string m_hostUserId;
                    bool m_hostUserIdHasBeenSet;

                    /**
                     * The role in **multi-person interaction** scenarios. Valid values:
`Player`: A user who can operate an application by using a keyboard and mouse
`Viewer`: A user who can only watch the video in the room but cannot operate the application
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_CREATESESSIONREQUEST_H_
