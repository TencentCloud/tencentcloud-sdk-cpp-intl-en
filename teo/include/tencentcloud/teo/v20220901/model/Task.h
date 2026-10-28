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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_TASK_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_TASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Content management task result.
                */
                class Task : public AbstractModel
                {
                public:
                    Task();
                    ~Task() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID.
                     * @return JobId Task ID.
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置Task ID.
                     * @param _jobId Task ID.
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取Resource.
                     * @return Target Resource.
                     * 
                     */
                    std::string GetTarget() const;

                    /**
                     * 设置Resource.
                     * @param _target Resource.
                     * 
                     */
                    void SetTarget(const std::string& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取Task type.
                     * @return Type Task type.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Task type.
                     * @param _type Task type.
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
                     * 获取Node cache purge method, with values:
<li>invalidate: Marks as expired. A back-to-origin validation is triggered upon user request, sending an HTTP conditional request with If-None-Match and If-Modified-Since headers. If the origin server responds with 200, the node will fetch new resources from the origin and update the cache; if the origin server responds with 304, the cache will not be updated;</li>
<li>delete: Directly deletes the node's cache, triggering a resource fetch from the origin upon user request.</li>
                     * @return Method Node cache purge method, with values:
<li>invalidate: Marks as expired. A back-to-origin validation is triggered upon user request, sending an HTTP conditional request with If-None-Match and If-Modified-Since headers. If the origin server responds with 200, the node will fetch new resources from the origin and update the cache; if the origin server responds with 304, the cache will not be updated;</li>
<li>delete: Directly deletes the node's cache, triggering a resource fetch from the origin upon user request.</li>
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置Node cache purge method, with values:
<li>invalidate: Marks as expired. A back-to-origin validation is triggered upon user request, sending an HTTP conditional request with If-None-Match and If-Modified-Since headers. If the origin server responds with 200, the node will fetch new resources from the origin and update the cache; if the origin server responds with 304, the cache will not be updated;</li>
<li>delete: Directly deletes the node's cache, triggering a resource fetch from the origin upon user request.</li>
                     * @param _method Node cache purge method, with values:
<li>invalidate: Marks as expired. A back-to-origin validation is triggered upon user request, sending an HTTP conditional request with If-None-Match and If-Modified-Since headers. If the origin server responds with 200, the node will fetch new resources from the origin and update the cache; if the origin server responds with 304, the cache will not be updated;</li>
<li>delete: Directly deletes the node's cache, triggering a resource fetch from the origin upon user request.</li>
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取Status. Valid values:
<li>processing: Processing;</li>
<li>success: Succeeded;</li>
<li>failed: Failed;</li>
<li>timeout: Timed out;</li>
<li>canceled: Canceled.</li>
                     * @return Status Status. Valid values:
<li>processing: Processing;</li>
<li>success: Succeeded;</li>
<li>failed: Failed;</li>
<li>timeout: Timed out;</li>
<li>canceled: Canceled.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status. Valid values:
<li>processing: Processing;</li>
<li>success: Succeeded;</li>
<li>failed: Failed;</li>
<li>timeout: Timed out;</li>
<li>canceled: Canceled.</li>
                     * @param _status Status. Valid values:
<li>processing: Processing;</li>
<li>success: Succeeded;</li>
<li>failed: Failed;</li>
<li>timeout: Timed out;</li>
<li>canceled: Canceled.</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Task creation time.
                     * @return CreateTime Task creation time.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Task creation time.
                     * @param _createTime Task creation time.
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Task completion time.
                     * @return UpdateTime Task completion time.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Task completion time.
                     * @param _updateTime Task completion time.
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Failure type of update and preheating. Valid values:
<li>taskFailed: Task failure;</li>
<li>quotaExceeded: quota exceeded;</li>
<li>downloadManifestFailed: Failed to download the description file;</li>
<li>accessDenied: access denied.</li>
<li>originPullFailed: origin-pull failure.</li>
                     * @return FailType Failure type of update and preheating. Valid values:
<li>taskFailed: Task failure;</li>
<li>quotaExceeded: quota exceeded;</li>
<li>downloadManifestFailed: Failed to download the description file;</li>
<li>accessDenied: access denied.</li>
<li>originPullFailed: origin-pull failure.</li>
                     * 
                     */
                    std::string GetFailType() const;

                    /**
                     * 设置Failure type of update and preheating. Valid values:
<li>taskFailed: Task failure;</li>
<li>quotaExceeded: quota exceeded;</li>
<li>downloadManifestFailed: Failed to download the description file;</li>
<li>accessDenied: access denied.</li>
<li>originPullFailed: origin-pull failure.</li>
                     * @param _failType Failure type of update and preheating. Valid values:
<li>taskFailed: Task failure;</li>
<li>quotaExceeded: quota exceeded;</li>
<li>downloadManifestFailed: Failed to download the description file;</li>
<li>accessDenied: access denied.</li>
<li>originPullFailed: origin-pull failure.</li>
                     * 
                     */
                    void SetFailType(const std::string& _failType);

                    /**
                     * 判断参数 FailType 是否已赋值
                     * @return FailType 是否已赋值
                     * 
                     */
                    bool FailTypeHasBeenSet() const;

                    /**
                     * 获取Failure reason description for cache purge and cache pre-warming.
                     * @return FailMessage Failure reason description for cache purge and cache pre-warming.
                     * 
                     */
                    std::string GetFailMessage() const;

                    /**
                     * 设置Failure reason description for cache purge and cache pre-warming.
                     * @param _failMessage Failure reason description for cache purge and cache pre-warming.
                     * 
                     */
                    void SetFailMessage(const std::string& _failMessage);

                    /**
                     * 判断参数 FailMessage 是否已赋值
                     * @return FailMessage 是否已赋值
                     * 
                     */
                    bool FailMessageHasBeenSet() const;

                private:

                    /**
                     * Task ID.
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Resource.
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * Task type.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Node cache purge method, with values:
<li>invalidate: Marks as expired. A back-to-origin validation is triggered upon user request, sending an HTTP conditional request with If-None-Match and If-Modified-Since headers. If the origin server responds with 200, the node will fetch new resources from the origin and update the cache; if the origin server responds with 304, the cache will not be updated;</li>
<li>delete: Directly deletes the node's cache, triggering a resource fetch from the origin upon user request.</li>
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * Status. Valid values:
<li>processing: Processing;</li>
<li>success: Succeeded;</li>
<li>failed: Failed;</li>
<li>timeout: Timed out;</li>
<li>canceled: Canceled.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Task creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Task completion time.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Failure type of update and preheating. Valid values:
<li>taskFailed: Task failure;</li>
<li>quotaExceeded: quota exceeded;</li>
<li>downloadManifestFailed: Failed to download the description file;</li>
<li>accessDenied: access denied.</li>
<li>originPullFailed: origin-pull failure.</li>
                     */
                    std::string m_failType;
                    bool m_failTypeHasBeenSet;

                    /**
                     * Failure reason description for cache purge and cache pre-warming.
                     */
                    std::string m_failMessage;
                    bool m_failMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_TASK_H_
