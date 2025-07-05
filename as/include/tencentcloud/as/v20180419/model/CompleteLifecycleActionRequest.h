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
                     * 获取Lifecycle hook ID
                     * @return LifecycleHookId Lifecycle hook ID
                     * 
                     */
                    std::string GetLifecycleHookId() const;

                    /**
                     * 设置Lifecycle hook ID
                     * @param _lifecycleHookId Lifecycle hook ID
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
                     * 获取Result of the lifecycle action. Value range: "CONTINUE", "ABANDON"
                     * @return LifecycleActionResult Result of the lifecycle action. Value range: "CONTINUE", "ABANDON"
                     * 
                     */
                    std::string GetLifecycleActionResult() const;

                    /**
                     * 设置Result of the lifecycle action. Value range: "CONTINUE", "ABANDON"
                     * @param _lifecycleActionResult Result of the lifecycle action. Value range: "CONTINUE", "ABANDON"
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
                     * 获取Instance ID. Either "InstanceId" or "LifecycleActionToken" must be specified
                     * @return InstanceId Instance ID. Either "InstanceId" or "LifecycleActionToken" must be specified
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID. Either "InstanceId" or "LifecycleActionToken" must be specified
                     * @param _instanceId Instance ID. Either "InstanceId" or "LifecycleActionToken" must be specified
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
                     * 获取Either "InstanceId" or "LifecycleActionToken" must be specified
                     * @return LifecycleActionToken Either "InstanceId" or "LifecycleActionToken" must be specified
                     * 
                     */
                    std::string GetLifecycleActionToken() const;

                    /**
                     * 设置Either "InstanceId" or "LifecycleActionToken" must be specified
                     * @param _lifecycleActionToken Either "InstanceId" or "LifecycleActionToken" must be specified
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
                     * Lifecycle hook ID
                     */
                    std::string m_lifecycleHookId;
                    bool m_lifecycleHookIdHasBeenSet;

                    /**
                     * Result of the lifecycle action. Value range: "CONTINUE", "ABANDON"
                     */
                    std::string m_lifecycleActionResult;
                    bool m_lifecycleActionResultHasBeenSet;

                    /**
                     * Instance ID. Either "InstanceId" or "LifecycleActionToken" must be specified
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Either "InstanceId" or "LifecycleActionToken" must be specified
                     */
                    std::string m_lifecycleActionToken;
                    bool m_lifecycleActionTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_COMPLETELIFECYCLEACTIONREQUEST_H_
