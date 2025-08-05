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
                * Content management task result
                */
                class Task : public AbstractModel
                {
                public:
                    Task();
                    ~Task() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the task.
                     * @return JobId ID of the task.
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置ID of the task.
                     * @param _jobId ID of the task.
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
                     * 获取Type of the task.
                     * @return Type Type of the task.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type of the task.
                     * @param _type Type of the task.
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
                     * 获取Node cache purge method. valid values:.
<li>invalidate: marks as expired. a back-to-origin validation is triggered upon user request, sending an HTTP conditional request with If-None-Match and If-Modified-Since headers. If the origin server responds with 200, the node will fetch new resources from the origin and update the cache; If the origin server responds with 304, the cache will not be updated;</li>.
<Li>Delete: directly deletes the node's cache, triggering a resource fetch from the origin upon user request.</li>.
                     * @return Method Node cache purge method. valid values:.
<li>invalidate: marks as expired. a back-to-origin validation is triggered upon user request, sending an HTTP conditional request with If-None-Match and If-Modified-Since headers. If the origin server responds with 200, the node will fetch new resources from the origin and update the cache; If the origin server responds with 304, the cache will not be updated;</li>.
<Li>Delete: directly deletes the node's cache, triggering a resource fetch from the origin upon user request.</li>.
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置Node cache purge method. valid values:.
<li>invalidate: marks as expired. a back-to-origin validation is triggered upon user request, sending an HTTP conditional request with If-None-Match and If-Modified-Since headers. If the origin server responds with 200, the node will fetch new resources from the origin and update the cache; If the origin server responds with 304, the cache will not be updated;</li>.
<Li>Delete: directly deletes the node's cache, triggering a resource fetch from the origin upon user request.</li>.
                     * @param _method Node cache purge method. valid values:.
<li>invalidate: marks as expired. a back-to-origin validation is triggered upon user request, sending an HTTP conditional request with If-None-Match and If-Modified-Since headers. If the origin server responds with 200, the node will fetch new resources from the origin and update the cache; If the origin server responds with 304, the cache will not be updated;</li>.
<Li>Delete: directly deletes the node's cache, triggering a resource fetch from the origin upon user request.</li>.
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
                     * 获取Status. valid values:.
<li>processing: indicates the operation is in progress.</li>.
<Li>Success: specifies the success status.</li>.
<li>failed: indicates a failure.</li>.
<Li>Timeout: specifies the timeout period.</li>.
<Li>Canceled: canceled.</li>.
                     * @return Status Status. valid values:.
<li>processing: indicates the operation is in progress.</li>.
<Li>Success: specifies the success status.</li>.
<li>failed: indicates a failure.</li>.
<Li>Timeout: specifies the timeout period.</li>.
<Li>Canceled: canceled.</li>.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status. valid values:.
<li>processing: indicates the operation is in progress.</li>.
<Li>Success: specifies the success status.</li>.
<li>failed: indicates a failure.</li>.
<Li>Timeout: specifies the timeout period.</li>.
<Li>Canceled: canceled.</li>.
                     * @param _status Status. valid values:.
<li>processing: indicates the operation is in progress.</li>.
<Li>Success: specifies the success status.</li>.
<li>failed: indicates a failure.</li>.
<Li>Timeout: specifies the timeout period.</li>.
<Li>Canceled: canceled.</li>.
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
                     * 获取Creation time of the task.
                     * @return CreateTime Creation time of the task.
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time of the task.
                     * @param _createTime Creation time of the task.
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
                     * 获取Completion time of the task.
                     * @return UpdateTime Completion time of the task.
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置Completion time of the task.
                     * @param _updateTime Completion time of the task.
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
                     * 获取Refresh and preheat failure type. valid values:.
<li>taskFailed: specifies the task failure.</li>.
<li>quotaExceeded: specifies the quota exceeded status.</li>.
<li>downloadManifestFailed: specifies the file failed to download.</li>.
<li>accessDenied: specifies access denied.</li>.
<li>originPullFailed: specifies the origin-pull failure.</li>.
                     * @return FailType Refresh and preheat failure type. valid values:.
<li>taskFailed: specifies the task failure.</li>.
<li>quotaExceeded: specifies the quota exceeded status.</li>.
<li>downloadManifestFailed: specifies the file failed to download.</li>.
<li>accessDenied: specifies access denied.</li>.
<li>originPullFailed: specifies the origin-pull failure.</li>.
                     * 
                     */
                    std::string GetFailType() const;

                    /**
                     * 设置Refresh and preheat failure type. valid values:.
<li>taskFailed: specifies the task failure.</li>.
<li>quotaExceeded: specifies the quota exceeded status.</li>.
<li>downloadManifestFailed: specifies the file failed to download.</li>.
<li>accessDenied: specifies access denied.</li>.
<li>originPullFailed: specifies the origin-pull failure.</li>.
                     * @param _failType Refresh and preheat failure type. valid values:.
<li>taskFailed: specifies the task failure.</li>.
<li>quotaExceeded: specifies the quota exceeded status.</li>.
<li>downloadManifestFailed: specifies the file failed to download.</li>.
<li>accessDenied: specifies access denied.</li>.
<li>originPullFailed: specifies the origin-pull failure.</li>.
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
                     * 获取Failure description for refresh and preheating.
                     * @return FailMessage Failure description for refresh and preheating.
                     * 
                     */
                    std::string GetFailMessage() const;

                    /**
                     * 设置Failure description for refresh and preheating.
                     * @param _failMessage Failure description for refresh and preheating.
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
                     * ID of the task.
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * Resource.
                     */
                    std::string m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * Type of the task.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Node cache purge method. valid values:.
<li>invalidate: marks as expired. a back-to-origin validation is triggered upon user request, sending an HTTP conditional request with If-None-Match and If-Modified-Since headers. If the origin server responds with 200, the node will fetch new resources from the origin and update the cache; If the origin server responds with 304, the cache will not be updated;</li>.
<Li>Delete: directly deletes the node's cache, triggering a resource fetch from the origin upon user request.</li>.
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * Status. valid values:.
<li>processing: indicates the operation is in progress.</li>.
<Li>Success: specifies the success status.</li>.
<li>failed: indicates a failure.</li>.
<Li>Timeout: specifies the timeout period.</li>.
<Li>Canceled: canceled.</li>.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Creation time of the task.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Completion time of the task.
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Refresh and preheat failure type. valid values:.
<li>taskFailed: specifies the task failure.</li>.
<li>quotaExceeded: specifies the quota exceeded status.</li>.
<li>downloadManifestFailed: specifies the file failed to download.</li>.
<li>accessDenied: specifies access denied.</li>.
<li>originPullFailed: specifies the origin-pull failure.</li>.
                     */
                    std::string m_failType;
                    bool m_failTypeHasBeenSet;

                    /**
                     * Failure description for refresh and preheating.
                     */
                    std::string m_failMessage;
                    bool m_failMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_TASK_H_
