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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_HEALTHSCOREINFO_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_HEALTHSCOREINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/IssueTypeInfo.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * Details of the obtained health score.
                */
                class HealthScoreInfo : public AbstractModel
                {
                public:
                    HealthScoreInfo();
                    ~HealthScoreInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Exception details.
                     * @return IssueTypes Exception details.
                     */
                    std::vector<IssueTypeInfo> GetIssueTypes() const;

                    /**
                     * 设置Exception details.
                     * @param IssueTypes Exception details.
                     */
                    void SetIssueTypes(const std::vector<IssueTypeInfo>& _issueTypes);

                    /**
                     * 判断参数 IssueTypes 是否已赋值
                     * @return IssueTypes 是否已赋值
                     */
                    bool IssueTypesHasBeenSet() const;

                    /**
                     * 获取Total number of exceptions.
                     * @return EventsTotalCount Total number of exceptions.
                     */
                    int64_t GetEventsTotalCount() const;

                    /**
                     * 设置Total number of exceptions.
                     * @param EventsTotalCount Total number of exceptions.
                     */
                    void SetEventsTotalCount(const int64_t& _eventsTotalCount);

                    /**
                     * 判断参数 EventsTotalCount 是否已赋值
                     * @return EventsTotalCount 是否已赋值
                     */
                    bool EventsTotalCountHasBeenSet() const;

                    /**
                     * 获取Health score.
                     * @return HealthScore Health score.
                     */
                    int64_t GetHealthScore() const;

                    /**
                     * 设置Health score.
                     * @param HealthScore Health score.
                     */
                    void SetHealthScore(const int64_t& _healthScore);

                    /**
                     * 判断参数 HealthScore 是否已赋值
                     * @return HealthScore 是否已赋值
                     */
                    bool HealthScoreHasBeenSet() const;

                    /**
                     * 获取Health level, such as `HEALTH`, `SUB_HEALTH`, `RISK`, and `HIGH_RISK`.
                     * @return HealthLevel Health level, such as `HEALTH`, `SUB_HEALTH`, `RISK`, and `HIGH_RISK`.
                     */
                    std::string GetHealthLevel() const;

                    /**
                     * 设置Health level, such as `HEALTH`, `SUB_HEALTH`, `RISK`, and `HIGH_RISK`.
                     * @param HealthLevel Health level, such as `HEALTH`, `SUB_HEALTH`, `RISK`, and `HIGH_RISK`.
                     */
                    void SetHealthLevel(const std::string& _healthLevel);

                    /**
                     * 判断参数 HealthLevel 是否已赋值
                     * @return HealthLevel 是否已赋值
                     */
                    bool HealthLevelHasBeenSet() const;

                private:

                    /**
                     * Exception details.
                     */
                    std::vector<IssueTypeInfo> m_issueTypes;
                    bool m_issueTypesHasBeenSet;

                    /**
                     * Total number of exceptions.
                     */
                    int64_t m_eventsTotalCount;
                    bool m_eventsTotalCountHasBeenSet;

                    /**
                     * Health score.
                     */
                    int64_t m_healthScore;
                    bool m_healthScoreHasBeenSet;

                    /**
                     * Health level, such as `HEALTH`, `SUB_HEALTH`, `RISK`, and `HIGH_RISK`.
                     */
                    std::string m_healthLevel;
                    bool m_healthLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_HEALTHSCOREINFO_H_
