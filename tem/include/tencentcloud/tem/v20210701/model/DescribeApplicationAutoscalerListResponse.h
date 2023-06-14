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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBEAPPLICATIONAUTOSCALERLISTRESPONSE_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBEAPPLICATIONAUTOSCALERLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tem/v20210701/model/Autoscaler.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * DescribeApplicationAutoscalerList response structure.
                */
                class DescribeApplicationAutoscalerListResponse : public AbstractModel
                {
                public:
                    DescribeApplicationAutoscalerListResponse();
                    ~DescribeApplicationAutoscalerListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Scaling rule
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return Result Scaling rule
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Autoscaler> GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * Scaling rule
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<Autoscaler> m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBEAPPLICATIONAUTOSCALERLISTRESPONSE_H_
