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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_RULECHECKPARAMS_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_RULECHECKPARAMS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * Health check parameters of the layer-7 listeners' forwarding rules
                */
                class RuleCheckParams : public AbstractModel
                {
                public:
                    RuleCheckParams();
                    ~RuleCheckParams() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Time interval of health check
                     * @return DelayLoop Time interval of health check
                     */
                    uint64_t GetDelayLoop() const;

                    /**
                     * 设置Time interval of health check
                     * @param DelayLoop Time interval of health check
                     */
                    void SetDelayLoop(const uint64_t& _delayLoop);

                    /**
                     * 判断参数 DelayLoop 是否已赋值
                     * @return DelayLoop 是否已赋值
                     */
                    bool DelayLoopHasBeenSet() const;

                    /**
                     * 获取Response timeout of health check
                     * @return ConnectTimeout Response timeout of health check
                     */
                    uint64_t GetConnectTimeout() const;

                    /**
                     * 设置Response timeout of health check
                     * @param ConnectTimeout Response timeout of health check
                     */
                    void SetConnectTimeout(const uint64_t& _connectTimeout);

                    /**
                     * 判断参数 ConnectTimeout 是否已赋值
                     * @return ConnectTimeout 是否已赋值
                     */
                    bool ConnectTimeoutHasBeenSet() const;

                    /**
                     * 获取Check path of health check
                     * @return Path Check path of health check
                     */
                    std::string GetPath() const;

                    /**
                     * 设置Check path of health check
                     * @param Path Check path of health check
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取Health check method: GET/HEAD
                     * @return Method Health check method: GET/HEAD
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置Health check method: GET/HEAD
                     * @param Method Health check method: GET/HEAD
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取Return code indicting normal origin servers. Value range: [100, 200, 300, 400, 500]
                     * @return StatusCode Return code indicting normal origin servers. Value range: [100, 200, 300, 400, 500]
                     */
                    std::vector<uint64_t> GetStatusCode() const;

                    /**
                     * 设置Return code indicting normal origin servers. Value range: [100, 200, 300, 400, 500]
                     * @param StatusCode Return code indicting normal origin servers. Value range: [100, 200, 300, 400, 500]
                     */
                    void SetStatusCode(const std::vector<uint64_t>& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取Domain name to be performed health check
You cannot modify this parameter when calling ModifyRuleAttribute API.
                     * @return Domain Domain name to be performed health check
You cannot modify this parameter when calling ModifyRuleAttribute API.
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置Domain name to be performed health check
You cannot modify this parameter when calling ModifyRuleAttribute API.
                     * @param Domain Domain name to be performed health check
You cannot modify this parameter when calling ModifyRuleAttribute API.
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * Time interval of health check
                     */
                    uint64_t m_delayLoop;
                    bool m_delayLoopHasBeenSet;

                    /**
                     * Response timeout of health check
                     */
                    uint64_t m_connectTimeout;
                    bool m_connectTimeoutHasBeenSet;

                    /**
                     * Check path of health check
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * Health check method: GET/HEAD
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * Return code indicting normal origin servers. Value range: [100, 200, 300, 400, 500]
                     */
                    std::vector<uint64_t> m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * Domain name to be performed health check
You cannot modify this parameter when calling ModifyRuleAttribute API.
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_RULECHECKPARAMS_H_
