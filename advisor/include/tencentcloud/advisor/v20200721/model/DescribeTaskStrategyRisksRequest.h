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

#ifndef TENCENTCLOUD_ADVISOR_V20200721_MODEL_DESCRIBETASKSTRATEGYRISKSREQUEST_H_
#define TENCENTCLOUD_ADVISOR_V20200721_MODEL_DESCRIBETASKSTRATEGYRISKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Advisor
    {
        namespace V20200721
        {
            namespace Model
            {
                /**
                * DescribeTaskStrategyRisks request structure.
                */
                class DescribeTaskStrategyRisksRequest : public AbstractModel
                {
                public:
                    DescribeTaskStrategyRisksRequest();
                    ~DescribeTaskStrategyRisksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Assessment item ID
                     * @return StrategyId Assessment item ID
                     * 
                     */
                    uint64_t GetStrategyId() const;

                    /**
                     * 设置Assessment item ID
                     * @param _strategyId Assessment item ID
                     * 
                     */
                    void SetStrategyId(const uint64_t& _strategyId);

                    /**
                     * 判断参数 StrategyId 是否已赋值
                     * @return StrategyId 是否已赋值
                     * 
                     */
                    bool StrategyIdHasBeenSet() const;

                    /**
                     * 获取Quantity of returns. It is 100 by default, and the maximum value is 200.
                     * @return Limit Quantity of returns. It is 100 by default, and the maximum value is 200.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Quantity of returns. It is 100 by default, and the maximum value is 200.
                     * @param _limit Quantity of returns. It is 100 by default, and the maximum value is 200.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Offset, which is 0 by default.
                     * @return Offset Offset, which is 0 by default.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Offset, which is 0 by default.
                     * @param _offset Offset, which is 0 by default.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Environment
                     * @return Env Environment
                     * 
                     */
                    std::string GetEnv() const;

                    /**
                     * 设置Environment
                     * @param _env Environment
                     * 
                     */
                    void SetEnv(const std::string& _env);

                    /**
                     * 判断参数 Env 是否已赋值
                     * @return Env 是否已赋值
                     * 
                     */
                    bool EnvHasBeenSet() const;

                    /**
                     * 获取Task type
                     * @return TaskType Task type
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置Task type
                     * @param _taskType Task type
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                private:

                    /**
                     * Assessment item ID
                     */
                    uint64_t m_strategyId;
                    bool m_strategyIdHasBeenSet;

                    /**
                     * Quantity of returns. It is 100 by default, and the maximum value is 200.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Offset, which is 0 by default.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Environment
                     */
                    std::string m_env;
                    bool m_envHasBeenSet;

                    /**
                     * Task type
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADVISOR_V20200721_MODEL_DESCRIBETASKSTRATEGYRISKSREQUEST_H_
