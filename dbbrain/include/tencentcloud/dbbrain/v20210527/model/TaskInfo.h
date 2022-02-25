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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_TASKINFO_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_TASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * Information about Redis session killing task status
                */
                class TaskInfo : public AbstractModel
                {
                public:
                    TaskInfo();
                    ~TaskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Async task ID.
                     * @return AsyncRequestId Async task ID.
                     */
                    int64_t GetAsyncRequestId() const;

                    /**
                     * 设置Async task ID.
                     * @param AsyncRequestId Async task ID.
                     */
                    void SetAsyncRequestId(const int64_t& _asyncRequestId);

                    /**
                     * 判断参数 AsyncRequestId 是否已赋值
                     * @return AsyncRequestId 是否已赋值
                     */
                    bool AsyncRequestIdHasBeenSet() const;

                    /**
                     * 获取List of all proxies of the current instance.
                     * @return InstProxyList List of all proxies of the current instance.
                     */
                    std::vector<std::string> GetInstProxyList() const;

                    /**
                     * 设置List of all proxies of the current instance.
                     * @param InstProxyList List of all proxies of the current instance.
                     */
                    void SetInstProxyList(const std::vector<std::string>& _instProxyList);

                    /**
                     * 判断参数 InstProxyList 是否已赋值
                     * @return InstProxyList 是否已赋值
                     */
                    bool InstProxyListHasBeenSet() const;

                    /**
                     * 获取Total number of proxies of the current instance.
                     * @return InstProxyCount Total number of proxies of the current instance.
                     */
                    int64_t GetInstProxyCount() const;

                    /**
                     * 设置Total number of proxies of the current instance.
                     * @param InstProxyCount Total number of proxies of the current instance.
                     */
                    void SetInstProxyCount(const int64_t& _instProxyCount);

                    /**
                     * 判断参数 InstProxyCount 是否已赋值
                     * @return InstProxyCount 是否已赋值
                     */
                    bool InstProxyCountHasBeenSet() const;

                    /**
                     * 获取Task creation time.
                     * @return CreateTime Task creation time.
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Task creation time.
                     * @param CreateTime Task creation time.
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Task start time.
                     * @return StartTime Task start time.
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Task start time.
                     * @param StartTime Task start time.
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Task status. Valid values: `created` (create), `chosen` (to be executed), `running` (being executed), `failed` (failed), and `finished` (completed).
                     * @return TaskStatus Task status. Valid values: `created` (create), `chosen` (to be executed), `running` (being executed), `failed` (failed), and `finished` (completed).
                     */
                    std::string GetTaskStatus() const;

                    /**
                     * 设置Task status. Valid values: `created` (create), `chosen` (to be executed), `running` (being executed), `failed` (failed), and `finished` (completed).
                     * @param TaskStatus Task status. Valid values: `created` (create), `chosen` (to be executed), `running` (being executed), `failed` (failed), and `finished` (completed).
                     */
                    void SetTaskStatus(const std::string& _taskStatus);

                    /**
                     * 判断参数 TaskStatus 是否已赋值
                     * @return TaskStatus 是否已赋值
                     */
                    bool TaskStatusHasBeenSet() const;

                    /**
                     * 获取IDs of the proxies that have completed the session killing tasks.
                     * @return FinishedProxyList IDs of the proxies that have completed the session killing tasks.
                     */
                    std::vector<std::string> GetFinishedProxyList() const;

                    /**
                     * 设置IDs of the proxies that have completed the session killing tasks.
                     * @param FinishedProxyList IDs of the proxies that have completed the session killing tasks.
                     */
                    void SetFinishedProxyList(const std::vector<std::string>& _finishedProxyList);

                    /**
                     * 判断参数 FinishedProxyList 是否已赋值
                     * @return FinishedProxyList 是否已赋值
                     */
                    bool FinishedProxyListHasBeenSet() const;

                    /**
                     * 获取IDs of the proxies that failed to execute the session killing tasks.
                     * @return FailedProxyList IDs of the proxies that failed to execute the session killing tasks.
                     */
                    std::vector<std::string> GetFailedProxyList() const;

                    /**
                     * 设置IDs of the proxies that failed to execute the session killing tasks.
                     * @param FailedProxyList IDs of the proxies that failed to execute the session killing tasks.
                     */
                    void SetFailedProxyList(const std::vector<std::string>& _failedProxyList);

                    /**
                     * 判断参数 FailedProxyList 是否已赋值
                     * @return FailedProxyList 是否已赋值
                     */
                    bool FailedProxyListHasBeenSet() const;

                    /**
                     * 获取Task end time.
                     * @return EndTime Task end time.
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置Task end time.
                     * @param EndTime Task end time.
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Task progress.
                     * @return Progress Task progress.
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置Task progress.
                     * @param Progress Task progress.
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param InstanceId Instance ID.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * Async task ID.
                     */
                    int64_t m_asyncRequestId;
                    bool m_asyncRequestIdHasBeenSet;

                    /**
                     * List of all proxies of the current instance.
                     */
                    std::vector<std::string> m_instProxyList;
                    bool m_instProxyListHasBeenSet;

                    /**
                     * Total number of proxies of the current instance.
                     */
                    int64_t m_instProxyCount;
                    bool m_instProxyCountHasBeenSet;

                    /**
                     * Task creation time.
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Task start time.
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Task status. Valid values: `created` (create), `chosen` (to be executed), `running` (being executed), `failed` (failed), and `finished` (completed).
                     */
                    std::string m_taskStatus;
                    bool m_taskStatusHasBeenSet;

                    /**
                     * IDs of the proxies that have completed the session killing tasks.
                     */
                    std::vector<std::string> m_finishedProxyList;
                    bool m_finishedProxyListHasBeenSet;

                    /**
                     * IDs of the proxies that failed to execute the session killing tasks.
                     */
                    std::vector<std::string> m_failedProxyList;
                    bool m_failedProxyListHasBeenSet;

                    /**
                     * Task end time.
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Task progress.
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_TASKINFO_H_
