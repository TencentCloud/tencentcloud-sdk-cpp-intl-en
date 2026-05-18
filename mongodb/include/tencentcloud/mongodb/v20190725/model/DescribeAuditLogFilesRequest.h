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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEAUDITLOGFILESREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEAUDITLOGFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeAuditLogFiles request structure.
                */
                class DescribeAuditLogFilesRequest : public AbstractModel
                {
                public:
                    DescribeAuditLogFilesRequest();
                    ~DescribeAuditLogFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID, in the format of cmgo-xfts****. It is the same as the instance ID displayed on the TencentDB console page.
                     * @return InstanceId Instance ID, in the format of cmgo-xfts****. It is the same as the instance ID displayed on the TencentDB console page.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID, in the format of cmgo-xfts****. It is the same as the instance ID displayed on the TencentDB console page.
                     * @param _instanceId Instance ID, in the format of cmgo-xfts****. It is the same as the instance ID displayed on the TencentDB console page.
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
                     * 获取Page size. Default value: 20; value ranges from 1 to 100.
                     * @return Limit Page size. Default value: 20; value ranges from 1 to 100.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Page size. Default value: 20; value ranges from 1 to 100.
                     * @param _limit Page size. Default value: 20; value ranges from 1 to 100.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Pagination offset.
                     * @return Offset Pagination offset.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Pagination offset.
                     * @param _offset Pagination offset.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Audit log file name. This API filters related audit log files based on this parameter.
                     * @return FileName Audit log file name. This API filters related audit log files based on this parameter.
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Audit log file name. This API filters related audit log files based on this parameter.
                     * @param _fileName Audit log file name. This API filters related audit log files based on this parameter.
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                private:

                    /**
                     * Instance ID, in the format of cmgo-xfts****. It is the same as the instance ID displayed on the TencentDB console page.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Page size. Default value: 20; value ranges from 1 to 100.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Pagination offset.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Audit log file name. This API filters related audit log files based on this parameter.
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEAUDITLOGFILESREQUEST_H_
