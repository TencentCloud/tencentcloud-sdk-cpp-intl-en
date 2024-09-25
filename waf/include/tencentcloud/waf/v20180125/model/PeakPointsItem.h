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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_PEAKPOINTSITEM_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_PEAKPOINTSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * PeakPoints array item
                */
                class PeakPointsItem : public AbstractModel
                {
                public:
                    PeakPointsItem();
                    ~PeakPointsItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Second-level Timestamp
                     * @return Time Second-level Timestamp
                     * 
                     */
                    uint64_t GetTime() const;

                    /**
                     * 设置Second-level Timestamp
                     * @param _time Second-level Timestamp
                     * 
                     */
                    void SetTime(const uint64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取QPS
                     * @return Access QPS
                     * 
                     */
                    uint64_t GetAccess() const;

                    /**
                     * 设置QPS
                     * @param _access QPS
                     * 
                     */
                    void SetAccess(const uint64_t& _access);

                    /**
                     * 判断参数 Access 是否已赋值
                     * @return Access 是否已赋值
                     * 
                     */
                    bool AccessHasBeenSet() const;

                    /**
                     * 获取Upstream bandwidth peak, unit: B
                     * @return Up Upstream bandwidth peak, unit: B
                     * 
                     */
                    uint64_t GetUp() const;

                    /**
                     * 设置Upstream bandwidth peak, unit: B
                     * @param _up Upstream bandwidth peak, unit: B
                     * 
                     */
                    void SetUp(const uint64_t& _up);

                    /**
                     * 判断参数 Up 是否已赋值
                     * @return Up 是否已赋值
                     * 
                     */
                    bool UpHasBeenSet() const;

                    /**
                     * 获取Downstream bandwidth peak, unit: B
                     * @return Down Downstream bandwidth peak, unit: B
                     * 
                     */
                    uint64_t GetDown() const;

                    /**
                     * 设置Downstream bandwidth peak, unit: B
                     * @param _down Downstream bandwidth peak, unit: B
                     * 
                     */
                    void SetDown(const uint64_t& _down);

                    /**
                     * 判断参数 Down 是否已赋值
                     * @return Down 是否已赋值
                     * 
                     */
                    bool DownHasBeenSet() const;

                    /**
                     * 获取Web attack count
                     * @return Attack Web attack count
                     * 
                     */
                    uint64_t GetAttack() const;

                    /**
                     * 设置Web attack count
                     * @param _attack Web attack count
                     * 
                     */
                    void SetAttack(const uint64_t& _attack);

                    /**
                     * 判断参数 Attack 是否已赋值
                     * @return Attack 是否已赋值
                     * 
                     */
                    bool AttackHasBeenSet() const;

                    /**
                     * 获取CC attack count
                     * @return Cc CC attack count
                     * 
                     */
                    uint64_t GetCc() const;

                    /**
                     * 设置CC attack count
                     * @param _cc CC attack count
                     * 
                     */
                    void SetCc(const uint64_t& _cc);

                    /**
                     * 判断参数 Cc 是否已赋值
                     * @return Cc 是否已赋值
                     * 
                     */
                    bool CcHasBeenSet() const;

                    /**
                     * 获取Bot qps
                     * @return BotAccess Bot qps
                     * 
                     */
                    uint64_t GetBotAccess() const;

                    /**
                     * 设置Bot qps
                     * @param _botAccess Bot qps
                     * 
                     */
                    void SetBotAccess(const uint64_t& _botAccess);

                    /**
                     * 判断参数 BotAccess 是否已赋值
                     * @return BotAccess 是否已赋值
                     * 
                     */
                    bool BotAccessHasBeenSet() const;

                    /**
                     * 获取Number of 5xx status codes returned by WAF to client

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StatusServerError Number of 5xx status codes returned by WAF to client

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStatusServerError() const;

                    /**
                     * 设置Number of 5xx status codes returned by WAF to client

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _statusServerError Number of 5xx status codes returned by WAF to client

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatusServerError(const uint64_t& _statusServerError);

                    /**
                     * 判断参数 StatusServerError 是否已赋值
                     * @return StatusServerError 是否已赋值
                     * 
                     */
                    bool StatusServerErrorHasBeenSet() const;

                    /**
                     * 获取Number of times WAF returned 4xx status codes to client

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StatusClientError Number of times WAF returned 4xx status codes to client

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStatusClientError() const;

                    /**
                     * 设置Number of times WAF returned 4xx status codes to client

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _statusClientError Number of times WAF returned 4xx status codes to client

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatusClientError(const uint64_t& _statusClientError);

                    /**
                     * 判断参数 StatusClientError 是否已赋值
                     * @return StatusClientError 是否已赋值
                     * 
                     */
                    bool StatusClientErrorHasBeenSet() const;

                    /**
                     * 获取WAF Returned to Client Status Code 302 Count

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StatusRedirect WAF Returned to Client Status Code 302 Count

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStatusRedirect() const;

                    /**
                     * 设置WAF Returned to Client Status Code 302 Count

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _statusRedirect WAF Returned to Client Status Code 302 Count

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatusRedirect(const uint64_t& _statusRedirect);

                    /**
                     * 判断参数 StatusRedirect 是否已赋值
                     * @return StatusRedirect 是否已赋值
                     * 
                     */
                    bool StatusRedirectHasBeenSet() const;

                    /**
                     * 获取Number of Times WAF Returns Status Code 202 to Client

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StatusOk Number of Times WAF Returns Status Code 202 to Client

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetStatusOk() const;

                    /**
                     * 设置Number of Times WAF Returns Status Code 202 to Client

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _statusOk Number of Times WAF Returns Status Code 202 to Client

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStatusOk(const uint64_t& _statusOk);

                    /**
                     * 判断参数 StatusOk 是否已赋值
                     * @return StatusOk 是否已赋值
                     * 
                     */
                    bool StatusOkHasBeenSet() const;

                    /**
                     * 获取Number of Times the Origin Server Returned 5xx Status Codes to WAF

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpstreamServerError Number of Times the Origin Server Returned 5xx Status Codes to WAF

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetUpstreamServerError() const;

                    /**
                     * 设置Number of Times the Origin Server Returned 5xx Status Codes to WAF

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _upstreamServerError Number of Times the Origin Server Returned 5xx Status Codes to WAF

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpstreamServerError(const uint64_t& _upstreamServerError);

                    /**
                     * 判断参数 UpstreamServerError 是否已赋值
                     * @return UpstreamServerError 是否已赋值
                     * 
                     */
                    bool UpstreamServerErrorHasBeenSet() const;

                    /**
                     * 获取Number of times the origin server returned 4xx status codes to WAF

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpstreamClientError Number of times the origin server returned 4xx status codes to WAF

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetUpstreamClientError() const;

                    /**
                     * 设置Number of times the origin server returned 4xx status codes to WAF

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _upstreamClientError Number of times the origin server returned 4xx status codes to WAF

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpstreamClientError(const uint64_t& _upstreamClientError);

                    /**
                     * 判断参数 UpstreamClientError 是否已赋值
                     * @return UpstreamClientError 是否已赋值
                     * 
                     */
                    bool UpstreamClientErrorHasBeenSet() const;

                    /**
                     * 获取Number of times the original server returns status code 302 to WAF

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpstreamRedirect Number of times the original server returns status code 302 to WAF

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetUpstreamRedirect() const;

                    /**
                     * 设置Number of times the original server returns status code 302 to WAF

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _upstreamRedirect Number of times the original server returns status code 302 to WAF

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpstreamRedirect(const uint64_t& _upstreamRedirect);

                    /**
                     * 判断参数 UpstreamRedirect 是否已赋值
                     * @return UpstreamRedirect 是否已赋值
                     * 
                     */
                    bool UpstreamRedirectHasBeenSet() const;

                    /**
                     * 获取Blocklist Count

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BlackIP Blocklist Count

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetBlackIP() const;

                    /**
                     * 设置Blocklist Count

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _blackIP Blocklist Count

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBlackIP(const uint64_t& _blackIP);

                    /**
                     * 判断参数 BlackIP 是否已赋值
                     * @return BlackIP 是否已赋值
                     * 
                     */
                    bool BlackIPHasBeenSet() const;

                    /**
                     * 获取Tamper-Proof Attempts

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Tamper Tamper-Proof Attempts

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetTamper() const;

                    /**
                     * 设置Tamper-Proof Attempts

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _tamper Tamper-Proof Attempts

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetTamper(const uint64_t& _tamper);

                    /**
                     * 判断参数 Tamper 是否已赋值
                     * @return Tamper 是否已赋值
                     * 
                     */
                    bool TamperHasBeenSet() const;

                    /**
                     * 获取Information Leakage Prevention Count

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Leak Information Leakage Prevention Count

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetLeak() const;

                    /**
                     * 设置Information Leakage Prevention Count

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _leak Information Leakage Prevention Count

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLeak(const uint64_t& _leak);

                    /**
                     * 判断参数 Leak 是否已赋值
                     * @return Leak 是否已赋值
                     * 
                     */
                    bool LeakHasBeenSet() const;

                    /**
                     * 获取Access control
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ACL Access control
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetACL() const;

                    /**
                     * 设置Access control
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _aCL Access control
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetACL(const uint64_t& _aCL);

                    /**
                     * 判断参数 ACL 是否已赋值
                     * @return ACL 是否已赋值
                     * 
                     */
                    bool ACLHasBeenSet() const;

                    /**
                     * 获取Mini Program QPS

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WxAccess Mini Program QPS

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetWxAccess() const;

                    /**
                     * 设置Mini Program QPS

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _wxAccess Mini Program QPS

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWxAccess(const uint64_t& _wxAccess);

                    /**
                     * 判断参数 WxAccess 是否已赋值
                     * @return WxAccess 是否已赋值
                     * 
                     */
                    bool WxAccessHasBeenSet() const;

                    /**
                     * 获取Number of mini program requests
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WxCount Number of mini program requests
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetWxCount() const;

                    /**
                     * 设置Number of mini program requests
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _wxCount Number of mini program requests
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWxCount(const uint64_t& _wxCount);

                    /**
                     * 判断参数 WxCount 是否已赋值
                     * @return WxCount 是否已赋值
                     * 
                     */
                    bool WxCountHasBeenSet() const;

                    /**
                     * 获取Peak upstream bandwidth of the mini program. Unit: B
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WxUp Peak upstream bandwidth of the mini program. Unit: B
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetWxUp() const;

                    /**
                     * 设置Peak upstream bandwidth of the mini program. Unit: B
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _wxUp Peak upstream bandwidth of the mini program. Unit: B
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWxUp(const uint64_t& _wxUp);

                    /**
                     * 判断参数 WxUp 是否已赋值
                     * @return WxUp 是否已赋值
                     * 
                     */
                    bool WxUpHasBeenSet() const;

                    /**
                     * 获取Peak downstream bandwidth of the mini program. Unit: B
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return WxDown Peak downstream bandwidth of the mini program. Unit: B
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetWxDown() const;

                    /**
                     * 设置Peak downstream bandwidth of the mini program. Unit: B
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _wxDown Peak downstream bandwidth of the mini program. Unit: B
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetWxDown(const uint64_t& _wxDown);

                    /**
                     * 判断参数 WxDown 是否已赋值
                     * @return WxDown 是否已赋值
                     * 
                     */
                    bool WxDownHasBeenSet() const;

                private:

                    /**
                     * Second-level Timestamp
                     */
                    uint64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * QPS
                     */
                    uint64_t m_access;
                    bool m_accessHasBeenSet;

                    /**
                     * Upstream bandwidth peak, unit: B
                     */
                    uint64_t m_up;
                    bool m_upHasBeenSet;

                    /**
                     * Downstream bandwidth peak, unit: B
                     */
                    uint64_t m_down;
                    bool m_downHasBeenSet;

                    /**
                     * Web attack count
                     */
                    uint64_t m_attack;
                    bool m_attackHasBeenSet;

                    /**
                     * CC attack count
                     */
                    uint64_t m_cc;
                    bool m_ccHasBeenSet;

                    /**
                     * Bot qps
                     */
                    uint64_t m_botAccess;
                    bool m_botAccessHasBeenSet;

                    /**
                     * Number of 5xx status codes returned by WAF to client

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_statusServerError;
                    bool m_statusServerErrorHasBeenSet;

                    /**
                     * Number of times WAF returned 4xx status codes to client

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_statusClientError;
                    bool m_statusClientErrorHasBeenSet;

                    /**
                     * WAF Returned to Client Status Code 302 Count

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_statusRedirect;
                    bool m_statusRedirectHasBeenSet;

                    /**
                     * Number of Times WAF Returns Status Code 202 to Client

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_statusOk;
                    bool m_statusOkHasBeenSet;

                    /**
                     * Number of Times the Origin Server Returned 5xx Status Codes to WAF

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_upstreamServerError;
                    bool m_upstreamServerErrorHasBeenSet;

                    /**
                     * Number of times the origin server returned 4xx status codes to WAF

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_upstreamClientError;
                    bool m_upstreamClientErrorHasBeenSet;

                    /**
                     * Number of times the original server returns status code 302 to WAF

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_upstreamRedirect;
                    bool m_upstreamRedirectHasBeenSet;

                    /**
                     * Blocklist Count

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_blackIP;
                    bool m_blackIPHasBeenSet;

                    /**
                     * Tamper-Proof Attempts

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_tamper;
                    bool m_tamperHasBeenSet;

                    /**
                     * Information Leakage Prevention Count

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_leak;
                    bool m_leakHasBeenSet;

                    /**
                     * Access control
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_aCL;
                    bool m_aCLHasBeenSet;

                    /**
                     * Mini Program QPS

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_wxAccess;
                    bool m_wxAccessHasBeenSet;

                    /**
                     * Number of mini program requests
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_wxCount;
                    bool m_wxCountHasBeenSet;

                    /**
                     * Peak upstream bandwidth of the mini program. Unit: B
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_wxUp;
                    bool m_wxUpHasBeenSet;

                    /**
                     * Peak downstream bandwidth of the mini program. Unit: B
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_wxDown;
                    bool m_wxDownHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_PEAKPOINTSITEM_H_
