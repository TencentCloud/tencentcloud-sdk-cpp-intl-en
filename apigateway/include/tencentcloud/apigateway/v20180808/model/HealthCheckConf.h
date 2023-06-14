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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_HEALTHCHECKCONF_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_HEALTHCHECKCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * Health check configuration, including `TsfHealthCheckConf` and `TargetServicesHealthCheckConf`
                */
                class HealthCheckConf : public AbstractModel
                {
                public:
                    HealthCheckConf();
                    ~HealthCheckConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether health check is enabled.
                     * @return IsHealthCheck Whether health check is enabled.
                     * 
                     */
                    bool GetIsHealthCheck() const;

                    /**
                     * 设置Whether health check is enabled.
                     * @param _isHealthCheck Whether health check is enabled.
                     * 
                     */
                    void SetIsHealthCheck(const bool& _isHealthCheck);

                    /**
                     * 判断参数 IsHealthCheck 是否已赋值
                     * @return IsHealthCheck 是否已赋值
                     * 
                     */
                    bool IsHealthCheckHasBeenSet() const;

                    /**
                     * 获取Health check threshold.
                     * @return RequestVolumeThreshold Health check threshold.
                     * 
                     */
                    int64_t GetRequestVolumeThreshold() const;

                    /**
                     * 设置Health check threshold.
                     * @param _requestVolumeThreshold Health check threshold.
                     * 
                     */
                    void SetRequestVolumeThreshold(const int64_t& _requestVolumeThreshold);

                    /**
                     * 判断参数 RequestVolumeThreshold 是否已赋值
                     * @return RequestVolumeThreshold 是否已赋值
                     * 
                     */
                    bool RequestVolumeThresholdHasBeenSet() const;

                    /**
                     * 获取Window size.
                     * @return SleepWindowInMilliseconds Window size.
                     * 
                     */
                    int64_t GetSleepWindowInMilliseconds() const;

                    /**
                     * 设置Window size.
                     * @param _sleepWindowInMilliseconds Window size.
                     * 
                     */
                    void SetSleepWindowInMilliseconds(const int64_t& _sleepWindowInMilliseconds);

                    /**
                     * 判断参数 SleepWindowInMilliseconds 是否已赋值
                     * @return SleepWindowInMilliseconds 是否已赋值
                     * 
                     */
                    bool SleepWindowInMillisecondsHasBeenSet() const;

                    /**
                     * 获取Threshold percentage.
                     * @return ErrorThresholdPercentage Threshold percentage.
                     * 
                     */
                    int64_t GetErrorThresholdPercentage() const;

                    /**
                     * 设置Threshold percentage.
                     * @param _errorThresholdPercentage Threshold percentage.
                     * 
                     */
                    void SetErrorThresholdPercentage(const int64_t& _errorThresholdPercentage);

                    /**
                     * 判断参数 ErrorThresholdPercentage 是否已赋值
                     * @return ErrorThresholdPercentage 是否已赋值
                     * 
                     */
                    bool ErrorThresholdPercentageHasBeenSet() const;

                private:

                    /**
                     * Whether health check is enabled.
                     */
                    bool m_isHealthCheck;
                    bool m_isHealthCheckHasBeenSet;

                    /**
                     * Health check threshold.
                     */
                    int64_t m_requestVolumeThreshold;
                    bool m_requestVolumeThresholdHasBeenSet;

                    /**
                     * Window size.
                     */
                    int64_t m_sleepWindowInMilliseconds;
                    bool m_sleepWindowInMillisecondsHasBeenSet;

                    /**
                     * Threshold percentage.
                     */
                    int64_t m_errorThresholdPercentage;
                    bool m_errorThresholdPercentageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_HEALTHCHECKCONF_H_
