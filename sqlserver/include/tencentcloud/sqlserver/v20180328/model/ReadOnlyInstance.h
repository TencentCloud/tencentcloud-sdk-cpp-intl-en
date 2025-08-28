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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_READONLYINSTANCE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_READONLYINSTANCE_H_

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
                * 
                */
                class ReadOnlyInstance : public AbstractModel
                {
                public:
                    ReadOnlyInstance();
                    ~ReadOnlyInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return InstanceId 
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置
                     * @param _instanceId 
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
                     * 获取
                     * @return Name 
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置
                     * @param _name 
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
                     * 获取
                     * @return Uid 
                     * 
                     */
                    std::string GetUid() const;

                    /**
                     * 设置
                     * @param _uid 
                     * 
                     */
                    void SetUid(const std::string& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取
                     * @return ProjectId 
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置
                     * @param _projectId 
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return Status 
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置
                     * @param _status 
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
                     * 获取
                     * @return CreateTime 
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置
                     * @param _createTime 
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
                     * 获取
                     * @return UpdateTime 
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置
                     * @param _updateTime 
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
                     * 获取
                     * @return Memory 
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置
                     * @param _memory 
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取
                     * @return Storage 
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置
                     * @param _storage 
                     * 
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取
                     * @return Cpu 
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置
                     * @param _cpu 
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取
                     * @return Version 
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置
                     * @param _version 
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取
                     * @return Type 
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置
                     * @param _type 
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
                     * 获取
                     * @return Model 
                     * 
                     */
                    int64_t GetModel() const;

                    /**
                     * 设置
                     * @param _model 
                     * 
                     */
                    void SetModel(const int64_t& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取
                     * @return PayMode 
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置
                     * @param _payMode 
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取
                     * @return Weight 
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置
                     * @param _weight 
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取
                     * @return DelayTime 
                     * 
                     */
                    std::string GetDelayTime() const;

                    /**
                     * 设置
                     * @param _delayTime 
                     * 
                     */
                    void SetDelayTime(const std::string& _delayTime);

                    /**
                     * 判断参数 DelayTime 是否已赋值
                     * @return DelayTime 是否已赋值
                     * 
                     */
                    bool DelayTimeHasBeenSet() const;

                    /**
                     * 获取
                     * @return SynStatus 
                     * 
                     */
                    std::string GetSynStatus() const;

                    /**
                     * 设置
                     * @param _synStatus 
                     * 
                     */
                    void SetSynStatus(const std::string& _synStatus);

                    /**
                     * 判断参数 SynStatus 是否已赋值
                     * @return SynStatus 是否已赋值
                     * 
                     */
                    bool SynStatusHasBeenSet() const;

                    /**
                     * 获取
                     * @return DatabaseDifference 
                     * 
                     */
                    std::string GetDatabaseDifference() const;

                    /**
                     * 设置
                     * @param _databaseDifference 
                     * 
                     */
                    void SetDatabaseDifference(const std::string& _databaseDifference);

                    /**
                     * 判断参数 DatabaseDifference 是否已赋值
                     * @return DatabaseDifference 是否已赋值
                     * 
                     */
                    bool DatabaseDifferenceHasBeenSet() const;

                    /**
                     * 获取
                     * @return AccountDifference 
                     * 
                     */
                    std::string GetAccountDifference() const;

                    /**
                     * 设置
                     * @param _accountDifference 
                     * 
                     */
                    void SetAccountDifference(const std::string& _accountDifference);

                    /**
                     * 判断参数 AccountDifference 是否已赋值
                     * @return AccountDifference 是否已赋值
                     * 
                     */
                    bool AccountDifferenceHasBeenSet() const;

                    /**
                     * 获取
                     * @return StartTime 
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置
                     * @param _startTime 
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
                     * 获取
                     * @return EndTime 
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置
                     * @param _endTime 
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
                     * 获取
                     * @return IsolateTime 
                     * 
                     */
                    std::string GetIsolateTime() const;

                    /**
                     * 设置
                     * @param _isolateTime 
                     * 
                     */
                    void SetIsolateTime(const std::string& _isolateTime);

                    /**
                     * 判断参数 IsolateTime 是否已赋值
                     * @return IsolateTime 是否已赋值
                     * 
                     */
                    bool IsolateTimeHasBeenSet() const;

                    /**
                     * 获取
                     * @return RegionId 
                     * 
                     */
                    std::string GetRegionId() const;

                    /**
                     * 设置
                     * @param _regionId 
                     * 
                     */
                    void SetRegionId(const std::string& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return ZoneId 
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置
                     * @param _zoneId 
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_synStatus;
                    bool m_synStatusHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_databaseDifference;
                    bool m_databaseDifferenceHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_accountDifference;
                    bool m_accountDifferenceHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_isolateTime;
                    bool m_isolateTimeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_READONLYINSTANCE_H_
