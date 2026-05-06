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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEAUTOSCALERRESOURCESTRATEGIESRESPONSE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEAUTOSCALERRESOURCESTRATEGIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/ListCloudNativeAPIGatewayStrategyResult.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DescribeAutoScalerResourceStrategies response structure.
                */
                class DescribeAutoScalerResourceStrategiesResponse : public AbstractModel
                {
                public:
                    DescribeAutoScalerResourceStrategiesResponse();
                    ~DescribeAutoScalerResourceStrategiesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Get the response result of the auto scaling policy list for the Cloud Native API gateway instance.
                     * @return Result Get the response result of the auto scaling policy list for the Cloud Native API gateway instance.
                     * 
                     */
                    ListCloudNativeAPIGatewayStrategyResult GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * Get the response result of the auto scaling policy list for the Cloud Native API gateway instance.
                     */
                    ListCloudNativeAPIGatewayStrategyResult m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEAUTOSCALERRESOURCESTRATEGIESRESPONSE_H_
