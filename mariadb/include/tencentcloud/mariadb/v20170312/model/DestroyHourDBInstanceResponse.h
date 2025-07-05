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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_DESTROYHOURDBINSTANCERESPONSE_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_DESTROYHOURDBINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DestroyHourDBInstance response structure.
                */
                class DestroyHourDBInstanceResponse : public AbstractModel
                {
                public:
                    DestroyHourDBInstanceResponse();
                    ~DestroyHourDBInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Async task ID, which can be used in the [DescribeFlow](https://intl.cloud.tencent.com/document/product/237/16177?from_cn_redirect=1) API to query the async task result.
                     * @return FlowId Async task ID, which can be used in the [DescribeFlow](https://intl.cloud.tencent.com/document/product/237/16177?from_cn_redirect=1) API to query the async task result.
                     * 
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取Instance ID, which is the same as the request parameter `InstanceId`.
                     * @return InstanceId Instance ID, which is the same as the request parameter `InstanceId`.
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * Async task ID, which can be used in the [DescribeFlow](https://intl.cloud.tencent.com/document/product/237/16177?from_cn_redirect=1) API to query the async task result.
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * Instance ID, which is the same as the request parameter `InstanceId`.
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_DESTROYHOURDBINSTANCERESPONSE_H_
