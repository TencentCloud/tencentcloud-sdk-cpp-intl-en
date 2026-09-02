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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMBACKUPSETTINGREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMBACKUPSETTINGREQUEST_H_

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
                * ModifyDspmBackupSetting request structure.
                */
                class ModifyDspmBackupSettingRequest : public AbstractModel
                {
                public:
                    ModifyDspmBackupSettingRequest();
                    ~ModifyDspmBackupSettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Group account member id</p>
                     * @return MemberId <p>Group account member id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>Group account member id</p>
                     * @param _memberId <p>Group account member id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>Backup log retention duration</p>
                     * @return BackupLogSaveTime <p>Backup log retention duration</p>
                     * 
                     */
                    int64_t GetBackupLogSaveTime() const;

                    /**
                     * 设置<p>Backup log retention duration</p>
                     * @param _backupLogSaveTime <p>Backup log retention duration</p>
                     * 
                     */
                    void SetBackupLogSaveTime(const int64_t& _backupLogSaveTime);

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
                     * 设置<p>Recovery log retention duration</p>
                     * @param _restoreLogSaveTime <p>Recovery log retention duration</p>
                     * 
                     */
                    void SetRestoreLogSaveTime(const int64_t& _restoreLogSaveTime);

                    /**
                     * 判断参数 RestoreLogSaveTime 是否已赋值
                     * @return RestoreLogSaveTime 是否已赋值
                     * 
                     */
                    bool RestoreLogSaveTimeHasBeenSet() const;

                    /**
                     * 获取<p>Maximum lifecycle limit for logs</p>
                     * @return LogMaxSaveTime <p>Maximum lifecycle limit for logs</p>
                     * 
                     */
                    int64_t GetLogMaxSaveTime() const;

                    /**
                     * 设置<p>Maximum lifecycle limit for logs</p>
                     * @param _logMaxSaveTime <p>Maximum lifecycle limit for logs</p>
                     * 
                     */
                    void SetLogMaxSaveTime(const int64_t& _logMaxSaveTime);

                    /**
                     * 判断参数 LogMaxSaveTime 是否已赋值
                     * @return LogMaxSaveTime 是否已赋值
                     * 
                     */
                    bool LogMaxSaveTimeHasBeenSet() const;

                    /**
                     * 获取<p>Maximum days limit for online logs</p>
                     * @return OnlineLogMaxSaveTime <p>Maximum days limit for online logs</p>
                     * 
                     */
                    int64_t GetOnlineLogMaxSaveTime() const;

                    /**
                     * 设置<p>Maximum days limit for online logs</p>
                     * @param _onlineLogMaxSaveTime <p>Maximum days limit for online logs</p>
                     * 
                     */
                    void SetOnlineLogMaxSaveTime(const int64_t& _onlineLogMaxSaveTime);

                    /**
                     * 判断参数 OnlineLogMaxSaveTime 是否已赋值
                     * @return OnlineLogMaxSaveTime 是否已赋值
                     * 
                     */
                    bool OnlineLogMaxSaveTimeHasBeenSet() const;

                private:

                    /**
                     * <p>Group account member id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

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
                     * <p>Maximum lifecycle limit for logs</p>
                     */
                    int64_t m_logMaxSaveTime;
                    bool m_logMaxSaveTimeHasBeenSet;

                    /**
                     * <p>Maximum days limit for online logs</p>
                     */
                    int64_t m_onlineLogMaxSaveTime;
                    bool m_onlineLogMaxSaveTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYDSPMBACKUPSETTINGREQUEST_H_
