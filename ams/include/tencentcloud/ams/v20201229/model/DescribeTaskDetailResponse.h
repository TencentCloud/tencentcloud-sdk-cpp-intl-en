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

#ifndef TENCENTCLOUD_AMS_V20201229_MODEL_DESCRIBETASKDETAILRESPONSE_H_
#define TENCENTCLOUD_AMS_V20201229_MODEL_DESCRIBETASKDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ams/v20201229/model/TaskLabel.h>
#include <tencentcloud/ams/v20201229/model/InputInfo.h>
#include <tencentcloud/ams/v20201229/model/AudioSegments.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * DescribeTaskDetail response structure.
                */
                class DescribeTaskDetailResponse : public AbstractModel
                {
                public:
                    DescribeTaskDetailResponse();
                    ~DescribeTaskDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return TaskId 
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DataId 
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDataId() const;

                    /**
                     * 判断参数 DataId 是否已赋值
                     * @return DataId 是否已赋值
                     * 
                     */
                    bool DataIdHasBeenSet() const;

                    /**
                     * 获取
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return BizType 
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBizType() const;

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     * 
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Name 
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Status 
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Type 
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Suggestion 
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Labels 
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TaskLabel> GetLabels() const;

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return InputInfo 
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    InputInfo GetInputInfo() const;

                    /**
                     * 判断参数 InputInfo 是否已赋值
                     * @return InputInfo 是否已赋值
                     * 
                     */
                    bool InputInfoHasBeenSet() const;

                    /**
                     * 获取
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AudioText 
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAudioText() const;

                    /**
                     * 判断参数 AudioText 是否已赋值
                     * @return AudioText 是否已赋值
                     * 
                     */
                    bool AudioTextHasBeenSet() const;

                    /**
                     * 获取
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return AudioSegments 
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<AudioSegments> GetAudioSegments() const;

                    /**
                     * 判断参数 AudioSegments 是否已赋值
                     * @return AudioSegments 是否已赋值
                     * 
                     */
                    bool AudioSegmentsHasBeenSet() const;

                    /**
                     * 获取
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ErrorType 
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetErrorType() const;

                    /**
                     * 判断参数 ErrorType 是否已赋值
                     * @return ErrorType 是否已赋值
                     * 
                     */
                    bool ErrorTypeHasBeenSet() const;

                    /**
                     * 获取
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return ErrorDescription 
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetErrorDescription() const;

                    /**
                     * 判断参数 ErrorDescription 是否已赋值
                     * @return ErrorDescription 是否已赋值
                     * 
                     */
                    bool ErrorDescriptionHasBeenSet() const;

                    /**
                     * 获取
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return CreatedAt 
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UpdatedAt 
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Label 
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                private:

                    /**
                     * 
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dataId;
                    bool m_dataIdHasBeenSet;

                    /**
                     * 
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * 
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * 
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TaskLabel> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * 
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    InputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * 
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_audioText;
                    bool m_audioTextHasBeenSet;

                    /**
                     * 
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<AudioSegments> m_audioSegments;
                    bool m_audioSegmentsHasBeenSet;

                    /**
                     * 
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_errorType;
                    bool m_errorTypeHasBeenSet;

                    /**
                     * 
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_errorDescription;
                    bool m_errorDescriptionHasBeenSet;

                    /**
                     * 
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * 
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20201229_MODEL_DESCRIBETASKDETAILRESPONSE_H_
