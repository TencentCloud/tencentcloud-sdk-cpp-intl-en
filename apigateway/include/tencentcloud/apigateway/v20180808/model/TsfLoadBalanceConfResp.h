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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_TSFLOADBALANCECONFRESP_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_TSFLOADBALANCECONFRESP_H_

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
                * `TsfLoadBalanceConf` output parameter usage
                */
                class TsfLoadBalanceConfResp : public AbstractModel
                {
                public:
                    TsfLoadBalanceConfResp();
                    ~TsfLoadBalanceConfResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Whether load balancing is enabled.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return IsLoadBalance Whether load balancing is enabled.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool GetIsLoadBalance() const;

                    /**
                     * 设置Whether load balancing is enabled.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param IsLoadBalance Whether load balancing is enabled.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetIsLoadBalance(const bool& _isLoadBalance);

                    /**
                     * 判断参数 IsLoadBalance 是否已赋值
                     * @return IsLoadBalance 是否已赋值
                     */
                    bool IsLoadBalanceHasBeenSet() const;

                    /**
                     * 获取Load balancing method.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Method Load balancing method.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置Load balancing method.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Method Load balancing method.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取Whether session persistence is enabled.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SessionStickRequired Whether session persistence is enabled.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool GetSessionStickRequired() const;

                    /**
                     * 设置Whether session persistence is enabled.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param SessionStickRequired Whether session persistence is enabled.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSessionStickRequired(const bool& _sessionStickRequired);

                    /**
                     * 判断参数 SessionStickRequired 是否已赋值
                     * @return SessionStickRequired 是否已赋值
                     */
                    bool SessionStickRequiredHasBeenSet() const;

                    /**
                     * 获取Session persistence timeout period.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SessionStickTimeout Session persistence timeout period.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetSessionStickTimeout() const;

                    /**
                     * 设置Session persistence timeout period.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param SessionStickTimeout Session persistence timeout period.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSessionStickTimeout(const int64_t& _sessionStickTimeout);

                    /**
                     * 判断参数 SessionStickTimeout 是否已赋值
                     * @return SessionStickTimeout 是否已赋值
                     */
                    bool SessionStickTimeoutHasBeenSet() const;

                private:

                    /**
                     * Whether load balancing is enabled.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isLoadBalance;
                    bool m_isLoadBalanceHasBeenSet;

                    /**
                     * Load balancing method.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * Whether session persistence is enabled.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_sessionStickRequired;
                    bool m_sessionStickRequiredHasBeenSet;

                    /**
                     * Session persistence timeout period.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_sessionStickTimeout;
                    bool m_sessionStickTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_TSFLOADBALANCECONFRESP_H_
