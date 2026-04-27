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

#ifndef TENCENTCLOUD_EDGEZONE_V20260401_MODEL_TERMINATEINSTANCESRESPONSE_H_
#define TENCENTCLOUD_EDGEZONE_V20260401_MODEL_TERMINATEINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/edgezone/v20260401/model/FailedInstance.h>


namespace TencentCloud
{
    namespace Edgezone
    {
        namespace V20260401
        {
            namespace Model
            {
                /**
                * TerminateInstances response structure.
                */
                class TerminateInstancesResponse : public AbstractModel
                {
                public:
                    TerminateInstancesResponse();
                    ~TerminateInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of instance IDs successfully terminated.
                     * @return InstanceIdSet List of instance IDs successfully terminated.
                     * 
                     */
                    std::vector<std::string> GetInstanceIdSet() const;

                    /**
                     * 判断参数 InstanceIdSet 是否已赋值
                     * @return InstanceIdSet 是否已赋值
                     * 
                     */
                    bool InstanceIdSetHasBeenSet() const;

                    /**
                     * 获取List of instances with termination failed (returned when partially successful).
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FailedInstanceSet List of instances with termination failed (returned when partially successful).
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<FailedInstance> GetFailedInstanceSet() const;

                    /**
                     * 判断参数 FailedInstanceSet 是否已赋值
                     * @return FailedInstanceSet 是否已赋值
                     * 
                     */
                    bool FailedInstanceSetHasBeenSet() const;

                private:

                    /**
                     * List of instance IDs successfully terminated.
                     */
                    std::vector<std::string> m_instanceIdSet;
                    bool m_instanceIdSetHasBeenSet;

                    /**
                     * List of instances with termination failed (returned when partially successful).
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<FailedInstance> m_failedInstanceSet;
                    bool m_failedInstanceSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_MODEL_TERMINATEINSTANCESRESPONSE_H_
