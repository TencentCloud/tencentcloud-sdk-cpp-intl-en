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

#ifndef TENCENTCLOUD_AMS_V20201229_MODEL_TAG_H_
#define TENCENTCLOUD_AMS_V20201229_MODEL_TAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * Tag of the audio slice
                */
                class Tag : public AbstractModel
                {
                public:
                    Tag();
                    ~Tag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The value of this parameter varies by `Label`.
When `Label` is `Teenager`, `Name` can be `Teenager`. 
When `Label` is `Gender`, `Name` can be `Male` and `Female`.
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Name The value of this parameter varies by `Label`.
When `Label` is `Teenager`, `Name` can be `Teenager`. 
When `Label` is `Gender`, `Name` can be `Male` and `Female`.
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置The value of this parameter varies by `Label`.
When `Label` is `Teenager`, `Name` can be `Teenager`. 
When `Label` is `Gender`, `Name` can be `Male` and `Female`.
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _name The value of this parameter varies by `Label`.
When `Label` is `Teenager`, `Name` can be `Teenager`. 
When `Label` is `Gender`, `Name` can be `Male` and `Female`.
Note: This field may return `null`, indicating that no valid value was found.
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
                     * 获取Confidence score. Value: 1 to 100. 
Note: This field may return `null`, indicating that no valid value was found.
                     * @return Score Confidence score. Value: 1 to 100. 
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置Confidence score. Value: 1 to 100. 
Note: This field may return `null`, indicating that no valid value was found.
                     * @param _score Confidence score. Value: 1 to 100. 
Note: This field may return `null`, indicating that no valid value was found.
                     * 
                     */
                    void SetScore(const int64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取Start time for the recognition (ms)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return StartTime Start time for the recognition (ms)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    double GetStartTime() const;

                    /**
                     * 设置Start time for the recognition (ms)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _startTime Start time for the recognition (ms)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetStartTime(const double& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time for the recognition (ms)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return EndTime End time for the recognition (ms)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    double GetEndTime() const;

                    /**
                     * 设置End time for the recognition (ms)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _endTime End time for the recognition (ms)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetEndTime(const double& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * The value of this parameter varies by `Label`.
When `Label` is `Teenager`, `Name` can be `Teenager`. 
When `Label` is `Gender`, `Name` can be `Male` and `Female`.
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Confidence score. Value: 1 to 100. 
Note: This field may return `null`, indicating that no valid value was found.
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * Start time for the recognition (ms)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    double m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time for the recognition (ms)
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    double m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20201229_MODEL_TAG_H_
