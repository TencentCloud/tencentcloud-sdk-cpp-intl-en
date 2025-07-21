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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_COMPLETELIFECYCLEACTIONREQUEST_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_COMPLETELIFECYCLEACTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace As
    {
        namespace V20180419
        {
            namespace Model
            {
                /**
                * CompleteLifecycleAction request structure.
                */
                class CompleteLifecycleActionRequest : public AbstractModel
                {
                public:
                    CompleteLifecycleActionRequest();
                    ~CompleteLifecycleActionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Lifecycle hook ID. you can get the lifecycle hook ID by calling the api [DescribeLifecycleHooks](https://intl.cloud.tencent.com/document/api/377/34452?from_cn_redirect=1) and retrieving the `LifecycleHookId` from the returned information.
                     * @return LifecycleHookId Lifecycle hook ID. you can get the lifecycle hook ID by calling the api [DescribeLifecycleHooks](https://intl.cloud.tencent.com/document/api/377/34452?from_cn_redirect=1) and retrieving the `LifecycleHookId` from the returned information.
                     * 
                     */
                    std::string GetLifecycleHookId() const;

                    /**
                     * 设置Lifecycle hook ID. you can get the lifecycle hook ID by calling the api [DescribeLifecycleHooks](https://intl.cloud.tencent.com/document/api/377/34452?from_cn_redirect=1) and retrieving the `LifecycleHookId` from the returned information.
                     * @param _lifecycleHookId Lifecycle hook ID. you can get the lifecycle hook ID by calling the api [DescribeLifecycleHooks](https://intl.cloud.tencent.com/document/api/377/34452?from_cn_redirect=1) and retrieving the `LifecycleHookId` from the returned information.
                     * 
                     */
                    void SetLifecycleHookId(const std::string& _lifecycleHookId);

                    /**
                     * 判断参数 LifecycleHookId 是否已赋值
                     * @return LifecycleHookId 是否已赋值
                     * 
                     */
                    bool LifecycleHookIdHasBeenSet() const;

                    /**
                     * 获取Describes the result of the lifecycle action. valid values are as follows:.
<Li>CONTINUE: default value, means continue execution of capacity expansion or reduction</li>.
<li>ABANDON: for scale-out hooks, CVM instances with hook timeout or failed LifecycleCommand execution will be released directly or moved; for scale-in hooks, scale-in activities will continue.</li>.
                     * @return LifecycleActionResult Describes the result of the lifecycle action. valid values are as follows:.
<Li>CONTINUE: default value, means continue execution of capacity expansion or reduction</li>.
<li>ABANDON: for scale-out hooks, CVM instances with hook timeout or failed LifecycleCommand execution will be released directly or moved; for scale-in hooks, scale-in activities will continue.</li>.
                     * 
                     */
                    std::string GetLifecycleActionResult() const;

                    /**
                     * 设置Describes the result of the lifecycle action. valid values are as follows:.
<Li>CONTINUE: default value, means continue execution of capacity expansion or reduction</li>.
<li>ABANDON: for scale-out hooks, CVM instances with hook timeout or failed LifecycleCommand execution will be released directly or moved; for scale-in hooks, scale-in activities will continue.</li>.
                     * @param _lifecycleActionResult Describes the result of the lifecycle action. valid values are as follows:.
<Li>CONTINUE: default value, means continue execution of capacity expansion or reduction</li>.
<li>ABANDON: for scale-out hooks, CVM instances with hook timeout or failed LifecycleCommand execution will be released directly or moved; for scale-in hooks, scale-in activities will continue.</li>.
                     * 
                     */
                    void SetLifecycleActionResult(const std::string& _lifecycleActionResult);

                    /**
                     * 判断参数 LifecycleActionResult 是否已赋值
                     * @return LifecycleActionResult 是否已赋值
                     * 
                     */
                    bool LifecycleActionResultHasBeenSet() const;

                    /**
                     * 获取One of the parameters `InstanceId` or `LifecycleActionToken` is required. you can get the instance ID by logging in to the [console](https://console.cloud.tencent.com/cvm/index) or making an api call to [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) and retrieving the `InstanceId` from the returned information.
                     * @return InstanceId One of the parameters `InstanceId` or `LifecycleActionToken` is required. you can get the instance ID by logging in to the [console](https://console.cloud.tencent.com/cvm/index) or making an api call to [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) and retrieving the `InstanceId` from the returned information.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置One of the parameters `InstanceId` or `LifecycleActionToken` is required. you can get the instance ID by logging in to the [console](https://console.cloud.tencent.com/cvm/index) or making an api call to [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) and retrieving the `InstanceId` from the returned information.
                     * @param _instanceId One of the parameters `InstanceId` or `LifecycleActionToken` is required. you can get the instance ID by logging in to the [console](https://console.cloud.tencent.com/cvm/index) or making an api call to [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) and retrieving the `InstanceId` from the returned information.
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Lifecycle action token. specifies that one of `InstanceId` or `LifecycleActionToken` must be filled.
The method for accessing the parameter is as follows: when the hook of the `NotificationTarget` parameter is triggered, deliver a message containing the token to the message queue specified in the `NotificationTarget` parameter. the message queue consumer can obtain the token from the message.
                     * @return LifecycleActionToken Lifecycle action token. specifies that one of `InstanceId` or `LifecycleActionToken` must be filled.
The method for accessing the parameter is as follows: when the hook of the `NotificationTarget` parameter is triggered, deliver a message containing the token to the message queue specified in the `NotificationTarget` parameter. the message queue consumer can obtain the token from the message.
                     * 
                     */
                    std::string GetLifecycleActionToken() const;

                    /**
                     * 设置Lifecycle action token. specifies that one of `InstanceId` or `LifecycleActionToken` must be filled.
The method for accessing the parameter is as follows: when the hook of the `NotificationTarget` parameter is triggered, deliver a message containing the token to the message queue specified in the `NotificationTarget` parameter. the message queue consumer can obtain the token from the message.
                     * @param _lifecycleActionToken Lifecycle action token. specifies that one of `InstanceId` or `LifecycleActionToken` must be filled.
The method for accessing the parameter is as follows: when the hook of the `NotificationTarget` parameter is triggered, deliver a message containing the token to the message queue specified in the `NotificationTarget` parameter. the message queue consumer can obtain the token from the message.
                     * 
                     */
                    void SetLifecycleActionToken(const std::string& _lifecycleActionToken);

                    /**
                     * 判断参数 LifecycleActionToken 是否已赋值
                     * @return LifecycleActionToken 是否已赋值
                     * 
                     */
                    bool LifecycleActionTokenHasBeenSet() const;

                private:

                    /**
                     * Lifecycle hook ID. you can get the lifecycle hook ID by calling the api [DescribeLifecycleHooks](https://intl.cloud.tencent.com/document/api/377/34452?from_cn_redirect=1) and retrieving the `LifecycleHookId` from the returned information.
                     */
                    std::string m_lifecycleHookId;
                    bool m_lifecycleHookIdHasBeenSet;

                    /**
                     * Describes the result of the lifecycle action. valid values are as follows:.
<Li>CONTINUE: default value, means continue execution of capacity expansion or reduction</li>.
<li>ABANDON: for scale-out hooks, CVM instances with hook timeout or failed LifecycleCommand execution will be released directly or moved; for scale-in hooks, scale-in activities will continue.</li>.
                     */
                    std::string m_lifecycleActionResult;
                    bool m_lifecycleActionResultHasBeenSet;

                    /**
                     * One of the parameters `InstanceId` or `LifecycleActionToken` is required. you can get the instance ID by logging in to the [console](https://console.cloud.tencent.com/cvm/index) or making an api call to [DescribeInstances](https://intl.cloud.tencent.com/document/api/213/15728?from_cn_redirect=1) and retrieving the `InstanceId` from the returned information.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Lifecycle action token. specifies that one of `InstanceId` or `LifecycleActionToken` must be filled.
The method for accessing the parameter is as follows: when the hook of the `NotificationTarget` parameter is triggered, deliver a message containing the token to the message queue specified in the `NotificationTarget` parameter. the message queue consumer can obtain the token from the message.
                     */
                    std::string m_lifecycleActionToken;
                    bool m_lifecycleActionTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_COMPLETELIFECYCLEACTIONREQUEST_H_
