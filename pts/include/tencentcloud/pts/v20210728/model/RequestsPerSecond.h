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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_REQUESTSPERSECOND_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_REQUESTSPERSECOND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * Load configuration for RPS mode.
                */
                class RequestsPerSecond : public AbstractModel
                {
                public:
                    RequestsPerSecond();
                    ~RequestsPerSecond() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Duration time.

Note: This field may return null, indicating that no valid value is found.
                     * @return DurationSeconds Duration time.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    int64_t GetDurationSeconds() const;

                    /**
                     * 设置Duration time.

Note: This field may return null, indicating that no valid value is found.
                     * @param _durationSeconds Duration time.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetDurationSeconds(const int64_t& _durationSeconds);

                    /**
                     * 判断参数 DurationSeconds 是否已赋值
                     * @return DurationSeconds 是否已赋值
                     * 
                     */
                    bool DurationSecondsHasBeenSet() const;

                    /**
                     * 获取Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     * @return TargetVirtualUsers Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    int64_t GetTargetVirtualUsers() const;

                    /**
                     * 设置Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     * @param _targetVirtualUsers Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetTargetVirtualUsers(const int64_t& _targetVirtualUsers);

                    /**
                     * 判断参数 TargetVirtualUsers 是否已赋值
                     * @return TargetVirtualUsers 是否已赋值
                     * 
                     */
                    bool TargetVirtualUsersHasBeenSet() const;

                    /**
                     * 获取Number of resources.

Note: This field may return null, indicating that no valid value is found.
                     * @return Resources Number of resources.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    int64_t GetResources() const;

                    /**
                     * 设置Number of resources.

Note: This field may return null, indicating that no valid value is found.
                     * @param _resources Number of resources.

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

                    /**
                     * 获取Initial rps.

Note: This field may return null, indicating that no valid value is found.
                     * @return StartRequestsPerSecond Initial rps.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    int64_t GetStartRequestsPerSecond() const;

                    /**
                     * 设置Initial rps.

Note: This field may return null, indicating that no valid value is found.
                     * @param _startRequestsPerSecond Initial rps.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetStartRequestsPerSecond(const int64_t& _startRequestsPerSecond);

                    /**
                     * 判断参数 StartRequestsPerSecond 是否已赋值
                     * @return StartRequestsPerSecond 是否已赋值
                     * 
                     */
                    bool StartRequestsPerSecondHasBeenSet() const;

                    /**
                     * 获取Target rps, invalid as an input parameter.

Note: This field may return null, indicating that no valid value is found.
                     * @return TargetRequestsPerSecond Target rps, invalid as an input parameter.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    int64_t GetTargetRequestsPerSecond() const;

                    /**
                     * 设置Target rps, invalid as an input parameter.

Note: This field may return null, indicating that no valid value is found.
                     * @param _targetRequestsPerSecond Target rps, invalid as an input parameter.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetTargetRequestsPerSecond(const int64_t& _targetRequestsPerSecond);

                    /**
                     * 判断参数 TargetRequestsPerSecond 是否已赋值
                     * @return TargetRequestsPerSecond 是否已赋值
                     * 
                     */
                    bool TargetRequestsPerSecondHasBeenSet() const;

                    /**
                     * 获取Graceful shutdown waiting time.

Note: This field may return null, indicating that no valid value is found.
                     * @return GracefulStopSeconds Graceful shutdown waiting time.

Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    int64_t GetGracefulStopSeconds() const;

                    /**
                     * 设置Graceful shutdown waiting time.

Note: This field may return null, indicating that no valid value is found.
                     * @param _gracefulStopSeconds Graceful shutdown waiting time.

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

                private:

                    /**
                     * Maximum rps.

Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t m_maxRequestsPerSecond;
                    bool m_maxRequestsPerSecondHasBeenSet;

                    /**
                     * Duration time.

Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t m_durationSeconds;
                    bool m_durationSecondsHasBeenSet;

                    /**
                     * Deprecated.

Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t m_targetVirtualUsers;
                    bool m_targetVirtualUsersHasBeenSet;

                    /**
                     * Number of resources.

Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * Initial rps.

Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t m_startRequestsPerSecond;
                    bool m_startRequestsPerSecondHasBeenSet;

                    /**
                     * Target rps, invalid as an input parameter.

Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t m_targetRequestsPerSecond;
                    bool m_targetRequestsPerSecondHasBeenSet;

                    /**
                     * Graceful shutdown waiting time.

Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t m_gracefulStopSeconds;
                    bool m_gracefulStopSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_REQUESTSPERSECOND_H_
