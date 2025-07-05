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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DELETEDBDIAGREPORTTASKSREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DELETEDBDIAGREPORTTASKSREQUEST_H_

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
                * DeleteDBDiagReportTasks request structure.
                */
                class DeleteDBDiagReportTasksRequest : public AbstractModel
                {
                public:
                    DeleteDBDiagReportTasksRequest();
                    ~DeleteDBDiagReportTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of IDs of tasks to be deleted
                     * @return AsyncRequestIds List of IDs of tasks to be deleted
                     * 
                     */
                    std::vector<int64_t> GetAsyncRequestIds() const;

                    /**
                     * 设置List of IDs of tasks to be deleted
                     * @param _asyncRequestIds List of IDs of tasks to be deleted
                     * 
                     */
                    void SetAsyncRequestIds(const std::vector<int64_t>& _asyncRequestIds);

                    /**
                     * 判断参数 AsyncRequestIds 是否已赋值
                     * @return AsyncRequestIds 是否已赋值
                     * 
                     */
                    bool AsyncRequestIdsHasBeenSet() const;

                    /**
                     * 获取Instance ID
                     * @return InstanceId Instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID
                     * @param _instanceId Instance ID
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
                     * 获取Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     * @return Product Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     * @param _product Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                private:

                    /**
                     * List of IDs of tasks to be deleted
                     */
                    std::vector<int64_t> m_asyncRequestIds;
                    bool m_asyncRequestIdsHasBeenSet;

                    /**
                     * Instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DELETEDBDIAGREPORTTASKSREQUEST_H_
