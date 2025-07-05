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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBESECURITYAUDITLOGEXPORTTASKSREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBESECURITYAUDITLOGEXPORTTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeSecurityAuditLogExportTasks request structure.
                */
                class DescribeSecurityAuditLogExportTasksRequest : public AbstractModel
                {
                public:
                    DescribeSecurityAuditLogExportTasksRequest();
                    ~DescribeSecurityAuditLogExportTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Security audit group ID.
                     * @return SecAuditGroupId Security audit group ID.
                     * 
                     */
                    std::string GetSecAuditGroupId() const;

                    /**
                     * 设置Security audit group ID.
                     * @param _secAuditGroupId Security audit group ID.
                     * 
                     */
                    void SetSecAuditGroupId(const std::string& _secAuditGroupId);

                    /**
                     * 判断参数 SecAuditGroupId 是否已赋值
                     * @return SecAuditGroupId 是否已赋值
                     * 
                     */
                    bool SecAuditGroupIdHasBeenSet() const;

                    /**
                     * 获取Service type. Valid value: `mysql` (TencentDB for MySQL).
                     * @return Product Service type. Valid value: `mysql` (TencentDB for MySQL).
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Service type. Valid value: `mysql` (TencentDB for MySQL).
                     * @param _product Service type. Valid value: `mysql` (TencentDB for MySQL).
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取List of log export task IDs.
                     * @return AsyncRequestIds List of log export task IDs.
                     * 
                     */
                    std::vector<uint64_t> GetAsyncRequestIds() const;

                    /**
                     * 设置List of log export task IDs.
                     * @param _asyncRequestIds List of log export task IDs.
                     * 
                     */
                    void SetAsyncRequestIds(const std::vector<uint64_t>& _asyncRequestIds);

                    /**
                     * 判断参数 AsyncRequestIds 是否已赋值
                     * @return AsyncRequestIds 是否已赋值
                     * 
                     */
                    bool AsyncRequestIdsHasBeenSet() const;

                    /**
                     * 获取Offset. Default value: `0`.
                     * @return Offset Offset. Default value: `0`.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset. Default value: `0`.
                     * @param _offset Offset. Default value: `0`.
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
                     * 获取Number of returned results. Default value: `20`. Maximum value: `100`.
                     * @return Limit Number of returned results. Default value: `20`. Maximum value: `100`.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of returned results. Default value: `20`. Maximum value: `100`.
                     * @param _limit Number of returned results. Default value: `20`. Maximum value: `100`.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * Security audit group ID.
                     */
                    std::string m_secAuditGroupId;
                    bool m_secAuditGroupIdHasBeenSet;

                    /**
                     * Service type. Valid value: `mysql` (TencentDB for MySQL).
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * List of log export task IDs.
                     */
                    std::vector<uint64_t> m_asyncRequestIds;
                    bool m_asyncRequestIdsHasBeenSet;

                    /**
                     * Offset. Default value: `0`.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of returned results. Default value: `20`. Maximum value: `100`.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBESECURITYAUDITLOGEXPORTTASKSREQUEST_H_
