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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SCOREITEM_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SCOREITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * Diagnosis deduction item.
                */
                class ScoreItem : public AbstractModel
                {
                public:
                    ScoreItem();
                    ~ScoreItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Exception diagnosis item name.
                     * @return DiagItem Exception diagnosis item name.
                     */
                    std::string GetDiagItem() const;

                    /**
                     * 设置Exception diagnosis item name.
                     * @param DiagItem Exception diagnosis item name.
                     */
                    void SetDiagItem(const std::string& _diagItem);

                    /**
                     * 判断参数 DiagItem 是否已赋值
                     * @return DiagItem 是否已赋值
                     */
                    bool DiagItemHasBeenSet() const;

                    /**
                     * 获取Diagnosis item type. Valid values: `Availability`, `Maintainability`, `Performance`, `Reliability`.
                     * @return IssueType Diagnosis item type. Valid values: `Availability`, `Maintainability`, `Performance`, `Reliability`.
                     */
                    std::string GetIssueType() const;

                    /**
                     * 设置Diagnosis item type. Valid values: `Availability`, `Maintainability`, `Performance`, `Reliability`.
                     * @param IssueType Diagnosis item type. Valid values: `Availability`, `Maintainability`, `Performance`, `Reliability`.
                     */
                    void SetIssueType(const std::string& _issueType);

                    /**
                     * 判断参数 IssueType 是否已赋值
                     * @return IssueType 是否已赋值
                     */
                    bool IssueTypeHasBeenSet() const;

                    /**
                     * 获取Health level. Valid values: `Healthy`, `Reminder`, `Alarm`, `Severe`, `Critical`.
                     * @return TopSeverity Health level. Valid values: `Healthy`, `Reminder`, `Alarm`, `Severe`, `Critical`.
                     */
                    std::string GetTopSeverity() const;

                    /**
                     * 设置Health level. Valid values: `Healthy`, `Reminder`, `Alarm`, `Severe`, `Critical`.
                     * @param TopSeverity Health level. Valid values: `Healthy`, `Reminder`, `Alarm`, `Severe`, `Critical`.
                     */
                    void SetTopSeverity(const std::string& _topSeverity);

                    /**
                     * 判断参数 TopSeverity 是否已赋值
                     * @return TopSeverity 是否已赋值
                     */
                    bool TopSeverityHasBeenSet() const;

                    /**
                     * 获取Number of occurrences of this exception diagnosis item.
                     * @return Count Number of occurrences of this exception diagnosis item.
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Number of occurrences of this exception diagnosis item.
                     * @param Count Number of occurrences of this exception diagnosis item.
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Deducted scores.
                     * @return ScoreLost Deducted scores.
                     */
                    int64_t GetScoreLost() const;

                    /**
                     * 设置Deducted scores.
                     * @param ScoreLost Deducted scores.
                     */
                    void SetScoreLost(const int64_t& _scoreLost);

                    /**
                     * 判断参数 ScoreLost 是否已赋值
                     * @return ScoreLost 是否已赋值
                     */
                    bool ScoreLostHasBeenSet() const;

                private:

                    /**
                     * Exception diagnosis item name.
                     */
                    std::string m_diagItem;
                    bool m_diagItemHasBeenSet;

                    /**
                     * Diagnosis item type. Valid values: `Availability`, `Maintainability`, `Performance`, `Reliability`.
                     */
                    std::string m_issueType;
                    bool m_issueTypeHasBeenSet;

                    /**
                     * Health level. Valid values: `Healthy`, `Reminder`, `Alarm`, `Severe`, `Critical`.
                     */
                    std::string m_topSeverity;
                    bool m_topSeverityHasBeenSet;

                    /**
                     * Number of occurrences of this exception diagnosis item.
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Deducted scores.
                     */
                    int64_t m_scoreLost;
                    bool m_scoreLostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_SCOREITEM_H_
