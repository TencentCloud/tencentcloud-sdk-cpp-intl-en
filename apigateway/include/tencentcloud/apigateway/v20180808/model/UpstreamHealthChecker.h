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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UPSTREAMHEALTHCHECKER_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UPSTREAMHEALTHCHECKER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/UpstreamHealthCheckerReqHeaders.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * Upstream health check parameter configuration
                */
                class UpstreamHealthChecker : public AbstractModel
                {
                public:
                    UpstreamHealthChecker();
                    ~UpstreamHealthChecker() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies whether to enable active health check
                     * @return EnableActiveCheck Specifies whether to enable active health check
                     * 
                     */
                    bool GetEnableActiveCheck() const;

                    /**
                     * 设置Specifies whether to enable active health check
                     * @param _enableActiveCheck Specifies whether to enable active health check
                     * 
                     */
                    void SetEnableActiveCheck(const bool& _enableActiveCheck);

                    /**
                     * 判断参数 EnableActiveCheck 是否已赋值
                     * @return EnableActiveCheck 是否已赋值
                     * 
                     */
                    bool EnableActiveCheckHasBeenSet() const;

                    /**
                     * 获取Specifies whether the enable passive health check
                     * @return EnablePassiveCheck Specifies whether the enable passive health check
                     * 
                     */
                    bool GetEnablePassiveCheck() const;

                    /**
                     * 设置Specifies whether the enable passive health check
                     * @param _enablePassiveCheck Specifies whether the enable passive health check
                     * 
                     */
                    void SetEnablePassiveCheck(const bool& _enablePassiveCheck);

                    /**
                     * 判断参数 EnablePassiveCheck 是否已赋值
                     * @return EnablePassiveCheck 是否已赋值
                     * 
                     */
                    bool EnablePassiveCheckHasBeenSet() const;

                    /**
                     * 获取The HTTP status code that indicates that the upstream is healthy
                     * @return HealthyHttpStatus The HTTP status code that indicates that the upstream is healthy
                     * 
                     */
                    std::string GetHealthyHttpStatus() const;

                    /**
                     * 设置The HTTP status code that indicates that the upstream is healthy
                     * @param _healthyHttpStatus The HTTP status code that indicates that the upstream is healthy
                     * 
                     */
                    void SetHealthyHttpStatus(const std::string& _healthyHttpStatus);

                    /**
                     * 判断参数 HealthyHttpStatus 是否已赋值
                     * @return HealthyHttpStatus 是否已赋值
                     * 
                     */
                    bool HealthyHttpStatusHasBeenSet() const;

                    /**
                     * 获取The HTTP status code that indicates that the upstream is unhealthy
                     * @return UnhealthyHttpStatus The HTTP status code that indicates that the upstream is unhealthy
                     * 
                     */
                    std::string GetUnhealthyHttpStatus() const;

                    /**
                     * 设置The HTTP status code that indicates that the upstream is unhealthy
                     * @param _unhealthyHttpStatus The HTTP status code that indicates that the upstream is unhealthy
                     * 
                     */
                    void SetUnhealthyHttpStatus(const std::string& _unhealthyHttpStatus);

                    /**
                     * 判断参数 UnhealthyHttpStatus 是否已赋值
                     * @return UnhealthyHttpStatus 是否已赋值
                     * 
                     */
                    bool UnhealthyHttpStatusHasBeenSet() const;

                    /**
                     * 获取The threshold on consecutive TCP errors. Range: [0, 254]. `0` indicates not to check TCP.
                     * @return TcpFailureThreshold The threshold on consecutive TCP errors. Range: [0, 254]. `0` indicates not to check TCP.
                     * 
                     */
                    uint64_t GetTcpFailureThreshold() const;

                    /**
                     * 设置The threshold on consecutive TCP errors. Range: [0, 254]. `0` indicates not to check TCP.
                     * @param _tcpFailureThreshold The threshold on consecutive TCP errors. Range: [0, 254]. `0` indicates not to check TCP.
                     * 
                     */
                    void SetTcpFailureThreshold(const uint64_t& _tcpFailureThreshold);

                    /**
                     * 判断参数 TcpFailureThreshold 是否已赋值
                     * @return TcpFailureThreshold 是否已赋值
                     * 
                     */
                    bool TcpFailureThresholdHasBeenSet() const;

                    /**
                     * 获取The threshold on consecutive timeouts. Range: [0, 254]. `0` indicates not to check TCP.
                     * @return TimeoutThreshold The threshold on consecutive timeouts. Range: [0, 254]. `0` indicates not to check TCP.
                     * 
                     */
                    uint64_t GetTimeoutThreshold() const;

                    /**
                     * 设置The threshold on consecutive timeouts. Range: [0, 254]. `0` indicates not to check TCP.
                     * @param _timeoutThreshold The threshold on consecutive timeouts. Range: [0, 254]. `0` indicates not to check TCP.
                     * 
                     */
                    void SetTimeoutThreshold(const uint64_t& _timeoutThreshold);

                    /**
                     * 判断参数 TimeoutThreshold 是否已赋值
                     * @return TimeoutThreshold 是否已赋值
                     * 
                     */
                    bool TimeoutThresholdHasBeenSet() const;

                    /**
                     * 获取The threshold on consecutive HTTP errors. Range: [0, 254]. `0` indicates not to check HTTP.
                     * @return HttpFailureThreshold The threshold on consecutive HTTP errors. Range: [0, 254]. `0` indicates not to check HTTP.
                     * 
                     */
                    uint64_t GetHttpFailureThreshold() const;

                    /**
                     * 设置The threshold on consecutive HTTP errors. Range: [0, 254]. `0` indicates not to check HTTP.
                     * @param _httpFailureThreshold The threshold on consecutive HTTP errors. Range: [0, 254]. `0` indicates not to check HTTP.
                     * 
                     */
                    void SetHttpFailureThreshold(const uint64_t& _httpFailureThreshold);

                    /**
                     * 判断参数 HttpFailureThreshold 是否已赋值
                     * @return HttpFailureThreshold 是否已赋值
                     * 
                     */
                    bool HttpFailureThresholdHasBeenSet() const;

                    /**
                     * 获取The path for active health check. It defaults to `/`.
                     * @return ActiveCheckHttpPath The path for active health check. It defaults to `/`.
                     * 
                     */
                    std::string GetActiveCheckHttpPath() const;

                    /**
                     * 设置The path for active health check. It defaults to `/`.
                     * @param _activeCheckHttpPath The path for active health check. It defaults to `/`.
                     * 
                     */
                    void SetActiveCheckHttpPath(const std::string& _activeCheckHttpPath);

                    /**
                     * 判断参数 ActiveCheckHttpPath 是否已赋值
                     * @return ActiveCheckHttpPath 是否已赋值
                     * 
                     */
                    bool ActiveCheckHttpPathHasBeenSet() const;

                    /**
                     * 获取The timeout period for active health check in seconds. Default: `5`. 
                     * @return ActiveCheckTimeout The timeout period for active health check in seconds. Default: `5`. 
                     * 
                     */
                    uint64_t GetActiveCheckTimeout() const;

                    /**
                     * 设置The timeout period for active health check in seconds. Default: `5`. 
                     * @param _activeCheckTimeout The timeout period for active health check in seconds. Default: `5`. 
                     * 
                     */
                    void SetActiveCheckTimeout(const uint64_t& _activeCheckTimeout);

                    /**
                     * 判断参数 ActiveCheckTimeout 是否已赋值
                     * @return ActiveCheckTimeout 是否已赋值
                     * 
                     */
                    bool ActiveCheckTimeoutHasBeenSet() const;

                    /**
                     * 获取The interval for active health check in seconds. Default: `5`. 
                     * @return ActiveCheckInterval The interval for active health check in seconds. Default: `5`. 
                     * 
                     */
                    uint64_t GetActiveCheckInterval() const;

                    /**
                     * 设置The interval for active health check in seconds. Default: `5`. 
                     * @param _activeCheckInterval The interval for active health check in seconds. Default: `5`. 
                     * 
                     */
                    void SetActiveCheckInterval(const uint64_t& _activeCheckInterval);

                    /**
                     * 判断参数 ActiveCheckInterval 是否已赋值
                     * @return ActiveCheckInterval 是否已赋值
                     * 
                     */
                    bool ActiveCheckIntervalHasBeenSet() const;

                    /**
                     * 获取Header of the active health check request
                     * @return ActiveRequestHeader Header of the active health check request
                     * 
                     */
                    std::vector<UpstreamHealthCheckerReqHeaders> GetActiveRequestHeader() const;

                    /**
                     * 设置Header of the active health check request
                     * @param _activeRequestHeader Header of the active health check request
                     * 
                     */
                    void SetActiveRequestHeader(const std::vector<UpstreamHealthCheckerReqHeaders>& _activeRequestHeader);

                    /**
                     * 判断参数 ActiveRequestHeader 是否已赋值
                     * @return ActiveRequestHeader 是否已赋值
                     * 
                     */
                    bool ActiveRequestHeaderHasBeenSet() const;

                    /**
                     * 获取The period for an abnormal to recover automatically in seconds. If only the passive health check is enabled, it must be greater than 0. Otherwise the abnormal nodes can not recovered automatically. The default value is 30 seconds. 
                     * @return UnhealthyTimeout The period for an abnormal to recover automatically in seconds. If only the passive health check is enabled, it must be greater than 0. Otherwise the abnormal nodes can not recovered automatically. The default value is 30 seconds. 
                     * 
                     */
                    uint64_t GetUnhealthyTimeout() const;

                    /**
                     * 设置The period for an abnormal to recover automatically in seconds. If only the passive health check is enabled, it must be greater than 0. Otherwise the abnormal nodes can not recovered automatically. The default value is 30 seconds. 
                     * @param _unhealthyTimeout The period for an abnormal to recover automatically in seconds. If only the passive health check is enabled, it must be greater than 0. Otherwise the abnormal nodes can not recovered automatically. The default value is 30 seconds. 
                     * 
                     */
                    void SetUnhealthyTimeout(const uint64_t& _unhealthyTimeout);

                    /**
                     * 判断参数 UnhealthyTimeout 是否已赋值
                     * @return UnhealthyTimeout 是否已赋值
                     * 
                     */
                    bool UnhealthyTimeoutHasBeenSet() const;

                private:

                    /**
                     * Specifies whether to enable active health check
                     */
                    bool m_enableActiveCheck;
                    bool m_enableActiveCheckHasBeenSet;

                    /**
                     * Specifies whether the enable passive health check
                     */
                    bool m_enablePassiveCheck;
                    bool m_enablePassiveCheckHasBeenSet;

                    /**
                     * The HTTP status code that indicates that the upstream is healthy
                     */
                    std::string m_healthyHttpStatus;
                    bool m_healthyHttpStatusHasBeenSet;

                    /**
                     * The HTTP status code that indicates that the upstream is unhealthy
                     */
                    std::string m_unhealthyHttpStatus;
                    bool m_unhealthyHttpStatusHasBeenSet;

                    /**
                     * The threshold on consecutive TCP errors. Range: [0, 254]. `0` indicates not to check TCP.
                     */
                    uint64_t m_tcpFailureThreshold;
                    bool m_tcpFailureThresholdHasBeenSet;

                    /**
                     * The threshold on consecutive timeouts. Range: [0, 254]. `0` indicates not to check TCP.
                     */
                    uint64_t m_timeoutThreshold;
                    bool m_timeoutThresholdHasBeenSet;

                    /**
                     * The threshold on consecutive HTTP errors. Range: [0, 254]. `0` indicates not to check HTTP.
                     */
                    uint64_t m_httpFailureThreshold;
                    bool m_httpFailureThresholdHasBeenSet;

                    /**
                     * The path for active health check. It defaults to `/`.
                     */
                    std::string m_activeCheckHttpPath;
                    bool m_activeCheckHttpPathHasBeenSet;

                    /**
                     * The timeout period for active health check in seconds. Default: `5`. 
                     */
                    uint64_t m_activeCheckTimeout;
                    bool m_activeCheckTimeoutHasBeenSet;

                    /**
                     * The interval for active health check in seconds. Default: `5`. 
                     */
                    uint64_t m_activeCheckInterval;
                    bool m_activeCheckIntervalHasBeenSet;

                    /**
                     * Header of the active health check request
                     */
                    std::vector<UpstreamHealthCheckerReqHeaders> m_activeRequestHeader;
                    bool m_activeRequestHeaderHasBeenSet;

                    /**
                     * The period for an abnormal to recover automatically in seconds. If only the passive health check is enabled, it must be greater than 0. Otherwise the abnormal nodes can not recovered automatically. The default value is 30 seconds. 
                     */
                    uint64_t m_unhealthyTimeout;
                    bool m_unhealthyTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_UPSTREAMHEALTHCHECKER_H_
