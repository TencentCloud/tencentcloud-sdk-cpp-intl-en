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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LOGICBACKUPCONFIGINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LOGICBACKUPCONFIGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/CreateBackupVaultItem.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * Logical backup configuration information.
                */
                class LogicBackupConfigInfo : public AbstractModel
                {
                public:
                    LogicBackupConfigInfo();
                    ~LogicBackupConfigInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Whether automatic logical backup is enabled</p>
                     * @return LogicBackupEnable <p>Whether automatic logical backup is enabled</p>
                     * 
                     */
                    std::string GetLogicBackupEnable() const;

                    /**
                     * 设置<p>Whether automatic logical backup is enabled</p>
                     * @param _logicBackupEnable <p>Whether automatic logical backup is enabled</p>
                     * 
                     */
                    void SetLogicBackupEnable(const std::string& _logicBackupEnable);

                    /**
                     * 判断参数 LogicBackupEnable 是否已赋值
                     * @return LogicBackupEnable 是否已赋值
                     * 
                     */
                    bool LogicBackupEnableHasBeenSet() const;

                    /**
                     * 获取<p>Automatic logic backup start time</p>
                     * @return LogicBackupTimeBeg <p>Automatic logic backup start time</p>
                     * 
                     */
                    uint64_t GetLogicBackupTimeBeg() const;

                    /**
                     * 设置<p>Automatic logic backup start time</p>
                     * @param _logicBackupTimeBeg <p>Automatic logic backup start time</p>
                     * 
                     */
                    void SetLogicBackupTimeBeg(const uint64_t& _logicBackupTimeBeg);

                    /**
                     * 判断参数 LogicBackupTimeBeg 是否已赋值
                     * @return LogicBackupTimeBeg 是否已赋值
                     * 
                     */
                    bool LogicBackupTimeBegHasBeenSet() const;

                    /**
                     * 获取<p>Automated logic backup end time</p>
                     * @return LogicBackupTimeEnd <p>Automated logic backup end time</p>
                     * 
                     */
                    uint64_t GetLogicBackupTimeEnd() const;

                    /**
                     * 设置<p>Automated logic backup end time</p>
                     * @param _logicBackupTimeEnd <p>Automated logic backup end time</p>
                     * 
                     */
                    void SetLogicBackupTimeEnd(const uint64_t& _logicBackupTimeEnd);

                    /**
                     * 判断参数 LogicBackupTimeEnd 是否已赋值
                     * @return LogicBackupTimeEnd 是否已赋值
                     * 
                     */
                    bool LogicBackupTimeEndHasBeenSet() const;

                    /**
                     * 获取<p>Automatic logical backup retention time<br>Unit: second</p>
                     * @return LogicReserveDuration <p>Automatic logical backup retention time<br>Unit: second</p>
                     * 
                     */
                    uint64_t GetLogicReserveDuration() const;

                    /**
                     * 设置<p>Automatic logical backup retention time<br>Unit: second</p>
                     * @param _logicReserveDuration <p>Automatic logical backup retention time<br>Unit: second</p>
                     * 
                     */
                    void SetLogicReserveDuration(const uint64_t& _logicReserveDuration);

                    /**
                     * 判断参数 LogicReserveDuration 是否已赋值
                     * @return LogicReserveDuration 是否已赋值
                     * 
                     */
                    bool LogicReserveDurationHasBeenSet() const;

                    /**
                     * 获取<p>Whether cross-regional logical backup is enabled<br>Available values: ON/OFF</p>
                     * @return LogicCrossRegionsEnable <p>Whether cross-regional logical backup is enabled<br>Available values: ON/OFF</p>
                     * 
                     */
                    std::string GetLogicCrossRegionsEnable() const;

                    /**
                     * 设置<p>Whether cross-regional logical backup is enabled<br>Available values: ON/OFF</p>
                     * @param _logicCrossRegionsEnable <p>Whether cross-regional logical backup is enabled<br>Available values: ON/OFF</p>
                     * 
                     */
                    void SetLogicCrossRegionsEnable(const std::string& _logicCrossRegionsEnable);

                    /**
                     * 判断参数 LogicCrossRegionsEnable 是否已赋值
                     * @return LogicCrossRegionsEnable 是否已赋值
                     * 
                     */
                    bool LogicCrossRegionsEnableHasBeenSet() const;

                    /**
                     * 获取<p>Cross-regional logic backup</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return LogicCrossRegions <p>Cross-regional logic backup</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetLogicCrossRegions() const;

                    /**
                     * 设置<p>Cross-regional logic backup</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _logicCrossRegions <p>Cross-regional logic backup</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLogicCrossRegions(const std::vector<std::string>& _logicCrossRegions);

                    /**
                     * 判断参数 LogicCrossRegions 是否已赋值
                     * @return LogicCrossRegions 是否已赋值
                     * 
                     */
                    bool LogicCrossRegionsHasBeenSet() const;

                    /**
                     * 获取<p>Backup delivery relationship</p>
                     * @return AutoCopyVaults <p>Backup delivery relationship</p>
                     * 
                     */
                    std::vector<CreateBackupVaultItem> GetAutoCopyVaults() const;

                    /**
                     * 设置<p>Backup delivery relationship</p>
                     * @param _autoCopyVaults <p>Backup delivery relationship</p>
                     * 
                     */
                    void SetAutoCopyVaults(const std::vector<CreateBackupVaultItem>& _autoCopyVaults);

                    /**
                     * 判断参数 AutoCopyVaults 是否已赋值
                     * @return AutoCopyVaults 是否已赋值
                     * 
                     */
                    bool AutoCopyVaultsHasBeenSet() const;

                    /**
                     * 获取<p>Day</p><p>Unit: Cross-regional logical backup retention time</p>
                     * @return LogicCrossRegionSaveDays <p>Day</p><p>Unit: Cross-regional logical backup retention time</p>
                     * 
                     */
                    int64_t GetLogicCrossRegionSaveDays() const;

                    /**
                     * 设置<p>Day</p><p>Unit: Cross-regional logical backup retention time</p>
                     * @param _logicCrossRegionSaveDays <p>Day</p><p>Unit: Cross-regional logical backup retention time</p>
                     * 
                     */
                    void SetLogicCrossRegionSaveDays(const int64_t& _logicCrossRegionSaveDays);

                    /**
                     * 判断参数 LogicCrossRegionSaveDays 是否已赋值
                     * @return LogicCrossRegionSaveDays 是否已赋值
                     * 
                     */
                    bool LogicCrossRegionSaveDaysHasBeenSet() const;

                private:

                    /**
                     * <p>Whether automatic logical backup is enabled</p>
                     */
                    std::string m_logicBackupEnable;
                    bool m_logicBackupEnableHasBeenSet;

                    /**
                     * <p>Automatic logic backup start time</p>
                     */
                    uint64_t m_logicBackupTimeBeg;
                    bool m_logicBackupTimeBegHasBeenSet;

                    /**
                     * <p>Automated logic backup end time</p>
                     */
                    uint64_t m_logicBackupTimeEnd;
                    bool m_logicBackupTimeEndHasBeenSet;

                    /**
                     * <p>Automatic logical backup retention time<br>Unit: second</p>
                     */
                    uint64_t m_logicReserveDuration;
                    bool m_logicReserveDurationHasBeenSet;

                    /**
                     * <p>Whether cross-regional logical backup is enabled<br>Available values: ON/OFF</p>
                     */
                    std::string m_logicCrossRegionsEnable;
                    bool m_logicCrossRegionsEnableHasBeenSet;

                    /**
                     * <p>Cross-regional logic backup</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_logicCrossRegions;
                    bool m_logicCrossRegionsHasBeenSet;

                    /**
                     * <p>Backup delivery relationship</p>
                     */
                    std::vector<CreateBackupVaultItem> m_autoCopyVaults;
                    bool m_autoCopyVaultsHasBeenSet;

                    /**
                     * <p>Day</p><p>Unit: Cross-regional logical backup retention time</p>
                     */
                    int64_t m_logicCrossRegionSaveDays;
                    bool m_logicCrossRegionSaveDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LOGICBACKUPCONFIGINFO_H_
