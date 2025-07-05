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

#ifndef TENCENTCLOUD_DBBRAIN_V20191016_MODEL_SCOREDETAIL_H_
#define TENCENTCLOUD_DBBRAIN_V20191016_MODEL_SCOREDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20191016/model/ScoreItem.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20191016
        {
            namespace Model
            {
                /**
                * Deduction details.
                */
                class ScoreDetail : public AbstractModel
                {
                public:
                    ScoreDetail();
                    ~ScoreDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Deduction item types. Valid values: availability, maintainability, performance, and reliability.
                     * @return IssueType Deduction item types. Valid values: availability, maintainability, performance, and reliability.
                     * 
                     */
                    std::string GetIssueType() const;

                    /**
                     * 设置Deduction item types. Valid values: availability, maintainability, performance, and reliability.
                     * @param _issueType Deduction item types. Valid values: availability, maintainability, performance, and reliability.
                     * 
                     */
                    void SetIssueType(const std::string& _issueType);

                    /**
                     * 判断参数 IssueType 是否已赋值
                     * @return IssueType 是否已赋值
                     * 
                     */
                    bool IssueTypeHasBeenSet() const;

                    /**
                     * 获取Total scores deducted.
                     * @return ScoreLost Total scores deducted.
                     * 
                     */
                    int64_t GetScoreLost() const;

                    /**
                     * 设置Total scores deducted.
                     * @param _scoreLost Total scores deducted.
                     * 
                     */
                    void SetScoreLost(const int64_t& _scoreLost);

                    /**
                     * 判断参数 ScoreLost 是否已赋值
                     * @return ScoreLost 是否已赋值
                     * 
                     */
                    bool ScoreLostHasBeenSet() const;

                    /**
                     * 获取Upper limit of the deducted scores.
                     * @return ScoreLostMax Upper limit of the deducted scores.
                     * 
                     */
                    int64_t GetScoreLostMax() const;

                    /**
                     * 设置Upper limit of the deducted scores.
                     * @param _scoreLostMax Upper limit of the deducted scores.
                     * 
                     */
                    void SetScoreLostMax(const int64_t& _scoreLostMax);

                    /**
                     * 判断参数 ScoreLostMax 是否已赋值
                     * @return ScoreLostMax 是否已赋值
                     * 
                     */
                    bool ScoreLostMaxHasBeenSet() const;

                    /**
                     * 获取Deduction item list.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @return Items Deduction item list.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ScoreItem> GetItems() const;

                    /**
                     * 设置Deduction item list.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * @param _items Deduction item list.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetItems(const std::vector<ScoreItem>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * Deduction item types. Valid values: availability, maintainability, performance, and reliability.
                     */
                    std::string m_issueType;
                    bool m_issueTypeHasBeenSet;

                    /**
                     * Total scores deducted.
                     */
                    int64_t m_scoreLost;
                    bool m_scoreLostHasBeenSet;

                    /**
                     * Upper limit of the deducted scores.
                     */
                    int64_t m_scoreLostMax;
                    bool m_scoreLostMaxHasBeenSet;

                    /**
                     * Deduction item list.
Note: `null` may be returned for this field, indicating that no valid values can be obtained.
                     */
                    std::vector<ScoreItem> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20191016_MODEL_SCOREDETAIL_H_
