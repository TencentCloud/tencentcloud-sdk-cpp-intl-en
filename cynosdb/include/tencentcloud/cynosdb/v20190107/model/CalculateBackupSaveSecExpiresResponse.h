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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CALCULATEBACKUPSAVESECEXPIRESRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CALCULATEBACKUPSAVESECEXPIRESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/WillDeleteItem.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * CalculateBackupSaveSecExpires response structure.
                */
                class CalculateBackupSaveSecExpiresResponse : public AbstractModel
                {
                public:
                    CalculateBackupSaveSecExpiresResponse();
                    ~CalculateBackupSaveSecExpiresResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of backup files that will be deleted
                     * @return WillDeleteBackupFileCount Total number of backup files that will be deleted
                     * 
                     */
                    int64_t GetWillDeleteBackupFileCount() const;

                    /**
                     * 判断参数 WillDeleteBackupFileCount 是否已赋值
                     * @return WillDeleteBackupFileCount 是否已赋值
                     * 
                     */
                    bool WillDeleteBackupFileCountHasBeenSet() const;

                    /**
                     * 获取Backup file list to be deleted
                     * @return WillDeleteBackupFiles Backup file list to be deleted
                     * 
                     */
                    std::vector<WillDeleteItem> GetWillDeleteBackupFiles() const;

                    /**
                     * 判断参数 WillDeleteBackupFiles 是否已赋值
                     * @return WillDeleteBackupFiles 是否已赋值
                     * 
                     */
                    bool WillDeleteBackupFilesHasBeenSet() const;

                    /**
                     * 获取Total files of binlogs that will be deleted
                     * @return WillDeleteBinlogFileCount Total files of binlogs that will be deleted
                     * 
                     */
                    int64_t GetWillDeleteBinlogFileCount() const;

                    /**
                     * 判断参数 WillDeleteBinlogFileCount 是否已赋值
                     * @return WillDeleteBinlogFileCount 是否已赋值
                     * 
                     */
                    bool WillDeleteBinlogFileCountHasBeenSet() const;

                    /**
                     * 获取Binlog file list to be deleted
                     * @return WillDeleteBinlogFiles Binlog file list to be deleted
                     * 
                     */
                    std::vector<WillDeleteItem> GetWillDeleteBinlogFiles() const;

                    /**
                     * 判断参数 WillDeleteBinlogFiles 是否已赋值
                     * @return WillDeleteBinlogFiles 是否已赋值
                     * 
                     */
                    bool WillDeleteBinlogFilesHasBeenSet() const;

                    /**
                     * 获取Total Redolog files to be deleted
                     * @return WillDeleteRedoLogFileCount Total Redolog files to be deleted
                     * 
                     */
                    int64_t GetWillDeleteRedoLogFileCount() const;

                    /**
                     * 判断参数 WillDeleteRedoLogFileCount 是否已赋值
                     * @return WillDeleteRedoLogFileCount 是否已赋值
                     * 
                     */
                    bool WillDeleteRedoLogFileCountHasBeenSet() const;

                    /**
                     * 获取List of Redolog files that will be deleted
                     * @return WillDeleteRedoLogFiles List of Redolog files that will be deleted
                     * 
                     */
                    std::vector<WillDeleteItem> GetWillDeleteRedoLogFiles() const;

                    /**
                     * 判断参数 WillDeleteRedoLogFiles 是否已赋值
                     * @return WillDeleteRedoLogFiles 是否已赋值
                     * 
                     */
                    bool WillDeleteRedoLogFilesHasBeenSet() const;

                private:

                    /**
                     * Total number of backup files that will be deleted
                     */
                    int64_t m_willDeleteBackupFileCount;
                    bool m_willDeleteBackupFileCountHasBeenSet;

                    /**
                     * Backup file list to be deleted
                     */
                    std::vector<WillDeleteItem> m_willDeleteBackupFiles;
                    bool m_willDeleteBackupFilesHasBeenSet;

                    /**
                     * Total files of binlogs that will be deleted
                     */
                    int64_t m_willDeleteBinlogFileCount;
                    bool m_willDeleteBinlogFileCountHasBeenSet;

                    /**
                     * Binlog file list to be deleted
                     */
                    std::vector<WillDeleteItem> m_willDeleteBinlogFiles;
                    bool m_willDeleteBinlogFilesHasBeenSet;

                    /**
                     * Total Redolog files to be deleted
                     */
                    int64_t m_willDeleteRedoLogFileCount;
                    bool m_willDeleteRedoLogFileCountHasBeenSet;

                    /**
                     * List of Redolog files that will be deleted
                     */
                    std::vector<WillDeleteItem> m_willDeleteRedoLogFiles;
                    bool m_willDeleteRedoLogFilesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CALCULATEBACKUPSAVESECEXPIRESRESPONSE_H_
