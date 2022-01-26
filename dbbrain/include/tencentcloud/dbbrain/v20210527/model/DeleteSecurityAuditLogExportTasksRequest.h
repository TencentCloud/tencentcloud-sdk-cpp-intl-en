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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DELETESECURITYAUDITLOGEXPORTTASKSREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DELETESECURITYAUDITLOGEXPORTTASKSREQUEST_H_

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
                * DeleteSecurityAuditLogExportTasks request structure.
                */
                class DeleteSecurityAuditLogExportTasksRequest : public AbstractModel
                {
                public:
                    DeleteSecurityAuditLogExportTasksRequest();
                    ~DeleteSecurityAuditLogExportTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Security audit group ID.
                     * @return SecAuditGroupId Security audit group ID.
                     */
                    std::string GetSecAuditGroupId() const;

                    /**
                     * 设置Security audit group ID.
                     * @param SecAuditGroupId Security audit group ID.
                     */
                    void SetSecAuditGroupId(const std::string& _secAuditGroupId);

                    /**
                     * 判断参数 SecAuditGroupId 是否已赋值
                     * @return SecAuditGroupId 是否已赋值
                     */
                    bool SecAuditGroupIdHasBeenSet() const;

                    /**
                     * 获取Log export task ID list. This API will ignore task IDs that do not exist or have been deleted.
                     * @return AsyncRequestIds Log export task ID list. This API will ignore task IDs that do not exist or have been deleted.
                     */
                    std::vector<uint64_t> GetAsyncRequestIds() const;

                    /**
                     * 设置Log export task ID list. This API will ignore task IDs that do not exist or have been deleted.
                     * @param AsyncRequestIds Log export task ID list. This API will ignore task IDs that do not exist or have been deleted.
                     */
                    void SetAsyncRequestIds(const std::vector<uint64_t>& _asyncRequestIds);

                    /**
                     * 判断参数 AsyncRequestIds 是否已赋值
                     * @return AsyncRequestIds 是否已赋值
                     */
                    bool AsyncRequestIdsHasBeenSet() const;

                    /**
                     * 获取Service type. Valid values: mysql (TencentDB for MySQL).
                     * @return Product Service type. Valid values: mysql (TencentDB for MySQL).
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Service type. Valid values: mysql (TencentDB for MySQL).
                     * @param Product Service type. Valid values: mysql (TencentDB for MySQL).
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     */
                    bool ProductHasBeenSet() const;

                private:

                    /**
                     * Security audit group ID.
                     */
                    std::string m_secAuditGroupId;
                    bool m_secAuditGroupIdHasBeenSet;

                    /**
                     * Log export task ID list. This API will ignore task IDs that do not exist or have been deleted.
                     */
                    std::vector<uint64_t> m_asyncRequestIds;
                    bool m_asyncRequestIdsHasBeenSet;

                    /**
                     * Service type. Valid values: mysql (TencentDB for MySQL).
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DELETESECURITYAUDITLOGEXPORTTASKSREQUEST_H_
