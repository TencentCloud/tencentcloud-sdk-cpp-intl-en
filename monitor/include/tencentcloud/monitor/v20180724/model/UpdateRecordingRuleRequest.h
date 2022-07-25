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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATERECORDINGRULEREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATERECORDINGRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * UpdateRecordingRule request structure.
                */
                class UpdateRecordingRuleRequest : public AbstractModel
                {
                public:
                    UpdateRecordingRuleRequest();
                    ~UpdateRecordingRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Recording rule name
                     * @return Name Recording rule name
                     */
                    std::string GetName() const;

                    /**
                     * 设置Recording rule name
                     * @param Name Recording rule name
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Recording rule group content, which is in YAML format and is Base64-encoded.
                     * @return Group Recording rule group content, which is in YAML format and is Base64-encoded.
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置Recording rule group content, which is in YAML format and is Base64-encoded.
                     * @param Group Recording rule group content, which is in YAML format and is Base64-encoded.
                     */
                    void SetGroup(const std::string& _group);

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     */
                    bool GroupHasBeenSet() const;

                    /**
                     * 获取Prometheus instance ID
                     * @return InstanceId Prometheus instance ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Prometheus instance ID
                     * @param InstanceId Prometheus instance ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Prometheus recording rule ID
                     * @return RuleId Prometheus recording rule ID
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置Prometheus recording rule ID
                     * @param RuleId Prometheus recording rule ID
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取Rule status code. Valid values:
<li>1=RuleDeleted</li>
<li>2=RuleEnabled</li>
<li>3=RuleDisabled</li>
Default value: 2 (enabled).
                     * @return RuleState Rule status code. Valid values:
<li>1=RuleDeleted</li>
<li>2=RuleEnabled</li>
<li>3=RuleDisabled</li>
Default value: 2 (enabled).
                     */
                    int64_t GetRuleState() const;

                    /**
                     * 设置Rule status code. Valid values:
<li>1=RuleDeleted</li>
<li>2=RuleEnabled</li>
<li>3=RuleDisabled</li>
Default value: 2 (enabled).
                     * @param RuleState Rule status code. Valid values:
<li>1=RuleDeleted</li>
<li>2=RuleEnabled</li>
<li>3=RuleDisabled</li>
Default value: 2 (enabled).
                     */
                    void SetRuleState(const int64_t& _ruleState);

                    /**
                     * 判断参数 RuleState 是否已赋值
                     * @return RuleState 是否已赋值
                     */
                    bool RuleStateHasBeenSet() const;

                private:

                    /**
                     * Recording rule name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Recording rule group content, which is in YAML format and is Base64-encoded.
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * Prometheus instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Prometheus recording rule ID
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * Rule status code. Valid values:
<li>1=RuleDeleted</li>
<li>2=RuleEnabled</li>
<li>3=RuleDisabled</li>
Default value: 2 (enabled).
                     */
                    int64_t m_ruleState;
                    bool m_ruleStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATERECORDINGRULEREQUEST_H_
