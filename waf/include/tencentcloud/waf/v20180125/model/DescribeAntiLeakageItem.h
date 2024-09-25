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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEANTILEAKAGEITEM_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEANTILEAKAGEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/DescribeAntiInfoLeakRulesStrategyItem.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * Output parameters
                */
                class DescribeAntiLeakageItem : public AbstractModel
                {
                public:
                    DescribeAntiLeakageItem();
                    ~DescribeAntiLeakageItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Rule ID
                     * @return RuleId Rule ID
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置Rule ID
                     * @param _ruleId Rule ID
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Name
                     * @return Name Name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Name
                     * @param _name Name
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Status value
                     * @return Status Status value
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置Status value
                     * @param _status Status value
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Action
                     * @return Action Action
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置Action
                     * @param _action Action
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取Creation time
                     * @return CreateTime Creation time
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time
                     * @param _createTime Creation time
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取Match condition
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Strategies Match condition
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<DescribeAntiInfoLeakRulesStrategyItem> GetStrategies() const;

                    /**
                     * 设置Match condition
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _strategies Match condition
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetStrategies(const std::vector<DescribeAntiInfoLeakRulesStrategyItem>& _strategies);

                    /**
                     * 判断参数 Strategies 是否已赋值
                     * @return Strategies 是否已赋值
                     * 
                     */
                    bool StrategiesHasBeenSet() const;

                    /**
                     * 获取Matched URL

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Uri Matched URL

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUri() const;

                    /**
                     * 设置Matched URL

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _uri Matched URL

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUri(const std::string& _uri);

                    /**
                     * 判断参数 Uri 是否已赋值
                     * @return Uri 是否已赋值
                     * 
                     */
                    bool UriHasBeenSet() const;

                    /**
                     * 获取Modification time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ModifyTime Modification time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置Modification time

Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _modifyTime Modification time

Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * Rule ID
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Status value
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Action
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * Creation time
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * Match condition
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<DescribeAntiInfoLeakRulesStrategyItem> m_strategies;
                    bool m_strategiesHasBeenSet;

                    /**
                     * Matched URL

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_uri;
                    bool m_uriHasBeenSet;

                    /**
                     * Modification time

Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DESCRIBEANTILEAKAGEITEM_H_
