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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEALERTRULESTATEREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEALERTRULESTATEREQUEST_H_

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
                * UpdateAlertRuleState request structure.
                */
                class UpdateAlertRuleStateRequest : public AbstractModel
                {
                public:
                    UpdateAlertRuleStateRequest();
                    ~UpdateAlertRuleStateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取List of rule IDs
                     * @return RuleIds List of rule IDs
                     * 
                     */
                    std::vector<std::string> GetRuleIds() const;

                    /**
                     * 设置List of rule IDs
                     * @param _ruleIds List of rule IDs
                     * 
                     */
                    void SetRuleIds(const std::vector<std::string>& _ruleIds);

                    /**
                     * 判断参数 RuleIds 是否已赋值
                     * @return RuleIds 是否已赋值
                     * 
                     */
                    bool RuleIdsHasBeenSet() const;

                    /**
                     * 获取Prometheus instance ID
                     * @return InstanceId Prometheus instance ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Prometheus instance ID
                     * @param _instanceId Prometheus instance ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取Rule status code. Valid values:
<li>2=RuleEnabled</li>
<li>3=RuleDisabled</li>
Default value: 2 (enabled).
                     * @return RuleState Rule status code. Valid values:
<li>2=RuleEnabled</li>
<li>3=RuleDisabled</li>
Default value: 2 (enabled).
                     * 
                     */
                    int64_t GetRuleState() const;

                    /**
                     * 设置Rule status code. Valid values:
<li>2=RuleEnabled</li>
<li>3=RuleDisabled</li>
Default value: 2 (enabled).
                     * @param _ruleState Rule status code. Valid values:
<li>2=RuleEnabled</li>
<li>3=RuleDisabled</li>
Default value: 2 (enabled).
                     * 
                     */
                    void SetRuleState(const int64_t& _ruleState);

                    /**
                     * 判断参数 RuleState 是否已赋值
                     * @return RuleState 是否已赋值
                     * 
                     */
                    bool RuleStateHasBeenSet() const;

                private:

                    /**
                     * List of rule IDs
                     */
                    std::vector<std::string> m_ruleIds;
                    bool m_ruleIdsHasBeenSet;

                    /**
                     * Prometheus instance ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * Rule status code. Valid values:
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

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEALERTRULESTATEREQUEST_H_
