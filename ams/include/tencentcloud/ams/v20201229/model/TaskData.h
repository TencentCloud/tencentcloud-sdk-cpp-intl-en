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

#ifndef TENCENTCLOUD_AMS_V20201229_MODEL_TASKDATA_H_
#define TENCENTCLOUD_AMS_V20201229_MODEL_TASKDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ams/v20201229/model/MediaInfo.h>
#include <tencentcloud/ams/v20201229/model/TaskLabel.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20201229
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
                     * 获取This field is used to return the ID of the audio moderation task data for subsequent query and management of moderation tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return DataId This field is used to return the ID of the audio moderation task data for subsequent query and management of moderation tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetDataId() const;

                    /**
                     * 设置This field is used to return the ID of the audio moderation task data for subsequent query and management of moderation tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _dataId This field is used to return the ID of the audio moderation task data for subsequent query and management of moderation tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDataId(const std::string& _dataId);

                    /**
                     * 判断参数 DataId 是否已赋值
                     * @return DataId 是否已赋值
                     * 
                     */
                    bool DataIdHasBeenSet() const;

                    /**
                     * 获取This field is used to return the ID of an audio moderation task for identification, query, and management of moderation tasks.
                     * @return TaskId This field is used to return the ID of an audio moderation task for identification, query, and management of moderation tasks.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置This field is used to return the ID of an audio moderation task for identification, query, and management of moderation tasks.
                     * @param _taskId This field is used to return the ID of an audio moderation task for identification, query, and management of moderation tasks.
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取This field is used to return the task status of the queried content.
<br>Valid values: **FINISH** (task completed), **PENDING** (task pending), **RUNNING** (task in progress), **ERROR** (task error), **CANCELLED** (task canceled).
                     * @return Status This field is used to return the task status of the queried content.
<br>Valid values: **FINISH** (task completed), **PENDING** (task pending), **RUNNING** (task in progress), **ERROR** (task error), **CANCELLED** (task canceled).
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置This field is used to return the task status of the queried content.
<br>Valid values: **FINISH** (task completed), **PENDING** (task pending), **RUNNING** (task in progress), **ERROR** (task error), **CANCELLED** (task canceled).
                     * @param _status This field is used to return the task status of the queried content.
<br>Valid values: **FINISH** (task completed), **PENDING** (task pending), **RUNNING** (task in progress), **ERROR** (task error), **CANCELLED** (task canceled).
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取This field is used to return the name of an audio moderation task for subsequent query and management of moderation tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Name This field is used to return the name of an audio moderation task for subsequent query and management of moderation tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置This field is used to return the name of an audio moderation task for subsequent query and management of moderation tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _name This field is used to return the name of an audio moderation task for subsequent query and management of moderation tasks.
Note: this field may return null, indicating that no valid values can be obtained.
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
                     * 获取This field is used to return the `BizType` parameter passed in when the audio moderation API is called for easier data identification and management.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return BizType This field is used to return the `BizType` parameter passed in when the audio moderation API is called for easier data identification and management.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetBizType() const;

                    /**
                     * 设置This field is used to return the `BizType` parameter passed in when the audio moderation API is called for easier data identification and management.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _bizType This field is used to return the `BizType` parameter passed in when the audio moderation API is called for easier data identification and management.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetBizType(const std::string& _bizType);

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     * 
                     */
                    bool BizTypeHasBeenSet() const;

                    /**
                     * 获取This field is used to return the audio moderation type passed in when the audio moderation API is called. Valid values: **AUDIO** (audio on demand), **LIVE_AUDIO** (audio live streaming). Default value: AUDIO.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Type This field is used to return the audio moderation type passed in when the audio moderation API is called. Valid values: **AUDIO** (audio on demand), **LIVE_AUDIO** (audio live streaming). Default value: AUDIO.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置This field is used to return the audio moderation type passed in when the audio moderation API is called. Valid values: **AUDIO** (audio on demand), **LIVE_AUDIO** (audio live streaming). Default value: AUDIO.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _type This field is used to return the audio moderation type passed in when the audio moderation API is called. Valid values: **AUDIO** (audio on demand), **LIVE_AUDIO** (audio live streaming). Default value: AUDIO.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取This field is used to return the operation suggestion for the maliciousness tag. When you get the determination result, the returned value indicates the operation suggested by the system. We recommend you handle different types of violations and suggestions according to your business needs. <br>Returned values: **Block**, **Review**, **Pass**.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Suggestion This field is used to return the operation suggestion for the maliciousness tag. When you get the determination result, the returned value indicates the operation suggested by the system. We recommend you handle different types of violations and suggestions according to your business needs. <br>Returned values: **Block**, **Review**, **Pass**.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetSuggestion() const;

                    /**
                     * 设置This field is used to return the operation suggestion for the maliciousness tag. When you get the determination result, the returned value indicates the operation suggested by the system. We recommend you handle different types of violations and suggestions according to your business needs. <br>Returned values: **Block**, **Review**, **Pass**.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _suggestion This field is used to return the operation suggestion for the maliciousness tag. When you get the determination result, the returned value indicates the operation suggested by the system. We recommend you handle different types of violations and suggestions according to your business needs. <br>Returned values: **Block**, **Review**, **Pass**.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSuggestion(const std::string& _suggestion);

                    /**
                     * 判断参数 Suggestion 是否已赋值
                     * @return Suggestion 是否已赋值
                     * 
                     */
                    bool SuggestionHasBeenSet() const;

                    /**
                     * 获取Input information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MediaInfo Input information
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    MediaInfo GetMediaInfo() const;

                    /**
                     * 设置Input information
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _mediaInfo Input information
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMediaInfo(const MediaInfo& _mediaInfo);

                    /**
                     * 判断参数 MediaInfo 是否已赋值
                     * @return MediaInfo 是否已赋值
                     * 
                     */
                    bool MediaInfoHasBeenSet() const;

                    /**
                     * 获取This field is used to return the maliciousness tag in the detection result.<br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Labels This field is used to return the maliciousness tag in the detection result.<br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<TaskLabel> GetLabels() const;

                    /**
                     * 设置This field is used to return the maliciousness tag in the detection result.<br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _labels This field is used to return the maliciousness tag in the detection result.<br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetLabels(const std::vector<TaskLabel>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取This field is used to return the creation time of the queried task in ISO 8601 format.
                     * @return CreatedAt This field is used to return the creation time of the queried task in ISO 8601 format.
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置This field is used to return the creation time of the queried task in ISO 8601 format.
                     * @param _createdAt This field is used to return the creation time of the queried task in ISO 8601 format.
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取This field is used to return the last update time of the queried task in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return UpdatedAt This field is used to return the last update time of the queried task in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置This field is used to return the last update time of the queried task in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param _updatedAt This field is used to return the last update time of the queried task in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                private:

                    /**
                     * This field is used to return the ID of the audio moderation task data for subsequent query and management of moderation tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_dataId;
                    bool m_dataIdHasBeenSet;

                    /**
                     * This field is used to return the ID of an audio moderation task for identification, query, and management of moderation tasks.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * This field is used to return the task status of the queried content.
<br>Valid values: **FINISH** (task completed), **PENDING** (task pending), **RUNNING** (task in progress), **ERROR** (task error), **CANCELLED** (task canceled).
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * This field is used to return the name of an audio moderation task for subsequent query and management of moderation tasks.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * This field is used to return the `BizType` parameter passed in when the audio moderation API is called for easier data identification and management.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                    /**
                     * This field is used to return the audio moderation type passed in when the audio moderation API is called. Valid values: **AUDIO** (audio on demand), **LIVE_AUDIO** (audio live streaming). Default value: AUDIO.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * This field is used to return the operation suggestion for the maliciousness tag. When you get the determination result, the returned value indicates the operation suggested by the system. We recommend you handle different types of violations and suggestions according to your business needs. <br>Returned values: **Block**, **Review**, **Pass**.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_suggestion;
                    bool m_suggestionHasBeenSet;

                    /**
                     * Input information
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    MediaInfo m_mediaInfo;
                    bool m_mediaInfoHasBeenSet;

                    /**
                     * This field is used to return the maliciousness tag in the detection result.<br>Returned values: **Normal**: normal; **Porn**: pornographic; **Abuse**: abusive; **Ad**: advertising; **Custom**: custom type of non-compliant content and other offensive, unsafe, or inappropriate types of content.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<TaskLabel> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * This field is used to return the creation time of the queried task in ISO 8601 format.
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * This field is used to return the last update time of the queried task in ISO 8601 format.
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20201229_MODEL_TASKDATA_H_
