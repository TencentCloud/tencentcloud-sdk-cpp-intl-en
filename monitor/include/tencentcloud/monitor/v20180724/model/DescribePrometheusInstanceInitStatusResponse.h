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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSINSTANCEINITSTATUSRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSINSTANCEINITSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/TaskStepInfo.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribePrometheusInstanceInitStatus response structure.
                */
                class DescribePrometheusInstanceInitStatusResponse : public AbstractModel
                {
                public:
                    DescribePrometheusInstanceInitStatusResponse();
                    ~DescribePrometheusInstanceInitStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Instance initialization status. Valid values:
`uninitialized` 
`initializing`
`running`
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Instance initialization status. Valid values:
`uninitialized` 
`initializing`
`running`
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Initialize task steps
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Steps Initialize task steps
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TaskStepInfo> GetSteps() const;

                    /**
                     * 判断参数 Steps 是否已赋值
                     * @return Steps 是否已赋值
                     * 
                     */
                    bool StepsHasBeenSet() const;

                    /**
                     * 获取EKS cluster ID of the instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EksClusterId EKS cluster ID of the instance
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetEksClusterId() const;

                    /**
                     * 判断参数 EksClusterId 是否已赋值
                     * @return EksClusterId 是否已赋值
                     * 
                     */
                    bool EksClusterIdHasBeenSet() const;

                private:

                    /**
                     * Instance initialization status. Valid values:
`uninitialized` 
`initializing`
`running`
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Initialize task steps
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TaskStepInfo> m_steps;
                    bool m_stepsHasBeenSet;

                    /**
                     * EKS cluster ID of the instance
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_eksClusterId;
                    bool m_eksClusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEPROMETHEUSINSTANCEINITSTATUSRESPONSE_H_
