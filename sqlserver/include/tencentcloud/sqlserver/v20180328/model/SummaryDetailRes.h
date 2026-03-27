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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SUMMARYDETAILRES_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SUMMARYDETAILRES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * Backup Overview Real-Time Statistics
                */
                class SummaryDetailRes : public AbstractModel
                {
                public:
                    SummaryDetailRes();
                    ~SummaryDetailRes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Region Identifier
                     * @return RegionId Region Identifier
                     * 
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 设置Region Identifier
                     * @param _regionId Region Identifier
                     * 
                     */
                    void SetRegionId(const uint64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取Instance Status. Valid values:
1: Creating
2: Running
3: Restricted Running (primary/secondary switching)
4: Isolated
5: Recycling
6: Recycled
7: Task Executing (performing instance backup, rollback, etc.)
8: Offline
9: Instance Scaling
10: Instance Migrating
                     * @return Status Instance Status. Valid values:
1: Creating
2: Running
3: Restricted Running (primary/secondary switching)
4: Isolated
5: Recycling
6: Recycled
7: Task Executing (performing instance backup, rollback, etc.)
8: Offline
9: Instance Scaling
10: Instance Migrating
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Instance Status. Valid values:
1: Creating
2: Running
3: Restricted Running (primary/secondary switching)
4: Isolated
5: Recycling
6: Recycled
7: Task Executing (performing instance backup, rollback, etc.)
8: Offline
9: Instance Scaling
10: Instance Migrating
                     * @param _status Instance Status. Valid values:
1: Creating
2: Running
3: Restricted Running (primary/secondary switching)
4: Isolated
5: Recycling
6: Recycled
7: Task Executing (performing instance backup, rollback, etc.)
8: Offline
9: Instance Scaling
10: Instance Migrating
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
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
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
                     * 获取Instance Name
                     * @return Name Instance Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Instance Name
                     * @param _name Instance Name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Backup Space
                     * @return ActualUsedSpace Backup Space
                     * 
                     */
                    uint64_t GetActualUsedSpace() const;

                    /**
                     * 设置Backup Space
                     * @param _actualUsedSpace Backup Space
                     * 
                     */
                    void SetActualUsedSpace(const uint64_t& _actualUsedSpace);

                    /**
                     * 判断参数 ActualUsedSpace 是否已赋值
                     * @return ActualUsedSpace 是否已赋值
                     * 
                     */
                    bool ActualUsedSpaceHasBeenSet() const;

                    /**
                     * 获取Data Backup Space
                     * @return DataBackupSpace Data Backup Space
                     * 
                     */
                    uint64_t GetDataBackupSpace() const;

                    /**
                     * 设置Data Backup Space
                     * @param _dataBackupSpace Data Backup Space
                     * 
                     */
                    void SetDataBackupSpace(const uint64_t& _dataBackupSpace);

                    /**
                     * 判断参数 DataBackupSpace 是否已赋值
                     * @return DataBackupSpace 是否已赋值
                     * 
                     */
                    bool DataBackupSpaceHasBeenSet() const;

                    /**
                     * 获取Data Backup Total File Count
                     * @return DataBackupCount Data Backup Total File Count
                     * 
                     */
                    uint64_t GetDataBackupCount() const;

                    /**
                     * 设置Data Backup Total File Count
                     * @param _dataBackupCount Data Backup Total File Count
                     * 
                     */
                    void SetDataBackupCount(const uint64_t& _dataBackupCount);

                    /**
                     * 判断参数 DataBackupCount 是否已赋值
                     * @return DataBackupCount 是否已赋值
                     * 
                     */
                    bool DataBackupCountHasBeenSet() const;

                    /**
                     * 获取Log Backup Space
                     * @return LogBackupSpace Log Backup Space
                     * 
                     */
                    uint64_t GetLogBackupSpace() const;

                    /**
                     * 设置Log Backup Space
                     * @param _logBackupSpace Log Backup Space
                     * 
                     */
                    void SetLogBackupSpace(const uint64_t& _logBackupSpace);

                    /**
                     * 判断参数 LogBackupSpace 是否已赋值
                     * @return LogBackupSpace 是否已赋值
                     * 
                     */
                    bool LogBackupSpaceHasBeenSet() const;

                    /**
                     * 获取Log Backup Total File Count
                     * @return LogBackupCount Log Backup Total File Count
                     * 
                     */
                    uint64_t GetLogBackupCount() const;

                    /**
                     * 设置Log Backup Total File Count
                     * @param _logBackupCount Log Backup Total File Count
                     * 
                     */
                    void SetLogBackupCount(const uint64_t& _logBackupCount);

                    /**
                     * 判断参数 LogBackupCount 是否已赋值
                     * @return LogBackupCount 是否已赋值
                     * 
                     */
                    bool LogBackupCountHasBeenSet() const;

                    /**
                     * 获取Automatic Backup Space
                     * @return AutoBackupSpace Automatic Backup Space
                     * 
                     */
                    uint64_t GetAutoBackupSpace() const;

                    /**
                     * 设置Automatic Backup Space
                     * @param _autoBackupSpace Automatic Backup Space
                     * 
                     */
                    void SetAutoBackupSpace(const uint64_t& _autoBackupSpace);

                    /**
                     * 判断参数 AutoBackupSpace 是否已赋值
                     * @return AutoBackupSpace 是否已赋值
                     * 
                     */
                    bool AutoBackupSpaceHasBeenSet() const;

                    /**
                     * 获取Automatic Backup Total File Count
                     * @return AutoBackupCount Automatic Backup Total File Count
                     * 
                     */
                    uint64_t GetAutoBackupCount() const;

                    /**
                     * 设置Automatic Backup Total File Count
                     * @param _autoBackupCount Automatic Backup Total File Count
                     * 
                     */
                    void SetAutoBackupCount(const uint64_t& _autoBackupCount);

                    /**
                     * 判断参数 AutoBackupCount 是否已赋值
                     * @return AutoBackupCount 是否已赋值
                     * 
                     */
                    bool AutoBackupCountHasBeenSet() const;

                    /**
                     * 获取Manual Backup Space
                     * @return ManualBackupSpace Manual Backup Space
                     * 
                     */
                    uint64_t GetManualBackupSpace() const;

                    /**
                     * 设置Manual Backup Space
                     * @param _manualBackupSpace Manual Backup Space
                     * 
                     */
                    void SetManualBackupSpace(const uint64_t& _manualBackupSpace);

                    /**
                     * 判断参数 ManualBackupSpace 是否已赋值
                     * @return ManualBackupSpace 是否已赋值
                     * 
                     */
                    bool ManualBackupSpaceHasBeenSet() const;

                    /**
                     * 获取Manual Backup Total File Count
                     * @return ManualBackupCount Manual Backup Total File Count
                     * 
                     */
                    uint64_t GetManualBackupCount() const;

                    /**
                     * 设置Manual Backup Total File Count
                     * @param _manualBackupCount Manual Backup Total File Count
                     * 
                     */
                    void SetManualBackupCount(const uint64_t& _manualBackupCount);

                    /**
                     * 判断参数 ManualBackupCount 是否已赋值
                     * @return ManualBackupCount 是否已赋值
                     * 
                     */
                    bool ManualBackupCountHasBeenSet() const;

                    /**
                     * 获取Instance Region Code
                     * @return Region Instance Region Code
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Instance Region Code
                     * @param _region Instance Region Code
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * Region Identifier
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * Instance Status. Valid values:
1: Creating
2: Running
3: Restricted Running (primary/secondary switching)
4: Isolated
5: Recycling
6: Recycled
7: Task Executing (performing instance backup, rollback, etc.)
8: Offline
9: Instance Scaling
10: Instance Migrating
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Instance Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Backup Space
                     */
                    uint64_t m_actualUsedSpace;
                    bool m_actualUsedSpaceHasBeenSet;

                    /**
                     * Data Backup Space
                     */
                    uint64_t m_dataBackupSpace;
                    bool m_dataBackupSpaceHasBeenSet;

                    /**
                     * Data Backup Total File Count
                     */
                    uint64_t m_dataBackupCount;
                    bool m_dataBackupCountHasBeenSet;

                    /**
                     * Log Backup Space
                     */
                    uint64_t m_logBackupSpace;
                    bool m_logBackupSpaceHasBeenSet;

                    /**
                     * Log Backup Total File Count
                     */
                    uint64_t m_logBackupCount;
                    bool m_logBackupCountHasBeenSet;

                    /**
                     * Automatic Backup Space
                     */
                    uint64_t m_autoBackupSpace;
                    bool m_autoBackupSpaceHasBeenSet;

                    /**
                     * Automatic Backup Total File Count
                     */
                    uint64_t m_autoBackupCount;
                    bool m_autoBackupCountHasBeenSet;

                    /**
                     * Manual Backup Space
                     */
                    uint64_t m_manualBackupSpace;
                    bool m_manualBackupSpaceHasBeenSet;

                    /**
                     * Manual Backup Total File Count
                     */
                    uint64_t m_manualBackupCount;
                    bool m_manualBackupCountHasBeenSet;

                    /**
                     * Instance Region Code
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SUMMARYDETAILRES_H_
