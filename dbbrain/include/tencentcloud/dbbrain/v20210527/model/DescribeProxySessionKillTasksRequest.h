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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEPROXYSESSIONKILLTASKSREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEPROXYSESSIONKILLTASKSREQUEST_H_

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
                * DescribeProxySessionKillTasks request structure.
                */
                class DescribeProxySessionKillTasksRequest : public AbstractModel
                {
                public:
                    DescribeProxySessionKillTasksRequest();
                    ~DescribeProxySessionKillTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance ID.
                     * @return InstanceId Instance ID.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Instance ID.
                     * @param _instanceId Instance ID.
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
                     * 获取The async session killing task ID, which is obtained after the API `CreateProxySessionKillTask` is successfully called.
                     * @return AsyncRequestIds The async session killing task ID, which is obtained after the API `CreateProxySessionKillTask` is successfully called.
                     * 
                     */
                    std::vector<int64_t> GetAsyncRequestIds() const;

                    /**
                     * 设置The async session killing task ID, which is obtained after the API `CreateProxySessionKillTask` is successfully called.
                     * @param _asyncRequestIds The async session killing task ID, which is obtained after the API `CreateProxySessionKillTask` is successfully called.
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
                     * 获取Service type. Valid value: `redis` (TencentDB for Redis).
                     * @return Product Service type. Valid value: `redis` (TencentDB for Redis).
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置Service type. Valid value: `redis` (TencentDB for Redis).
                     * @param _product Service type. Valid value: `redis` (TencentDB for Redis).
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
                     * Instance ID.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * The async session killing task ID, which is obtained after the API `CreateProxySessionKillTask` is successfully called.
                     */
                    std::vector<int64_t> m_asyncRequestIds;
                    bool m_asyncRequestIdsHasBeenSet;

                    /**
                     * Service type. Valid value: `redis` (TencentDB for Redis).
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEPROXYSESSIONKILLTASKSREQUEST_H_
