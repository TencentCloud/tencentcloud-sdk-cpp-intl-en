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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBESLOWLOGPATTERNSRESPONSE_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBESLOWLOGPATTERNSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/SlowLogPattern.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeSlowLogPatterns response structure.
                */
                class DescribeSlowLogPatternsResponse : public AbstractModel
                {
                public:
                    DescribeSlowLogPatternsResponse();
                    ~DescribeSlowLogPatternsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of slow logs
                     * @return Count Total number of slow logs
                     */
                    uint64_t GetCount() const;

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Slow log statistics
                     * @return SlowLogPatterns Slow log statistics
                     */
                    std::vector<SlowLogPattern> GetSlowLogPatterns() const;

                    /**
                     * 判断参数 SlowLogPatterns 是否已赋值
                     * @return SlowLogPatterns 是否已赋值
                     */
                    bool SlowLogPatternsHasBeenSet() const;

                private:

                    /**
                     * Total number of slow logs
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Slow log statistics
                     */
                    std::vector<SlowLogPattern> m_slowLogPatterns;
                    bool m_slowLogPatternsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBESLOWLOGPATTERNSRESPONSE_H_
