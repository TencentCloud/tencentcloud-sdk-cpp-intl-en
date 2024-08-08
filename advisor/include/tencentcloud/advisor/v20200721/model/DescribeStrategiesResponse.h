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

#ifndef TENCENTCLOUD_ADVISOR_V20200721_MODEL_DESCRIBESTRATEGIESRESPONSE_H_
#define TENCENTCLOUD_ADVISOR_V20200721_MODEL_DESCRIBESTRATEGIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/advisor/v20200721/model/Strategies.h>


namespace TencentCloud
{
    namespace Advisor
    {
        namespace V20200721
        {
            namespace Model
            {
                /**
                * DescribeStrategies response structure.
                */
                class DescribeStrategiesResponse : public AbstractModel
                {
                public:
                    DescribeStrategiesResponse();
                    ~DescribeStrategiesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Assessment item list
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Strategies Assessment item list
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<Strategies> GetStrategies() const;

                    /**
                     * 判断参数 Strategies 是否已赋值
                     * @return Strategies 是否已赋值
                     * 
                     */
                    bool StrategiesHasBeenSet() const;

                private:

                    /**
                     * Assessment item list
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<Strategies> m_strategies;
                    bool m_strategiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADVISOR_V20200721_MODEL_DESCRIBESTRATEGIESRESPONSE_H_
