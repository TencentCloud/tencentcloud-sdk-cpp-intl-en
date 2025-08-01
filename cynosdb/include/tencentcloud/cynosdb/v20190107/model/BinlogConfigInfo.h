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
                     * 获取Specifies the retention time of binlogs.
                     * @return BinlogSaveDays Specifies the retention time of binlogs.
                     * 
                     */
                    int64_t GetBinlogSaveDays() const;

                    /**
                     * 设置Specifies the retention time of binlogs.
                     * @param _binlogSaveDays Specifies the retention time of binlogs.
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
                     * 获取Whether binlog cross-region backup is enabled.
                     * @return BinlogCrossRegionsEnable Whether binlog cross-region backup is enabled.
                     * 
                     */
                    std::string GetBinlogCrossRegionsEnable() const;

                    /**
                     * 设置Whether binlog cross-region backup is enabled.
                     * @param _binlogCrossRegionsEnable Whether binlog cross-region backup is enabled.
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
                     * 获取binlog in a different region.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BinlogCrossRegions binlog in a different region.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetBinlogCrossRegions() const;

                    /**
                     * 设置binlog in a different region.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _binlogCrossRegions binlog in a different region.
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

                private:

                    /**
                     * Specifies the retention time of binlogs.
                     */
                    int64_t m_binlogSaveDays;
                    bool m_binlogSaveDaysHasBeenSet;

                    /**
                     * Whether binlog cross-region backup is enabled.
                     */
                    std::string m_binlogCrossRegionsEnable;
                    bool m_binlogCrossRegionsEnableHasBeenSet;

                    /**
                     * binlog in a different region.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_binlogCrossRegions;
                    bool m_binlogCrossRegionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BINLOGCONFIGINFO_H_
