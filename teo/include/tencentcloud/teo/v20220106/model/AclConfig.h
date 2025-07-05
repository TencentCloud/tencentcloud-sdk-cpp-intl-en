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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_ACLCONFIG_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_ACLCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/ACLUserRule.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * ACL configuration
                */
                class AclConfig : public AbstractModel
                {
                public:
                    AclConfig();
                    ~AclConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Switch
                     * @return Switch Switch
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Switch
                     * @param _switch Switch
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取ACL user rule
                     * @return UserRules ACL user rule
                     * 
                     */
                    std::vector<ACLUserRule> GetUserRules() const;

                    /**
                     * 设置ACL user rule
                     * @param _userRules ACL user rule
                     * 
                     */
                    void SetUserRules(const std::vector<ACLUserRule>& _userRules);

                    /**
                     * 判断参数 UserRules 是否已赋值
                     * @return UserRules 是否已赋值
                     * 
                     */
                    bool UserRulesHasBeenSet() const;

                private:

                    /**
                     * Switch
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * ACL user rule
                     */
                    std::vector<ACLUserRule> m_userRules;
                    bool m_userRulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_ACLCONFIG_H_
