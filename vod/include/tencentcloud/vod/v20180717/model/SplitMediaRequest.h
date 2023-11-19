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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SPLITMEDIAREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SPLITMEDIAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/SplitMediaTaskConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * SplitMedia request structure.
                */
                class SplitMediaRequest : public AbstractModel
                {
                public:
                    SplitMediaRequest();
                    ~SplitMediaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The video ID.
                     * @return FileId The video ID.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置The video ID.
                     * @param _fileId The video ID.
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
                     * 获取Video splitting task information list, supporting up to 100 splitting messages at the same time.
                     * @return Segments Video splitting task information list, supporting up to 100 splitting messages at the same time.
                     * 
                     */
                    std::vector<SplitMediaTaskConfig> GetSegments() const;

                    /**
                     * 设置Video splitting task information list, supporting up to 100 splitting messages at the same time.
                     * @param _segments Video splitting task information list, supporting up to 100 splitting messages at the same time.
                     * 
                     */
                    void SetSegments(const std::vector<SplitMediaTaskConfig>& _segments);

                    /**
                     * 判断参数 Segments 是否已赋值
                     * @return Segments 是否已赋值
                     * 
                     */
                    bool SegmentsHasBeenSet() const;

                    /**
                     * 获取</b>VOD Application ID. If you want to access resources in a sub-app, fill in this field with the sub-app ID; otherwise, don't fill in this field.</b>
                     * @return SubAppId </b>VOD Application ID. If you want to access resources in a sub-app, fill in this field with the sub-app ID; otherwise, don't fill in this field.</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置</b>VOD Application ID. If you want to access resources in a sub-app, fill in this field with the sub-app ID; otherwise, don't fill in this field.</b>
                     * @param _subAppId </b>VOD Application ID. If you want to access resources in a sub-app, fill in this field with the sub-app ID; otherwise, don't fill in this field.</b>
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
                     * 获取Identifies the source context, which is used to transparently transmit user request information. This field value will be returned in the SplitMediaComplete callback and task flow status change callback, with a maximum length of 1000 characters.
                     * @return SessionContext Identifies the source context, which is used to transparently transmit user request information. This field value will be returned in the SplitMediaComplete callback and task flow status change callback, with a maximum length of 1000 characters.
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置Identifies the source context, which is used to transparently transmit user request information. This field value will be returned in the SplitMediaComplete callback and task flow status change callback, with a maximum length of 1000 characters.
                     * @param _sessionContext Identifies the source context, which is used to transparently transmit user request information. This field value will be returned in the SplitMediaComplete callback and task flow status change callback, with a maximum length of 1000 characters.
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

                private:

                    /**
                     * The video ID.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Video splitting task information list, supporting up to 100 splitting messages at the same time.
                     */
                    std::vector<SplitMediaTaskConfig> m_segments;
                    bool m_segmentsHasBeenSet;

                    /**
                     * </b>VOD Application ID. If you want to access resources in a sub-app, fill in this field with the sub-app ID; otherwise, don't fill in this field.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Identifies the source context, which is used to transparently transmit user request information. This field value will be returned in the SplitMediaComplete callback and task flow status change callback, with a maximum length of 1000 characters.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * The identification code used for task deduplication. If there is a request with the same identification code within three days, this request will return an error. The maximum length is 50 characters, without or with an empty string to indicate no deduplication.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * The priority of the task. The larger the value, the higher the priority. The value range is -10 to 10. If left blank, it means 0.
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SPLITMEDIAREQUEST_H_
