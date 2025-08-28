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
                * 
                */
                class SummaryDetailRes : public AbstractModel
                {
                public:
                    SummaryDetailRes();
                    ~SummaryDetailRes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return RegionId 
                     * 
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 设置
                     * @param _regionId 
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
                     * @return ActualUsedSpace 
                     * 
                     */
                    uint64_t GetActualUsedSpace() const;

                    /**
                     * 设置
                     * @param _actualUsedSpace 
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
                     * 获取
                     * @return DataBackupSpace 
                     * 
                     */
                    uint64_t GetDataBackupSpace() const;

                    /**
                     * 设置
                     * @param _dataBackupSpace 
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
                     * 获取
                     * @return DataBackupCount 
                     * 
                     */
                    uint64_t GetDataBackupCount() const;

                    /**
                     * 设置
                     * @param _dataBackupCount 
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
                     * 获取
                     * @return LogBackupSpace 
                     * 
                     */
                    uint64_t GetLogBackupSpace() const;

                    /**
                     * 设置
                     * @param _logBackupSpace 
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
                     * 获取
                     * @return LogBackupCount 
                     * 
                     */
                    uint64_t GetLogBackupCount() const;

                    /**
                     * 设置
                     * @param _logBackupCount 
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
                     * 获取
                     * @return AutoBackupSpace 
                     * 
                     */
                    uint64_t GetAutoBackupSpace() const;

                    /**
                     * 设置
                     * @param _autoBackupSpace 
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
                     * 获取
                     * @return AutoBackupCount 
                     * 
                     */
                    uint64_t GetAutoBackupCount() const;

                    /**
                     * 设置
                     * @param _autoBackupCount 
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
                     * 获取
                     * @return ManualBackupSpace 
                     * 
                     */
                    uint64_t GetManualBackupSpace() const;

                    /**
                     * 设置
                     * @param _manualBackupSpace 
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
                     * 获取
                     * @return ManualBackupCount 
                     * 
                     */
                    uint64_t GetManualBackupCount() const;

                    /**
                     * 设置
                     * @param _manualBackupCount 
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
                     * 获取
                     * @return Region 
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置
                     * @param _region 
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
                     * 
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

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
                    uint64_t m_actualUsedSpace;
                    bool m_actualUsedSpaceHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_dataBackupSpace;
                    bool m_dataBackupSpaceHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_dataBackupCount;
                    bool m_dataBackupCountHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_logBackupSpace;
                    bool m_logBackupSpaceHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_logBackupCount;
                    bool m_logBackupCountHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_autoBackupSpace;
                    bool m_autoBackupSpaceHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_autoBackupCount;
                    bool m_autoBackupCountHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_manualBackupSpace;
                    bool m_manualBackupSpaceHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_manualBackupCount;
                    bool m_manualBackupCountHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_SUMMARYDETAILRES_H_
