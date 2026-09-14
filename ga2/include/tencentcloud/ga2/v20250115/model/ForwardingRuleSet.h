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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_FORWARDINGRULESET_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_FORWARDINGRULESET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ga2/v20250115/model/RuleCondition.h>
#include <tencentcloud/ga2/v20250115/model/RuleAction.h>
#include <tencentcloud/ga2/v20250115/model/OriginHeader.h>
#include <tencentcloud/ga2/v20250115/model/HideResponseHeaders.h>
#include <tencentcloud/ga2/v20250115/model/ResponseHeaders.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * Layer-7 forwarding rule information
                */
                class ForwardingRuleSet : public AbstractModel
                {
                public:
                    ForwardingRuleSet();
                    ~ForwardingRuleSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Conditional information of Layer 7 forwarding rules.</p>
                     * @return RuleCondition <p>Conditional information of Layer 7 forwarding rules.</p>
                     * 
                     */
                    std::vector<RuleCondition> GetRuleCondition() const;

                    /**
                     * 设置<p>Conditional information of Layer 7 forwarding rules.</p>
                     * @param _ruleCondition <p>Conditional information of Layer 7 forwarding rules.</p>
                     * 
                     */
                    void SetRuleCondition(const std::vector<RuleCondition>& _ruleCondition);

                    /**
                     * 判断参数 RuleCondition 是否已赋值
                     * @return RuleCondition 是否已赋值
                     * 
                     */
                    bool RuleConditionHasBeenSet() const;

                    /**
                     * 获取<p>Behavior information of the Layer 7 forwarding rule.</p>
                     * @return RuleAction <p>Behavior information of the Layer 7 forwarding rule.</p>
                     * 
                     */
                    std::vector<RuleAction> GetRuleAction() const;

                    /**
                     * 设置<p>Behavior information of the Layer 7 forwarding rule.</p>
                     * @param _ruleAction <p>Behavior information of the Layer 7 forwarding rule.</p>
                     * 
                     */
                    void SetRuleAction(const std::vector<RuleAction>& _ruleAction);

                    /**
                     * 判断参数 RuleAction 是否已赋值
                     * @return RuleAction 是否已赋值
                     * 
                     */
                    bool RuleActionHasBeenSet() const;

                    /**
                     * 获取<p>Whether to enable origin-pull Sni.</p>
                     * @return EnableOriginSni <p>Whether to enable origin-pull Sni.</p>
                     * 
                     */
                    bool GetEnableOriginSni() const;

                    /**
                     * 设置<p>Whether to enable origin-pull Sni.</p>
                     * @param _enableOriginSni <p>Whether to enable origin-pull Sni.</p>
                     * 
                     */
                    void SetEnableOriginSni(const bool& _enableOriginSni);

                    /**
                     * 判断参数 EnableOriginSni 是否已赋值
                     * @return EnableOriginSni 是否已赋值
                     * 
                     */
                    bool EnableOriginSniHasBeenSet() const;

                    /**
                     * 获取<p>Origin-pull Sni.</p>
                     * @return OriginSni <p>Origin-pull Sni.</p>
                     * 
                     */
                    std::string GetOriginSni() const;

                    /**
                     * 设置<p>Origin-pull Sni.</p>
                     * @param _originSni <p>Origin-pull Sni.</p>
                     * 
                     */
                    void SetOriginSni(const std::string& _originSni);

                    /**
                     * 判断参数 OriginSni 是否已赋值
                     * @return OriginSni 是否已赋值
                     * 
                     */
                    bool OriginSniHasBeenSet() const;

                    /**
                     * 获取<p>Origin-pull Header information.</p>
                     * @return OriginHeaders <p>Origin-pull Header information.</p>
                     * 
                     */
                    std::vector<OriginHeader> GetOriginHeaders() const;

                    /**
                     * 设置<p>Origin-pull Header information.</p>
                     * @param _originHeaders <p>Origin-pull Header information.</p>
                     * 
                     */
                    void SetOriginHeaders(const std::vector<OriginHeader>& _originHeaders);

                    /**
                     * 判断参数 OriginHeaders 是否已赋值
                     * @return OriginHeaders 是否已赋值
                     * 
                     */
                    bool OriginHeadersHasBeenSet() const;

                    /**
                     * 获取<p>Origin-pull Host.</p>
                     * @return OriginHost <p>Origin-pull Host.</p>
                     * 
                     */
                    std::string GetOriginHost() const;

                    /**
                     * 设置<p>Origin-pull Host.</p>
                     * @param _originHost <p>Origin-pull Host.</p>
                     * 
                     */
                    void SetOriginHost(const std::string& _originHost);

                    /**
                     * 判断参数 OriginHost 是否已赋值
                     * @return OriginHost 是否已赋值
                     * 
                     */
                    bool OriginHostHasBeenSet() const;

                    /**
                     * 获取<p>Global acceleration instance ID.</p>
                     * @return GlobalAcceleratorId <p>Global acceleration instance ID.</p>
                     * 
                     */
                    std::string GetGlobalAcceleratorId() const;

                    /**
                     * 设置<p>Global acceleration instance ID.</p>
                     * @param _globalAcceleratorId <p>Global acceleration instance ID.</p>
                     * 
                     */
                    void SetGlobalAcceleratorId(const std::string& _globalAcceleratorId);

                    /**
                     * 判断参数 GlobalAcceleratorId 是否已赋值
                     * @return GlobalAcceleratorId 是否已赋值
                     * 
                     */
                    bool GlobalAcceleratorIdHasBeenSet() const;

                    /**
                     * 获取<p>Listener ID.</p>
                     * @return ListenerId <p>Listener ID.</p>
                     * 
                     */
                    std::string GetListenerId() const;

                    /**
                     * 设置<p>Listener ID.</p>
                     * @param _listenerId <p>Listener ID.</p>
                     * 
                     */
                    void SetListenerId(const std::string& _listenerId);

                    /**
                     * 判断参数 ListenerId 是否已赋值
                     * @return ListenerId 是否已赋值
                     * 
                     */
                    bool ListenerIdHasBeenSet() const;

                    /**
                     * 获取<p>Layer-7 forwarding policy ID.</p>
                     * @return ForwardingPolicyId <p>Layer-7 forwarding policy ID.</p>
                     * 
                     */
                    std::string GetForwardingPolicyId() const;

                    /**
                     * 设置<p>Layer-7 forwarding policy ID.</p>
                     * @param _forwardingPolicyId <p>Layer-7 forwarding policy ID.</p>
                     * 
                     */
                    void SetForwardingPolicyId(const std::string& _forwardingPolicyId);

                    /**
                     * 判断参数 ForwardingPolicyId 是否已赋值
                     * @return ForwardingPolicyId 是否已赋值
                     * 
                     */
                    bool ForwardingPolicyIdHasBeenSet() const;

                    /**
                     * 获取<p>Layer 7 forwarding rule ID.</p>
                     * @return ForwardingRuleId <p>Layer 7 forwarding rule ID.</p>
                     * 
                     */
                    std::string GetForwardingRuleId() const;

                    /**
                     * 设置<p>Layer 7 forwarding rule ID.</p>
                     * @param _forwardingRuleId <p>Layer 7 forwarding rule ID.</p>
                     * 
                     */
                    void SetForwardingRuleId(const std::string& _forwardingRuleId);

                    /**
                     * 判断参数 ForwardingRuleId 是否已赋值
                     * @return ForwardingRuleId 是否已赋值
                     * 
                     */
                    bool ForwardingRuleIdHasBeenSet() const;

                    /**
                     * 获取<p>Origin server response header</p>
                     * @return HideResponseHeaders <p>Origin server response header</p>
                     * 
                     */
                    std::vector<HideResponseHeaders> GetHideResponseHeaders() const;

                    /**
                     * 设置<p>Origin server response header</p>
                     * @param _hideResponseHeaders <p>Origin server response header</p>
                     * 
                     */
                    void SetHideResponseHeaders(const std::vector<HideResponseHeaders>& _hideResponseHeaders);

                    /**
                     * 判断参数 HideResponseHeaders 是否已赋值
                     * @return HideResponseHeaders 是否已赋值
                     * 
                     */
                    bool HideResponseHeadersHasBeenSet() const;

                    /**
                     * 获取<p>Delete origin server response headers</p>
                     * @return ResponseHeaders <p>Delete origin server response headers</p>
                     * 
                     */
                    std::vector<ResponseHeaders> GetResponseHeaders() const;

                    /**
                     * 设置<p>Delete origin server response headers</p>
                     * @param _responseHeaders <p>Delete origin server response headers</p>
                     * 
                     */
                    void SetResponseHeaders(const std::vector<ResponseHeaders>& _responseHeaders);

                    /**
                     * 判断参数 ResponseHeaders 是否已赋值
                     * @return ResponseHeaders 是否已赋值
                     * 
                     */
                    bool ResponseHeadersHasBeenSet() const;

                private:

                    /**
                     * <p>Conditional information of Layer 7 forwarding rules.</p>
                     */
                    std::vector<RuleCondition> m_ruleCondition;
                    bool m_ruleConditionHasBeenSet;

                    /**
                     * <p>Behavior information of the Layer 7 forwarding rule.</p>
                     */
                    std::vector<RuleAction> m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * <p>Whether to enable origin-pull Sni.</p>
                     */
                    bool m_enableOriginSni;
                    bool m_enableOriginSniHasBeenSet;

                    /**
                     * <p>Origin-pull Sni.</p>
                     */
                    std::string m_originSni;
                    bool m_originSniHasBeenSet;

                    /**
                     * <p>Origin-pull Header information.</p>
                     */
                    std::vector<OriginHeader> m_originHeaders;
                    bool m_originHeadersHasBeenSet;

                    /**
                     * <p>Origin-pull Host.</p>
                     */
                    std::string m_originHost;
                    bool m_originHostHasBeenSet;

                    /**
                     * <p>Global acceleration instance ID.</p>
                     */
                    std::string m_globalAcceleratorId;
                    bool m_globalAcceleratorIdHasBeenSet;

                    /**
                     * <p>Listener ID.</p>
                     */
                    std::string m_listenerId;
                    bool m_listenerIdHasBeenSet;

                    /**
                     * <p>Layer-7 forwarding policy ID.</p>
                     */
                    std::string m_forwardingPolicyId;
                    bool m_forwardingPolicyIdHasBeenSet;

                    /**
                     * <p>Layer 7 forwarding rule ID.</p>
                     */
                    std::string m_forwardingRuleId;
                    bool m_forwardingRuleIdHasBeenSet;

                    /**
                     * <p>Origin server response header</p>
                     */
                    std::vector<HideResponseHeaders> m_hideResponseHeaders;
                    bool m_hideResponseHeadersHasBeenSet;

                    /**
                     * <p>Delete origin server response headers</p>
                     */
                    std::vector<ResponseHeaders> m_responseHeaders;
                    bool m_responseHeadersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_FORWARDINGRULESET_H_
