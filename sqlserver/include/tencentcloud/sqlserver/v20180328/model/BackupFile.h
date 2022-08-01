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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_BACKUPFILE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_BACKUPFILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/CrossBackupAddr.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * If the backup files are unarchived, each database corresponds to one backup file.
                */
                class BackupFile : public AbstractModel
                {
                public:
                    BackupFile();
                    ~BackupFile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique ID of a backup file
                     * @return Id Unique ID of a backup file
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置Unique ID of a backup file
                     * @param Id Unique ID of a backup file
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取Backup file name
                     * @return FileName Backup file name
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Backup file name
                     * @param FileName Backup file name
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取File size in KB
                     * @return Size File size in KB
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置File size in KB
                     * @param Size File size in KB
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取Name of the database corresponding to the backup file
                     * @return DBs Name of the database corresponding to the backup file
                     */
                    std::vector<std::string> GetDBs() const;

                    /**
                     * 设置Name of the database corresponding to the backup file
                     * @param DBs Name of the database corresponding to the backup file
                     */
                    void SetDBs(const std::vector<std::string>& _dBs);

                    /**
                     * 判断参数 DBs 是否已赋值
                     * @return DBs 是否已赋值
                     */
                    bool DBsHasBeenSet() const;

                    /**
                     * 获取Download address
                     * @return DownloadLink Download address
                     */
                    std::string GetDownloadLink() const;

                    /**
                     * 设置Download address
                     * @param DownloadLink Download address
                     */
                    void SetDownloadLink(const std::string& _downloadLink);

                    /**
                     * 判断参数 DownloadLink 是否已赋值
                     * @return DownloadLink 是否已赋值
                     */
                    bool DownloadLinkHasBeenSet() const;

                    /**
                     * 获取The code of the region where current instance resides
                     * @return Region The code of the region where current instance resides
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置The code of the region where current instance resides
                     * @param Region The code of the region where current instance resides
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取The target region and download address of cross-region backup
                     * @return CrossBackupAddr The target region and download address of cross-region backup
                     */
                    std::vector<CrossBackupAddr> GetCrossBackupAddr() const;

                    /**
                     * 设置The target region and download address of cross-region backup
                     * @param CrossBackupAddr The target region and download address of cross-region backup
                     */
                    void SetCrossBackupAddr(const std::vector<CrossBackupAddr>& _crossBackupAddr);

                    /**
                     * 判断参数 CrossBackupAddr 是否已赋值
                     * @return CrossBackupAddr 是否已赋值
                     */
                    bool CrossBackupAddrHasBeenSet() const;

                private:

                    /**
                     * Unique ID of a backup file
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Backup file name
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * File size in KB
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Name of the database corresponding to the backup file
                     */
                    std::vector<std::string> m_dBs;
                    bool m_dBsHasBeenSet;

                    /**
                     * Download address
                     */
                    std::string m_downloadLink;
                    bool m_downloadLinkHasBeenSet;

                    /**
                     * The code of the region where current instance resides
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * The target region and download address of cross-region backup
                     */
                    std::vector<CrossBackupAddr> m_crossBackupAddr;
                    bool m_crossBackupAddrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_BACKUPFILE_H_
