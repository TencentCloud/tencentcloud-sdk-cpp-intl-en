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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYDBSBACKUPSETCOMMENTREQUEST_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYDBSBACKUPSETCOMMENTREQUEST_H_

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
                * ModifyDBSBackupSetComment request structure.
                */
                class ModifyDBSBackupSetCommentRequest : public AbstractModel
                {
                public:
                    ModifyDBSBackupSetCommentRequest();
                    ~ModifyDBSBackupSetCommentRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<p>Backup set ID. the value comes from the DescribeDBSBackupSets api response.</p>
                     * @return BackupSetId <p>Backup set ID. the value comes from the DescribeDBSBackupSets api response.</p>
                     * 
                     */
                    int64_t GetBackupSetId() const;

                    /**
                     * 设置<p>Backup set ID. the value comes from the DescribeDBSBackupSets api response.</p>
                     * @param _backupSetId <p>Backup set ID. the value comes from the DescribeDBSBackupSets api response.</p>
                     * 
                     */
                    void SetBackupSetId(const int64_t& _backupSetId);

                    /**
                     * 判断参数 BackupSetId 是否已赋值
                     * @return BackupSetId 是否已赋值
                     * 
                     */
                    bool BackupSetIdHasBeenSet() const;

                    /**
                     * 获取<P>Backup notes.</p>
                     * @return NewBackupName <P>Backup notes.</p>
                     * 
                     */
                    std::string GetNewBackupName() const;

                    /**
                     * 设置<P>Backup notes.</p>
                     * @param _newBackupName <P>Backup notes.</p>
                     * 
                     */
                    void SetNewBackupName(const std::string& _newBackupName);

                    /**
                     * 判断参数 NewBackupName 是否已赋值
                     * @return NewBackupName 是否已赋值
                     * 
                     */
                    bool NewBackupNameHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Backup set ID. the value comes from the DescribeDBSBackupSets api response.</p>
                     */
                    int64_t m_backupSetId;
                    bool m_backupSetIdHasBeenSet;

                    /**
                     * <P>Backup notes.</p>
                     */
                    std::string m_newBackupName;
                    bool m_newBackupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_MODIFYDBSBACKUPSETCOMMENTREQUEST_H_
