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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_CREATEDBSBACKUPREQUEST_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_CREATEDBSBACKUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateDBSBackup request structure.
                */
                class CreateDBSBackupRequest : public AbstractModel
                {
                public:
                    CreateDBSBackupRequest();
                    ~CreateDBSBackupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Backup method: physical, snapshot. this value should be consistent with the backupMethod in the api response of DescribeDBSBackupPolicy.</p>enumeration value:<ul><li> physical: physical backup</li><li> snapshot: snapshot backup</li></ul>
                     * @return BackupMethod <p>Backup method: physical, snapshot. this value should be consistent with the backupMethod in the api response of DescribeDBSBackupPolicy.</p>enumeration value:<ul><li> physical: physical backup</li><li> snapshot: snapshot backup</li></ul>
                     * 
                     */
                    std::string GetBackupMethod() const;

                    /**
                     * 设置<p>Backup method: physical, snapshot. this value should be consistent with the backupMethod in the api response of DescribeDBSBackupPolicy.</p>enumeration value:<ul><li> physical: physical backup</li><li> snapshot: snapshot backup</li></ul>
                     * @param _backupMethod <p>Backup method: physical, snapshot. this value should be consistent with the backupMethod in the api response of DescribeDBSBackupPolicy.</p>enumeration value:<ul><li> physical: physical backup</li><li> snapshot: snapshot backup</li></ul>
                     * 
                     */
                    void SetBackupMethod(const std::string& _backupMethod);

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     * 
                     */
                    bool BackupMethodHasBeenSet() const;

                    /**
                     * 获取<P>Backup type: currently, only supports full.</p>
                     * @return BackupType <P>Backup type: currently, only supports full.</p>
                     * 
                     */
                    std::string GetBackupType() const;

                    /**
                     * 设置<P>Backup type: currently, only supports full.</p>
                     * @param _backupType <P>Backup type: currently, only supports full.</p>
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
                     * 获取<p>Instance ID.</p>
                     * @return InstanceId <p>Instance ID.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID.</p>
                     * @param _instanceId <p>Instance ID.</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<P>Backup notes.</p>
                     * @return BackupName <P>Backup notes.</p>
                     * 
                     */
                    std::string GetBackupName() const;

                    /**
                     * 设置<P>Backup notes.</p>
                     * @param _backupName <P>Backup notes.</p>
                     * 
                     */
                    void SetBackupName(const std::string& _backupName);

                    /**
                     * 判断参数 BackupName 是否已赋值
                     * @return BackupName 是否已赋值
                     * 
                     */
                    bool BackupNameHasBeenSet() const;

                private:

                    /**
                     * <p>Backup method: physical, snapshot. this value should be consistent with the backupMethod in the api response of DescribeDBSBackupPolicy.</p>enumeration value:<ul><li> physical: physical backup</li><li> snapshot: snapshot backup</li></ul>
                     */
                    std::string m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * <P>Backup type: currently, only supports full.</p>
                     */
                    std::string m_backupType;
                    bool m_backupTypeHasBeenSet;

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <P>Backup notes.</p>
                     */
                    std::string m_backupName;
                    bool m_backupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_CREATEDBSBACKUPREQUEST_H_
