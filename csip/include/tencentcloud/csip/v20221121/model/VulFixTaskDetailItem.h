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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXTASKDETAILITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXTASKDETAILITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Vulnerability repair task details
                */
                class VulFixTaskDetailItem : public AbstractModel
                {
                public:
                    VulFixTaskDetailItem();
                    ~VulFixTaskDetailItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Detailed record ID</p>
                     * @return Id <p>Detailed record ID</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>Detailed record ID</p>
                     * @param _id <p>Detailed record ID</p>
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>Associated repair task ID</p>
                     * @return TaskId <p>Associated repair task ID</p>
                     * 
                     */
                    int64_t GetTaskId() const;

                    /**
                     * 设置<p>Associated repair task ID</p>
                     * @param _taskId <p>Associated repair task ID</p>
                     * 
                     */
                    void SetTaskId(const int64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>Vulnerability ID to be repaired</p>
                     * @return VulId <p>Vulnerability ID to be repaired</p>
                     * 
                     */
                    int64_t GetVulId() const;

                    /**
                     * 设置<p>Vulnerability ID to be repaired</p>
                     * @param _vulId <p>Vulnerability ID to be repaired</p>
                     * 
                     */
                    void SetVulId(const int64_t& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取<p>Patch ID of the fixed KB</p>
                     * @return KBId <p>Patch ID of the fixed KB</p>
                     * 
                     */
                    int64_t GetKBId() const;

                    /**
                     * 设置<p>Patch ID of the fixed KB</p>
                     * @param _kBId <p>Patch ID of the fixed KB</p>
                     * 
                     */
                    void SetKBId(const int64_t& _kBId);

                    /**
                     * 判断参数 KBId 是否已赋值
                     * @return KBId 是否已赋值
                     * 
                     */
                    bool KBIdHasBeenSet() const;

                    /**
                     * 获取<p>Host instance ID.</p>
                     * @return InstanceId <p>Host instance ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Host instance ID.</p>
                     * @param _instanceId <p>Host instance ID.</p>
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
                     * 获取<p>Host name.</p>
                     * @return MachineName <p>Host name.</p>
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置<p>Host name.</p>
                     * @param _machineName <p>Host name.</p>
                     * 
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     * 
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取<p>Host private IP address.</p>
                     * @return MachineIp <p>Host private IP address.</p>
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置<p>Host private IP address.</p>
                     * @param _machineIp <p>Host private IP address.</p>
                     * 
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     * 
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取<p>Vulnerability name</p>
                     * @return VulName <p>Vulnerability name</p>
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置<p>Vulnerability name</p>
                     * @param _vulName <p>Vulnerability name</p>
                     * 
                     */
                    void SetVulName(const std::string& _vulName);

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     * 
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取<p>Execution status<br>Enumeration value:<br>0: Initial state<br>1: Task issued<br>11: Client confirmed<br>2: Repair completed<br>3: Client offline<br>4: Timeout<br>5: Failure<br>6: Unsupported<br>9: Waiting for snapshot creation<br>10: Snapshot creation failed</p>
                     * @return Status <p>Execution status<br>Enumeration value:<br>0: Initial state<br>1: Task issued<br>11: Client confirmed<br>2: Repair completed<br>3: Client offline<br>4: Timeout<br>5: Failure<br>6: Unsupported<br>9: Waiting for snapshot creation<br>10: Snapshot creation failed</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>Execution status<br>Enumeration value:<br>0: Initial state<br>1: Task issued<br>11: Client confirmed<br>2: Repair completed<br>3: Client offline<br>4: Timeout<br>5: Failure<br>6: Unsupported<br>9: Waiting for snapshot creation<br>10: Snapshot creation failed</p>
                     * @param _status <p>Execution status<br>Enumeration value:<br>0: Initial state<br>1: Task issued<br>11: Client confirmed<br>2: Repair completed<br>3: Client offline<br>4: Timeout<br>5: Failure<br>6: Unsupported<br>9: Waiting for snapshot creation<br>10: Snapshot creation failed</p>
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
                     * 获取<p>Fix result</p><p>Enumeration values:</p><ul><li>0: initial state</li><li>1: repair successful</li><li>2: fix failure</li><li>3: fix</li></ul>
                     * @return FixStatus <p>Fix result</p><p>Enumeration values:</p><ul><li>0: initial state</li><li>1: repair successful</li><li>2: fix failure</li><li>3: fix</li></ul>
                     * 
                     */
                    int64_t GetFixStatus() const;

                    /**
                     * 设置<p>Fix result</p><p>Enumeration values:</p><ul><li>0: initial state</li><li>1: repair successful</li><li>2: fix failure</li><li>3: fix</li></ul>
                     * @param _fixStatus <p>Fix result</p><p>Enumeration values:</p><ul><li>0: initial state</li><li>1: repair successful</li><li>2: fix failure</li><li>3: fix</li></ul>
                     * 
                     */
                    void SetFixStatus(const int64_t& _fixStatus);

                    /**
                     * 判断参数 FixStatus 是否已赋值
                     * @return FixStatus 是否已赋值
                     * 
                     */
                    bool FixStatusHasBeenSet() const;

                    /**
                     * 获取<p>Snapshot status<br>Enumeration value:<br>-1: No need to create a snapshot<br>0: Not started<br>1: In progress<br>2: Completed<br>3: Creation failed</p>
                     * @return SnapshotStatus <p>Snapshot status<br>Enumeration value:<br>-1: No need to create a snapshot<br>0: Not started<br>1: In progress<br>2: Completed<br>3: Creation failed</p>
                     * 
                     */
                    int64_t GetSnapshotStatus() const;

                    /**
                     * 设置<p>Snapshot status<br>Enumeration value:<br>-1: No need to create a snapshot<br>0: Not started<br>1: In progress<br>2: Completed<br>3: Creation failed</p>
                     * @param _snapshotStatus <p>Snapshot status<br>Enumeration value:<br>-1: No need to create a snapshot<br>0: Not started<br>1: In progress<br>2: Completed<br>3: Creation failed</p>
                     * 
                     */
                    void SetSnapshotStatus(const int64_t& _snapshotStatus);

                    /**
                     * 判断参数 SnapshotStatus 是否已赋值
                     * @return SnapshotStatus 是否已赋值
                     * 
                     */
                    bool SnapshotStatusHasBeenSet() const;

                    /**
                     * 获取<p>Exception prompt message</p>
                     * @return ExceptionMessage <p>Exception prompt message</p>
                     * 
                     */
                    std::string GetExceptionMessage() const;

                    /**
                     * 设置<p>Exception prompt message</p>
                     * @param _exceptionMessage <p>Exception prompt message</p>
                     * 
                     */
                    void SetExceptionMessage(const std::string& _exceptionMessage);

                    /**
                     * 判断参数 ExceptionMessage 是否已赋值
                     * @return ExceptionMessage 是否已赋值
                     * 
                     */
                    bool ExceptionMessageHasBeenSet() const;

                    /**
                     * 获取<p>Repair startup time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * @return StartTime <p>Repair startup time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Repair startup time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * @param _startTime <p>Repair startup time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>Repair end time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * @return EndTime <p>Repair end time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>Repair end time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * @param _endTime <p>Repair end time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>Snapshot creation time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * @return SnapshotCreateTime <p>Snapshot creation time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * 
                     */
                    std::string GetSnapshotCreateTime() const;

                    /**
                     * 设置<p>Snapshot creation time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * @param _snapshotCreateTime <p>Snapshot creation time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * 
                     */
                    void SetSnapshotCreateTime(const std::string& _snapshotCreateTime);

                    /**
                     * 判断参数 SnapshotCreateTime 是否已赋值
                     * @return SnapshotCreateTime 是否已赋值
                     * 
                     */
                    bool SnapshotCreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>Snapshot expiration time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * @return SnapshotExpireTime <p>Snapshot expiration time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * 
                     */
                    std::string GetSnapshotExpireTime() const;

                    /**
                     * 设置<p>Snapshot expiration time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * @param _snapshotExpireTime <p>Snapshot expiration time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     * 
                     */
                    void SetSnapshotExpireTime(const std::string& _snapshotExpireTime);

                    /**
                     * 判断参数 SnapshotExpireTime 是否已赋值
                     * @return SnapshotExpireTime 是否已赋值
                     * 
                     */
                    bool SnapshotExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>Snapshot creation failure reason (available when SnapshotStatus=3)</p>
                     * @return SnapshotFailReason <p>Snapshot creation failure reason (available when SnapshotStatus=3)</p>
                     * 
                     */
                    std::string GetSnapshotFailReason() const;

                    /**
                     * 设置<p>Snapshot creation failure reason (available when SnapshotStatus=3)</p>
                     * @param _snapshotFailReason <p>Snapshot creation failure reason (available when SnapshotStatus=3)</p>
                     * 
                     */
                    void SetSnapshotFailReason(const std::string& _snapshotFailReason);

                    /**
                     * 判断参数 SnapshotFailReason 是否已赋值
                     * @return SnapshotFailReason 是否已赋值
                     * 
                     */
                    bool SnapshotFailReasonHasBeenSet() const;

                private:

                    /**
                     * <p>Detailed record ID</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Associated repair task ID</p>
                     */
                    int64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>Vulnerability ID to be repaired</p>
                     */
                    int64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * <p>Patch ID of the fixed KB</p>
                     */
                    int64_t m_kBId;
                    bool m_kBIdHasBeenSet;

                    /**
                     * <p>Host instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Host name.</p>
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * <p>Host private IP address.</p>
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * <p>Vulnerability name</p>
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * <p>Execution status<br>Enumeration value:<br>0: Initial state<br>1: Task issued<br>11: Client confirmed<br>2: Repair completed<br>3: Client offline<br>4: Timeout<br>5: Failure<br>6: Unsupported<br>9: Waiting for snapshot creation<br>10: Snapshot creation failed</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>Fix result</p><p>Enumeration values:</p><ul><li>0: initial state</li><li>1: repair successful</li><li>2: fix failure</li><li>3: fix</li></ul>
                     */
                    int64_t m_fixStatus;
                    bool m_fixStatusHasBeenSet;

                    /**
                     * <p>Snapshot status<br>Enumeration value:<br>-1: No need to create a snapshot<br>0: Not started<br>1: In progress<br>2: Completed<br>3: Creation failed</p>
                     */
                    int64_t m_snapshotStatus;
                    bool m_snapshotStatusHasBeenSet;

                    /**
                     * <p>Exception prompt message</p>
                     */
                    std::string m_exceptionMessage;
                    bool m_exceptionMessageHasBeenSet;

                    /**
                     * <p>Repair startup time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>Repair end time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>Snapshot creation time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     */
                    std::string m_snapshotCreateTime;
                    bool m_snapshotCreateTimeHasBeenSet;

                    /**
                     * <p>Snapshot expiration time<br>Parameter format: YYYY-MM-DDTHH:mm:ssZ (ISO8601 format)</p>
                     */
                    std::string m_snapshotExpireTime;
                    bool m_snapshotExpireTimeHasBeenSet;

                    /**
                     * <p>Snapshot creation failure reason (available when SnapshotStatus=3)</p>
                     */
                    std::string m_snapshotFailReason;
                    bool m_snapshotFailReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXTASKDETAILITEM_H_
