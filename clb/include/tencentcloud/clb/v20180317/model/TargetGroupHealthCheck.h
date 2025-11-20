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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_TARGETGROUPHEALTHCHECK_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_TARGETGROUPHEALTHCHECK_H_

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
                * 
                */
                class TargetGroupHealthCheck : public AbstractModel
                {
                public:
                    TargetGroupHealthCheck();
                    ~TargetGroupHealthCheck() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return HealthSwitch 
                     * 
                     */
                    bool GetHealthSwitch() const;

                    /**
                     * 设置
                     * @param _healthSwitch 
                     * 
                     */
                    void SetHealthSwitch(const bool& _healthSwitch);

                    /**
                     * 判断参数 HealthSwitch 是否已赋值
                     * @return HealthSwitch 是否已赋值
                     * 
                     */
                    bool HealthSwitchHasBeenSet() const;

                    /**
                     * 获取
                     * @return Protocol 
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置
                     * @param _protocol 
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取
                     * @return Port 
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置
                     * @param _port 
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取
                     * @return Timeout 
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置
                     * @param _timeout 
                     * 
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取
                     * @return GapTime 
                     * 
                     */
                    int64_t GetGapTime() const;

                    /**
                     * 设置
                     * @param _gapTime 
                     * 
                     */
                    void SetGapTime(const int64_t& _gapTime);

                    /**
                     * 判断参数 GapTime 是否已赋值
                     * @return GapTime 是否已赋值
                     * 
                     */
                    bool GapTimeHasBeenSet() const;

                    /**
                     * 获取
                     * @return GoodLimit 
                     * 
                     */
                    int64_t GetGoodLimit() const;

                    /**
                     * 设置
                     * @param _goodLimit 
                     * 
                     */
                    void SetGoodLimit(const int64_t& _goodLimit);

                    /**
                     * 判断参数 GoodLimit 是否已赋值
                     * @return GoodLimit 是否已赋值
                     * 
                     */
                    bool GoodLimitHasBeenSet() const;

                    /**
                     * 获取
                     * @return BadLimit 
                     * 
                     */
                    int64_t GetBadLimit() const;

                    /**
                     * 设置
                     * @param _badLimit 
                     * 
                     */
                    void SetBadLimit(const int64_t& _badLimit);

                    /**
                     * 判断参数 BadLimit 是否已赋值
                     * @return BadLimit 是否已赋值
                     * 
                     */
                    bool BadLimitHasBeenSet() const;

                    /**
                     * 获取
                     * @return JumboFrame 
                     * 
                     */
                    bool GetJumboFrame() const;

                    /**
                     * 设置
                     * @param _jumboFrame 
                     * 
                     */
                    void SetJumboFrame(const bool& _jumboFrame);

                    /**
                     * 判断参数 JumboFrame 是否已赋值
                     * @return JumboFrame 是否已赋值
                     * 
                     */
                    bool JumboFrameHasBeenSet() const;

                    /**
                     * 获取
                     * @return HttpCode 
                     * 
                     */
                    int64_t GetHttpCode() const;

                    /**
                     * 设置
                     * @param _httpCode 
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
                     * 获取
                     * @return HttpCheckDomain 
                     * 
                     */
                    std::string GetHttpCheckDomain() const;

                    /**
                     * 设置
                     * @param _httpCheckDomain 
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
                     * 获取
                     * @return HttpCheckPath 
                     * 
                     */
                    std::string GetHttpCheckPath() const;

                    /**
                     * 设置
                     * @param _httpCheckPath 
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
                     * 获取
                     * @return HttpCheckMethod 
                     * 
                     */
                    std::string GetHttpCheckMethod() const;

                    /**
                     * 设置
                     * @param _httpCheckMethod 
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
                     * 获取
                     * @return ContextType 
                     * 
                     */
                    std::string GetContextType() const;

                    /**
                     * 设置
                     * @param _contextType 
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
                     * 获取
                     * @return SendContext 
                     * 
                     */
                    std::string GetSendContext() const;

                    /**
                     * 设置
                     * @param _sendContext 
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
                     * 获取
                     * @return RecvContext 
                     * 
                     */
                    std::string GetRecvContext() const;

                    /**
                     * 设置
                     * @param _recvContext 
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
                     * 获取
                     * @return HttpVersion 
                     * 
                     */
                    std::string GetHttpVersion() const;

                    /**
                     * 设置
                     * @param _httpVersion 
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
                     * 获取
                     * @return ExtendedCode 
                     * 
                     */
                    std::string GetExtendedCode() const;

                    /**
                     * 设置
                     * @param _extendedCode 
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
                     * 
                     */
                    bool m_healthSwitch;
                    bool m_healthSwitchHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_gapTime;
                    bool m_gapTimeHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_goodLimit;
                    bool m_goodLimitHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_badLimit;
                    bool m_badLimitHasBeenSet;

                    /**
                     * 
                     */
                    bool m_jumboFrame;
                    bool m_jumboFrameHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_httpCode;
                    bool m_httpCodeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_httpCheckDomain;
                    bool m_httpCheckDomainHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_httpCheckPath;
                    bool m_httpCheckPathHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_httpCheckMethod;
                    bool m_httpCheckMethodHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_contextType;
                    bool m_contextTypeHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_sendContext;
                    bool m_sendContextHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_recvContext;
                    bool m_recvContextHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_httpVersion;
                    bool m_httpVersionHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_extendedCode;
                    bool m_extendedCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_TARGETGROUPHEALTHCHECK_H_
