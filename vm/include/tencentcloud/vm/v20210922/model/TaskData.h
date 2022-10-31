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

#ifndef TENCENTCLOUD_VM_V20210922_MODEL_TASKDATA_H_
#define TENCENTCLOUD_VM_V20210922_MODEL_TASKDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vm/v20210922/model/TaskLabel.h>
#include <tencentcloud/vm/v20210922/model/MediaInfo.h>
#include <tencentcloud/vm/v20210922/model/InputInfo.h>


namespace TencentCloud
{
    namespace Vm
    {
        namespace V20210922
        {
            namespace Model
            {
                /**
                * Task data
                */
                class TaskData : public AbstractModel
                {
                public:
                    TaskData();
                    ~TaskData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TaskId Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param TaskId Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取Data ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return DataId Data ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetDataId() const;

                    /**
                     * 设置Data ID
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param DataId Data ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetDataId(const std::string& _dataId);

                    /**
                     * 判断参数 DataId 是否已赋值
                     * @return DataId 是否已赋值
                     */
                    bool DataIdHasBeenSet() const;

                    /**
                     * 获取Service type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BizType Service type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetBizType() const;

                    /**
                     * 设置Service type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param BizType Service type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetBizType(const std::string& _bizType);

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取Task name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Task name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetName() const;

                    /**
                     * 设置Task name
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Name Task name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Task status. Values: `PENDING`, `RUNNING`, `ERROR`, `FINISH`, and `CANCELLED`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Status Task status. Values: `PENDING`, `RUNNING`, `ERROR`, `FINISH`, and `CANCELLED`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置Task status. Values: `PENDING`, `RUNNING`, `ERROR`, `FINISH`, and `CANCELLED`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Status Task status. Values: `PENDING`, `RUNNING`, `ERROR`, `FINISH`, and `CANCELLED`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取Task type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type Task type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetType() const;

                    /**
                     * 设置Task type
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Type Task type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Suggestion
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Suggestion Suggestion
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置Suggestion
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Suggestion Suggestion
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Labels Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TaskLabel> GetLabels() const;

                    /**
                     * 设置Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param Labels Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetLabels(const std::vector<TaskLabel>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取Media information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return MediaInfo Media information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MediaInfo GetMediaInfo() const;

                    /**
                     * 设置Media information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param MediaInfo Media information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMediaInfo(const MediaInfo& _mediaInfo);

                    /**
                     * 判断参数 MediaInfo 是否已赋值
                     * @return MediaInfo 是否已赋值
                     */
                    bool MediaInfoHasBeenSet() const;

                    /**
                     * 获取Input information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return InputInfo Input information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    InputInfo GetInputInfo() const;

                    /**
                     * 设置Input information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param InputInfo Input information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetInputInfo(const InputInfo& _inputInfo);

                    /**
                     * 判断参数 InputInfo 是否已赋值
                     * @return InputInfo 是否已赋值
                     */
                    bool InputInfoHasBeenSet() const;

                    /**
                     * 获取Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return CreatedAt Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param CreatedAt Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return UpdatedAt Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param UpdatedAt Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     */
                    bool UpdatedAtHasBeenSet() const;

                private:

                    /**
                     * Task ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * Data ID
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dataId;
                    bool m_dataIdHasBeenSet;

                    /**
                     * Service type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * Task name
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Task status. Values: `PENDING`, `RUNNING`, `ERROR`, `FINISH`, and `CANCELLED`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * Task type
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Suggestion
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * Tag
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TaskLabel> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * Media information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    MediaInfo m_mediaInfo;
                    bool m_mediaInfoHasBeenSet;

                    /**
                     * Input information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    InputInfo m_inputInfo;
                    bool m_inputInfoHasBeenSet;

                    /**
                     * Creation time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * Update time
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VM_V20210922_MODEL_TASKDATA_H_
