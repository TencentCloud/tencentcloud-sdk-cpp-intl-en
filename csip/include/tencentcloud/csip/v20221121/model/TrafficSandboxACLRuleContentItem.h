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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXACLRULECONTENTITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXACLRULECONTENTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/TrafficSandboxACLDstRule.h>
#include <tencentcloud/csip/v20221121/model/TrafficSandboxACLURLRule.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * ACL rule content. The sub-rule ID is managed internally by the server and not exposed to the public.
                */
                class TrafficSandboxACLRuleContentItem : public AbstractModel
                {
                public:
                    TrafficSandboxACLRuleContentItem();
                    ~TrafficSandboxACLRuleContentItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Target (IP/port) match rule
                     * @return DstRule Target (IP/port) match rule
                     * 
                     */
                    TrafficSandboxACLDstRule GetDstRule() const;

                    /**
                     * 设置Target (IP/port) match rule
                     * @param _dstRule Target (IP/port) match rule
                     * 
                     */
                    void SetDstRule(const TrafficSandboxACLDstRule& _dstRule);

                    /**
                     * 判断参数 DstRule 是否已赋值
                     * @return DstRule 是否已赋值
                     * 
                     */
                    bool DstRuleHasBeenSet() const;

                    /**
                     * 获取URL, protocol, and method match rules
                     * @return URLRule URL, protocol, and method match rules
                     * 
                     */
                    TrafficSandboxACLURLRule GetURLRule() const;

                    /**
                     * 设置URL, protocol, and method match rules
                     * @param _uRLRule URL, protocol, and method match rules
                     * 
                     */
                    void SetURLRule(const TrafficSandboxACLURLRule& _uRLRule);

                    /**
                     * 判断参数 URLRule 是否已赋值
                     * @return URLRule 是否已赋值
                     * 
                     */
                    bool URLRuleHasBeenSet() const;

                private:

                    /**
                     * Target (IP/port) match rule
                     */
                    TrafficSandboxACLDstRule m_dstRule;
                    bool m_dstRuleHasBeenSet;

                    /**
                     * URL, protocol, and method match rules
                     */
                    TrafficSandboxACLURLRule m_uRLRule;
                    bool m_uRLRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_TRAFFICSANDBOXACLRULECONTENTITEM_H_
