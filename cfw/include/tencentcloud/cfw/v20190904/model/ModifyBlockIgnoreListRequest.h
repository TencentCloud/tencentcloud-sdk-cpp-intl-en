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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYBLOCKIGNORELISTREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYBLOCKIGNORELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/IocListData.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * ModifyBlockIgnoreList request structure.
                */
                class ModifyBlockIgnoreListRequest : public AbstractModel
                {
                public:
                    ModifyBlockIgnoreListRequest();
                    ~ModifyBlockIgnoreListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Type of the rule. Values: `1` (Blocklist); `2` (Allowlist)
                     * @return RuleType Type of the rule. Values: `1` (Blocklist); `2` (Allowlist)
                     * 
                     */
                    int64_t GetRuleType() const;

                    /**
                     * 设置Type of the rule. Values: `1` (Blocklist); `2` (Allowlist)
                     * @param _ruleType Type of the rule. Values: `1` (Blocklist); `2` (Allowlist)
                     * 
                     */
                    void SetRuleType(const int64_t& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取Either IP or Domain is required
                     * @return IOC Either IP or Domain is required
                     * 
                     */
                    std::vector<IocListData> GetIOC() const;

                    /**
                     * 设置Either IP or Domain is required
                     * @param _iOC Either IP or Domain is required
                     * 
                     */
                    void SetIOC(const std::vector<IocListData>& _iOC);

                    /**
                     * 判断参数 IOC 是否已赋值
                     * @return IOC 是否已赋值
                     * 
                     */
                    bool IOCHasBeenSet() const;

                    /**
                     * 获取Optional values: delete, edit, and add
                     * @return IocAction Optional values: delete, edit, and add
                     * 
                     */
                    std::string GetIocAction() const;

                    /**
                     * 设置Optional values: delete, edit, and add
                     * @param _iocAction Optional values: delete, edit, and add
                     * 
                     */
                    void SetIocAction(const std::string& _iocAction);

                    /**
                     * 判断参数 IocAction 是否已赋值
                     * @return IocAction 是否已赋值
                     * 
                     */
                    bool IocActionHasBeenSet() const;

                    /**
                     * 获取Time format: yyyy-MM-dd HH:mm:ss. Required when IocAction is edit or add
                     * @return StartTime Time format: yyyy-MM-dd HH:mm:ss. Required when IocAction is edit or add
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Time format: yyyy-MM-dd HH:mm:ss. Required when IocAction is edit or add
                     * @param _startTime Time format: yyyy-MM-dd HH:mm:ss. Required when IocAction is edit or add
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time of the period in the format of yyyy-MM-dd HH:mm:ss. It must be later than both the start time and the current time. It’s required when `IocAction` is `edit` or `add`. 
                     * @return EndTime End time of the period in the format of yyyy-MM-dd HH:mm:ss. It must be later than both the start time and the current time. It’s required when `IocAction` is `edit` or `add`. 
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time of the period in the format of yyyy-MM-dd HH:mm:ss. It must be later than both the start time and the current time. It’s required when `IocAction` is `edit` or `add`. 
                     * @param _endTime End time of the period in the format of yyyy-MM-dd HH:mm:ss. It must be later than both the start time and the current time. It’s required when `IocAction` is `edit` or `add`. 
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Type of the rule. Values: `1` (Blocklist); `2` (Allowlist)
                     */
                    int64_t m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Either IP or Domain is required
                     */
                    std::vector<IocListData> m_iOC;
                    bool m_iOCHasBeenSet;

                    /**
                     * Optional values: delete, edit, and add
                     */
                    std::string m_iocAction;
                    bool m_iocActionHasBeenSet;

                    /**
                     * Time format: yyyy-MM-dd HH:mm:ss. Required when IocAction is edit or add
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time of the period in the format of yyyy-MM-dd HH:mm:ss. It must be later than both the start time and the current time. It’s required when `IocAction` is `edit` or `add`. 
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYBLOCKIGNORELISTREQUEST_H_
