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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_CREATEFORWARDINGRULEREQUEST_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_CREATEFORWARDINGRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ga2/v20250115/model/RuleCondition.h>
#include <tencentcloud/ga2/v20250115/model/RuleAction.h>
#include <tencentcloud/ga2/v20250115/model/OriginHeader.h>
#include <tencentcloud/ga2/v20250115/model/ResponseHeaders.h>
#include <tencentcloud/ga2/v20250115/model/HideResponseHeaders.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * CreateForwardingRule request structure.
                */
                class CreateForwardingRuleRequest : public AbstractModel
                {
                public:
                    CreateForwardingRuleRequest();
                    ~CreateForwardingRuleRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<p>Policy ID.</p>
                     * @return ForwardingPolicyId <p>Policy ID.</p>
                     * 
                     */
                    std::string GetForwardingPolicyId() const;

                    /**
                     * 设置<p>Policy ID.</p>
                     * @param _forwardingPolicyId <p>Policy ID.</p>
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
                     * 获取<p>Layer 7 forwarding rule conditional information.</p><p>Array length cannot exceed 1.</p>
                     * @return RuleConditions <p>Layer 7 forwarding rule conditional information.</p><p>Array length cannot exceed 1.</p>
                     * 
                     */
                    std::vector<RuleCondition> GetRuleConditions() const;

                    /**
                     * 设置<p>Layer 7 forwarding rule conditional information.</p><p>Array length cannot exceed 1.</p>
                     * @param _ruleConditions <p>Layer 7 forwarding rule conditional information.</p><p>Array length cannot exceed 1.</p>
                     * 
                     */
                    void SetRuleConditions(const std::vector<RuleCondition>& _ruleConditions);

                    /**
                     * 判断参数 RuleConditions 是否已赋值
                     * @return RuleConditions 是否已赋值
                     * 
                     */
                    bool RuleConditionsHasBeenSet() const;

                    /**
                     * 获取<p>Layer 7 forwarding rule behavior information.</p><p>The length of the array cannot exceed 1.</p>
                     * @return RuleActions <p>Layer 7 forwarding rule behavior information.</p><p>The length of the array cannot exceed 1.</p>
                     * 
                     */
                    std::vector<RuleAction> GetRuleActions() const;

                    /**
                     * 设置<p>Layer 7 forwarding rule behavior information.</p><p>The length of the array cannot exceed 1.</p>
                     * @param _ruleActions <p>Layer 7 forwarding rule behavior information.</p><p>The length of the array cannot exceed 1.</p>
                     * 
                     */
                    void SetRuleActions(const std::vector<RuleAction>& _ruleActions);

                    /**
                     * 判断参数 RuleActions 是否已赋值
                     * @return RuleActions 是否已赋值
                     * 
                     */
                    bool RuleActionsHasBeenSet() const;

                    /**
                     * 获取<p>Origin-pull Header information.</p><p>The maximum length of the array cannot exceed 5. This field is required when RuleActions.RuleActionType is ForwardGroup.</p>
                     * @return OriginHeaders <p>Origin-pull Header information.</p><p>The maximum length of the array cannot exceed 5. This field is required when RuleActions.RuleActionType is ForwardGroup.</p>
                     * 
                     */
                    std::vector<OriginHeader> GetOriginHeaders() const;

                    /**
                     * 设置<p>Origin-pull Header information.</p><p>The maximum length of the array cannot exceed 5. This field is required when RuleActions.RuleActionType is ForwardGroup.</p>
                     * @param _originHeaders <p>Origin-pull Header information.</p><p>The maximum length of the array cannot exceed 5. This field is required when RuleActions.RuleActionType is ForwardGroup.</p>
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
                     * 获取<p>Whether origin-pull sni is enabled.</p><p>Default value: False</p><p>This field is required when RuleActions.RuleActionType is ForwardGroup.</p>
                     * @return EnableOriginSni <p>Whether origin-pull sni is enabled.</p><p>Default value: False</p><p>This field is required when RuleActions.RuleActionType is ForwardGroup.</p>
                     * 
                     */
                    bool GetEnableOriginSni() const;

                    /**
                     * 设置<p>Whether origin-pull sni is enabled.</p><p>Default value: False</p><p>This field is required when RuleActions.RuleActionType is ForwardGroup.</p>
                     * @param _enableOriginSni <p>Whether origin-pull sni is enabled.</p><p>Default value: False</p><p>This field is required when RuleActions.RuleActionType is ForwardGroup.</p>
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
                     * 获取<p>Origin sni.</p><p>Input parameter limit: length cannot exceed 80.</p><p>This field is required when EnableOriginSni is True. This field is required when RuleActions.RuleActionType is ForwardGroup.</p>
                     * @return OriginSni <p>Origin sni.</p><p>Input parameter limit: length cannot exceed 80.</p><p>This field is required when EnableOriginSni is True. This field is required when RuleActions.RuleActionType is ForwardGroup.</p>
                     * 
                     */
                    std::string GetOriginSni() const;

                    /**
                     * 设置<p>Origin sni.</p><p>Input parameter limit: length cannot exceed 80.</p><p>This field is required when EnableOriginSni is True. This field is required when RuleActions.RuleActionType is ForwardGroup.</p>
                     * @param _originSni <p>Origin sni.</p><p>Input parameter limit: length cannot exceed 80.</p><p>This field is required when EnableOriginSni is True. This field is required when RuleActions.RuleActionType is ForwardGroup.</p>
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
                     * 获取<p>Origin-pull host.</p><p>Input parameter limit: length not exceeding 80.</p><p>This field is required when RuleActions.RuleActionType is ForwardGroup.</p>
                     * @return OriginHost <p>Origin-pull host.</p><p>Input parameter limit: length not exceeding 80.</p><p>This field is required when RuleActions.RuleActionType is ForwardGroup.</p>
                     * 
                     */
                    std::string GetOriginHost() const;

                    /**
                     * 设置<p>Origin-pull host.</p><p>Input parameter limit: length not exceeding 80.</p><p>This field is required when RuleActions.RuleActionType is ForwardGroup.</p>
                     * @param _originHost <p>Origin-pull host.</p><p>Input parameter limit: length not exceeding 80.</p><p>This field is required when RuleActions.RuleActionType is ForwardGroup.</p>
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
                     * 获取<p>Origin response headers</p><p>Array length not exceeding 5. An empty array can be passed, representing configuration clearing.</p>
                     * @return ResponseHeaders <p>Origin response headers</p><p>Array length not exceeding 5. An empty array can be passed, representing configuration clearing.</p>
                     * 
                     */
                    std::vector<ResponseHeaders> GetResponseHeaders() const;

                    /**
                     * 设置<p>Origin response headers</p><p>Array length not exceeding 5. An empty array can be passed, representing configuration clearing.</p>
                     * @param _responseHeaders <p>Origin response headers</p><p>Array length not exceeding 5. An empty array can be passed, representing configuration clearing.</p>
                     * 
                     */
                    void SetResponseHeaders(const std::vector<ResponseHeaders>& _responseHeaders);

                    /**
                     * 判断参数 ResponseHeaders 是否已赋值
                     * @return ResponseHeaders 是否已赋值
                     * 
                     */
                    bool ResponseHeadersHasBeenSet() const;

                    /**
                     * 获取<p>Delete origin server response headers</p><p>Array length not exceeding 5. An empty array can be passed, representing configuration clearing.</p>
                     * @return HideResponseHeaders <p>Delete origin server response headers</p><p>Array length not exceeding 5. An empty array can be passed, representing configuration clearing.</p>
                     * 
                     */
                    std::vector<HideResponseHeaders> GetHideResponseHeaders() const;

                    /**
                     * 设置<p>Delete origin server response headers</p><p>Array length not exceeding 5. An empty array can be passed, representing configuration clearing.</p>
                     * @param _hideResponseHeaders <p>Delete origin server response headers</p><p>Array length not exceeding 5. An empty array can be passed, representing configuration clearing.</p>
                     * 
                     */
                    void SetHideResponseHeaders(const std::vector<HideResponseHeaders>& _hideResponseHeaders);

                    /**
                     * 判断参数 HideResponseHeaders 是否已赋值
                     * @return HideResponseHeaders 是否已赋值
                     * 
                     */
                    bool HideResponseHeadersHasBeenSet() const;

                private:

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
                     * <p>Policy ID.</p>
                     */
                    std::string m_forwardingPolicyId;
                    bool m_forwardingPolicyIdHasBeenSet;

                    /**
                     * <p>Layer 7 forwarding rule conditional information.</p><p>Array length cannot exceed 1.</p>
                     */
                    std::vector<RuleCondition> m_ruleConditions;
                    bool m_ruleConditionsHasBeenSet;

                    /**
                     * <p>Layer 7 forwarding rule behavior information.</p><p>The length of the array cannot exceed 1.</p>
                     */
                    std::vector<RuleAction> m_ruleActions;
                    bool m_ruleActionsHasBeenSet;

                    /**
                     * <p>Origin-pull Header information.</p><p>The maximum length of the array cannot exceed 5. This field is required when RuleActions.RuleActionType is ForwardGroup.</p>
                     */
                    std::vector<OriginHeader> m_originHeaders;
                    bool m_originHeadersHasBeenSet;

                    /**
                     * <p>Whether origin-pull sni is enabled.</p><p>Default value: False</p><p>This field is required when RuleActions.RuleActionType is ForwardGroup.</p>
                     */
                    bool m_enableOriginSni;
                    bool m_enableOriginSniHasBeenSet;

                    /**
                     * <p>Origin sni.</p><p>Input parameter limit: length cannot exceed 80.</p><p>This field is required when EnableOriginSni is True. This field is required when RuleActions.RuleActionType is ForwardGroup.</p>
                     */
                    std::string m_originSni;
                    bool m_originSniHasBeenSet;

                    /**
                     * <p>Origin-pull host.</p><p>Input parameter limit: length not exceeding 80.</p><p>This field is required when RuleActions.RuleActionType is ForwardGroup.</p>
                     */
                    std::string m_originHost;
                    bool m_originHostHasBeenSet;

                    /**
                     * <p>Origin response headers</p><p>Array length not exceeding 5. An empty array can be passed, representing configuration clearing.</p>
                     */
                    std::vector<ResponseHeaders> m_responseHeaders;
                    bool m_responseHeadersHasBeenSet;

                    /**
                     * <p>Delete origin server response headers</p><p>Array length not exceeding 5. An empty array can be passed, representing configuration clearing.</p>
                     */
                    std::vector<HideResponseHeaders> m_hideResponseHeaders;
                    bool m_hideResponseHeadersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_CREATEFORWARDINGRULEREQUEST_H_
