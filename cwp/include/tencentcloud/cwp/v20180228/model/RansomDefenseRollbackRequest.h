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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RANSOMDEFENSEROLLBACKREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RANSOMDEFENSEROLLBACKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * RansomDefenseRollback request structure.
                */
                class RansomDefenseRollbackRequest : public AbstractModel
                {
                public:
                    RansomDefenseRollbackRequest();
                    ~RansomDefenseRollbackRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Snapshot time
                     * @return BackupTime Snapshot time
                     * 
                     */
                    std::string GetBackupTime() const;

                    /**
                     * 设置Snapshot time
                     * @param _backupTime Snapshot time
                     * 
                     */
                    void SetBackupTime(const std::string& _backupTime);

                    /**
                     * 判断参数 BackupTime 是否已赋值
                     * @return BackupTime 是否已赋值
                     * 
                     */
                    bool BackupTimeHasBeenSet() const;

                    /**
                     * 获取Host QUUID
                     * @return Quuid Host QUUID
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置Host QUUID
                     * @param _quuid Host QUUID
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取Information about the hard disks that need to be rolled back. Hard disks are directly separated by semicolons (;); blanks are all disks that have been snapshot: disk-id1|disk-name1;disk-id2|disk-name2.
                     * @return DiskInfo Information about the hard disks that need to be rolled back. Hard disks are directly separated by semicolons (;); blanks are all disks that have been snapshot: disk-id1|disk-name1;disk-id2|disk-name2.
                     * 
                     */
                    std::string GetDiskInfo() const;

                    /**
                     * 设置Information about the hard disks that need to be rolled back. Hard disks are directly separated by semicolons (;); blanks are all disks that have been snapshot: disk-id1|disk-name1;disk-id2|disk-name2.
                     * @param _diskInfo Information about the hard disks that need to be rolled back. Hard disks are directly separated by semicolons (;); blanks are all disks that have been snapshot: disk-id1|disk-name1;disk-id2|disk-name2.
                     * 
                     */
                    void SetDiskInfo(const std::string& _diskInfo);

                    /**
                     * 判断参数 DiskInfo 是否已赋值
                     * @return DiskInfo 是否已赋值
                     * 
                     */
                    bool DiskInfoHasBeenSet() const;

                private:

                    /**
                     * Snapshot time
                     */
                    std::string m_backupTime;
                    bool m_backupTimeHasBeenSet;

                    /**
                     * Host QUUID
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * Information about the hard disks that need to be rolled back. Hard disks are directly separated by semicolons (;); blanks are all disks that have been snapshot: disk-id1|disk-name1;disk-id2|disk-name2.
                     */
                    std::string m_diskInfo;
                    bool m_diskInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RANSOMDEFENSEROLLBACKREQUEST_H_
