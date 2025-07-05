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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_APPLICATIONPROXYRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_APPLICATIONPROXYRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Application proxy rule
                */
                class ApplicationProxyRule : public AbstractModel
                {
                public:
                    ApplicationProxyRule();
                    ~ApplicationProxyRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Protocol. Valid values:
<li>TCP: TCP protocol;</li>
<li>UDP: UDP protocol.</li>
                     * @return Proto Protocol. Valid values:
<li>TCP: TCP protocol;</li>
<li>UDP: UDP protocol.</li>
                     * 
                     */
                    std::string GetProto() const;

                    /**
                     * 设置Protocol. Valid values:
<li>TCP: TCP protocol;</li>
<li>UDP: UDP protocol.</li>
                     * @param _proto Protocol. Valid values:
<li>TCP: TCP protocol;</li>
<li>UDP: UDP protocol.</li>
                     * 
                     */
                    void SetProto(const std::string& _proto);

                    /**
                     * 判断参数 Proto 是否已赋值
                     * @return Proto 是否已赋值
                     * 
                     */
                    bool ProtoHasBeenSet() const;

                    /**
                     * 获取Port. Supported formats:
<li>A single port, such as 80.</li>
<li>A port range, such as 81-82, indicating two ports 81 and 82.</li>
Note: Up to 20 ports can be input for each rule.
                     * @return Port Port. Supported formats:
<li>A single port, such as 80.</li>
<li>A port range, such as 81-82, indicating two ports 81 and 82.</li>
Note: Up to 20 ports can be input for each rule.
                     * 
                     */
                    std::vector<std::string> GetPort() const;

                    /**
                     * 设置Port. Supported formats:
<li>A single port, such as 80.</li>
<li>A port range, such as 81-82, indicating two ports 81 and 82.</li>
Note: Up to 20 ports can be input for each rule.
                     * @param _port Port. Supported formats:
<li>A single port, such as 80.</li>
<li>A port range, such as 81-82, indicating two ports 81 and 82.</li>
Note: Up to 20 ports can be input for each rule.
                     * 
                     */
                    void SetPort(const std::vector<std::string>& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取Origin server type. Valid values:
<li>custom: manually added;</li>
<li>loadbalancer: cloud load balancer;</li>
<li>origins: origin server group.</li>
                     * @return OriginType Origin server type. Valid values:
<li>custom: manually added;</li>
<li>loadbalancer: cloud load balancer;</li>
<li>origins: origin server group.</li>
                     * 
                     */
                    std::string GetOriginType() const;

                    /**
                     * 设置Origin server type. Valid values:
<li>custom: manually added;</li>
<li>loadbalancer: cloud load balancer;</li>
<li>origins: origin server group.</li>
                     * @param _originType Origin server type. Valid values:
<li>custom: manually added;</li>
<li>loadbalancer: cloud load balancer;</li>
<li>origins: origin server group.</li>
                     * 
                     */
                    void SetOriginType(const std::string& _originType);

                    /**
                     * 判断参数 OriginType 是否已赋值
                     * @return OriginType 是否已赋值
                     * 
                     */
                    bool OriginTypeHasBeenSet() const;

                    /**
                     * 获取Origin server information.
<li>When OriginType is custom, it indicates one or more origin servers, such as `["8.8.8.8","9.9.9.9"]` or `OriginValue=["test.com"]`;</li>
<li>When OriginType is loadbalancer, it indicates a cloud load balancer, such as ["lb-xdffsfasdfs"];</li>
<li>When OriginType is origins, it requires one and only one element, indicating the origin server group ID, such as ["origin-537f5b41-162a-11ed-abaa-525400c5da15"].</li>
                     * @return OriginValue Origin server information.
<li>When OriginType is custom, it indicates one or more origin servers, such as `["8.8.8.8","9.9.9.9"]` or `OriginValue=["test.com"]`;</li>
<li>When OriginType is loadbalancer, it indicates a cloud load balancer, such as ["lb-xdffsfasdfs"];</li>
<li>When OriginType is origins, it requires one and only one element, indicating the origin server group ID, such as ["origin-537f5b41-162a-11ed-abaa-525400c5da15"].</li>
                     * 
                     */
                    std::vector<std::string> GetOriginValue() const;

                    /**
                     * 设置Origin server information.
<li>When OriginType is custom, it indicates one or more origin servers, such as `["8.8.8.8","9.9.9.9"]` or `OriginValue=["test.com"]`;</li>
<li>When OriginType is loadbalancer, it indicates a cloud load balancer, such as ["lb-xdffsfasdfs"];</li>
<li>When OriginType is origins, it requires one and only one element, indicating the origin server group ID, such as ["origin-537f5b41-162a-11ed-abaa-525400c5da15"].</li>
                     * @param _originValue Origin server information.
<li>When OriginType is custom, it indicates one or more origin servers, such as `["8.8.8.8","9.9.9.9"]` or `OriginValue=["test.com"]`;</li>
<li>When OriginType is loadbalancer, it indicates a cloud load balancer, such as ["lb-xdffsfasdfs"];</li>
<li>When OriginType is origins, it requires one and only one element, indicating the origin server group ID, such as ["origin-537f5b41-162a-11ed-abaa-525400c5da15"].</li>
                     * 
                     */
                    void SetOriginValue(const std::vector<std::string>& _originValue);

                    /**
                     * 判断参数 OriginValue 是否已赋值
                     * @return OriginValue 是否已赋值
                     * 
                     */
                    bool OriginValueHasBeenSet() const;

                    /**
                     * 获取Rule ID.
                     * @return RuleId Rule ID.
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Rule ID.
                     * @param _ruleId Rule ID.
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Status. Valid values:
<li>online: enabled;</li>
<li>offline: disabled;</li>
<li>progress: deploying;</li>
<li>stopping: disabling;</li>
<li>fail: deployment or disabling failed.</li>
                     * @return Status Status. Valid values:
<li>online: enabled;</li>
<li>offline: disabled;</li>
<li>progress: deploying;</li>
<li>stopping: disabling;</li>
<li>fail: deployment or disabling failed.</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Status. Valid values:
<li>online: enabled;</li>
<li>offline: disabled;</li>
<li>progress: deploying;</li>
<li>stopping: disabling;</li>
<li>fail: deployment or disabling failed.</li>
                     * @param _status Status. Valid values:
<li>online: enabled;</li>
<li>offline: disabled;</li>
<li>progress: deploying;</li>
<li>stopping: disabling;</li>
<li>fail: deployment or disabling failed.</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Passing the client IP address. Valid values:
<li>TOA: passing via TOA, available only when Proto = TCP;</li>
<li>PPV1: passing via Proxy Protocol V1, available only when Proto = TCP;</li>
<li>PPV2: passing via Proxy Protocol V2;</li>
<li>OFF: no passing.</li>Default value: OFF.
                     * @return ForwardClientIp Passing the client IP address. Valid values:
<li>TOA: passing via TOA, available only when Proto = TCP;</li>
<li>PPV1: passing via Proxy Protocol V1, available only when Proto = TCP;</li>
<li>PPV2: passing via Proxy Protocol V2;</li>
<li>OFF: no passing.</li>Default value: OFF.
                     * 
                     */
                    std::string GetForwardClientIp() const;

                    /**
                     * 设置Passing the client IP address. Valid values:
<li>TOA: passing via TOA, available only when Proto = TCP;</li>
<li>PPV1: passing via Proxy Protocol V1, available only when Proto = TCP;</li>
<li>PPV2: passing via Proxy Protocol V2;</li>
<li>OFF: no passing.</li>Default value: OFF.
                     * @param _forwardClientIp Passing the client IP address. Valid values:
<li>TOA: passing via TOA, available only when Proto = TCP;</li>
<li>PPV1: passing via Proxy Protocol V1, available only when Proto = TCP;</li>
<li>PPV2: passing via Proxy Protocol V2;</li>
<li>OFF: no passing.</li>Default value: OFF.
                     * 
                     */
                    void SetForwardClientIp(const std::string& _forwardClientIp);

                    /**
                     * 判断参数 ForwardClientIp 是否已赋值
                     * @return ForwardClientIp 是否已赋值
                     * 
                     */
                    bool ForwardClientIpHasBeenSet() const;

                    /**
                     * 获取Whether to enable session persistence. Valid values:
<li>true: Enable;</li>
<li>false: Disable.</li>Default value: false.
                     * @return SessionPersist Whether to enable session persistence. Valid values:
<li>true: Enable;</li>
<li>false: Disable.</li>Default value: false.
                     * 
                     */
                    bool GetSessionPersist() const;

                    /**
                     * 设置Whether to enable session persistence. Valid values:
<li>true: Enable;</li>
<li>false: Disable.</li>Default value: false.
                     * @param _sessionPersist Whether to enable session persistence. Valid values:
<li>true: Enable;</li>
<li>false: Disable.</li>Default value: false.
                     * 
                     */
                    void SetSessionPersist(const bool& _sessionPersist);

                    /**
                     * 判断参数 SessionPersist 是否已赋值
                     * @return SessionPersist 是否已赋值
                     * 
                     */
                    bool SessionPersistHasBeenSet() const;

                    /**
                     * 获取Duration for session persistence. The value takes effect only when SessionPersist is true.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @return SessionPersistTime Duration for session persistence. The value takes effect only when SessionPersist is true.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    uint64_t GetSessionPersistTime() const;

                    /**
                     * 设置Duration for session persistence. The value takes effect only when SessionPersist is true.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @param _sessionPersistTime Duration for session persistence. The value takes effect only when SessionPersist is true.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetSessionPersistTime(const uint64_t& _sessionPersistTime);

                    /**
                     * 判断参数 SessionPersistTime 是否已赋值
                     * @return SessionPersistTime 是否已赋值
                     * 
                     */
                    bool SessionPersistTimeHasBeenSet() const;

                    /**
                     * 获取Origin server port. Supported formats:
<li>A single port, such as 80.</li>
<li>A port range, such as 81-82, indicating two ports 81 and 82.</li>
                     * @return OriginPort Origin server port. Supported formats:
<li>A single port, such as 80.</li>
<li>A port range, such as 81-82, indicating two ports 81 and 82.</li>
                     * 
                     */
                    std::string GetOriginPort() const;

                    /**
                     * 设置Origin server port. Supported formats:
<li>A single port, such as 80.</li>
<li>A port range, such as 81-82, indicating two ports 81 and 82.</li>
                     * @param _originPort Origin server port. Supported formats:
<li>A single port, such as 80.</li>
<li>A port range, such as 81-82, indicating two ports 81 and 82.</li>
                     * 
                     */
                    void SetOriginPort(const std::string& _originPort);

                    /**
                     * 判断参数 OriginPort 是否已赋值
                     * @return OriginPort 是否已赋值
                     * 
                     */
                    bool OriginPortHasBeenSet() const;

                    /**
                     * 获取Rule tag.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @return RuleTag Rule tag.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    std::string GetRuleTag() const;

                    /**
                     * 设置Rule tag.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @param _ruleTag Rule tag.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    void SetRuleTag(const std::string& _ruleTag);

                    /**
                     * 判断参数 RuleTag 是否已赋值
                     * @return RuleTag 是否已赋值
                     * 
                     */
                    bool RuleTagHasBeenSet() const;

                private:

                    /**
                     * Protocol. Valid values:
<li>TCP: TCP protocol;</li>
<li>UDP: UDP protocol.</li>
                     */
                    std::string m_proto;
                    bool m_protoHasBeenSet;

                    /**
                     * Port. Supported formats:
<li>A single port, such as 80.</li>
<li>A port range, such as 81-82, indicating two ports 81 and 82.</li>
Note: Up to 20 ports can be input for each rule.
                     */
                    std::vector<std::string> m_port;
                    bool m_portHasBeenSet;

                    /**
                     * Origin server type. Valid values:
<li>custom: manually added;</li>
<li>loadbalancer: cloud load balancer;</li>
<li>origins: origin server group.</li>
                     */
                    std::string m_originType;
                    bool m_originTypeHasBeenSet;

                    /**
                     * Origin server information.
<li>When OriginType is custom, it indicates one or more origin servers, such as `["8.8.8.8","9.9.9.9"]` or `OriginValue=["test.com"]`;</li>
<li>When OriginType is loadbalancer, it indicates a cloud load balancer, such as ["lb-xdffsfasdfs"];</li>
<li>When OriginType is origins, it requires one and only one element, indicating the origin server group ID, such as ["origin-537f5b41-162a-11ed-abaa-525400c5da15"].</li>
                     */
                    std::vector<std::string> m_originValue;
                    bool m_originValueHasBeenSet;

                    /**
                     * Rule ID.
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Status. Valid values:
<li>online: enabled;</li>
<li>offline: disabled;</li>
<li>progress: deploying;</li>
<li>stopping: disabling;</li>
<li>fail: deployment or disabling failed.</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Passing the client IP address. Valid values:
<li>TOA: passing via TOA, available only when Proto = TCP;</li>
<li>PPV1: passing via Proxy Protocol V1, available only when Proto = TCP;</li>
<li>PPV2: passing via Proxy Protocol V2;</li>
<li>OFF: no passing.</li>Default value: OFF.
                     */
                    std::string m_forwardClientIp;
                    bool m_forwardClientIpHasBeenSet;

                    /**
                     * Whether to enable session persistence. Valid values:
<li>true: Enable;</li>
<li>false: Disable.</li>Default value: false.
                     */
                    bool m_sessionPersist;
                    bool m_sessionPersistHasBeenSet;

                    /**
                     * Duration for session persistence. The value takes effect only when SessionPersist is true.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     */
                    uint64_t m_sessionPersistTime;
                    bool m_sessionPersistTimeHasBeenSet;

                    /**
                     * Origin server port. Supported formats:
<li>A single port, such as 80.</li>
<li>A port range, such as 81-82, indicating two ports 81 and 82.</li>
                     */
                    std::string m_originPort;
                    bool m_originPortHasBeenSet;

                    /**
                     * Rule tag.
Note: This field may return null, which indicates a failure to obtain a valid value.
                     */
                    std::string m_ruleTag;
                    bool m_ruleTagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_APPLICATIONPROXYRULE_H_
