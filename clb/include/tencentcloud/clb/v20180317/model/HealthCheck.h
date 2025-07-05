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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_HEALTHCHECK_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_HEALTHCHECK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * Health check information.
Note: Custom check parameters are currently supported only in certain beta test regions.
                */
                class HealthCheck : public AbstractModel
                {
                public:
                    HealthCheck();
                    ~HealthCheck() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether to enable health check. 1: enable; 0: disable.
                     * @return HealthSwitch Whether to enable health check. 1: enable; 0: disable.
                     * 
                     */
                    int64_t GetHealthSwitch() const;

                    /**
                     * 设置Whether to enable health check. 1: enable; 0: disable.
                     * @param _healthSwitch Whether to enable health check. 1: enable; 0: disable.
                     * 
                     */
                    void SetHealthSwitch(const int64_t& _healthSwitch);

                    /**
                     * 判断参数 HealthSwitch 是否已赋值
                     * @return HealthSwitch 是否已赋值
                     * 
                     */
                    bool HealthSwitchHasBeenSet() const;

                    /**
                     * 获取Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TimeOut Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetTimeOut() const;

                    /**
                     * 设置Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _timeOut Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTimeOut(const int64_t& _timeOut);

                    /**
                     * 判断参数 TimeOut 是否已赋值
                     * @return TimeOut 是否已赋值
                     * 
                     */
                    bool TimeOutHasBeenSet() const;

                    /**
                     * 获取Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IntervalTime Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetIntervalTime() const;

                    /**
                     * 设置Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _intervalTime Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIntervalTime(const int64_t& _intervalTime);

                    /**
                     * 判断参数 IntervalTime 是否已赋值
                     * @return IntervalTime 是否已赋值
                     * 
                     */
                    bool IntervalTimeHasBeenSet() const;

                    /**
                     * 获取Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HealthNum Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetHealthNum() const;

                    /**
                     * 设置Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _healthNum Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHealthNum(const int64_t& _healthNum);

                    /**
                     * 判断参数 HealthNum 是否已赋值
                     * @return HealthNum 是否已赋值
                     * 
                     */
                    bool HealthNumHasBeenSet() const;

                    /**
                     * 获取Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UnHealthNum Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetUnHealthNum() const;

                    /**
                     * 设置Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _unHealthNum Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUnHealthNum(const int64_t& _unHealthNum);

                    /**
                     * 判断参数 UnHealthNum 是否已赋值
                     * @return UnHealthNum 是否已赋值
                     * 
                     */
                    bool UnHealthNumHasBeenSet() const;

                    /**
                     * 获取Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HttpCode Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetHttpCode() const;

                    /**
                     * 设置Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _httpCode Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHttpCode(const int64_t& _httpCode);

                    /**
                     * 判断参数 HttpCode 是否已赋值
                     * @return HttpCode 是否已赋值
                     * 
                     */
                    bool HttpCodeHasBeenSet() const;

                    /**
                     * 获取Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HttpCheckPath Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHttpCheckPath() const;

                    /**
                     * 设置Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _httpCheckPath Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHttpCheckPath(const std::string& _httpCheckPath);

                    /**
                     * 判断参数 HttpCheckPath 是否已赋值
                     * @return HttpCheckPath 是否已赋值
                     * 
                     */
                    bool HttpCheckPathHasBeenSet() const;

                    /**
                     * 获取Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HttpCheckDomain Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHttpCheckDomain() const;

                    /**
                     * 设置Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _httpCheckDomain Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHttpCheckDomain(const std::string& _httpCheckDomain);

                    /**
                     * 判断参数 HttpCheckDomain 是否已赋值
                     * @return HttpCheckDomain 是否已赋值
                     * 
                     */
                    bool HttpCheckDomainHasBeenSet() const;

                    /**
                     * 获取Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HttpCheckMethod Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHttpCheckMethod() const;

                    /**
                     * 设置Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _httpCheckMethod Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHttpCheckMethod(const std::string& _httpCheckMethod);

                    /**
                     * 判断参数 HttpCheckMethod 是否已赋值
                     * @return HttpCheckMethod 是否已赋值
                     * 
                     */
                    bool HttpCheckMethodHasBeenSet() const;

                    /**
                     * 获取Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CheckPort Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetCheckPort() const;

                    /**
                     * 设置Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _checkPort Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCheckPort(const int64_t& _checkPort);

                    /**
                     * 判断参数 CheckPort 是否已赋值
                     * @return CheckPort 是否已赋值
                     * 
                     */
                    bool CheckPortHasBeenSet() const;

                    /**
                     * 获取Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ContextType Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetContextType() const;

                    /**
                     * 设置Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _contextType Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetContextType(const std::string& _contextType);

                    /**
                     * 判断参数 ContextType 是否已赋值
                     * @return ContextType 是否已赋值
                     * 
                     */
                    bool ContextTypeHasBeenSet() const;

                    /**
                     * 获取Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SendContext Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSendContext() const;

                    /**
                     * 设置Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sendContext Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSendContext(const std::string& _sendContext);

                    /**
                     * 判断参数 SendContext 是否已赋值
                     * @return SendContext 是否已赋值
                     * 
                     */
                    bool SendContextHasBeenSet() const;

                    /**
                     * 获取Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RecvContext Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetRecvContext() const;

                    /**
                     * 设置Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _recvContext Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRecvContext(const std::string& _recvContext);

                    /**
                     * 判断参数 RecvContext 是否已赋值
                     * @return RecvContext 是否已赋值
                     * 
                     */
                    bool RecvContextHasBeenSet() const;

                    /**
                     * 获取Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CheckType Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCheckType() const;

                    /**
                     * 设置Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _checkType Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCheckType(const std::string& _checkType);

                    /**
                     * 判断参数 CheckType 是否已赋值
                     * @return CheckType 是否已赋值
                     * 
                     */
                    bool CheckTypeHasBeenSet() const;

                    /**
                     * 获取Note: This field may return null, indicating that no valid values can be obtained.
                     * @return HttpVersion Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetHttpVersion() const;

                    /**
                     * 设置Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _httpVersion Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetHttpVersion(const std::string& _httpVersion);

                    /**
                     * 判断参数 HttpVersion 是否已赋值
                     * @return HttpVersion 是否已赋值
                     * 
                     */
                    bool HttpVersionHasBeenSet() const;

                    /**
                     * 获取Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SourceIpType Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSourceIpType() const;

                    /**
                     * 设置Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _sourceIpType Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSourceIpType(const int64_t& _sourceIpType);

                    /**
                     * 判断参数 SourceIpType 是否已赋值
                     * @return SourceIpType 是否已赋值
                     * 
                     */
                    bool SourceIpTypeHasBeenSet() const;

                    /**
                     * 获取Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExtendedCode Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExtendedCode() const;

                    /**
                     * 设置Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _extendedCode Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetExtendedCode(const std::string& _extendedCode);

                    /**
                     * 判断参数 ExtendedCode 是否已赋值
                     * @return ExtendedCode 是否已赋值
                     * 
                     */
                    bool ExtendedCodeHasBeenSet() const;

                private:

                    /**
                     * Whether to enable health check. 1: enable; 0: disable.
                     */
                    int64_t m_healthSwitch;
                    bool m_healthSwitchHasBeenSet;

                    /**
                     * Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_timeOut;
                    bool m_timeOutHasBeenSet;

                    /**
                     * Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_intervalTime;
                    bool m_intervalTimeHasBeenSet;

                    /**
                     * Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_healthNum;
                    bool m_healthNumHasBeenSet;

                    /**
                     * Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_unHealthNum;
                    bool m_unHealthNumHasBeenSet;

                    /**
                     * Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_httpCode;
                    bool m_httpCodeHasBeenSet;

                    /**
                     * Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_httpCheckPath;
                    bool m_httpCheckPathHasBeenSet;

                    /**
                     * Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_httpCheckDomain;
                    bool m_httpCheckDomainHasBeenSet;

                    /**
                     * Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_httpCheckMethod;
                    bool m_httpCheckMethodHasBeenSet;

                    /**
                     * Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_checkPort;
                    bool m_checkPortHasBeenSet;

                    /**
                     * Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_contextType;
                    bool m_contextTypeHasBeenSet;

                    /**
                     * Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_sendContext;
                    bool m_sendContextHasBeenSet;

                    /**
                     * Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_recvContext;
                    bool m_recvContextHasBeenSet;

                    /**
                     * Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_checkType;
                    bool m_checkTypeHasBeenSet;

                    /**
                     * Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_httpVersion;
                    bool m_httpVersionHasBeenSet;

                    /**
                     * Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_sourceIpType;
                    bool m_sourceIpTypeHasBeenSet;

                    /**
                     * Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_extendedCode;
                    bool m_extendedCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_HEALTHCHECK_H_
