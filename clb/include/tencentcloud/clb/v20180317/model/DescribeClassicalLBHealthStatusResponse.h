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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECLASSICALLBHEALTHSTATUSRESPONSE_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECLASSICALLBHEALTHSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/ClassicalHealth.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * DescribeClassicalLBHealthStatus response structure.
                */
                class DescribeClassicalLBHealthStatusResponse : public AbstractModel
                {
                public:
                    DescribeClassicalLBHealthStatusResponse();
                    ~DescribeClassicalLBHealthStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取List of real server health statuses
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * @return HealthList List of real server health statuses
Note: This field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ClassicalHealth> GetHealthList() const;

                    /**
                     * 判断参数 HealthList 是否已赋值
                     * @return HealthList 是否已赋值
                     * 
                     */
                    bool HealthListHasBeenSet() const;

                private:

                    /**
                     * List of real server health statuses
Note: This field may return `null`, indicating that no valid values can be obtained.
                     */
                    std::vector<ClassicalHealth> m_healthList;
                    bool m_healthListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_DESCRIBECLASSICALLBHEALTHSTATUSRESPONSE_H_
