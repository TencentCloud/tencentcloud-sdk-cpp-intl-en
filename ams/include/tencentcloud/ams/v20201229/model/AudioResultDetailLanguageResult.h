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

#ifndef TENCENTCLOUD_AMS_V20201229_MODEL_AUDIORESULTDETAILLANGUAGERESULT_H_
#define TENCENTCLOUD_AMS_V20201229_MODEL_AUDIORESULTDETAILLANGUAGERESULT_H_

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
                     * 获取This field is used to return the language information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Label This field is used to return the language information.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置This field is used to return the language information.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Label This field is used to return the language information.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取This parameter is used to return the confidence under the current tag. Value range: 0 (**the lowest confidence**)–100 (**the highest confidence**), where a higher value indicates that the audio is more likely to fall into the category of the current returned language tag;
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Score This parameter is used to return the confidence under the current tag. Value range: 0 (**the lowest confidence**)–100 (**the highest confidence**), where a higher value indicates that the audio is more likely to fall into the category of the current returned language tag;
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetScore() const;

                    /**
                     * 设置This parameter is used to return the confidence under the current tag. Value range: 0 (**the lowest confidence**)–100 (**the highest confidence**), where a higher value indicates that the audio is more likely to fall into the category of the current returned language tag;
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Score This parameter is used to return the confidence under the current tag. Value range: 0 (**the lowest confidence**)–100 (**the highest confidence**), where a higher value indicates that the audio is more likely to fall into the category of the current returned language tag;
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetScore(const int64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取This parameter is used to return the start time of the segment of an audio file under the corresponding language tag in milliseconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return StartTime This parameter is used to return the start time of the segment of an audio file under the corresponding language tag in milliseconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    double GetStartTime() const;

                    /**
                     * 设置This parameter is used to return the start time of the segment of an audio file under the corresponding language tag in milliseconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param StartTime This parameter is used to return the start time of the segment of an audio file under the corresponding language tag in milliseconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetStartTime(const double& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取This parameter is used to return the end time of the segment of an audio file under the corresponding language tag in milliseconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return EndTime This parameter is used to return the end time of the segment of an audio file under the corresponding language tag in milliseconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    double GetEndTime() const;

                    /**
                     * 设置This parameter is used to return the end time of the segment of an audio file under the corresponding language tag in milliseconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param EndTime This parameter is used to return the end time of the segment of an audio file under the corresponding language tag in milliseconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetEndTime(const double& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取*This field is in beta test. Stay tuned*
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return SubLabelCode *This field is in beta test. Stay tuned*
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSubLabelCode() const;

                    /**
                     * 设置*This field is in beta test. Stay tuned*
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param SubLabelCode *This field is in beta test. Stay tuned*
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSubLabelCode(const std::string& _subLabelCode);

                    /**
                     * 判断参数 SubLabelCode 是否已赋值
                     * @return SubLabelCode 是否已赋值
                     */
                    bool SubLabelCodeHasBeenSet() const;

                private:

                    /**
                     * This field is used to return the language information.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * This parameter is used to return the confidence under the current tag. Value range: 0 (**the lowest confidence**)–100 (**the highest confidence**), where a higher value indicates that the audio is more likely to fall into the category of the current returned language tag;
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * This parameter is used to return the start time of the segment of an audio file under the corresponding language tag in milliseconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    double m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * This parameter is used to return the end time of the segment of an audio file under the corresponding language tag in milliseconds.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    double m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * *This field is in beta test. Stay tuned*
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_subLabelCode;
                    bool m_subLabelCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20201229_MODEL_AUDIORESULTDETAILLANGUAGERESULT_H_
