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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_BOTPORTRAITRULE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_BOTPORTRAITRULE_H_

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
        namespace V20220106
        {
            namespace Model
            {
                /**
                * Bot user portrait rules
                */
                class BotPortraitRule : public AbstractModel
                {
                public:
                    BotPortraitRule();
                    ~BotPortraitRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID of the rule being applied
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return RuleID ID of the rule being applied
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetRuleID() const;

                    /**
                     * 设置ID of the rule being applied
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _ruleID ID of the rule being applied
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRuleID(const int64_t& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                    /**
                     * 获取ID of the rule that is set to verify requests by JavaScript challenge
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return AlgManagedIds ID of the rule that is set to verify requests by JavaScript challenge
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetAlgManagedIds() const;

                    /**
                     * 设置ID of the rule that is set to verify requests by JavaScript challenge
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _algManagedIds ID of the rule that is set to verify requests by JavaScript challenge
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAlgManagedIds(const std::vector<int64_t>& _algManagedIds);

                    /**
                     * 判断参数 AlgManagedIds 是否已赋值
                     * @return AlgManagedIds 是否已赋值
                     * 
                     */
                    bool AlgManagedIdsHasBeenSet() const;

                    /**
                     * 获取ID of the rule that is set to verify requests by CAPTCHA
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return CapManagedIds ID of the rule that is set to verify requests by CAPTCHA
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetCapManagedIds() const;

                    /**
                     * 设置ID of the rule that is set to verify requests by CAPTCHA
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _capManagedIds ID of the rule that is set to verify requests by CAPTCHA
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetCapManagedIds(const std::vector<int64_t>& _capManagedIds);

                    /**
                     * 判断参数 CapManagedIds 是否已赋值
                     * @return CapManagedIds 是否已赋值
                     * 
                     */
                    bool CapManagedIdsHasBeenSet() const;

                    /**
                     * 获取ID of the rule that is set to observe requests
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return MonManagedIds ID of the rule that is set to observe requests
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetMonManagedIds() const;

                    /**
                     * 设置ID of the rule that is set to observe requests
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _monManagedIds ID of the rule that is set to observe requests
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMonManagedIds(const std::vector<int64_t>& _monManagedIds);

                    /**
                     * 判断参数 MonManagedIds 是否已赋值
                     * @return MonManagedIds 是否已赋值
                     * 
                     */
                    bool MonManagedIdsHasBeenSet() const;

                    /**
                     * 获取ID of the rule that is set to block requests
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return DropManagedIds ID of the rule that is set to block requests
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<int64_t> GetDropManagedIds() const;

                    /**
                     * 设置ID of the rule that is set to block requests
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _dropManagedIds ID of the rule that is set to block requests
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetDropManagedIds(const std::vector<int64_t>& _dropManagedIds);

                    /**
                     * 判断参数 DropManagedIds 是否已赋值
                     * @return DropManagedIds 是否已赋值
                     * 
                     */
                    bool DropManagedIdsHasBeenSet() const;

                    /**
                     * 获取Feature switch
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Switch Feature switch
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置Feature switch
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _switch Feature switch
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                private:

                    /**
                     * ID of the rule being applied
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_ruleID;
                    bool m_ruleIDHasBeenSet;

                    /**
                     * ID of the rule that is set to verify requests by JavaScript challenge
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<int64_t> m_algManagedIds;
                    bool m_algManagedIdsHasBeenSet;

                    /**
                     * ID of the rule that is set to verify requests by CAPTCHA
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<int64_t> m_capManagedIds;
                    bool m_capManagedIdsHasBeenSet;

                    /**
                     * ID of the rule that is set to observe requests
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<int64_t> m_monManagedIds;
                    bool m_monManagedIdsHasBeenSet;

                    /**
                     * ID of the rule that is set to block requests
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<int64_t> m_dropManagedIds;
                    bool m_dropManagedIdsHasBeenSet;

                    /**
                     * Feature switch
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_BOTPORTRAITRULE_H_
