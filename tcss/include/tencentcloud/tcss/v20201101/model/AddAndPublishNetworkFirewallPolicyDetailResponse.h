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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ADDANDPUBLISHNETWORKFIREWALLPOLICYDETAILRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ADDANDPUBLISHNETWORKFIREWALLPOLICYDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * AddAndPublishNetworkFirewallPolicyDetail response structure.
                */
                class AddAndPublishNetworkFirewallPolicyDetailResponse : public AbstractModel
                {
                public:
                    AddAndPublishNetworkFirewallPolicyDetailResponse();
                    ~AddAndPublishNetworkFirewallPolicyDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the created task. `0` indicates that the creation failed.
                     * @return TaskId ID of the created task. `0` indicates that the creation failed.
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Result of creating the task. Valid values: `Succ`, `Failed`.
                     * @return Result Result of creating the task. Valid values: `Succ`, `Failed`.
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * ID of the created task. `0` indicates that the creation failed.
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Result of creating the task. Valid values: `Succ`, `Failed`.
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ADDANDPUBLISHNETWORKFIREWALLPOLICYDETAILRESPONSE_H_
