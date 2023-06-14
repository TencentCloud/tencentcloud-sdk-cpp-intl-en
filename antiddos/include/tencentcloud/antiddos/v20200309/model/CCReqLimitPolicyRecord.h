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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CCREQLIMITPOLICYRECORD_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CCREQLIMITPOLICYRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * Configuration fields of CC frequency limit policies
                */
                class CCReqLimitPolicyRecord : public AbstractModel
                {
                public:
                    CCReqLimitPolicyRecord();
                    ~CCReqLimitPolicyRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Sampling interval (in seconds). Valid values: `1`, `10`, `30`, and `60`.
                     * @return Period Sampling interval (in seconds). Valid values: `1`, `10`, `30`, and `60`.
                     * 
                     */
                    uint64_t GetPeriod() const;

                    /**
                     * 设置Sampling interval (in seconds). Valid values: `1`, `10`, `30`, and `60`.
                     * @param _period Sampling interval (in seconds). Valid values: `1`, `10`, `30`, and `60`.
                     * 
                     */
                    void SetPeriod(const uint64_t& _period);

                    /**
                     * 判断参数 Period 是否已赋值
                     * @return Period 是否已赋值
                     * 
                     */
                    bool PeriodHasBeenSet() const;

                    /**
                     * 获取Number of requests. Value range: 1-2000.
                     * @return RequestNum Number of requests. Value range: 1-2000.
                     * 
                     */
                    uint64_t GetRequestNum() const;

                    /**
                     * 设置Number of requests. Value range: 1-2000.
                     * @param _requestNum Number of requests. Value range: 1-2000.
                     * 
                     */
                    void SetRequestNum(const uint64_t& _requestNum);

                    /**
                     * 判断参数 RequestNum 是否已赋值
                     * @return RequestNum 是否已赋值
                     * 
                     */
                    bool RequestNumHasBeenSet() const;

                    /**
                     * 获取Action of limiting request frequency. Valid values: `alg` (limit request frequency via verification codes) and `drop`(drop requests).
                     * @return Action Action of limiting request frequency. Valid values: `alg` (limit request frequency via verification codes) and `drop`(drop requests).
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Action of limiting request frequency. Valid values: `alg` (limit request frequency via verification codes) and `drop`(drop requests).
                     * @param _action Action of limiting request frequency. Valid values: `alg` (limit request frequency via verification codes) and `drop`(drop requests).
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Sets an interval of the frequency limit policy. Value range: 1-86400 (in seconds).
                     * @return ExecuteDuration Sets an interval of the frequency limit policy. Value range: 1-86400 (in seconds).
                     * 
                     */
                    uint64_t GetExecuteDuration() const;

                    /**
                     * 设置Sets an interval of the frequency limit policy. Value range: 1-86400 (in seconds).
                     * @param _executeDuration Sets an interval of the frequency limit policy. Value range: 1-86400 (in seconds).
                     * 
                     */
                    void SetExecuteDuration(const uint64_t& _executeDuration);

                    /**
                     * 判断参数 ExecuteDuration 是否已赋值
                     * @return ExecuteDuration 是否已赋值
                     * 
                     */
                    bool ExecuteDurationHasBeenSet() const;

                    /**
                     * 获取Filters values of configuration fields. `include`: The value is included. `equal`: The value matches the configuration field.
                     * @return Mode Filters values of configuration fields. `include`: The value is included. `equal`: The value matches the configuration field.
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置Filters values of configuration fields. `include`: The value is included. `equal`: The value matches the configuration field.
                     * @param _mode Filters values of configuration fields. `include`: The value is included. `equal`: The value matches the configuration field.
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取URI, which cannot be used together with `User-Agent` and `Cookie`.
                     * @return Uri URI, which cannot be used together with `User-Agent` and `Cookie`.
                     * 
                     */
                    std::string GetUri() const;

                    /**
                     * 设置URI, which cannot be used together with `User-Agent` and `Cookie`.
                     * @param _uri URI, which cannot be used together with `User-Agent` and `Cookie`.
                     * 
                     */
                    void SetUri(const std::string& _uri);

                    /**
                     * 判断参数 Uri 是否已赋值
                     * @return Uri 是否已赋值
                     * 
                     */
                    bool UriHasBeenSet() const;

                    /**
                     * 获取User-Agent, which cannot be used together with `Uri` and `Cookie`.
                     * @return UserAgent User-Agent, which cannot be used together with `Uri` and `Cookie`.
                     * 
                     */
                    std::string GetUserAgent() const;

                    /**
                     * 设置User-Agent, which cannot be used together with `Uri` and `Cookie`.
                     * @param _userAgent User-Agent, which cannot be used together with `Uri` and `Cookie`.
                     * 
                     */
                    void SetUserAgent(const std::string& _userAgent);

                    /**
                     * 判断参数 UserAgent 是否已赋值
                     * @return UserAgent 是否已赋值
                     * 
                     */
                    bool UserAgentHasBeenSet() const;

                    /**
                     * 获取Cookie, which cannot be used together with `Uri` and `User-Agent`.
                     * @return Cookie Cookie, which cannot be used together with `Uri` and `User-Agent`.
                     * 
                     */
                    std::string GetCookie() const;

                    /**
                     * 设置Cookie, which cannot be used together with `Uri` and `User-Agent`.
                     * @param _cookie Cookie, which cannot be used together with `Uri` and `User-Agent`.
                     * 
                     */
                    void SetCookie(const std::string& _cookie);

                    /**
                     * 判断参数 Cookie 是否已赋值
                     * @return Cookie 是否已赋值
                     * 
                     */
                    bool CookieHasBeenSet() const;

                private:

                    /**
                     * Sampling interval (in seconds). Valid values: `1`, `10`, `30`, and `60`.
                     */
                    uint64_t m_period;
                    bool m_periodHasBeenSet;

                    /**
                     * Number of requests. Value range: 1-2000.
                     */
                    uint64_t m_requestNum;
                    bool m_requestNumHasBeenSet;

                    /**
                     * Action of limiting request frequency. Valid values: `alg` (limit request frequency via verification codes) and `drop`(drop requests).
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Sets an interval of the frequency limit policy. Value range: 1-86400 (in seconds).
                     */
                    uint64_t m_executeDuration;
                    bool m_executeDurationHasBeenSet;

                    /**
                     * Filters values of configuration fields. `include`: The value is included. `equal`: The value matches the configuration field.
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * URI, which cannot be used together with `User-Agent` and `Cookie`.
                     */
                    std::string m_uri;
                    bool m_uriHasBeenSet;

                    /**
                     * User-Agent, which cannot be used together with `Uri` and `Cookie`.
                     */
                    std::string m_userAgent;
                    bool m_userAgentHasBeenSet;

                    /**
                     * Cookie, which cannot be used together with `Uri` and `User-Agent`.
                     */
                    std::string m_cookie;
                    bool m_cookieHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_CCREQLIMITPOLICYRECORD_H_
