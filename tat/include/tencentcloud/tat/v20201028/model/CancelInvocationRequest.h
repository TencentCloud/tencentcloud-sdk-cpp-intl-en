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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_CANCELINVOCATIONREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_CANCELINVOCATIONREQUEST_H_

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
                * CancelInvocation request structure.
                */
                class CancelInvocationRequest : public AbstractModel
                {
                public:
                    CancelInvocationRequest();
                    ~CancelInvocationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Execution activity ID.

Call the [DescribeInvocations](https://www.tencentcloud.com/document/api/1340/52679?from_cn_redirect=1) api to query execution.
                     * @return InvocationId Execution activity ID.

Call the [DescribeInvocations](https://www.tencentcloud.com/document/api/1340/52679?from_cn_redirect=1) api to query execution.
                     * 
                     */
                    std::string GetInvocationId() const;

                    /**
                     * 设置Execution activity ID.

Call the [DescribeInvocations](https://www.tencentcloud.com/document/api/1340/52679?from_cn_redirect=1) api to query execution.
                     * @param _invocationId Execution activity ID.

Call the [DescribeInvocations](https://www.tencentcloud.com/document/api/1340/52679?from_cn_redirect=1) api to query execution.
                     * 
                     */
                    void SetInvocationId(const std::string& _invocationId);

                    /**
                     * 判断参数 InvocationId 是否已赋值
                     * @return InvocationId 是否已赋值
                     * 
                     */
                    bool InvocationIdHasBeenSet() const;

                    /**
                     * 获取Instance ID list. upper limit: 100.

Instance ID can be obtained through the query instance interface of corresponding cloud services. currently supported instance types:.
- CVM
- Lighthouse
- TAT Register instance.
                     * @return InstanceIds Instance ID list. upper limit: 100.

Instance ID can be obtained through the query instance interface of corresponding cloud services. currently supported instance types:.
- CVM
- Lighthouse
- TAT Register instance.
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置Instance ID list. upper limit: 100.

Instance ID can be obtained through the query instance interface of corresponding cloud services. currently supported instance types:.
- CVM
- Lighthouse
- TAT Register instance.
                     * @param _instanceIds Instance ID list. upper limit: 100.

Instance ID can be obtained through the query instance interface of corresponding cloud services. currently supported instance types:.
- CVM
- Lighthouse
- TAT Register instance.
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                private:

                    /**
                     * Execution activity ID.

Call the [DescribeInvocations](https://www.tencentcloud.com/document/api/1340/52679?from_cn_redirect=1) api to query execution.
                     */
                    std::string m_invocationId;
                    bool m_invocationIdHasBeenSet;

                    /**
                     * Instance ID list. upper limit: 100.

Instance ID can be obtained through the query instance interface of corresponding cloud services. currently supported instance types:.
- CVM
- Lighthouse
- TAT Register instance.
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_CANCELINVOCATIONREQUEST_H_
