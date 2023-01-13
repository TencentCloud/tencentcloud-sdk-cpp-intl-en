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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATEDBDIAGREPORTURLREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATEDBDIAGREPORTURLREQUEST_H_

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
                * CreateDBDiagReportUrl request structure.
                */
                class CreateDBDiagReportUrlRequest : public AbstractModel
                {
                public:
                    CreateDBDiagReportUrlRequest();
                    ~CreateDBDiagReportUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param InstanceId Instance ID.
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Health report task ID, which can be queried through `DescribeDBDiagReportTasks`.
                     * @return AsyncRequestId Health report task ID, which can be queried through `DescribeDBDiagReportTasks`.
                     */
                    int64_t GetAsyncRequestId() const;

                    /**
                     * 设置Health report task ID, which can be queried through `DescribeDBDiagReportTasks`.
                     * @param AsyncRequestId Health report task ID, which can be queried through `DescribeDBDiagReportTasks`.
                     */
                    void SetAsyncRequestId(const int64_t& _asyncRequestId);

                    /**
                     * 判断参数 AsyncRequestId 是否已赋值
                     * @return AsyncRequestId 是否已赋值
                     */
                    bool AsyncRequestIdHasBeenSet() const;

                    /**
                     * 获取Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     * @return Product Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     * @param Product Service type. Valid values: `mysql` (TencentDB for MySQL), `cynosdb` (TDSQL-C for MySQL). Default value: `mysql`.
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     */
                    bool ProductHasBeenSet() const;

                private:

                    /**
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Health report task ID, which can be queried through `DescribeDBDiagReportTasks`.
                     */
                    int64_t m_asyncRequestId;
                    bool m_asyncRequestIdHasBeenSet;

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

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATEDBDIAGREPORTURLREQUEST_H_
