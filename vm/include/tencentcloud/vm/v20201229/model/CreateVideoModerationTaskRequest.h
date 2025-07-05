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

#ifndef TENCENTCLOUD_VM_V20201229_MODEL_CREATEVIDEOMODERATIONTASKREQUEST_H_
#define TENCENTCLOUD_VM_V20201229_MODEL_CREATEVIDEOMODERATIONTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vm/v20201229/model/TaskInput.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20201229
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
                     * 获取This parameter is used to pass in the task type of a moderation task. Valid values: **VIDEO** (video on demand), **LIVE_VIDEO** (video live streaming).
                     * @return Type This parameter is used to pass in the task type of a moderation task. Valid values: **VIDEO** (video on demand), **LIVE_VIDEO** (video live streaming).
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置This parameter is used to pass in the task type of a moderation task. Valid values: **VIDEO** (video on demand), **LIVE_VIDEO** (video live streaming).
                     * @param _type This parameter is used to pass in the task type of a moderation task. Valid values: **VIDEO** (video on demand), **LIVE_VIDEO** (video live streaming).
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
                     * 获取This field indicates the input video moderation task information. For the specific input content, see the detailed description of the `TaskInput` data structure.<br>Note: you can create up to **10 tasks** at a time.
                     * @return Tasks This field indicates the input video moderation task information. For the specific input content, see the detailed description of the `TaskInput` data structure.<br>Note: you can create up to **10 tasks** at a time.
                     * 
                     */
                    std::vector<TaskInput> GetTasks() const;

                    /**
                     * 设置This field indicates the input video moderation task information. For the specific input content, see the detailed description of the `TaskInput` data structure.<br>Note: you can create up to **10 tasks** at a time.
                     * @param _tasks This field indicates the input video moderation task information. For the specific input content, see the detailed description of the `TaskInput` data structure.<br>Note: you can create up to **10 tasks** at a time.
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
                     * 获取This field indicates the specific number of the policy, which is used for API scheduling and can be configured in the CMS console. If the `Biztype` parameter is passed in, a moderation policy will be used based on the business scenario; otherwise, the default moderation policy will be used.<br>Note: `Biztype` can contain 3–32 digits, letters, and underscores; different `Biztype` values are associated with different business scenarios and moderation policies, so you need to verify the `Biztype` before calling this API.
                     * @return BizType This field indicates the specific number of the policy, which is used for API scheduling and can be configured in the CMS console. If the `Biztype` parameter is passed in, a moderation policy will be used based on the business scenario; otherwise, the default moderation policy will be used.<br>Note: `Biztype` can contain 3–32 digits, letters, and underscores; different `Biztype` values are associated with different business scenarios and moderation policies, so you need to verify the `Biztype` before calling this API.
                     * 
                     */
                    std::string GetBizType() const;

                    /**
                     * 设置This field indicates the specific number of the policy, which is used for API scheduling and can be configured in the CMS console. If the `Biztype` parameter is passed in, a moderation policy will be used based on the business scenario; otherwise, the default moderation policy will be used.<br>Note: `Biztype` can contain 3–32 digits, letters, and underscores; different `Biztype` values are associated with different business scenarios and moderation policies, so you need to verify the `Biztype` before calling this API.
                     * @param _bizType This field indicates the specific number of the policy, which is used for API scheduling and can be configured in the CMS console. If the `Biztype` parameter is passed in, a moderation policy will be used based on the business scenario; otherwise, the default moderation policy will be used.<br>Note: `Biztype` can contain 3–32 digits, letters, and underscores; different `Biztype` values are associated with different business scenarios and moderation policies, so you need to verify the `Biztype` before calling this API.
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
                     * 获取This field is optional and indicates the key information of the callback signature, which is used to ensure the data security. The signature algorithm is to add the `X-Signature` field to the returned HTTP header, whose value is the SHA256-encoded hex string of `seed` + `body` . After receiving the callback data, you can calculate `X-Signature` by using **sha256(seed + body)** based on the returned `body` for verification.<br>For specific use cases, see [Signature Algorithm v3](https://intl.cloud.tencent.com/document/product/1265/51885?from_cn_redirect=1).
                     * @return Seed This field is optional and indicates the key information of the callback signature, which is used to ensure the data security. The signature algorithm is to add the `X-Signature` field to the returned HTTP header, whose value is the SHA256-encoded hex string of `seed` + `body` . After receiving the callback data, you can calculate `X-Signature` by using **sha256(seed + body)** based on the returned `body` for verification.<br>For specific use cases, see [Signature Algorithm v3](https://intl.cloud.tencent.com/document/product/1265/51885?from_cn_redirect=1).
                     * 
                     */
                    std::string GetSeed() const;

                    /**
                     * 设置This field is optional and indicates the key information of the callback signature, which is used to ensure the data security. The signature algorithm is to add the `X-Signature` field to the returned HTTP header, whose value is the SHA256-encoded hex string of `seed` + `body` . After receiving the callback data, you can calculate `X-Signature` by using **sha256(seed + body)** based on the returned `body` for verification.<br>For specific use cases, see [Signature Algorithm v3](https://intl.cloud.tencent.com/document/product/1265/51885?from_cn_redirect=1).
                     * @param _seed This field is optional and indicates the key information of the callback signature, which is used to ensure the data security. The signature algorithm is to add the `X-Signature` field to the returned HTTP header, whose value is the SHA256-encoded hex string of `seed` + `body` . After receiving the callback data, you can calculate `X-Signature` by using **sha256(seed + body)** based on the returned `body` for verification.<br>For specific use cases, see [Signature Algorithm v3](https://intl.cloud.tencent.com/document/product/1265/51885?from_cn_redirect=1).
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
                     * 获取This field is optional and indicates the address for receiving the moderation information callback in the default format of URL. After it is configured successfully, the non-compliant audio/video segments generated during moderation will be sent through this API. For the format of the returned callback content, see [Sample Callback Signature](https://intl.cloud.tencent.com/document/product/1265/51879?from_cn_redirect=1#.E7.A4.BA.E4.BE.8B2-.E5.9B.9E.E8.B0.83.E7.AD.BE.E5.90.8D.E7.A4.BA.E4.BE.8B) <br>Note: by default, audio segments are captured at intervals of **15 seconds**, and video frames are captured at intervals of **5 seconds**. If you configure the capturing interval, segments will be returned according to the configuration.
                     * @return CallbackUrl This field is optional and indicates the address for receiving the moderation information callback in the default format of URL. After it is configured successfully, the non-compliant audio/video segments generated during moderation will be sent through this API. For the format of the returned callback content, see [Sample Callback Signature](https://intl.cloud.tencent.com/document/product/1265/51879?from_cn_redirect=1#.E7.A4.BA.E4.BE.8B2-.E5.9B.9E.E8.B0.83.E7.AD.BE.E5.90.8D.E7.A4.BA.E4.BE.8B) <br>Note: by default, audio segments are captured at intervals of **15 seconds**, and video frames are captured at intervals of **5 seconds**. If you configure the capturing interval, segments will be returned according to the configuration.
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置This field is optional and indicates the address for receiving the moderation information callback in the default format of URL. After it is configured successfully, the non-compliant audio/video segments generated during moderation will be sent through this API. For the format of the returned callback content, see [Sample Callback Signature](https://intl.cloud.tencent.com/document/product/1265/51879?from_cn_redirect=1#.E7.A4.BA.E4.BE.8B2-.E5.9B.9E.E8.B0.83.E7.AD.BE.E5.90.8D.E7.A4.BA.E4.BE.8B) <br>Note: by default, audio segments are captured at intervals of **15 seconds**, and video frames are captured at intervals of **5 seconds**. If you configure the capturing interval, segments will be returned according to the configuration.
                     * @param _callbackUrl This field is optional and indicates the address for receiving the moderation information callback in the default format of URL. After it is configured successfully, the non-compliant audio/video segments generated during moderation will be sent through this API. For the format of the returned callback content, see [Sample Callback Signature](https://intl.cloud.tencent.com/document/product/1265/51879?from_cn_redirect=1#.E7.A4.BA.E4.BE.8B2-.E5.9B.9E.E8.B0.83.E7.AD.BE.E5.90.8D.E7.A4.BA.E4.BE.8B) <br>Note: by default, audio segments are captured at intervals of **15 seconds**, and video frames are captured at intervals of **5 seconds**. If you configure the capturing interval, segments will be returned according to the configuration.
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
                     * 获取This parameter is optional and used to pass in the priority of a moderation task. When you have multiple tasks in the queue, you can use this parameter to control their priorities for processing the queue jumping logic. **Default value: 0**.
                     * @return Priority This parameter is optional and used to pass in the priority of a moderation task. When you have multiple tasks in the queue, you can use this parameter to control their priorities for processing the queue jumping logic. **Default value: 0**.
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置This parameter is optional and used to pass in the priority of a moderation task. When you have multiple tasks in the queue, you can use this parameter to control their priorities for processing the queue jumping logic. **Default value: 0**.
                     * @param _priority This parameter is optional and used to pass in the priority of a moderation task. When you have multiple tasks in the queue, you can use this parameter to control their priorities for processing the queue jumping logic. **Default value: 0**.
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
                     * This parameter is used to pass in the task type of a moderation task. Valid values: **VIDEO** (video on demand), **LIVE_VIDEO** (video live streaming).
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * This field indicates the input video moderation task information. For the specific input content, see the detailed description of the `TaskInput` data structure.<br>Note: you can create up to **10 tasks** at a time.
                     */
                    std::vector<TaskInput> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * This field indicates the specific number of the policy, which is used for API scheduling and can be configured in the CMS console. If the `Biztype` parameter is passed in, a moderation policy will be used based on the business scenario; otherwise, the default moderation policy will be used.<br>Note: `Biztype` can contain 3–32 digits, letters, and underscores; different `Biztype` values are associated with different business scenarios and moderation policies, so you need to verify the `Biztype` before calling this API.
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * This field is optional and indicates the key information of the callback signature, which is used to ensure the data security. The signature algorithm is to add the `X-Signature` field to the returned HTTP header, whose value is the SHA256-encoded hex string of `seed` + `body` . After receiving the callback data, you can calculate `X-Signature` by using **sha256(seed + body)** based on the returned `body` for verification.<br>For specific use cases, see [Signature Algorithm v3](https://intl.cloud.tencent.com/document/product/1265/51885?from_cn_redirect=1).
                     */
                    std::string m_seed;
                    bool m_seedHasBeenSet;

                    /**
                     * This field is optional and indicates the address for receiving the moderation information callback in the default format of URL. After it is configured successfully, the non-compliant audio/video segments generated during moderation will be sent through this API. For the format of the returned callback content, see [Sample Callback Signature](https://intl.cloud.tencent.com/document/product/1265/51879?from_cn_redirect=1#.E7.A4.BA.E4.BE.8B2-.E5.9B.9E.E8.B0.83.E7.AD.BE.E5.90.8D.E7.A4.BA.E4.BE.8B) <br>Note: by default, audio segments are captured at intervals of **15 seconds**, and video frames are captured at intervals of **5 seconds**. If you configure the capturing interval, segments will be returned according to the configuration.
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * This parameter is optional and used to pass in the priority of a moderation task. When you have multiple tasks in the queue, you can use this parameter to control their priorities for processing the queue jumping logic. **Default value: 0**.
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20201229_MODEL_CREATEVIDEOMODERATIONTASKREQUEST_H_
