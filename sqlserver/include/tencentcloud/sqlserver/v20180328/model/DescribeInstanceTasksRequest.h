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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEINSTANCETASKSREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEINSTANCETASKSREQUEST_H_

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
                * DescribeInstanceTasks request structure.
                */
                class DescribeInstanceTasksRequest : public AbstractModel
                {
                public:
                    DescribeInstanceTasksRequest();
                    ~DescribeInstanceTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Database instance ID, in the format of mssql-njj2mtpl.
                     * @return InstanceId Database instance ID, in the format of mssql-njj2mtpl.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Database instance ID, in the format of mssql-njj2mtpl.
                     * @param _instanceId Database instance ID, in the format of mssql-njj2mtpl.
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
                     * 获取Pagination size.
                     * @return Limit Pagination size.
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置Pagination size.
                     * @param _limit Pagination size.
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Asynchronous task status. 1 - running; 2 - running successful; 3 - running failed.
                     * @return Status Asynchronous task status. 1 - running; 2 - running successful; 3 - running failed.
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置Asynchronous task status. 1 - running; 2 - running successful; 3 - running failed.
                     * @param _status Asynchronous task status. 1 - running; 2 - running successful; 3 - running failed.
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Pagination offset.
                     * @return Offset Pagination offset.
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置Pagination offset.
                     * @param _offset Pagination offset.
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Database instance ID, in the format of mssql-njj2mtpl.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Pagination size.
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Asynchronous task status. 1 - running; 2 - running successful; 3 - running failed.
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Pagination offset.
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEINSTANCETASKSREQUEST_H_
