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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBACKUPDETAILREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBACKUPDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeBackupDetail request structure.
                */
                class DescribeBackupDetailRequest : public AbstractModel
                {
                public:
                    DescribeBackupDetailRequest();
                    ~DescribeBackupDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Instance ID. Log in to the <a href="https://console.cloud.tencent.com/redis/instance/list">Redis console</a> and copy it from the instance list.</p>
                     * @return InstanceId <p>Instance ID. Log in to the <a href="https://console.cloud.tencent.com/redis/instance/list">Redis console</a> and copy it from the instance list.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Instance ID. Log in to the <a href="https://console.cloud.tencent.com/redis/instance/list">Redis console</a> and copy it from the instance list.</p>
                     * @param _instanceId <p>Instance ID. Log in to the <a href="https://console.cloud.tencent.com/redis/instance/list">Redis console</a> and copy it from the instance list.</p>
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
                     * 获取<p>Backup ID, which can be obtained through the response parameter <strong>RedisBackupSet</strong> of the API <a href="https://www.tencentcloud.com/document/product/239/20011?from_cn_redirect=1">DescribeInstanceBackups</a>.</p>
                     * @return BackupId <p>Backup ID, which can be obtained through the response parameter <strong>RedisBackupSet</strong> of the API <a href="https://www.tencentcloud.com/document/product/239/20011?from_cn_redirect=1">DescribeInstanceBackups</a>.</p>
                     * 
                     */
                    std::string GetBackupId() const;

                    /**
                     * 设置<p>Backup ID, which can be obtained through the response parameter <strong>RedisBackupSet</strong> of the API <a href="https://www.tencentcloud.com/document/product/239/20011?from_cn_redirect=1">DescribeInstanceBackups</a>.</p>
                     * @param _backupId <p>Backup ID, which can be obtained through the response parameter <strong>RedisBackupSet</strong> of the API <a href="https://www.tencentcloud.com/document/product/239/20011?from_cn_redirect=1">DescribeInstanceBackups</a>.</p>
                     * 
                     */
                    void SetBackupId(const std::string& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     * 
                     */
                    bool BackupIdHasBeenSet() const;

                private:

                    /**
                     * <p>Instance ID. Log in to the <a href="https://console.cloud.tencent.com/redis/instance/list">Redis console</a> and copy it from the instance list.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>Backup ID, which can be obtained through the response parameter <strong>RedisBackupSet</strong> of the API <a href="https://www.tencentcloud.com/document/product/239/20011?from_cn_redirect=1">DescribeInstanceBackups</a>.</p>
                     */
                    std::string m_backupId;
                    bool m_backupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBACKUPDETAILREQUEST_H_
