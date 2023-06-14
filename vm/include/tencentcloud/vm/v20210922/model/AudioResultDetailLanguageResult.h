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

#ifndef TENCENTCLOUD_VM_V20210922_MODEL_AUDIORESULTDETAILLANGUAGERESULT_H_
#define TENCENTCLOUD_VM_V20210922_MODEL_AUDIORESULTDETAILLANGUAGERESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20210922
        {
            namespace Model
            {
                /**
                * Audio language detection result
                */
                class AudioResultDetailLanguageResult : public AbstractModel
                {
                public:
                    AudioResultDetailLanguageResult();
                    ~AudioResultDetailLanguageResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Language
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Label Language
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置Language
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _label Language
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取Score
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Score Score
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置Score
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _score Score
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Start time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return StartTime Start time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetStartTime() const;

                    /**
                     * 设置Start time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _startTime Start time
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取End time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return EndTime End time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    double GetEndTime() const;

                    /**
                     * 设置End time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _endTime End time
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEndTime(const double& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取Subtag under the current tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SubLabelCode Subtag under the current tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSubLabelCode() const;

                    /**
                     * 设置Subtag under the current tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _subLabelCode Subtag under the current tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSubLabelCode(const std::string& _subLabelCode);

                    /**
                     * 判断参数 SubLabelCode 是否已赋值
                     * @return SubLabelCode 是否已赋值
                     * 
                     */
                    bool SubLabelCodeHasBeenSet() const;

                private:

                    /**
                     * Language
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * Score
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * Start time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    double m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * Subtag under the current tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subLabelCode;
                    bool m_subLabelCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20210922_MODEL_AUDIORESULTDETAILLANGUAGERESULT_H_
