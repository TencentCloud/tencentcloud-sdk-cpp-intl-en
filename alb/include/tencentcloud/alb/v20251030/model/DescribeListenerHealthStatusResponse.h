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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBELISTENERHEALTHSTATUSRESPONSE_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBELISTENERHEALTHSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/RuleHealthStatusInfo.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * DescribeListenerHealthStatus response structure.
                */
                class DescribeListenerHealthStatusResponse : public AbstractModel
                {
                public:
                    DescribeListenerHealthStatusResponse();
                    ~DescribeListenerHealthStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Listener ID, format: lst- followed by 8 alphanumeric characters.
                     * @return ListenerId Listener ID, format: lst- followed by 8 alphanumeric characters.
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取Listener port.
                     * @return ListenerPort Listener port.
                     * 
                     */
                    std::string GetListenerPort() const;

                    /**
                     * 判断参数 ListenerPort 是否已赋值
                     * @return ListenerPort 是否已赋值
                     * 
                     */
                    bool ListenerPortHasBeenSet() const;

                    /**
                     * 获取Listener protocol.
                     * @return ListenerProtocol Listener protocol.
                     * 
                     */
                    std::string GetListenerProtocol() const;

                    /**
                     * 判断参数 ListenerProtocol 是否已赋值
                     * @return ListenerProtocol 是否已赋值
                     * 
                     */
                    bool ListenerProtocolHasBeenSet() const;

                    /**
                     * 获取Token for the next query. If it is empty, this is the last page.
                     * @return NextToken Token for the next query. If it is empty, this is the last page.
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                    /**
                     * 获取Health status of the forwarding rule.
                     * @return RuleHealthStatusInfos Health status of the forwarding rule.
                     * 
                     */
                    std::vector<RuleHealthStatusInfo> GetRuleHealthStatusInfos() const;

                    /**
                     * 判断参数 RuleHealthStatusInfos 是否已赋值
                     * @return RuleHealthStatusInfos 是否已赋值
                     * 
                     */
                    bool RuleHealthStatusInfosHasBeenSet() const;

                private:

                    /**
                     * Listener ID, format: lst- followed by 8 alphanumeric characters.
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * Listener port.
                     */
                    std::string m_listenerPort;
                    bool m_listenerPortHasBeenSet;

                    /**
                     * Listener protocol.
                     */
                    std::string m_listenerProtocol;
                    bool m_listenerProtocolHasBeenSet;

                    /**
                     * Token for the next query. If it is empty, this is the last page.
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                    /**
                     * Health status of the forwarding rule.
                     */
                    std::vector<RuleHealthStatusInfo> m_ruleHealthStatusInfos;
                    bool m_ruleHealthStatusInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBELISTENERHEALTHSTATUSRESPONSE_H_
