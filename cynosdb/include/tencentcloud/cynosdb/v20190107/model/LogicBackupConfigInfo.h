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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LOGICBACKUPCONFIGINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LOGICBACKUPCONFIGINFO_H_

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
                * 
                */
                class LogicBackupConfigInfo : public AbstractModel
                {
                public:
                    LogicBackupConfigInfo();
                    ~LogicBackupConfigInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether automatic logical backup is enabled.
                     * @return LogicBackupEnable Whether automatic logical backup is enabled.
                     * 
                     */
                    std::string GetLogicBackupEnable() const;

                    /**
                     * 设置Whether automatic logical backup is enabled.
                     * @param _logicBackupEnable Whether automatic logical backup is enabled.
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
                     * 获取Specifies the automatic logic backup start time.
                     * @return LogicBackupTimeBeg Specifies the automatic logic backup start time.
                     * 
                     */
                    uint64_t GetLogicBackupTimeBeg() const;

                    /**
                     * 设置Specifies the automatic logic backup start time.
                     * @param _logicBackupTimeBeg Specifies the automatic logic backup start time.
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
                     * 获取Specifies the termination time of automatic logical backup.
                     * @return LogicBackupTimeEnd Specifies the termination time of automatic logical backup.
                     * 
                     */
                    uint64_t GetLogicBackupTimeEnd() const;

                    /**
                     * 设置Specifies the termination time of automatic logical backup.
                     * @param _logicBackupTimeEnd Specifies the termination time of automatic logical backup.
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
                     * 获取Specifies the retention time for automatic logical backup.
                     * @return LogicReserveDuration Specifies the retention time for automatic logical backup.
                     * 
                     */
                    uint64_t GetLogicReserveDuration() const;

                    /**
                     * 设置Specifies the retention time for automatic logical backup.
                     * @param _logicReserveDuration Specifies the retention time for automatic logical backup.
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
                     * 获取Whether cross-regional logical backup is enabled.
                     * @return LogicCrossRegionsEnable Whether cross-regional logical backup is enabled.
                     * 
                     */
                    std::string GetLogicCrossRegionsEnable() const;

                    /**
                     * 设置Whether cross-regional logical backup is enabled.
                     * @param _logicCrossRegionsEnable Whether cross-regional logical backup is enabled.
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
                     * 获取
                     * @return LogicCrossRegions 
                     * 
                     */
                    std::vector<std::string> GetLogicCrossRegions() const;

                    /**
                     * 设置
                     * @param _logicCrossRegions 
                     * 
                     */
                    void SetLogicCrossRegions(const std::vector<std::string>& _logicCrossRegions);

                    /**
                     * 判断参数 LogicCrossRegions 是否已赋值
                     * @return LogicCrossRegions 是否已赋值
                     * 
                     */
                    bool LogicCrossRegionsHasBeenSet() const;

                private:

                    /**
                     * Whether automatic logical backup is enabled.
                     */
                    std::string m_logicBackupEnable;
                    bool m_logicBackupEnableHasBeenSet;

                    /**
                     * Specifies the automatic logic backup start time.
                     */
                    uint64_t m_logicBackupTimeBeg;
                    bool m_logicBackupTimeBegHasBeenSet;

                    /**
                     * Specifies the termination time of automatic logical backup.
                     */
                    uint64_t m_logicBackupTimeEnd;
                    bool m_logicBackupTimeEndHasBeenSet;

                    /**
                     * Specifies the retention time for automatic logical backup.
                     */
                    uint64_t m_logicReserveDuration;
                    bool m_logicReserveDurationHasBeenSet;

                    /**
                     * Whether cross-regional logical backup is enabled.
                     */
                    std::string m_logicCrossRegionsEnable;
                    bool m_logicCrossRegionsEnableHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_logicCrossRegions;
                    bool m_logicCrossRegionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LOGICBACKUPCONFIGINFO_H_
