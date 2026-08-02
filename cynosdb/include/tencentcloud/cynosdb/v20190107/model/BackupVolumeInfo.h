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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BACKUPVOLUMEINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BACKUPVOLUMEINFO_H_

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
                * Backup Usage Info
                */
                class BackupVolumeInfo : public AbstractModel
                {
                public:
                    BackupVolumeInfo();
                    ~BackupVolumeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Backup usage
                     * @return BackupVolume Backup usage
                     * 
                     */
                    double GetBackupVolume() const;

                    /**
                     * 设置Backup usage
                     * @param _backupVolume Backup usage
                     * 
                     */
                    void SetBackupVolume(const double& _backupVolume);

                    /**
                     * 判断参数 BackupVolume 是否已赋值
                     * @return BackupVolume 是否已赋值
                     * 
                     */
                    bool BackupVolumeHasBeenSet() const;

                    /**
                     * 获取Backup type
                     * @return BackupType Backup type
                     * 
                     */
                    std::string GetBackupType() const;

                    /**
                     * 设置Backup type
                     * @param _backupType Backup type
                     * 
                     */
                    void SetBackupType(const std::string& _backupType);

                    /**
                     * 判断参数 BackupType 是否已赋值
                     * @return BackupType 是否已赋值
                     * 
                     */
                    bool BackupTypeHasBeenSet() const;

                    /**
                     * 获取Backup method
                     * @return BackupMethod Backup method
                     * 
                     */
                    std::string GetBackupMethod() const;

                    /**
                     * 设置Backup method
                     * @param _backupMethod Backup method
                     * 
                     */
                    void SetBackupMethod(const std::string& _backupMethod);

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     * 
                     */
                    bool BackupMethodHasBeenSet() const;

                private:

                    /**
                     * Backup usage
                     */
                    double m_backupVolume;
                    bool m_backupVolumeHasBeenSet;

                    /**
                     * Backup type
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * Backup method
                     */
                    std::string m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_BACKUPVOLUMEINFO_H_
