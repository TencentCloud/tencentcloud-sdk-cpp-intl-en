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

#ifndef TENCENTCLOUD_GWLB_V20240906_MODEL_DESCRIBETASKSTATUSRESPONSE_H_
#define TENCENTCLOUD_GWLB_V20240906_MODEL_DESCRIBETASKSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gwlb
    {
        namespace V20240906
        {
            namespace Model
            {
                /**
                * DescribeTaskStatus response structure.
                */
                class DescribeTaskStatusResponse : public AbstractModel
                {
                public:
                    DescribeTaskStatusResponse();
                    ~DescribeTaskStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Current status of task. Valid values: 0 (succeeded), 1 (failed), 2 (in progress).
                     * @return Status Current status of task. Valid values: 0 (succeeded), 1 (failed), 2 (in progress).
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Array of unique CLB instance IDs.

Note: This field may return null, indicating that no valid value can be obtained.
                     * @return LoadBalancerIds Array of unique CLB instance IDs.

Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetLoadBalancerIds() const;

                    /**
                     * 判断参数 LoadBalancerIds 是否已赋值
                     * @return LoadBalancerIds 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdsHasBeenSet() const;

                    /**
                     * 获取Auxiliary description information, such as failure causes.
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return Message Auxiliary description information, such as failure causes.
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * Current status of task. Valid values: 0 (succeeded), 1 (failed), 2 (in progress).
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Array of unique CLB instance IDs.

Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_loadBalancerIds;
                    bool m_loadBalancerIdsHasBeenSet;

                    /**
                     * Auxiliary description information, such as failure causes.
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GWLB_V20240906_MODEL_DESCRIBETASKSTATUSRESPONSE_H_
