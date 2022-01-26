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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CREATEDBIMPORTJOBREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CREATEDBIMPORTJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * CreateDBImportJob request structure.
                */
                class CreateDBImportJobRequest : public AbstractModel
                {
                public:
                    CreateDBImportJobRequest();
                    ~CreateDBImportJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     * @return InstanceId Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     * @param InstanceId Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Filename. The file must be a .sql file uploaded to Tencent Cloud.
                     * @return FileName Filename. The file must be a .sql file uploaded to Tencent Cloud.
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Filename. The file must be a .sql file uploaded to Tencent Cloud.
                     * @param FileName Filename. The file must be a .sql file uploaded to Tencent Cloud.
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取TencentDB username
                     * @return User TencentDB username
                     */
                    std::string GetUser() const;

                    /**
                     * 设置TencentDB username
                     * @param User TencentDB username
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取Password of a TencentDB instance user account
                     * @return Password Password of a TencentDB instance user account
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Password of a TencentDB instance user account
                     * @param Password Password of a TencentDB instance user account
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取Name of the target database. If this parameter is not passed in, no database is specified.
                     * @return DbName Name of the target database. If this parameter is not passed in, no database is specified.
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置Name of the target database. If this parameter is not passed in, no database is specified.
                     * @param DbName Name of the target database. If this parameter is not passed in, no database is specified.
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     */
                    bool DbNameHasBeenSet() const;

                private:

                    /**
                     * Instance ID in the format of cdb-c1nl9rpv. It is the same as the instance ID displayed on the TencentDB Console page.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Filename. The file must be a .sql file uploaded to Tencent Cloud.
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * TencentDB username
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Password of a TencentDB instance user account
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Name of the target database. If this parameter is not passed in, no database is specified.
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CREATEDBIMPORTJOBREQUEST_H_
