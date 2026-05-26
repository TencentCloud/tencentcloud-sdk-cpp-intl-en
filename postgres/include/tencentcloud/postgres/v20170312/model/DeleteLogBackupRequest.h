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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DELETELOGBACKUPREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DELETELOGBACKUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DeleteLogBackup request structure.
                */
                class DeleteLogBackupRequest : public AbstractModel
                {
                public:
                    DeleteLogBackupRequest();
                    ~DeleteLogBackupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     * @return DBInstanceId Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     * @param _dBInstanceId Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取Log backup ID. obtain through the api [DescribeLogBackups](https://www.tencentcloud.com/document/api/409/89021?from_cn_redirect=1). note: automatic backup sets cannot be deleted within 7 days.
                     * @return LogBackupId Log backup ID. obtain through the api [DescribeLogBackups](https://www.tencentcloud.com/document/api/409/89021?from_cn_redirect=1). note: automatic backup sets cannot be deleted within 7 days.
                     * 
                     */
                    std::string GetLogBackupId() const;

                    /**
                     * 设置Log backup ID. obtain through the api [DescribeLogBackups](https://www.tencentcloud.com/document/api/409/89021?from_cn_redirect=1). note: automatic backup sets cannot be deleted within 7 days.
                     * @param _logBackupId Log backup ID. obtain through the api [DescribeLogBackups](https://www.tencentcloud.com/document/api/409/89021?from_cn_redirect=1). note: automatic backup sets cannot be deleted within 7 days.
                     * 
                     */
                    void SetLogBackupId(const std::string& _logBackupId);

                    /**
                     * 判断参数 LogBackupId 是否已赋值
                     * @return LogBackupId 是否已赋值
                     * 
                     */
                    bool LogBackupIdHasBeenSet() const;

                private:

                    /**
                     * Instance ID. obtain through the api [DescribeDBInstances](https://www.tencentcloud.com/document/api/409/16773?from_cn_redirect=1).
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * Log backup ID. obtain through the api [DescribeLogBackups](https://www.tencentcloud.com/document/api/409/89021?from_cn_redirect=1). note: automatic backup sets cannot be deleted within 7 days.
                     */
                    std::string m_logBackupId;
                    bool m_logBackupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DELETELOGBACKUPREQUEST_H_
