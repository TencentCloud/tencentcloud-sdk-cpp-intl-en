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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DIMENSIONSCOREINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DIMENSIONSCOREINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * Dimension Scoring Information
                */
                class DimensionScoreInfo : public AbstractModel
                {
                public:
                    DimensionScoreInfo();
                    ~DimensionScoreInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Dimension NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Name Dimension NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Dimension NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _name Dimension NameNote: This field may return null, indicating that no valid value can be obtained.
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
                     * 获取WeightNote: This field may return null, indicating that no valid value can be obtained.
                     * @return Weight WeightNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    double GetWeight() const;

                    /**
                     * 设置WeightNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _weight WeightNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetWeight(const double& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取Setter ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return UserId Setter ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetUserId() const;

                    /**
                     * 设置Setter ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _userId Setter ID
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUserId(const int64_t& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取Setter Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return UserName Setter Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置Setter Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _userName Setter Name
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取Update Time Timestamp
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return UpdateTime Update Time Timestamp
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置Update Time Timestamp
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _updateTime Update Time Timestamp
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取Number of Evaluation Forms Involved
                     * @return JoinTableNumber Number of Evaluation Forms Involved
                     * 
                     */
                    int64_t GetJoinTableNumber() const;

                    /**
                     * 设置Number of Evaluation Forms Involved
                     * @param _joinTableNumber Number of Evaluation Forms Involved
                     * 
                     */
                    void SetJoinTableNumber(const int64_t& _joinTableNumber);

                    /**
                     * 判断参数 JoinTableNumber 是否已赋值
                     * @return JoinTableNumber 是否已赋值
                     * 
                     */
                    bool JoinTableNumberHasBeenSet() const;

                    /**
                     * 获取Scoring
                     * @return Score Scoring
                     * 
                     */
                    double GetScore() const;

                    /**
                     * 设置Scoring
                     * @param _score Scoring
                     * 
                     */
                    void SetScore(const double& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取
                     * @return UserIdStr 
                     * 
                     */
                    std::string GetUserIdStr() const;

                    /**
                     * 设置
                     * @param _userIdStr 
                     * 
                     */
                    void SetUserIdStr(const std::string& _userIdStr);

                    /**
                     * 判断参数 UserIdStr 是否已赋值
                     * @return UserIdStr 是否已赋值
                     * 
                     */
                    bool UserIdStrHasBeenSet() const;

                private:

                    /**
                     * Dimension NameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * WeightNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    double m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * Setter ID
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * Setter Name
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * Update Time Timestamp
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * Number of Evaluation Forms Involved
                     */
                    int64_t m_joinTableNumber;
                    bool m_joinTableNumberHasBeenSet;

                    /**
                     * Scoring
                     */
                    double m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_userIdStr;
                    bool m_userIdStrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DIMENSIONSCOREINFO_H_
