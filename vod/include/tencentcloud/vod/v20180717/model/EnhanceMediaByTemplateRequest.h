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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_ENHANCEMEDIABYTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_ENHANCEMEDIABYTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/RebuildMediaOutputConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * EnhanceMediaByTemplate request structure.
                */
                class EnhanceMediaByTemplateRequest : public AbstractModel
                {
                public:
                    EnhanceMediaByTemplateRequest();
                    ~EnhanceMediaByTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取File ID.
                     * @return FileId File ID.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置File ID.
                     * @param _fileId File ID.
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取Enhance Media Template ID.
                     * @return Definition Enhance Media Template ID.
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置Enhance Media Template ID.
                     * @param _definition Enhance Media Template ID.
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取<b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * @return SubAppId <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * @param _subAppId <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取Starting offset time, unit: seconds, leaving it blank means intercepting from the beginning of the video.
                     * @return StartTimeOffset Starting offset time, unit: seconds, leaving it blank means intercepting from the beginning of the video.
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置Starting offset time, unit: seconds, leaving it blank means intercepting from the beginning of the video.
                     * @param _startTimeOffset Starting offset time, unit: seconds, leaving it blank means intercepting from the beginning of the video.
                     * 
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     * 
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取End offset time, unit: seconds, leaving it blank means intercepting to the end of the video.
                     * @return EndTimeOffset End offset time, unit: seconds, leaving it blank means intercepting to the end of the video.
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置End offset time, unit: seconds, leaving it blank means intercepting to the end of the video.
                     * @param _endTimeOffset End offset time, unit: seconds, leaving it blank means intercepting to the end of the video.
                     * 
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     * 
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                    /**
                     * 获取File configuration after Enhance.
                     * @return OutputConfig File configuration after Enhance.
                     * 
                     */
                    RebuildMediaOutputConfig GetOutputConfig() const;

                    /**
                     * 设置File configuration after Enhance.
                     * @param _outputConfig File configuration after Enhance.
                     * 
                     */
                    void SetOutputConfig(const RebuildMediaOutputConfig& _outputConfig);

                    /**
                     * 判断参数 OutputConfig 是否已赋值
                     * @return OutputConfig 是否已赋值
                     * 
                     */
                    bool OutputConfigHasBeenSet() const;

                    /**
                     * 获取The identification code used for deduplication. If there is a request for the same identification code within three days, this request will return an error. The maximum length is 50 characters, without or with an empty string to indicate no deduplication.
                     * @return SessionId The identification code used for deduplication. If there is a request for the same identification code within three days, this request will return an error. The maximum length is 50 characters, without or with an empty string to indicate no deduplication.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置The identification code used for deduplication. If there is a request for the same identification code within three days, this request will return an error. The maximum length is 50 characters, without or with an empty string to indicate no deduplication.
                     * @param _sessionId The identification code used for deduplication. If there is a request for the same identification code within three days, this request will return an error. The maximum length is 50 characters, without or with an empty string to indicate no deduplication.
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取Source context, used to transparently transmit user request information. The task flow status change callback will return the value of this field, which can be up to 1000 characters.
                     * @return SessionContext Source context, used to transparently transmit user request information. The task flow status change callback will return the value of this field, which can be up to 1000 characters.
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置Source context, used to transparently transmit user request information. The task flow status change callback will return the value of this field, which can be up to 1000 characters.
                     * @param _sessionContext Source context, used to transparently transmit user request information. The task flow status change callback will return the value of this field, which can be up to 1000 characters.
                     * 
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     * 
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取The priority of the task. The larger the value, the higher the priority. The value range is -10 to 10. If left blank, it means 0.
                     * @return TasksPriority The priority of the task. The larger the value, the higher the priority. The value range is -10 to 10. If left blank, it means 0.
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置The priority of the task. The larger the value, the higher the priority. The value range is -10 to 10. If left blank, it means 0.
                     * @param _tasksPriority The priority of the task. The larger the value, the higher the priority. The value range is -10 to 10. If left blank, it means 0.
                     * 
                     */
                    void SetTasksPriority(const int64_t& _tasksPriority);

                    /**
                     * 判断参数 TasksPriority 是否已赋值
                     * @return TasksPriority 是否已赋值
                     * 
                     */
                    bool TasksPriorityHasBeenSet() const;

                    /**
                     * 获取Reserved fields, used for special purposes.
                     * @return ExtInfo Reserved fields, used for special purposes.
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置Reserved fields, used for special purposes.
                     * @param _extInfo Reserved fields, used for special purposes.
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                private:

                    /**
                     * File ID.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Enhance Media Template ID.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Starting offset time, unit: seconds, leaving it blank means intercepting from the beginning of the video.
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * End offset time, unit: seconds, leaving it blank means intercepting to the end of the video.
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * File configuration after Enhance.
                     */
                    RebuildMediaOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                    /**
                     * The identification code used for deduplication. If there is a request for the same identification code within three days, this request will return an error. The maximum length is 50 characters, without or with an empty string to indicate no deduplication.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Source context, used to transparently transmit user request information. The task flow status change callback will return the value of this field, which can be up to 1000 characters.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * The priority of the task. The larger the value, the higher the priority. The value range is -10 to 10. If left blank, it means 0.
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                    /**
                     * Reserved fields, used for special purposes.
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ENHANCEMEDIABYTEMPLATEREQUEST_H_
