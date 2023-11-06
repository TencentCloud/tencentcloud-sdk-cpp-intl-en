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
                     * 获取
                     * @return InputType 
                     * 
                     */
                    std::string GetInputType() const;

                    /**
                     * 设置
                     * @param _inputType 
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
                     * 获取
                     * @return SubAppId 
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置
                     * @param _subAppId 
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
                     * 获取
                     * @return FileInfos 
                     * 
                     */
                    std::vector<EditMediaFileInfo> GetFileInfos() const;

                    /**
                     * 设置
                     * @param _fileInfos 
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
                     * 获取
                     * @return StreamInfos 
                     * 
                     */
                    std::vector<EditMediaStreamInfo> GetStreamInfos() const;

                    /**
                     * 设置
                     * @param _streamInfos 
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
                     * 获取
                     * @return Definition 
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置
                     * @param _definition 
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
                     * 获取
                     * @return ProcedureName 
                     * 
                     */
                    std::string GetProcedureName() const;

                    /**
                     * 设置
                     * @param _procedureName 
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
                     * 获取
                     * @return OutputConfig 
                     * 
                     */
                    EditMediaOutputConfig GetOutputConfig() const;

                    /**
                     * 设置
                     * @param _outputConfig 
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
                     * 获取
                     * @return SessionContext 
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置
                     * @param _sessionContext 
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
                     * 获取
                     * @return TasksPriority 
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置
                     * @param _tasksPriority 
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
                     * 获取Used to identify duplicate requests. After you send a request, if any request with the same `SessionId` has already been sent in the last three days (72 hours), an error message will be returned. `SessionId` contains up to 50 characters. If this parameter is not carried or is an empty string, no deduplication will be performed.
                     * @return SessionId Used to identify duplicate requests. After you send a request, if any request with the same `SessionId` has already been sent in the last three days (72 hours), an error message will be returned. `SessionId` contains up to 50 characters. If this parameter is not carried or is an empty string, no deduplication will be performed.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置Used to identify duplicate requests. After you send a request, if any request with the same `SessionId` has already been sent in the last three days (72 hours), an error message will be returned. `SessionId` contains up to 50 characters. If this parameter is not carried or is an empty string, no deduplication will be performed.
                     * @param _sessionId Used to identify duplicate requests. After you send a request, if any request with the same `SessionId` has already been sent in the last three days (72 hours), an error message will be returned. `SessionId` contains up to 50 characters. If this parameter is not carried or is an empty string, no deduplication will be performed.
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
                     * 获取Reserved field for special purposes.
                     * @return ExtInfo Reserved field for special purposes.
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置Reserved field for special purposes.
                     * @param _extInfo Reserved field for special purposes.
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
                     * 
                     */
                    std::string m_inputType;
                    bool m_inputTypeHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<EditMediaFileInfo> m_fileInfos;
                    bool m_fileInfosHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<EditMediaStreamInfo> m_streamInfos;
                    bool m_streamInfosHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_procedureName;
                    bool m_procedureNameHasBeenSet;

                    /**
                     * 
                     */
                    EditMediaOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * 
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                    /**
                     * Used to identify duplicate requests. After you send a request, if any request with the same `SessionId` has already been sent in the last three days (72 hours), an error message will be returned. `SessionId` contains up to 50 characters. If this parameter is not carried or is an empty string, no deduplication will be performed.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Reserved field for special purposes.
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_EDITMEDIAREQUEST_H_
