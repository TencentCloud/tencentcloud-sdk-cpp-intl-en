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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BINLOGCONFIGINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BINLOGCONFIGINFO_H_

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
                * Specifies the binlog configuration message.
                */
                class BinlogConfigInfo : public AbstractModel
                {
                public:
                    BinlogConfigInfo();
                    ~BinlogConfigInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>binlog retention time</p>
                     * @return BinlogSaveDays <p>binlog retention time</p>
                     * 
                     */
                    int64_t GetBinlogSaveDays() const;

                    /**
                     * 设置<p>binlog retention time</p>
                     * @param _binlogSaveDays <p>binlog retention time</p>
                     * 
                     */
                    void SetBinlogSaveDays(const int64_t& _binlogSaveDays);

                    /**
                     * 判断参数 BinlogSaveDays 是否已赋值
                     * @return BinlogSaveDays 是否已赋值
                     * 
                     */
                    bool BinlogSaveDaysHasBeenSet() const;

                    /**
                     * 获取<p>Whether cross-region backup of binlog is enabled</p>
                     * @return BinlogCrossRegionsEnable <p>Whether cross-region backup of binlog is enabled</p>
                     * 
                     */
                    std::string GetBinlogCrossRegionsEnable() const;

                    /**
                     * 设置<p>Whether cross-region backup of binlog is enabled</p>
                     * @param _binlogCrossRegionsEnable <p>Whether cross-region backup of binlog is enabled</p>
                     * 
                     */
                    void SetBinlogCrossRegionsEnable(const std::string& _binlogCrossRegionsEnable);

                    /**
                     * 判断参数 BinlogCrossRegionsEnable 是否已赋值
                     * @return BinlogCrossRegionsEnable 是否已赋值
                     * 
                     */
                    bool BinlogCrossRegionsEnableHasBeenSet() const;

                    /**
                     * 获取<p>binlog cross-region</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BinlogCrossRegions <p>binlog cross-region</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetBinlogCrossRegions() const;

                    /**
                     * 设置<p>binlog cross-region</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _binlogCrossRegions <p>binlog cross-region</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBinlogCrossRegions(const std::vector<std::string>& _binlogCrossRegions);

                    /**
                     * 判断参数 BinlogCrossRegions 是否已赋值
                     * @return BinlogCrossRegions 是否已赋值
                     * 
                     */
                    bool BinlogCrossRegionsHasBeenSet() const;

                    /**
                     * 获取<p>Cross-region backup retention period</p><p>Unit: Day</p>
                     * @return BinlogCrossRegionSaveDays <p>Cross-region backup retention period</p><p>Unit: Day</p>
                     * 
                     */
                    int64_t GetBinlogCrossRegionSaveDays() const;

                    /**
                     * 设置<p>Cross-region backup retention period</p><p>Unit: Day</p>
                     * @param _binlogCrossRegionSaveDays <p>Cross-region backup retention period</p><p>Unit: Day</p>
                     * 
                     */
                    void SetBinlogCrossRegionSaveDays(const int64_t& _binlogCrossRegionSaveDays);

                    /**
                     * 判断参数 BinlogCrossRegionSaveDays 是否已赋值
                     * @return BinlogCrossRegionSaveDays 是否已赋值
                     * 
                     */
                    bool BinlogCrossRegionSaveDaysHasBeenSet() const;

                    /**
                     * 获取<p>Safe info</p>
                     * @return AutoCopyVaults <p>Safe info</p>
                     * 
                     */
                    std::vector<CreateBackupVaultItem> GetAutoCopyVaults() const;

                    /**
                     * 设置<p>Safe info</p>
                     * @param _autoCopyVaults <p>Safe info</p>
                     * 
                     */
                    void SetAutoCopyVaults(const std::vector<CreateBackupVaultItem>& _autoCopyVaults);

                    /**
                     * 判断参数 AutoCopyVaults 是否已赋值
                     * @return AutoCopyVaults 是否已赋值
                     * 
                     */
                    bool AutoCopyVaultsHasBeenSet() const;

                private:

                    /**
                     * <p>binlog retention time</p>
                     */
                    int64_t m_binlogSaveDays;
                    bool m_binlogSaveDaysHasBeenSet;

                    /**
                     * <p>Whether cross-region backup of binlog is enabled</p>
                     */
                    std::string m_binlogCrossRegionsEnable;
                    bool m_binlogCrossRegionsEnableHasBeenSet;

                    /**
                     * <p>binlog cross-region</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_binlogCrossRegions;
                    bool m_binlogCrossRegionsHasBeenSet;

                    /**
                     * <p>Cross-region backup retention period</p><p>Unit: Day</p>
                     */
                    int64_t m_binlogCrossRegionSaveDays;
                    bool m_binlogCrossRegionSaveDaysHasBeenSet;

                    /**
                     * <p>Safe info</p>
                     */
                    std::vector<CreateBackupVaultItem> m_autoCopyVaults;
                    bool m_autoCopyVaultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BINLOGCONFIGINFO_H_
