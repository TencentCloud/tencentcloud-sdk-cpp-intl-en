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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTRULE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTRULE_H_

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
                * The client rule information
                */
                class ClientRule : public AbstractModel
                {
                public:
                    ClientRule();
                    ~ClientRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The client IP.
                     * @return ClientIp The client IP.
                     * 
                     */
                    std::string GetClientIp() const;

                    /**
                     * 设置The client IP.
                     * @param _clientIp The client IP.
                     * 
                     */
                    void SetClientIp(const std::string& _clientIp);

                    /**
                     * 判断参数 ClientIp 是否已赋值
                     * @return ClientIp 是否已赋值
                     * 
                     */
                    bool ClientIpHasBeenSet() const;

                    /**
                     * 获取The rule type.
                     * @return RuleType The rule type.
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置The rule type.
                     * @param _ruleType The rule type.
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取The rule ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RuleId The rule ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetRuleId() const;

                    /**
                     * 设置The rule ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _ruleId The rule ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRuleId(const int64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取The rule description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Description The rule description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置The rule description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _description The rule description.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取The blocking status. Values:
<li>`block`: Block;</li>
<li>`allow`: Allow.</li>
                     * @return IpStatus The blocking status. Values:
<li>`block`: Block;</li>
<li>`allow`: Allow.</li>
                     * 
                     */
                    std::string GetIpStatus() const;

                    /**
                     * 设置The blocking status. Values:
<li>`block`: Block;</li>
<li>`allow`: Allow.</li>
                     * @param _ipStatus The blocking status. Values:
<li>`block`: Block;</li>
<li>`allow`: Allow.</li>
                     * 
                     */
                    void SetIpStatus(const std::string& _ipStatus);

                    /**
                     * 判断参数 IpStatus 是否已赋值
                     * @return IpStatus 是否已赋值
                     * 
                     */
                    bool IpStatusHasBeenSet() const;

                    /**
                     * 获取The blocking time recorded in UNIX timestamp.
                     * @return BlockTime The blocking time recorded in UNIX timestamp.
                     * 
                     */
                    int64_t GetBlockTime() const;

                    /**
                     * 设置The blocking time recorded in UNIX timestamp.
                     * @param _blockTime The blocking time recorded in UNIX timestamp.
                     * 
                     */
                    void SetBlockTime(const int64_t& _blockTime);

                    /**
                     * 判断参数 BlockTime 是否已赋值
                     * @return BlockTime 是否已赋值
                     * 
                     */
                    bool BlockTimeHasBeenSet() const;

                    /**
                     * 获取The data entry ID.
                     * @return Id The data entry ID.
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置The data entry ID.
                     * @param _id The data entry ID.
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * The client IP.
                     */
                    std::string m_clientIp;
                    bool m_clientIpHasBeenSet;

                    /**
                     * The rule type.
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * The rule ID.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * The rule description.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * The blocking status. Values:
<li>`block`: Block;</li>
<li>`allow`: Allow.</li>
                     */
                    std::string m_ipStatus;
                    bool m_ipStatusHasBeenSet;

                    /**
                     * The blocking time recorded in UNIX timestamp.
                     */
                    int64_t m_blockTime;
                    bool m_blockTimeHasBeenSet;

                    /**
                     * The data entry ID.
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTRULE_H_
