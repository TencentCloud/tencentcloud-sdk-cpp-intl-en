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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ALLOCATEADDRESSESRESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ALLOCATEADDRESSESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * AllocateAddresses response structure.
                */
                class AllocateAddressesResponse : public AbstractModel
                {
                public:
                    AllocateAddressesResponse();
                    ~AllocateAddressesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of the unique IDs of the requested EIPs.
                     * @return AddressSet List of the unique IDs of the requested EIPs.
                     * 
                     */
                    std::vector<std::string> GetAddressSet() const;

                    /**
                     * 判断参数 AddressSet 是否已赋值
                     * @return AddressSet 是否已赋值
                     * 
                     */
                    bool AddressSetHasBeenSet() const;

                    /**
                     * 获取The Async task ID. You can use the [DescribeTaskResult](https://intl.cloud.tencent.com/document/api/215/36271?from_cn_redirect=1) API to query the task status.
                     * @return TaskId The Async task ID. You can use the [DescribeTaskResult](https://intl.cloud.tencent.com/document/api/215/36271?from_cn_redirect=1) API to query the task status.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * List of the unique IDs of the requested EIPs.
                     */
                    std::vector<std::string> m_addressSet;
                    bool m_addressSetHasBeenSet;

                    /**
                     * The Async task ID. You can use the [DescribeTaskResult](https://intl.cloud.tencent.com/document/api/215/36271?from_cn_redirect=1) API to query the task status.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ALLOCATEADDRESSESRESPONSE_H_
