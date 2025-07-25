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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_TERMINATEPROMETHEUSINSTANCESREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_TERMINATEPROMETHEUSINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * TerminatePrometheusInstances request structure.
                */
                class TerminatePrometheusInstancesRequest : public AbstractModel
                {
                public:
                    TerminatePrometheusInstancesRequest();
                    ~TerminatePrometheusInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of instance IDs
                     * @return InstanceIds List of instance IDs
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置List of instance IDs
                     * @param _instanceIds List of instance IDs
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
                     * List of instance IDs
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_TERMINATEPROMETHEUSINSTANCESREQUEST_H_
