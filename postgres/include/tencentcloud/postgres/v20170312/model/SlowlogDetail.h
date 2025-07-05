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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_SLOWLOGDETAIL_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_SLOWLOGDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/NormalQueryItem.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Slow query details
                */
                class SlowlogDetail : public AbstractModel
                {
                public:
                    SlowlogDetail();
                    ~SlowlogDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Total time consumed
                     * @return TotalTime Total time consumed
                     * 
                     */
                    double GetTotalTime() const;

                    /**
                     * 设置Total time consumed
                     * @param _totalTime Total time consumed
                     * 
                     */
                    void SetTotalTime(const double& _totalTime);

                    /**
                     * 判断参数 TotalTime 是否已赋值
                     * @return TotalTime 是否已赋值
                     * 
                     */
                    bool TotalTimeHasBeenSet() const;

                    /**
                     * 获取Total number of calls
                     * @return TotalCalls Total number of calls
                     * 
                     */
                    int64_t GetTotalCalls() const;

                    /**
                     * 设置Total number of calls
                     * @param _totalCalls Total number of calls
                     * 
                     */
                    void SetTotalCalls(const int64_t& _totalCalls);

                    /**
                     * 判断参数 TotalCalls 是否已赋值
                     * @return TotalCalls 是否已赋值
                     * 
                     */
                    bool TotalCallsHasBeenSet() const;

                    /**
                     * 获取List of slow SQL statements after desensitization
                     * @return NormalQueries List of slow SQL statements after desensitization
                     * 
                     */
                    std::vector<NormalQueryItem> GetNormalQueries() const;

                    /**
                     * 设置List of slow SQL statements after desensitization
                     * @param _normalQueries List of slow SQL statements after desensitization
                     * 
                     */
                    void SetNormalQueries(const std::vector<NormalQueryItem>& _normalQueries);

                    /**
                     * 判断参数 NormalQueries 是否已赋值
                     * @return NormalQueries 是否已赋值
                     * 
                     */
                    bool NormalQueriesHasBeenSet() const;

                private:

                    /**
                     * Total time consumed
                     */
                    double m_totalTime;
                    bool m_totalTimeHasBeenSet;

                    /**
                     * Total number of calls
                     */
                    int64_t m_totalCalls;
                    bool m_totalCallsHasBeenSet;

                    /**
                     * List of slow SQL statements after desensitization
                     */
                    std::vector<NormalQueryItem> m_normalQueries;
                    bool m_normalQueriesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_SLOWLOGDETAIL_H_
