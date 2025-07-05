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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_RETENTIONPOLICY_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_RETENTIONPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/RetentionRule.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * Tag retention policy
                */
                class RetentionPolicy : public AbstractModel
                {
                public:
                    RetentionPolicy();
                    ~RetentionPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Tag retention policy ID
                     * @return RetentionId Tag retention policy ID
                     * 
                     */
                    int64_t GetRetentionId() const;

                    /**
                     * 设置Tag retention policy ID
                     * @param _retentionId Tag retention policy ID
                     * 
                     */
                    void SetRetentionId(const int64_t& _retentionId);

                    /**
                     * 判断参数 RetentionId 是否已赋值
                     * @return RetentionId 是否已赋值
                     * 
                     */
                    bool RetentionIdHasBeenSet() const;

                    /**
                     * 获取Namespace name
                     * @return NamespaceName Namespace name
                     * 
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置Namespace name
                     * @param _namespaceName Namespace name
                     * 
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     * 
                     */
                    bool NamespaceNameHasBeenSet() const;

                    /**
                     * 获取List of rules
                     * @return RetentionRuleList List of rules
                     * 
                     */
                    std::vector<RetentionRule> GetRetentionRuleList() const;

                    /**
                     * 设置List of rules
                     * @param _retentionRuleList List of rules
                     * 
                     */
                    void SetRetentionRuleList(const std::vector<RetentionRule>& _retentionRuleList);

                    /**
                     * 判断参数 RetentionRuleList 是否已赋值
                     * @return RetentionRuleList 是否已赋值
                     * 
                     */
                    bool RetentionRuleListHasBeenSet() const;

                    /**
                     * 获取Regular execution mode
                     * @return CronSetting Regular execution mode
                     * 
                     */
                    std::string GetCronSetting() const;

                    /**
                     * 设置Regular execution mode
                     * @param _cronSetting Regular execution mode
                     * 
                     */
                    void SetCronSetting(const std::string& _cronSetting);

                    /**
                     * 判断参数 CronSetting 是否已赋值
                     * @return CronSetting 是否已赋值
                     * 
                     */
                    bool CronSettingHasBeenSet() const;

                    /**
                     * 获取Whether to enable the rule
                     * @return Disabled Whether to enable the rule
                     * 
                     */
                    bool GetDisabled() const;

                    /**
                     * 设置Whether to enable the rule
                     * @param _disabled Whether to enable the rule
                     * 
                     */
                    void SetDisabled(const bool& _disabled);

                    /**
                     * 判断参数 Disabled 是否已赋值
                     * @return Disabled 是否已赋值
                     * 
                     */
                    bool DisabledHasBeenSet() const;

                    /**
                     * 获取The execution time of the next task based on the current time and `cronSetting`, which is for reference only
                     * @return NextExecutionTime The execution time of the next task based on the current time and `cronSetting`, which is for reference only
                     * 
                     */
                    std::string GetNextExecutionTime() const;

                    /**
                     * 设置The execution time of the next task based on the current time and `cronSetting`, which is for reference only
                     * @param _nextExecutionTime The execution time of the next task based on the current time and `cronSetting`, which is for reference only
                     * 
                     */
                    void SetNextExecutionTime(const std::string& _nextExecutionTime);

                    /**
                     * 判断参数 NextExecutionTime 是否已赋值
                     * @return NextExecutionTime 是否已赋值
                     * 
                     */
                    bool NextExecutionTimeHasBeenSet() const;

                private:

                    /**
                     * Tag retention policy ID
                     */
                    int64_t m_retentionId;
                    bool m_retentionIdHasBeenSet;

                    /**
                     * Namespace name
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * List of rules
                     */
                    std::vector<RetentionRule> m_retentionRuleList;
                    bool m_retentionRuleListHasBeenSet;

                    /**
                     * Regular execution mode
                     */
                    std::string m_cronSetting;
                    bool m_cronSettingHasBeenSet;

                    /**
                     * Whether to enable the rule
                     */
                    bool m_disabled;
                    bool m_disabledHasBeenSet;

                    /**
                     * The execution time of the next task based on the current time and `cronSetting`, which is for reference only
                     */
                    std::string m_nextExecutionTime;
                    bool m_nextExecutionTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_RETENTIONPOLICY_H_
