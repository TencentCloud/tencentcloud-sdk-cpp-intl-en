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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_REBUILDMEDIABYTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_REBUILDMEDIABYTEMPLATEREQUEST_H_

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
                * RebuildMediaByTemplate request structure.
                */
                class RebuildMediaByTemplateRequest : public AbstractModel
                {
                public:
                    RebuildMediaByTemplateRequest();
                    ~RebuildMediaByTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The file ID.
                     * @return FileId The file ID.
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置The file ID.
                     * @param FileId The file ID.
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取The remaster template ID.
                     * @return Definition The remaster template ID.
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置The remaster template ID.
                     * @param Definition The remaster template ID.
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取<b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     * @return SubAppId <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     */
                    std::string GetSubAppId() const;

                    /**
                     * 设置<b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     * @param SubAppId <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     */
                    void SetSubAppId(const std::string& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取The start offset (seconds). If you do not specify this, the segment will start from the beginning of the video.
                     * @return StartTimeOffset The start offset (seconds). If you do not specify this, the segment will start from the beginning of the video.
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置The start offset (seconds). If you do not specify this, the segment will start from the beginning of the video.
                     * @param StartTimeOffset The start offset (seconds). If you do not specify this, the segment will start from the beginning of the video.
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取The end offset (seconds). If you do not specify this, the segment will end at the end of the video.
                     * @return EndTimeOffset The end offset (seconds). If you do not specify this, the segment will end at the end of the video.
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置The end offset (seconds). If you do not specify this, the segment will end at the end of the video.
                     * @param EndTimeOffset The end offset (seconds). If you do not specify this, the segment will end at the end of the video.
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                    /**
                     * 获取The parameters for the output file of remastering.
                     * @return OutputConfig The parameters for the output file of remastering.
                     */
                    RebuildMediaOutputConfig GetOutputConfig() const;

                    /**
                     * 设置The parameters for the output file of remastering.
                     * @param OutputConfig The parameters for the output file of remastering.
                     */
                    void SetOutputConfig(const RebuildMediaOutputConfig& _outputConfig);

                    /**
                     * 判断参数 OutputConfig 是否已赋值
                     * @return OutputConfig 是否已赋值
                     */
                    bool OutputConfigHasBeenSet() const;

                    /**
                     * 获取The session ID, which is used for de-duplication. If there was a request with the same session ID in the last three days, an error will be returned for the current request. The session ID can contain up to 50 characters. If you do not pass this parameter or pass in an empty string, duplicate sessions will not be identified.
                     * @return SessionId The session ID, which is used for de-duplication. If there was a request with the same session ID in the last three days, an error will be returned for the current request. The session ID can contain up to 50 characters. If you do not pass this parameter or pass in an empty string, duplicate sessions will not be identified.
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置The session ID, which is used for de-duplication. If there was a request with the same session ID in the last three days, an error will be returned for the current request. The session ID can contain up to 50 characters. If you do not pass this parameter or pass in an empty string, duplicate sessions will not be identified.
                     * @param SessionId The session ID, which is used for de-duplication. If there was a request with the same session ID in the last three days, an error will be returned for the current request. The session ID can contain up to 50 characters. If you do not pass this parameter or pass in an empty string, duplicate sessions will not be identified.
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取The source context, which is used to pass through user request information. The `ProcedureStateChanged` callback will return the value of this parameter. It can contain up to 1,000 characters.
                     * @return SessionContext The source context, which is used to pass through user request information. The `ProcedureStateChanged` callback will return the value of this parameter. It can contain up to 1,000 characters.
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置The source context, which is used to pass through user request information. The `ProcedureStateChanged` callback will return the value of this parameter. It can contain up to 1,000 characters.
                     * @param SessionContext The source context, which is used to pass through user request information. The `ProcedureStateChanged` callback will return the value of this parameter. It can contain up to 1,000 characters.
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取The task priority, which can be a value from -10 to 10. The higher the value, the higher the priority. If this parameter is left empty, 0 will be used.
                     * @return TasksPriority The task priority, which can be a value from -10 to 10. The higher the value, the higher the priority. If this parameter is left empty, 0 will be used.
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置The task priority, which can be a value from -10 to 10. The higher the value, the higher the priority. If this parameter is left empty, 0 will be used.
                     * @param TasksPriority The task priority, which can be a value from -10 to 10. The higher the value, the higher the priority. If this parameter is left empty, 0 will be used.
                     */
                    void SetTasksPriority(const int64_t& _tasksPriority);

                    /**
                     * 判断参数 TasksPriority 是否已赋值
                     * @return TasksPriority 是否已赋值
                     */
                    bool TasksPriorityHasBeenSet() const;

                    /**
                     * 获取A reserved parameter.
                     * @return ExtInfo A reserved parameter.
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置A reserved parameter.
                     * @param ExtInfo A reserved parameter.
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     */
                    bool ExtInfoHasBeenSet() const;

                private:

                    /**
                     * The file ID.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * The remaster template ID.
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     */
                    std::string m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * The start offset (seconds). If you do not specify this, the segment will start from the beginning of the video.
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * The end offset (seconds). If you do not specify this, the segment will end at the end of the video.
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * The parameters for the output file of remastering.
                     */
                    RebuildMediaOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                    /**
                     * The session ID, which is used for de-duplication. If there was a request with the same session ID in the last three days, an error will be returned for the current request. The session ID can contain up to 50 characters. If you do not pass this parameter or pass in an empty string, duplicate sessions will not be identified.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * The source context, which is used to pass through user request information. The `ProcedureStateChanged` callback will return the value of this parameter. It can contain up to 1,000 characters.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * The task priority, which can be a value from -10 to 10. The higher the value, the higher the priority. If this parameter is left empty, 0 will be used.
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                    /**
                     * A reserved parameter.
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_REBUILDMEDIABYTEMPLATEREQUEST_H_
