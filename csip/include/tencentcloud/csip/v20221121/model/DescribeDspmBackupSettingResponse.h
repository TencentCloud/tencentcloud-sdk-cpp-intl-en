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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMBACKUPSETTINGRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMBACKUPSETTINGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeDspmBackupSetting response structure.
                */
                class DescribeDspmBackupSettingResponse : public AbstractModel
                {
                public:
                    DescribeDspmBackupSettingResponse();
                    ~DescribeDspmBackupSettingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Backup log retention duration</p>
                     * @return BackupLogSaveTime <p>Backup log retention duration</p>
                     * 
                     */
                    int64_t GetBackupLogSaveTime() const;

                    /**
                     * 判断参数 BackupLogSaveTime 是否已赋值
                     * @return BackupLogSaveTime 是否已赋值
                     * 
                     */
                    bool BackupLogSaveTimeHasBeenSet() const;

                    /**
                     * 获取<p>Recovery log retention duration</p>
                     * @return RestoreLogSaveTime <p>Recovery log retention duration</p>
                     * 
                     */
                    int64_t GetRestoreLogSaveTime() const;

                    /**
                     * 判断参数 RestoreLogSaveTime 是否已赋值
                     * @return RestoreLogSaveTime 是否已赋值
                     * 
                     */
                    bool RestoreLogSaveTimeHasBeenSet() const;

                    /**
                     * 获取<p>Maximum lifecycle limit for log</p>
                     * @return LogMaxSaveTime <p>Maximum lifecycle limit for log</p>
                     * 
                     */
                    int64_t GetLogMaxSaveTime() const;

                    /**
                     * 判断参数 LogMaxSaveTime 是否已赋值
                     * @return LogMaxSaveTime 是否已赋值
                     * 
                     */
                    bool LogMaxSaveTimeHasBeenSet() const;

                    /**
                     * 获取<p>Maximum days limit for online log</p>
                     * @return OnlineLogMaxSaveTime <p>Maximum days limit for online log</p>
                     * 
                     */
                    int64_t GetOnlineLogMaxSaveTime() const;

                    /**
                     * 判断参数 OnlineLogMaxSaveTime 是否已赋值
                     * @return OnlineLogMaxSaveTime 是否已赋值
                     * 
                     */
                    bool OnlineLogMaxSaveTimeHasBeenSet() const;

                    /**
                     * 获取<p>Maximum number of online logs, unit: count</p>
                     * @return MaxOnlineLogCount <p>Maximum number of online logs, unit: count</p>
                     * 
                     */
                    int64_t GetMaxOnlineLogCount() const;

                    /**
                     * 判断参数 MaxOnlineLogCount 是否已赋值
                     * @return MaxOnlineLogCount 是否已赋值
                     * 
                     */
                    bool MaxOnlineLogCountHasBeenSet() const;

                private:

                    /**
                     * <p>Backup log retention duration</p>
                     */
                    int64_t m_backupLogSaveTime;
                    bool m_backupLogSaveTimeHasBeenSet;

                    /**
                     * <p>Recovery log retention duration</p>
                     */
                    int64_t m_restoreLogSaveTime;
                    bool m_restoreLogSaveTimeHasBeenSet;

                    /**
                     * <p>Maximum lifecycle limit for log</p>
                     */
                    int64_t m_logMaxSaveTime;
                    bool m_logMaxSaveTimeHasBeenSet;

                    /**
                     * <p>Maximum days limit for online log</p>
                     */
                    int64_t m_onlineLogMaxSaveTime;
                    bool m_onlineLogMaxSaveTimeHasBeenSet;

                    /**
                     * <p>Maximum number of online logs, unit: count</p>
                     */
                    int64_t m_maxOnlineLogCount;
                    bool m_maxOnlineLogCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEDSPMBACKUPSETTINGRESPONSE_H_
