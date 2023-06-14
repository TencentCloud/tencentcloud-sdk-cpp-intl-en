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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEDEFENSESWITCHRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEDEFENSESWITCHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeDefenseSwitch response structure.
                */
                class DescribeDefenseSwitchResponse : public AbstractModel
                {
                public:
                    DescribeDefenseSwitchResponse();
                    ~DescribeDefenseSwitchResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Whether to enable the Basic Protection feature
                     * @return BasicRuleSwitch Whether to enable the Basic Protection feature
                     * 
                     */
                    int64_t GetBasicRuleSwitch() const;

                    /**
                     * 判断参数 BasicRuleSwitch 是否已赋值
                     * @return BasicRuleSwitch 是否已赋值
                     * 
                     */
                    bool BasicRuleSwitchHasBeenSet() const;

                    /**
                     * 获取Whether to enable the Security Baseline feature
                     * @return BaselineAllSwitch Whether to enable the Security Baseline feature
                     * 
                     */
                    int64_t GetBaselineAllSwitch() const;

                    /**
                     * 判断参数 BaselineAllSwitch 是否已赋值
                     * @return BaselineAllSwitch 是否已赋值
                     * 
                     */
                    bool BaselineAllSwitchHasBeenSet() const;

                    /**
                     * 获取Whether to enable the Treat Intelligence feature
                     * @return TiSwitch Whether to enable the Treat Intelligence feature
                     * 
                     */
                    int64_t GetTiSwitch() const;

                    /**
                     * 判断参数 TiSwitch 是否已赋值
                     * @return TiSwitch 是否已赋值
                     * 
                     */
                    bool TiSwitchHasBeenSet() const;

                    /**
                     * 获取Whether to enable the Virtual Patch feature
                     * @return VirtualPatchSwitch Whether to enable the Virtual Patch feature
                     * 
                     */
                    int64_t GetVirtualPatchSwitch() const;

                    /**
                     * 判断参数 VirtualPatchSwitch 是否已赋值
                     * @return VirtualPatchSwitch 是否已赋值
                     * 
                     */
                    bool VirtualPatchSwitchHasBeenSet() const;

                    /**
                     * 获取Whether it has been enabled before
                     * @return HistoryOpen Whether it has been enabled before
                     * 
                     */
                    int64_t GetHistoryOpen() const;

                    /**
                     * 判断参数 HistoryOpen 是否已赋值
                     * @return HistoryOpen 是否已赋值
                     * 
                     */
                    bool HistoryOpenHasBeenSet() const;

                    /**
                     * 获取Status code. `0`: Succeeded. Others: Failed
                     * @return ReturnCode Status code. `0`: Succeeded. Others: Failed
                     * 
                     */
                    int64_t GetReturnCode() const;

                    /**
                     * 判断参数 ReturnCode 是否已赋值
                     * @return ReturnCode 是否已赋值
                     * 
                     */
                    bool ReturnCodeHasBeenSet() const;

                    /**
                     * 获取Status message. `success` and `fail.
                     * @return ReturnMsg Status message. `success` and `fail.
                     * 
                     */
                    std::string GetReturnMsg() const;

                    /**
                     * 判断参数 ReturnMsg 是否已赋值
                     * @return ReturnMsg 是否已赋值
                     * 
                     */
                    bool ReturnMsgHasBeenSet() const;

                private:

                    /**
                     * Whether to enable the Basic Protection feature
                     */
                    int64_t m_basicRuleSwitch;
                    bool m_basicRuleSwitchHasBeenSet;

                    /**
                     * Whether to enable the Security Baseline feature
                     */
                    int64_t m_baselineAllSwitch;
                    bool m_baselineAllSwitchHasBeenSet;

                    /**
                     * Whether to enable the Treat Intelligence feature
                     */
                    int64_t m_tiSwitch;
                    bool m_tiSwitchHasBeenSet;

                    /**
                     * Whether to enable the Virtual Patch feature
                     */
                    int64_t m_virtualPatchSwitch;
                    bool m_virtualPatchSwitchHasBeenSet;

                    /**
                     * Whether it has been enabled before
                     */
                    int64_t m_historyOpen;
                    bool m_historyOpenHasBeenSet;

                    /**
                     * Status code. `0`: Succeeded. Others: Failed
                     */
                    int64_t m_returnCode;
                    bool m_returnCodeHasBeenSet;

                    /**
                     * Status message. `success` and `fail.
                     */
                    std::string m_returnMsg;
                    bool m_returnMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEDEFENSESWITCHRESPONSE_H_
