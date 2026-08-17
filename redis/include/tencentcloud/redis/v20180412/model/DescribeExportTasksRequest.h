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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEEXPORTTASKSREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEEXPORTTASKSREQUEST_H_

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
                * DescribeExportTasks request structure.
                */
                class DescribeExportTasksRequest : public AbstractModel
                {
                public:
                    DescribeExportTasksRequest();
                    ~DescribeExportTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Log type.</p><p>Enumeration value:</p><ul><li>auditLog: Audit log.</li></ul>
                     * @return LogType <p>Log type.</p><p>Enumeration value:</p><ul><li>auditLog: Audit log.</li></ul>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置<p>Log type.</p><p>Enumeration value:</p><ul><li>auditLog: Audit log.</li></ul>
                     * @param _logType <p>Log type.</p><p>Enumeration value:</p><ul><li>auditLog: Audit log.</li></ul>
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取<p>Size of the output task list per page.</p><ul><li>Default value: 20.</li><li>Value ranges from 1 to 100.</li></ul>
                     * @return Limit <p>Size of the output task list per page.</p><ul><li>Default value: 20.</li><li>Value ranges from 1 to 100.</li></ul>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Size of the output task list per page.</p><ul><li>Default value: 20.</li><li>Value ranges from 1 to 100.</li></ul>
                     * @param _limit <p>Size of the output task list per page.</p><ul><li>Default value: 20.</li><li>Value ranges from 1 to 100.</li></ul>
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
                     * 获取<p>Pagination offset.</p><ul><li>Default value: 0.</li><li>Value: Multiple of Limit. Calculation formula: offset=limit*(page number-1).</li></ul>
                     * @return Offset <p>Pagination offset.</p><ul><li>Default value: 0.</li><li>Value: Multiple of Limit. Calculation formula: offset=limit*(page number-1).</li></ul>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Pagination offset.</p><ul><li>Default value: 0.</li><li>Value: Multiple of Limit. Calculation formula: offset=limit*(page number-1).</li></ul>
                     * @param _offset <p>Pagination offset.</p><ul><li>Default value: 0.</li><li>Value: Multiple of Limit. Calculation formula: offset=limit*(page number-1).</li></ul>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>Specified query instance ID. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     * @return InstanceId <p>Specified query instance ID. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Specified query instance ID. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     * @param _instanceId <p>Specified query instance ID. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * <p>Log type.</p><p>Enumeration value:</p><ul><li>auditLog: Audit log.</li></ul>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p>Size of the output task list per page.</p><ul><li>Default value: 20.</li><li>Value ranges from 1 to 100.</li></ul>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Pagination offset.</p><ul><li>Default value: 0.</li><li>Value: Multiple of Limit. Calculation formula: offset=limit*(page number-1).</li></ul>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Specified query instance ID. Log in to the <a href="https://console.cloud.tencent.com/redis">Redis console</a> and copy the instance ID from the instance list.</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEEXPORTTASKSREQUEST_H_
