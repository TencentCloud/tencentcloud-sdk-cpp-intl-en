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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIAREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/EditMediaFileInfo.h>
#include <tencentcloud/vod/v20180717/model/EditMediaStreamInfo.h>
#include <tencentcloud/vod/v20180717/model/EditMediaOutputConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * EditMedia request structure.
                */
                class EditMediaRequest : public AbstractModel
                {
                public:
                    EditMediaRequest();
                    ~EditMediaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Input the type of video. The possible values u200bu200bare File and Stream.
                     * @return InputType Input the type of video. The possible values u200bu200bare File and Stream.
                     * 
                     */
                    std::string GetInputType() const;

                    /**
                     * 设置Input the type of video. The possible values u200bu200bare File and Stream.
                     * @param _inputType Input the type of video. The possible values u200bu200bare File and Stream.
                     * 
                     */
                    void SetInputType(const std::string& _inputType);

                    /**
                     * 判断参数 InputType 是否已赋值
                     * @return InputType 是否已赋值
                     * 
                     */
                    bool InputTypeHasBeenSet() const;

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
                     * 获取Input video file information, required when InputType is File.
                     * @return FileInfos Input video file information, required when InputType is File.
                     * 
                     */
                    std::vector<EditMediaFileInfo> GetFileInfos() const;

                    /**
                     * 设置Input video file information, required when InputType is File.
                     * @param _fileInfos Input video file information, required when InputType is File.
                     * 
                     */
                    void SetFileInfos(const std::vector<EditMediaFileInfo>& _fileInfos);

                    /**
                     * 判断参数 FileInfos 是否已赋值
                     * @return FileInfos 是否已赋值
                     * 
                     */
                    bool FileInfosHasBeenSet() const;

                    /**
                     * 获取nput stream information, required when InputType is Stream.
                     * @return StreamInfos nput stream information, required when InputType is Stream.
                     * 
                     */
                    std::vector<EditMediaStreamInfo> GetStreamInfos() const;

                    /**
                     * 设置nput stream information, required when InputType is Stream.
                     * @param _streamInfos nput stream information, required when InputType is Stream.
                     * 
                     */
                    void SetStreamInfos(const std::vector<EditMediaStreamInfo>& _streamInfos);

                    /**
                     * 判断参数 StreamInfos 是否已赋值
                     * @return StreamInfos 是否已赋值
                     * 
                     */
                    bool StreamInfosHasBeenSet() const;

                    /**
                     * 获取EditMedia template ID. The values u200bu200bare 10 and 20. If left blank, the 10 template is used. 
<li>10: When splicing, the input with the highest resolution is used as the benchmark;</li>
<li>20: When splicing, the input with the highest code rate is used as the benchmark. </li>
                     * @return Definition EditMedia template ID. The values u200bu200bare 10 and 20. If left blank, the 10 template is used. 
<li>10: When splicing, the input with the highest resolution is used as the benchmark;</li>
<li>20: When splicing, the input with the highest code rate is used as the benchmark. </li>
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置EditMedia template ID. The values u200bu200bare 10 and 20. If left blank, the 10 template is used. 
<li>10: When splicing, the input with the highest resolution is used as the benchmark;</li>
<li>20: When splicing, the input with the highest code rate is used as the benchmark. </li>
                     * @param _definition EditMedia template ID. The values u200bu200bare 10 and 20. If left blank, the 10 template is used. 
<li>10: When splicing, the input with the highest resolution is used as the benchmark;</li>
<li>20: When splicing, the input with the highest code rate is used as the benchmark. </li>
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取Task flow template name, if you want Fill in when executing the task flow on the generated new video.
                     * @return ProcedureName Task flow template name, if you want Fill in when executing the task flow on the generated new video.
                     * 
                     */
                    std::string GetProcedureName() const;

                    /**
                     * 设置Task flow template name, if you want Fill in when executing the task flow on the generated new video.
                     * @param _procedureName Task flow template name, if you want Fill in when executing the task flow on the generated new video.
                     * 
                     */
                    void SetProcedureName(const std::string& _procedureName);

                    /**
                     * 判断参数 ProcedureName 是否已赋值
                     * @return ProcedureName 是否已赋值
                     * 
                     */
                    bool ProcedureNameHasBeenSet() const;

                    /**
                     * 获取The file configuration generated after editing.
                     * @return OutputConfig The file configuration generated after editing.
                     * 
                     */
                    EditMediaOutputConfig GetOutputConfig() const;

                    /**
                     * 设置The file configuration generated after editing.
                     * @param _outputConfig The file configuration generated after editing.
                     * 
                     */
                    void SetOutputConfig(const EditMediaOutputConfig& _outputConfig);

                    /**
                     * 判断参数 OutputConfig 是否已赋值
                     * @return OutputConfig 是否已赋值
                     * 
                     */
                    bool OutputConfigHasBeenSet() const;

                    /**
                     * 获取Identifies the source context, which is used to transparently transmit user request information. This field value will be returned in the EditMediaComplete callback and task flow status change callback, with a maximum length of 1000 characters.
                     * @return SessionContext Identifies the source context, which is used to transparently transmit user request information. This field value will be returned in the EditMediaComplete callback and task flow status change callback, with a maximum length of 1000 characters.
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置Identifies the source context, which is used to transparently transmit user request information. This field value will be returned in the EditMediaComplete callback and task flow status change callback, with a maximum length of 1000 characters.
                     * @param _sessionContext Identifies the source context, which is used to transparently transmit user request information. This field value will be returned in the EditMediaComplete callback and task flow status change callback, with a maximum length of 1000 characters.
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
                     * 获取The identification code used for task deduplication. If there is a request with the same identification code within three days, this request will return an error. The maximum length is 50 characters, without or with an empty string to indicate no deduplication.
                     * @return SessionId The identification code used for task deduplication. If there is a request with the same identification code within three days, this request will return an error. The maximum length is 50 characters, without or with an empty string to indicate no deduplication.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置The identification code used for task deduplication. If there is a request with the same identification code within three days, this request will return an error. The maximum length is 50 characters, without or with an empty string to indicate no deduplication.
                     * @param _sessionId The identification code used for task deduplication. If there is a request with the same identification code within three days, this request will return an error. The maximum length is 50 characters, without or with an empty string to indicate no deduplication.
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
                     * Input the type of video. The possible values u200bu200bare File and Stream.
                     */
                    std::string m_inputType;
                    bool m_inputTypeHasBeenSet;

                    /**
                     * <b>The VOD [application](https://intl.cloud.tencent.com/document/product/266/14574) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Input video file information, required when InputType is File.
                     */
                    std::vector<EditMediaFileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * nput stream information, required when InputType is Stream.
                     */
                    std::vector<EditMediaStreamInfo> m_streamInfos;
                    bool m_streamInfosHasBeenSet;

                    /**
                     * EditMedia template ID. The values u200bu200bare 10 and 20. If left blank, the 10 template is used. 
<li>10: When splicing, the input with the highest resolution is used as the benchmark;</li>
<li>20: When splicing, the input with the highest code rate is used as the benchmark. </li>
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * Task flow template name, if you want Fill in when executing the task flow on the generated new video.
                     */
                    std::string m_procedureName;
                    bool m_procedureNameHasBeenSet;

                    /**
                     * The file configuration generated after editing.
                     */
                    EditMediaOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                    /**
                     * Identifies the source context, which is used to transparently transmit user request information. This field value will be returned in the EditMediaComplete callback and task flow status change callback, with a maximum length of 1000 characters.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * The priority of the task. The larger the value, the higher the priority. The value range is -10 to 10. If left blank, it means 0.
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                    /**
                     * The identification code used for task deduplication. If there is a request with the same identification code within three days, this request will return an error. The maximum length is 50 characters, without or with an empty string to indicate no deduplication.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

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

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIAREQUEST_H_
