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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_DELETEINVOKERREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_DELETEINVOKERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * DeleteInvoker request structure.
                */
                class DeleteInvokerRequest : public AbstractModel
                {
                public:
                    DeleteInvokerRequest();
                    ~DeleteInvokerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Pending deletion executor ID.

Call the [DescribeInvokers](https://www.tencentcloud.com/document/api/1340/61759?from_cn_redirect=1) api to query execution.
                     * @return InvokerId Pending deletion executor ID.

Call the [DescribeInvokers](https://www.tencentcloud.com/document/api/1340/61759?from_cn_redirect=1) api to query execution.
                     * 
                     */
                    std::string GetInvokerId() const;

                    /**
                     * 设置Pending deletion executor ID.

Call the [DescribeInvokers](https://www.tencentcloud.com/document/api/1340/61759?from_cn_redirect=1) api to query execution.
                     * @param _invokerId Pending deletion executor ID.

Call the [DescribeInvokers](https://www.tencentcloud.com/document/api/1340/61759?from_cn_redirect=1) api to query execution.
                     * 
                     */
                    void SetInvokerId(const std::string& _invokerId);

                    /**
                     * 判断参数 InvokerId 是否已赋值
                     * @return InvokerId 是否已赋值
                     * 
                     */
                    bool InvokerIdHasBeenSet() const;

                private:

                    /**
                     * Pending deletion executor ID.

Call the [DescribeInvokers](https://www.tencentcloud.com/document/api/1340/61759?from_cn_redirect=1) api to query execution.
                     */
                    std::string m_invokerId;
                    bool m_invokerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_DELETEINVOKERREQUEST_H_
