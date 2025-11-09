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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CROSSREGIONBACKUPITEM_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CROSSREGIONBACKUPITEM_H_

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
                * Cross-Region backup describes the backup information in each region.
                */
                class CrossRegionBackupItem : public AbstractModel
                {
                public:
                    CrossRegionBackupItem();
                    ~CrossRegionBackupItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Target region for backup.
                     * @return CrossRegion Target region for backup.
                     * 
                     */
                    std::string GetCrossRegion() const;

                    /**
                     * 设置Target region for backup.
                     * @param _crossRegion Target region for backup.
                     * 
                     */
                    void SetCrossRegion(const std::string& _crossRegion);

                    /**
                     * 判断参数 CrossRegion 是否已赋值
                     * @return CrossRegion 是否已赋值
                     * 
                     */
                    bool CrossRegionHasBeenSet() const;

                    /**
                     * 获取Target region's backup task ID.
                     * @return BackupId Target region's backup task ID.
                     * 
                     */
                    int64_t GetBackupId() const;

                    /**
                     * 设置Target region's backup task ID.
                     * @param _backupId Target region's backup task ID.
                     * 
                     */
                    void SetBackupId(const int64_t& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     * 
                     */
                    bool BackupIdHasBeenSet() const;

                    /**
                     * 获取Backup status in the target region.
                     * @return BackupStatus Backup status in the target region.
                     * 
                     */
                    std::string GetBackupStatus() const;

                    /**
                     * 设置Backup status in the target region.
                     * @param _backupStatus Backup status in the target region.
                     * 
                     */
                    void SetBackupStatus(const std::string& _backupStatus);

                    /**
                     * 判断参数 BackupStatus 是否已赋值
                     * @return BackupStatus 是否已赋值
                     * 
                     */
                    bool BackupStatusHasBeenSet() const;

                private:

                    /**
                     * Target region for backup.
                     */
                    std::string m_crossRegion;
                    bool m_crossRegionHasBeenSet;

                    /**
                     * Target region's backup task ID.
                     */
                    int64_t m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * Backup status in the target region.
                     */
                    std::string m_backupStatus;
                    bool m_backupStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CROSSREGIONBACKUPITEM_H_
