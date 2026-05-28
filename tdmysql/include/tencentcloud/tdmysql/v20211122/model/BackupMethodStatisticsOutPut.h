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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_BACKUPMETHODSTATISTICSOUTPUT_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_BACKUPMETHODSTATISTICSOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * Backup method statistical object, provided to backup set statistical detail API
                */
                class BackupMethodStatisticsOutPut : public AbstractModel
                {
                public:
                    BackupMethodStatisticsOutPut();
                    ~BackupMethodStatisticsOutPut() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Auto-backup size in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AutoBackupSize <p>Auto-backup size in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetAutoBackupSize() const;

                    /**
                     * 设置<p>Auto-backup size in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _autoBackupSize <p>Auto-backup size in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAutoBackupSize(const std::vector<int64_t>& _autoBackupSize);

                    /**
                     * 判断参数 AutoBackupSize 是否已赋值
                     * @return AutoBackupSize 是否已赋值
                     * 
                     */
                    bool AutoBackupSizeHasBeenSet() const;

                    /**
                     * 获取<p>Manual backup size, unit Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ManualBackupSize <p>Manual backup size, unit Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetManualBackupSize() const;

                    /**
                     * 设置<p>Manual backup size, unit Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _manualBackupSize <p>Manual backup size, unit Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetManualBackupSize(const std::vector<int64_t>& _manualBackupSize);

                    /**
                     * 判断参数 ManualBackupSize 是否已赋值
                     * @return ManualBackupSize 是否已赋值
                     * 
                     */
                    bool ManualBackupSizeHasBeenSet() const;

                private:

                    /**
                     * <p>Auto-backup size in Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_autoBackupSize;
                    bool m_autoBackupSizeHasBeenSet;

                    /**
                     * <p>Manual backup size, unit Byte</p>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<int64_t> m_manualBackupSize;
                    bool m_manualBackupSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_BACKUPMETHODSTATISTICSOUTPUT_H_
