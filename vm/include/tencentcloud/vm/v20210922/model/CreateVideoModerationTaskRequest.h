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

#ifndef TENCENTCLOUD_VM_V20210922_MODEL_CREATEVIDEOMODERATIONTASKREQUEST_H_
#define TENCENTCLOUD_VM_V20210922_MODEL_CREATEVIDEOMODERATIONTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vm/v20210922/model/TaskInput.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20210922
        {
            namespace Model
            {
                /**
                * CreateVideoModerationTask request structure.
                */
                class CreateVideoModerationTaskRequest : public AbstractModel
                {
                public:
                    CreateVideoModerationTaskRequest();
                    ~CreateVideoModerationTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Business type, which is used to define a template policy.
                     * @return BizType Business type, which is used to define a template policy.
                     * 
                     */
                    std::string GetBizType() const;

                    /**
                     * 设置Business type, which is used to define a template policy.
                     * @param _bizType Business type, which is used to define a template policy.
                     * 
                     */
                    void SetBizType(const std::string& _bizType);

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     * 
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取Task type. Values: `VIDEO` (video on demand), `LIVE_VIDEO` (live video).
                     * @return Type Task type. Values: `VIDEO` (video on demand), `LIVE_VIDEO` (live video).
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Task type. Values: `VIDEO` (video on demand), `LIVE_VIDEO` (live video).
                     * @param _type Task type. Values: `VIDEO` (video on demand), `LIVE_VIDEO` (live video).
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Task information. You can create up to 10 tasks at a time.
                     * @return Tasks Task information. You can create up to 10 tasks at a time.
                     * 
                     */
                    std::vector<TaskInput> GetTasks() const;

                    /**
                     * 设置Task information. You can create up to 10 tasks at a time.
                     * @param _tasks Task information. You can create up to 10 tasks at a time.
                     * 
                     */
                    void SetTasks(const std::vector<TaskInput>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取Key of the callback signature. For more details, see the signature documentation.
                     * @return Seed Key of the callback signature. For more details, see the signature documentation.
                     * 
                     */
                    std::string GetSeed() const;

                    /**
                     * 设置Key of the callback signature. For more details, see the signature documentation.
                     * @param _seed Key of the callback signature. For more details, see the signature documentation.
                     * 
                     */
                    void SetSeed(const std::string& _seed);

                    /**
                     * 判断参数 Seed 是否已赋值
                     * @return Seed 是否已赋值
                     * 
                     */
                    bool SeedHasBeenSet() const;

                    /**
                     * 获取Callback URL that will receive moderation information. After it is configured, the non-compliant audio segments detected in moderation will be sent through this API.
                     * @return CallbackUrl Callback URL that will receive moderation information. After it is configured, the non-compliant audio segments detected in moderation will be sent through this API.
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置Callback URL that will receive moderation information. After it is configured, the non-compliant audio segments detected in moderation will be sent through this API.
                     * @param _callbackUrl Callback URL that will receive moderation information. After it is configured, the non-compliant audio segments detected in moderation will be sent through this API.
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取Priority, which determines the execution order of your moderation tasks. The default value is 0.
                     * @return Priority Priority, which determines the execution order of your moderation tasks. The default value is 0.
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置Priority, which determines the execution order of your moderation tasks. The default value is 0.
                     * @param _priority Priority, which determines the execution order of your moderation tasks. The default value is 0.
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                private:

                    /**
                     * Business type, which is used to define a template policy.
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * Task type. Values: `VIDEO` (video on demand), `LIVE_VIDEO` (live video).
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Task information. You can create up to 10 tasks at a time.
                     */
                    std::vector<TaskInput> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * Key of the callback signature. For more details, see the signature documentation.
                     */
                    std::string m_seed;
                    bool m_seedHasBeenSet;

                    /**
                     * Callback URL that will receive moderation information. After it is configured, the non-compliant audio segments detected in moderation will be sent through this API.
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * Priority, which determines the execution order of your moderation tasks. The default value is 0.
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20210922_MODEL_CREATEVIDEOMODERATIONTASKREQUEST_H_
