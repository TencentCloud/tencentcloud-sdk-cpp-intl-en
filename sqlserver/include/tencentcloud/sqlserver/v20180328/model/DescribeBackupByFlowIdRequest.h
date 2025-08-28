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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPBYFLOWIDREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPBYFLOWIDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeBackupByFlowId request structure.
                */
                class DescribeBackupByFlowIdRequest : public AbstractModel
                {
                public:
                    DescribeBackupByFlowIdRequest();
                    ~DescribeBackupByFlowIdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID, in the format of mssql-3l3fgqn7.
                     * @return InstanceId Instance ID, in the format of mssql-3l3fgqn7.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, in the format of mssql-3l3fgqn7.
                     * @param _instanceId Instance ID, in the format of mssql-3l3fgqn7.
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
                     * 获取Backup creation process ID, which can be obtained through the [CreateBackup](https://cloud.tencent.com/document/product/238/19946) API.
                     * @return FlowId Backup creation process ID, which can be obtained through the [CreateBackup](https://cloud.tencent.com/document/product/238/19946) API.
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置Backup creation process ID, which can be obtained through the [CreateBackup](https://cloud.tencent.com/document/product/238/19946) API.
                     * @param _flowId Backup creation process ID, which can be obtained through the [CreateBackup](https://cloud.tencent.com/document/product/238/19946) API.
                     * 
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                private:

                    /**
                     * Instance ID, in the format of mssql-3l3fgqn7.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Backup creation process ID, which can be obtained through the [CreateBackup](https://cloud.tencent.com/document/product/238/19946) API.
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEBACKUPBYFLOWIDREQUEST_H_
