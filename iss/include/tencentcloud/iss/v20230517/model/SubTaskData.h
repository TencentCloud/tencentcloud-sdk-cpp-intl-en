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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_SUBTASKDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_SUBTASKDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * Subtask details
                */
                class SubTaskData : public AbstractModel
                {
                public:
                    SubTaskData();
                    ~SubTaskData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Subtask ID
                     * @return SubTaskId Subtask ID
                     * 
                     */
                    std::string GetSubTaskId() const;

                    /**
                     * 设置Subtask ID
                     * @param _subTaskId Subtask ID
                     * 
                     */
                    void SetSubTaskId(const std::string& _subTaskId);

                    /**
                     * 判断参数 SubTaskId 是否已赋值
                     * @return SubTaskId 是否已赋值
                     * 
                     */
                    bool SubTaskIdHasBeenSet() const;

                    /**
                     * 获取Task status. 1: NEW, 2: RUNNING, 3: COMPLETED, 4: FAILED
                     * @return Status Task status. 1: NEW, 2: RUNNING, 3: COMPLETED, 4: FAILED
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Task status. 1: NEW, 2: RUNNING, 3: COMPLETED, 4: FAILED
                     * @param _status Task status. 1: NEW, 2: RUNNING, 3: COMPLETED, 4: FAILED
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Cause of the task failure.
                     * @return FailReason Cause of the task failure.
                     * 
                     */
                    std::string GetFailReason() const;

                    /**
                     * 设置Cause of the task failure.
                     * @param _failReason Cause of the task failure.
                     * 
                     */
                    void SetFailReason(const std::string& _failReason);

                    /**
                     * 判断参数 FailReason 是否已赋值
                     * @return FailReason 是否已赋值
                     * 
                     */
                    bool FailReasonHasBeenSet() const;

                    /**
                     * 获取Task progress
                     * @return Progress Task progress
                     * 
                     */
                    double GetProgress() const;

                    /**
                     * 设置Task progress
                     * @param _progress Task progress
                     * 
                     */
                    void SetProgress(const double& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取Operation type.
                     * @return Action Operation type.
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Operation type.
                     * @param _action Operation type.
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Operation type Chinese description
                     * @return ActionZhDesc Operation type Chinese description
                     * 
                     */
                    std::string GetActionZhDesc() const;

                    /**
                     * 设置Operation type Chinese description
                     * @param _actionZhDesc Operation type Chinese description
                     * 
                     */
                    void SetActionZhDesc(const std::string& _actionZhDesc);

                    /**
                     * 判断参数 ActionZhDesc 是否已赋值
                     * @return ActionZhDesc 是否已赋值
                     * 
                     */
                    bool ActionZhDescHasBeenSet() const;

                    /**
                     * 获取Resource ID
                     * @return ResourceId Resource ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Resource ID
                     * @param _resourceId Resource ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取Task start time
                     * @return StartedAt Task start time
                     * 
                     */
                    std::string GetStartedAt() const;

                    /**
                     * 设置Task start time
                     * @param _startedAt Task start time
                     * 
                     */
                    void SetStartedAt(const std::string& _startedAt);

                    /**
                     * 判断参数 StartedAt 是否已赋值
                     * @return StartedAt 是否已赋值
                     * 
                     */
                    bool StartedAtHasBeenSet() const;

                    /**
                     * 获取Task creation time
                     * @return CreatedAt Task creation time
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置Task creation time
                     * @param _createdAt Task creation time
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取Task update time
                     * @return UpdatedAt Task update time
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置Task update time
                     * @param _updatedAt Task update time
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取Task running time in milliseconds
                     * @return Runtime Task running time in milliseconds
                     * 
                     */
                    int64_t GetRuntime() const;

                    /**
                     * 设置Task running time in milliseconds
                     * @param _runtime Task running time in milliseconds
                     * 
                     */
                    void SetRuntime(const int64_t& _runtime);

                    /**
                     * 判断参数 Runtime 是否已赋值
                     * @return Runtime 是否已赋值
                     * 
                     */
                    bool RuntimeHasBeenSet() const;

                    /**
                     * 获取Device ID
                     * @return DeviceId Device ID
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置Device ID
                     * @param _deviceId Device ID
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取Device name.
                     * @return DeviceName Device name.
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置Device name.
                     * @param _deviceName Device name.
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取Channel ID
                     * @return ChannelId Channel ID
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置Channel ID
                     * @param _channelId Channel ID
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取Channel name
                     * @return ChannelName Channel name
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置Channel name
                     * @param _channelName Channel name
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                private:

                    /**
                     * Subtask ID
                     */
                    std::string m_subTaskId;
                    bool m_subTaskIdHasBeenSet;

                    /**
                     * Task status. 1: NEW, 2: RUNNING, 3: COMPLETED, 4: FAILED
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Cause of the task failure.
                     */
                    std::string m_failReason;
                    bool m_failReasonHasBeenSet;

                    /**
                     * Task progress
                     */
                    double m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * Operation type.
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Operation type Chinese description
                     */
                    std::string m_actionZhDesc;
                    bool m_actionZhDescHasBeenSet;

                    /**
                     * Resource ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Task start time
                     */
                    std::string m_startedAt;
                    bool m_startedAtHasBeenSet;

                    /**
                     * Task creation time
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * Task update time
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * Task running time in milliseconds
                     */
                    int64_t m_runtime;
                    bool m_runtimeHasBeenSet;

                    /**
                     * Device ID
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * Device name.
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * Channel ID
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * Channel name
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_SUBTASKDATA_H_
