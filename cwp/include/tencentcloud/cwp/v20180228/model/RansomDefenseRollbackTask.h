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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RANSOMDEFENSEROLLBACKTASK_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RANSOMDEFENSEROLLBACKTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/RegionInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * Anti-ransomware rollback task
                */
                class RansomDefenseRollbackTask : public AbstractModel
                {
                public:
                    RansomDefenseRollbackTask();
                    ~RansomDefenseRollbackTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID
                     * @return Id Task ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Task ID
                     * @param _id Task ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Host UUID
                     * @return Uuid Host UUID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置Host UUID
                     * @param _uuid Host UUID
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取Host QUUID
                     * @return Quuid Host QUUID
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Host QUUID
                     * @param _quuid Host QUUID
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取Host name
                     * @return MachineName Host name
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置Host name
                     * @param _machineName Host name
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
                     * 获取Rollback Task Status: 0 - In Progress, 1 - Succeeded, 2 - Failed
                     * @return Status Rollback Task Status: 0 - In Progress, 1 - Succeeded, 2 - Failed
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Rollback Task Status: 0 - In Progress, 1 - Succeeded, 2 - Failed
                     * @param _status Rollback Task Status: 0 - In Progress, 1 - Succeeded, 2 - Failed
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Hard drive ID list, separated by semicolons (;)
                     * @return Disks Hard drive ID list, separated by semicolons (;)
                     * 
                     */
                    std::string GetDisks() const;

                    /**
                     * 设置Hard drive ID list, separated by semicolons (;)
                     * @param _disks Hard drive ID list, separated by semicolons (;)
                     * 
                     */
                    void SetDisks(const std::string& _disks);

                    /**
                     * 判断参数 Disks 是否已赋值
                     * @return Disks 是否已赋值
                     * 
                     */
                    bool DisksHasBeenSet() const;

                    /**
                     * 获取Operation time
                     * @return CreateTime Operation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Operation time
                     * @param _createTime Operation time
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
                     * 获取Snapshot time
                     * @return BackupTime Snapshot time
                     * 
                     */
                    std::string GetBackupTime() const;

                    /**
                     * 设置Snapshot time
                     * @param _backupTime Snapshot time
                     * 
                     */
                    void SetBackupTime(const std::string& _backupTime);

                    /**
                     * 判断参数 BackupTime 是否已赋值
                     * @return BackupTime 是否已赋值
                     * 
                     */
                    bool BackupTimeHasBeenSet() const;

                    /**
                     * 获取Status!=0 indicates the completion time.
                     * @return ModifyTime Status!=0 indicates the completion time.
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Status!=0 indicates the completion time.
                     * @param _modifyTime Status!=0 indicates the completion time.
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取Availability zone information
                     * @return RegionInfo Availability zone information
                     * 
                     */
                    RegionInfo GetRegionInfo() const;

                    /**
                     * 设置Availability zone information
                     * @param _regionInfo Availability zone information
                     * 
                     */
                    void SetRegionInfo(const RegionInfo& _regionInfo);

                    /**
                     * 判断参数 RegionInfo 是否已赋值
                     * @return RegionInfo 是否已赋值
                     * 
                     */
                    bool RegionInfoHasBeenSet() const;

                private:

                    /**
                     * Task ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Host UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * Host QUUID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Host name
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * Rollback Task Status: 0 - In Progress, 1 - Succeeded, 2 - Failed
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Hard drive ID list, separated by semicolons (;)
                     */
                    std::string m_disks;
                    bool m_disksHasBeenSet;

                    /**
                     * Operation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Snapshot time
                     */
                    std::string m_backupTime;
                    bool m_backupTimeHasBeenSet;

                    /**
                     * Status!=0 indicates the completion time.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * Availability zone information
                     */
                    RegionInfo m_regionInfo;
                    bool m_regionInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RANSOMDEFENSEROLLBACKTASK_H_
