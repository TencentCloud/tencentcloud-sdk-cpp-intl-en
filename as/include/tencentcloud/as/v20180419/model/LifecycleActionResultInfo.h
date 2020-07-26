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

#ifndef TENCENTCLOUD_AS_V20180419_MODEL_LIFECYCLEACTIONRESULTINFO_H_
#define TENCENTCLOUD_AS_V20180419_MODEL_LIFECYCLEACTIONRESULTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Result information of the lifecycle hook action
                */
                class LifecycleActionResultInfo : public AbstractModel
                {
                public:
                    LifecycleActionResultInfo();
                    ~LifecycleActionResultInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the lifecycle hook
                     * @return LifecycleHookId ID of the lifecycle hook
                     */
                    std::string GetLifecycleHookId() const;

                    /**
                     * 设置ID of the lifecycle hook
                     * @param LifecycleHookId ID of the lifecycle hook
                     */
                    void SetLifecycleHookId(const std::string& _lifecycleHookId);

                    /**
                     * 判断参数 LifecycleHookId 是否已赋值
                     * @return LifecycleHookId 是否已赋值
                     */
                    bool LifecycleHookIdHasBeenSet() const;

                    /**
                     * 获取ID of the instance
                     * @return InstanceId ID of the instance
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the instance
                     * @param InstanceId ID of the instance
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Whether the notification is sent to CMQ successfully
                     * @return NotificationResult Whether the notification is sent to CMQ successfully
                     */
                    std::string GetNotificationResult() const;

                    /**
                     * 设置Whether the notification is sent to CMQ successfully
                     * @param NotificationResult Whether the notification is sent to CMQ successfully
                     */
                    void SetNotificationResult(const std::string& _notificationResult);

                    /**
                     * 判断参数 NotificationResult 是否已赋值
                     * @return NotificationResult 是否已赋值
                     */
                    bool NotificationResultHasBeenSet() const;

                    /**
                     * 获取Result of the lifecyle hook action. Values: CONTINUE, ABANDON
                     * @return LifecycleActionResult Result of the lifecyle hook action. Values: CONTINUE, ABANDON
                     */
                    std::string GetLifecycleActionResult() const;

                    /**
                     * 设置Result of the lifecyle hook action. Values: CONTINUE, ABANDON
                     * @param LifecycleActionResult Result of the lifecyle hook action. Values: CONTINUE, ABANDON
                     */
                    void SetLifecycleActionResult(const std::string& _lifecycleActionResult);

                    /**
                     * 判断参数 LifecycleActionResult 是否已赋值
                     * @return LifecycleActionResult 是否已赋值
                     */
                    bool LifecycleActionResultHasBeenSet() const;

                    /**
                     * 获取Cause of the result
                     * @return ResultReason Cause of the result
                     */
                    std::string GetResultReason() const;

                    /**
                     * 设置Cause of the result
                     * @param ResultReason Cause of the result
                     */
                    void SetResultReason(const std::string& _resultReason);

                    /**
                     * 判断参数 ResultReason 是否已赋值
                     * @return ResultReason 是否已赋值
                     */
                    bool ResultReasonHasBeenSet() const;

                private:

                    /**
                     * ID of the lifecycle hook
                     */
                    std::string m_lifecycleHookId;
                    bool m_lifecycleHookIdHasBeenSet;

                    /**
                     * ID of the instance
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Whether the notification is sent to CMQ successfully
                     */
                    std::string m_notificationResult;
                    bool m_notificationResultHasBeenSet;

                    /**
                     * Result of the lifecyle hook action. Values: CONTINUE, ABANDON
                     */
                    std::string m_lifecycleActionResult;
                    bool m_lifecycleActionResultHasBeenSet;

                    /**
                     * Cause of the result
                     */
                    std::string m_resultReason;
                    bool m_resultReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AS_V20180419_MODEL_LIFECYCLEACTIONRESULTINFO_H_
