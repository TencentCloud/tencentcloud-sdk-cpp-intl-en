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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_CONCURRENCY_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_CONCURRENCY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/pts/v20210728/model/Stage.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * Load configuration for concurrency mode
                */
                class Concurrency : public AbstractModel
                {
                public:
                    Concurrency();
                    ~Concurrency() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Array of multi-stage configuration.

Note: This field may return null, indicating that no valid value is found.
                     * @return Stages Array of multi-stage configuration.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::vector<Stage> GetStages() const;

                    /**
                     * 设置Array of multi-stage configuration.

Note: This field may return null, indicating that no valid value is found.
                     * @param _stages Array of multi-stage configuration.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetStages(const std::vector<Stage>& _stages);

                    /**
                     * 判断参数 Stages 是否已赋值
                     * @return Stages 是否已赋值
                     * 
                     */
                    bool StagesHasBeenSet() const;

                    /**
                     * 获取Number of iteration.

Note: This field may return null, indicating that no valid value is found.
                     * @return IterationCount Number of iteration.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    int64_t GetIterationCount() const;

                    /**
                     * 设置Number of iteration.

Note: This field may return null, indicating that no valid value is found.
                     * @param _iterationCount Number of iteration.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetIterationCount(const int64_t& _iterationCount);

                    /**
                     * 判断参数 IterationCount 是否已赋值
                     * @return IterationCount 是否已赋值
                     * 
                     */
                    bool IterationCountHasBeenSet() const;

                    /**
                     * 获取Maximum rps.

Note: This field may return null, indicating that no valid value is found.
                     * @return MaxRequestsPerSecond Maximum rps.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    int64_t GetMaxRequestsPerSecond() const;

                    /**
                     * 设置Maximum rps.

Note: This field may return null, indicating that no valid value is found.
                     * @param _maxRequestsPerSecond Maximum rps.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetMaxRequestsPerSecond(const int64_t& _maxRequestsPerSecond);

                    /**
                     * 判断参数 MaxRequestsPerSecond 是否已赋值
                     * @return MaxRequestsPerSecond 是否已赋值
                     * 
                     */
                    bool MaxRequestsPerSecondHasBeenSet() const;

                    /**
                     * 获取Graceful termination job waiting time.

Note: This field may return null, indicating that no valid value is found.
                     * @return GracefulStopSeconds Graceful termination job waiting time.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    int64_t GetGracefulStopSeconds() const;

                    /**
                     * 设置Graceful termination job waiting time.

Note: This field may return null, indicating that no valid value is found.
                     * @param _gracefulStopSeconds Graceful termination job waiting time.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetGracefulStopSeconds(const int64_t& _gracefulStopSeconds);

                    /**
                     * 判断参数 GracefulStopSeconds 是否已赋值
                     * @return GracefulStopSeconds 是否已赋值
                     * 
                     */
                    bool GracefulStopSecondsHasBeenSet() const;

                    /**
                     * 获取Number of resource.

Note: This field may return null, indicating that no valid value is found.
                     * @return Resources Number of resource.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    int64_t GetResources() const;

                    /**
                     * 设置Number of resource.

Note: This field may return null, indicating that no valid value is found.
                     * @param _resources Number of resource.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetResources(const int64_t& _resources);

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                private:

                    /**
                     * Array of multi-stage configuration.

Note: This field may return null, indicating that no valid value is found.
                     */
                    std::vector<Stage> m_stages;
                    bool m_stagesHasBeenSet;

                    /**
                     * Number of iteration.

Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t m_iterationCount;
                    bool m_iterationCountHasBeenSet;

                    /**
                     * Maximum rps.

Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t m_maxRequestsPerSecond;
                    bool m_maxRequestsPerSecondHasBeenSet;

                    /**
                     * Graceful termination job waiting time.

Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t m_gracefulStopSeconds;
                    bool m_gracefulStopSecondsHasBeenSet;

                    /**
                     * Number of resource.

Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t m_resources;
                    bool m_resourcesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_CONCURRENCY_H_
