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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEINFERENCESERVICEDEPLOYMENTLOGSRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEINFERENCESERVICEDEPLOYMENTLOGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/InferenceServiceDeploymentLogInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeInferenceServiceDeploymentLogs response structure.
                */
                class DescribeInferenceServiceDeploymentLogsResponse : public AbstractModel
                {
                public:
                    DescribeInferenceServiceDeploymentLogsResponse();
                    ~DescribeInferenceServiceDeploymentLogsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of eligible deployment logs.
                     * @return TotalCount Total number of eligible deployment logs.
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Deploy the log list.
                     * @return DeploymentLogInfoSet Deploy the log list.
                     * 
                     */
                    std::vector<InferenceServiceDeploymentLogInfo> GetDeploymentLogInfoSet() const;

                    /**
                     * 判断参数 DeploymentLogInfoSet 是否已赋值
                     * @return DeploymentLogInfoSet 是否已赋值
                     * 
                     */
                    bool DeploymentLogInfoSetHasBeenSet() const;

                private:

                    /**
                     * Total number of eligible deployment logs.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Deploy the log list.
                     */
                    std::vector<InferenceServiceDeploymentLogInfo> m_deploymentLogInfoSet;
                    bool m_deploymentLogInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEINFERENCESERVICEDEPLOYMENTLOGSRESPONSE_H_
