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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_EDRSCANRECORDITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_EDRSCANRECORDITEM_H_

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
                * Scan task record item
                */
                class EDRScanRecordItem : public AbstractModel
                {
                public:
                    EDRScanRecordItem();
                    ~EDRScanRecordItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Task primary key ID</p>
                     * @return TaskId <p>Task primary key ID</p>
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置<p>Task primary key ID</p>
                     * @param _taskId <p>Task primary key ID</p>
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>Task name, for example, Malware_20260702_030000</p>
                     * @return TaskName <p>Task name, for example, Malware_20260702_030000</p>
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置<p>Task name, for example, Malware_20260702_030000</p>
                     * @param _taskName <p>Task name, for example, Malware_20260702_030000</p>
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取<p>Scan type</p><p>Enumeration values:</p><ul><li>MANNAL: Manual scan</li><li>CYCLE: Scheduled scan</li></ul>
                     * @return TriggerType <p>Scan type</p><p>Enumeration values:</p><ul><li>MANNAL: Manual scan</li><li>CYCLE: Scheduled scan</li></ul>
                     * 
                     */
                    std::string GetTriggerType() const;

                    /**
                     * 设置<p>Scan type</p><p>Enumeration values:</p><ul><li>MANNAL: Manual scan</li><li>CYCLE: Scheduled scan</li></ul>
                     * @param _triggerType <p>Scan type</p><p>Enumeration values:</p><ul><li>MANNAL: Manual scan</li><li>CYCLE: Scheduled scan</li></ul>
                     * 
                     */
                    void SetTriggerType(const std::string& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取<p>Scheduled scheduling description (has a value when ScanType=1), for example, "Every day at 03:00:00"</p>
                     * @return ScheduleDesc <p>Scheduled scheduling description (has a value when ScanType=1), for example, "Every day at 03:00:00"</p>
                     * 
                     */
                    std::string GetScheduleDesc() const;

                    /**
                     * 设置<p>Scheduled scheduling description (has a value when ScanType=1), for example, "Every day at 03:00:00"</p>
                     * @param _scheduleDesc <p>Scheduled scheduling description (has a value when ScanType=1), for example, "Every day at 03:00:00"</p>
                     * 
                     */
                    void SetScheduleDesc(const std::string& _scheduleDesc);

                    /**
                     * 判断参数 ScheduleDesc 是否已赋值
                     * @return ScheduleDesc 是否已赋值
                     * 
                     */
                    bool ScheduleDescHasBeenSet() const;

                    /**
                     * 获取<p>Task asset type: 0=host scan, 1=container scan</p>
                     * @return TaskType <p>Task asset type: 0=host scan, 1=container scan</p>
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置<p>Task asset type: 0=host scan, 1=container scan</p>
                     * @param _taskType <p>Task asset type: 0=host scan, 1=container scan</p>
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>AppId list of accounts involved in scanning target</p>
                     * @return TargetAppIDs <p>AppId list of accounts involved in scanning target</p>
                     * 
                     */
                    std::vector<uint64_t> GetTargetAppIDs() const;

                    /**
                     * 设置<p>AppId list of accounts involved in scanning target</p>
                     * @param _targetAppIDs <p>AppId list of accounts involved in scanning target</p>
                     * 
                     */
                    void SetTargetAppIDs(const std::vector<uint64_t>& _targetAppIDs);

                    /**
                     * 判断参数 TargetAppIDs 是否已赋值
                     * @return TargetAppIDs 是否已赋值
                     * 
                     */
                    bool TargetAppIDsHasBeenSet() const;

                    /**
                     * 获取<p>Task creator account name</p>
                     * @return AccountName <p>Task creator account name</p>
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置<p>Task creator account name</p>
                     * @param _accountName <p>Task creator account name</p>
                     * 
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取<p>Cloud type: 0=Tencent Cloud, 1=AWS, 2=Azure, 4=Alibaba Cloud</p>
                     * @return CloudType <p>Cloud type: 0=Tencent Cloud, 1=AWS, 2=Azure, 4=Alibaba Cloud</p>
                     * 
                     */
                    int64_t GetCloudType() const;

                    /**
                     * 设置<p>Cloud type: 0=Tencent Cloud, 1=AWS, 2=Azure, 4=Alibaba Cloud</p>
                     * @param _cloudType <p>Cloud type: 0=Tencent Cloud, 1=AWS, 2=Azure, 4=Alibaba Cloud</p>
                     * 
                     */
                    void SetCloudType(const int64_t& _cloudType);

                    /**
                     * 判断参数 CloudType 是否已赋值
                     * @return CloudType 是否已赋值
                     * 
                     */
                    bool CloudTypeHasBeenSet() const;

                    /**
                     * 获取<p>Asset selection method: all=all assets, tag=select by tag, direct=direct selection</p>
                     * @return AssetSelectionType <p>Asset selection method: all=all assets, tag=select by tag, direct=direct selection</p>
                     * 
                     */
                    std::string GetAssetSelectionType() const;

                    /**
                     * 设置<p>Asset selection method: all=all assets, tag=select by tag, direct=direct selection</p>
                     * @param _assetSelectionType <p>Asset selection method: all=all assets, tag=select by tag, direct=direct selection</p>
                     * 
                     */
                    void SetAssetSelectionType(const std::string& _assetSelectionType);

                    /**
                     * 判断参数 AssetSelectionType 是否已赋值
                     * @return AssetSelectionType 是否已赋值
                     * 
                     */
                    bool AssetSelectionTypeHasBeenSet() const;

                    /**
                     * 获取<p>Total number of assets scanned</p>
                     * @return TotalAssetCount <p>Total number of assets scanned</p>
                     * 
                     */
                    int64_t GetTotalAssetCount() const;

                    /**
                     * 设置<p>Total number of assets scanned</p>
                     * @param _totalAssetCount <p>Total number of assets scanned</p>
                     * 
                     */
                    void SetTotalAssetCount(const int64_t& _totalAssetCount);

                    /**
                     * 判断参数 TotalAssetCount 是否已赋值
                     * @return TotalAssetCount 是否已赋值
                     * 
                     */
                    bool TotalAssetCountHasBeenSet() const;

                    /**
                     * 获取<p>Creator account AppId (the frontend judges operation permission based on this)</p>
                     * @return CreateAppID <p>Creator account AppId (the frontend judges operation permission based on this)</p>
                     * 
                     */
                    uint64_t GetCreateAppID() const;

                    /**
                     * 设置<p>Creator account AppId (the frontend judges operation permission based on this)</p>
                     * @param _createAppID <p>Creator account AppId (the frontend judges operation permission based on this)</p>
                     * 
                     */
                    void SetCreateAppID(const uint64_t& _createAppID);

                    /**
                     * 判断参数 CreateAppID 是否已赋值
                     * @return CreateAppID 是否已赋值
                     * 
                     */
                    bool CreateAppIDHasBeenSet() const;

                    /**
                     * 获取<p>Creator account uin</p>
                     * @return Creator <p>Creator account uin</p>
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置<p>Creator account uin</p>
                     * @param _creator <p>Creator account uin</p>
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取<p>Creator account name</p>
                     * @return CreatorName <p>Creator account name</p>
                     * 
                     */
                    std::string GetCreatorName() const;

                    /**
                     * 设置<p>Creator account name</p>
                     * @param _creatorName <p>Creator account name</p>
                     * 
                     */
                    void SetCreatorName(const std::string& _creatorName);

                    /**
                     * 判断参数 CreatorName 是否已赋值
                     * @return CreatorName 是否已赋值
                     * 
                     */
                    bool CreatorNameHasBeenSet() const;

                    /**
                     * 获取<p>Creator cloud type: 0=Tencent Cloud, 1=AWS, 2=Azure, 4=Alibaba Cloud</p>
                     * @return CreatorCloudType <p>Creator cloud type: 0=Tencent Cloud, 1=AWS, 2=Azure, 4=Alibaba Cloud</p>
                     * 
                     */
                    int64_t GetCreatorCloudType() const;

                    /**
                     * 设置<p>Creator cloud type: 0=Tencent Cloud, 1=AWS, 2=Azure, 4=Alibaba Cloud</p>
                     * @param _creatorCloudType <p>Creator cloud type: 0=Tencent Cloud, 1=AWS, 2=Azure, 4=Alibaba Cloud</p>
                     * 
                     */
                    void SetCreatorCloudType(const int64_t& _creatorCloudType);

                    /**
                     * 判断参数 CreatorCloudType 是否已赋值
                     * @return CreatorCloudType 是否已赋值
                     * 
                     */
                    bool CreatorCloudTypeHasBeenSet() const;

                    /**
                     * 获取<p>Task start time. Format: 2006-01-02 15:04:05</p>
                     * @return StartTime <p>Task start time. Format: 2006-01-02 15:04:05</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Task start time. Format: 2006-01-02 15:04:05</p>
                     * @param _startTime <p>Task start time. Format: 2006-01-02 15:04:05</p>
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
                     * 获取<p>Task end time. If not ended, it is an empty string</p>
                     * @return EndTime <p>Task end time. If not ended, it is an empty string</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>Task end time. If not ended, it is an empty string</p>
                     * @param _endTime <p>Task end time. If not ended, it is an empty string</p>
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
                     * 获取<p>WAIT: pending scan, SCANNING: scan in progress, FINISHED: completed, FAILED: failure, CANCELED: stopped</p><p>Enumeration values:</p><ul><li>WAIT: pending scan</li><li>SCANNING: scan in progress</li><li>FINISHED: completed</li><li>FAILED: failure</li><li>CANCELED: stopped</li></ul>
                     * @return Status <p>WAIT: pending scan, SCANNING: scan in progress, FINISHED: completed, FAILED: failure, CANCELED: stopped</p><p>Enumeration values:</p><ul><li>WAIT: pending scan</li><li>SCANNING: scan in progress</li><li>FINISHED: completed</li><li>FAILED: failure</li><li>CANCELED: stopped</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>WAIT: pending scan, SCANNING: scan in progress, FINISHED: completed, FAILED: failure, CANCELED: stopped</p><p>Enumeration values:</p><ul><li>WAIT: pending scan</li><li>SCANNING: scan in progress</li><li>FINISHED: completed</li><li>FAILED: failure</li><li>CANCELED: stopped</li></ul>
                     * @param _status <p>WAIT: pending scan, SCANNING: scan in progress, FINISHED: completed, FAILED: failure, CANCELED: stopped</p><p>Enumeration values:</p><ul><li>WAIT: pending scan</li><li>SCANNING: scan in progress</li><li>FINISHED: completed</li><li>FAILED: failure</li><li>CANCELED: stopped</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>Task primary key ID</p>
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>Task name, for example, Malware_20260702_030000</p>
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * <p>Scan type</p><p>Enumeration values:</p><ul><li>MANNAL: Manual scan</li><li>CYCLE: Scheduled scan</li></ul>
                     */
                    std::string m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * <p>Scheduled scheduling description (has a value when ScanType=1), for example, "Every day at 03:00:00"</p>
                     */
                    std::string m_scheduleDesc;
                    bool m_scheduleDescHasBeenSet;

                    /**
                     * <p>Task asset type: 0=host scan, 1=container scan</p>
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>AppId list of accounts involved in scanning target</p>
                     */
                    std::vector<uint64_t> m_targetAppIDs;
                    bool m_targetAppIDsHasBeenSet;

                    /**
                     * <p>Task creator account name</p>
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * <p>Cloud type: 0=Tencent Cloud, 1=AWS, 2=Azure, 4=Alibaba Cloud</p>
                     */
                    int64_t m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                    /**
                     * <p>Asset selection method: all=all assets, tag=select by tag, direct=direct selection</p>
                     */
                    std::string m_assetSelectionType;
                    bool m_assetSelectionTypeHasBeenSet;

                    /**
                     * <p>Total number of assets scanned</p>
                     */
                    int64_t m_totalAssetCount;
                    bool m_totalAssetCountHasBeenSet;

                    /**
                     * <p>Creator account AppId (the frontend judges operation permission based on this)</p>
                     */
                    uint64_t m_createAppID;
                    bool m_createAppIDHasBeenSet;

                    /**
                     * <p>Creator account uin</p>
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * <p>Creator account name</p>
                     */
                    std::string m_creatorName;
                    bool m_creatorNameHasBeenSet;

                    /**
                     * <p>Creator cloud type: 0=Tencent Cloud, 1=AWS, 2=Azure, 4=Alibaba Cloud</p>
                     */
                    int64_t m_creatorCloudType;
                    bool m_creatorCloudTypeHasBeenSet;

                    /**
                     * <p>Task start time. Format: 2006-01-02 15:04:05</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>Task end time. If not ended, it is an empty string</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>WAIT: pending scan, SCANNING: scan in progress, FINISHED: completed, FAILED: failure, CANCELED: stopped</p><p>Enumeration values:</p><ul><li>WAIT: pending scan</li><li>SCANNING: scan in progress</li><li>FINISHED: completed</li><li>FAILED: failure</li><li>CANCELED: stopped</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_EDRSCANRECORDITEM_H_
