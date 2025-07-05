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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_ENHANCEMEDIAQUALITYREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_ENHANCEMEDIAQUALITYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/EnhanceMediaQualityOutputConfig.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * EnhanceMediaQuality request structure.
                */
                class EnhanceMediaQualityRequest : public AbstractModel
                {
                public:
                    EnhanceMediaQualityRequest();
                    ~EnhanceMediaQualityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Media file ID, that is, the globally unique identifier of the file on VOD, which is assigned by the VOD backend after successful upload. This field can be obtained from [video upload completion event notification](https://intl.cloud.tencent.com/document/product/266/7830?from_cn_redirect=1) or [vod console](https://console.cloud.tencent.com/vod/media).
                     * @return FileId Media file ID, that is, the globally unique identifier of the file on VOD, which is assigned by the VOD backend after successful upload. This field can be obtained from [video upload completion event notification](https://intl.cloud.tencent.com/document/product/266/7830?from_cn_redirect=1) or [vod console](https://console.cloud.tencent.com/vod/media).
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置Media file ID, that is, the globally unique identifier of the file on VOD, which is assigned by the VOD backend after successful upload. This field can be obtained from [video upload completion event notification](https://intl.cloud.tencent.com/document/product/266/7830?from_cn_redirect=1) or [vod console](https://console.cloud.tencent.com/vod/media).
                     * @param _fileId Media file ID, that is, the globally unique identifier of the file on VOD, which is assigned by the VOD backend after successful upload. This field can be obtained from [video upload completion event notification](https://intl.cloud.tencent.com/document/product/266/7830?from_cn_redirect=1) or [vod console](https://console.cloud.tencent.com/vod/media).
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
                     * 获取Remaster template ID, please contact Tencent Cloud for details
                     * @return Definition Remaster template ID, please contact Tencent Cloud for details
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置Remaster template ID, please contact Tencent Cloud for details
                     * @param _definition Remaster template ID, please contact Tencent Cloud for details
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
                     * 获取<b>VOD [Subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you want to access resources in the Subapplication, enter the Subapplication ID in this field; otherwise, you do not need to fill in this field.</b>
                     * @return SubAppId <b>VOD [Subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you want to access resources in the Subapplication, enter the Subapplication ID in this field; otherwise, you do not need to fill in this field.</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>VOD [Subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you want to access resources in the Subapplication, enter the Subapplication ID in this field; otherwise, you do not need to fill in this field.</b>
                     * @param _subAppId <b>VOD [Subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you want to access resources in the Subapplication, enter the Subapplication ID in this field; otherwise, you do not need to fill in this field.</b>
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
                     * 获取Configuration of media files after Remaster
                     * @return OutputConfig Configuration of media files after Remaster
                     * 
                     */
                    EnhanceMediaQualityOutputConfig GetOutputConfig() const;

                    /**
                     * 设置Configuration of media files after Remaster
                     * @param _outputConfig Configuration of media files after Remaster
                     * 
                     */
                    void SetOutputConfig(const EnhanceMediaQualityOutputConfig& _outputConfig);

                    /**
                     * 判断参数 OutputConfig 是否已赋值
                     * @return OutputConfig 是否已赋值
                     * 
                     */
                    bool OutputConfigHasBeenSet() const;

                    /**
                     * 获取The identification code used for deduplication. If there has been a request with the same identification code within three days, this request will return an error. Up to 50 characters, without or with an empty string means no deduplication
                     * @return SessionId The identification code used for deduplication. If there has been a request with the same identification code within three days, this request will return an error. Up to 50 characters, without or with an empty string means no deduplication
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置The identification code used for deduplication. If there has been a request with the same identification code within three days, this request will return an error. Up to 50 characters, without or with an empty string means no deduplication
                     * @param _sessionId The identification code used for deduplication. If there has been a request with the same identification code within three days, this request will return an error. Up to 50 characters, without or with an empty string means no deduplication
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
                     * 获取Source context, used to pass through user request information, Remaster completion callback will return this field value, up to 1000 characters
                     * @return SessionContext Source context, used to pass through user request information, Remaster completion callback will return this field value, up to 1000 characters
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置Source context, used to pass through user request information, Remaster completion callback will return this field value, up to 1000 characters
                     * @param _sessionContext Source context, used to pass through user request information, Remaster completion callback will return this field value, up to 1000 characters
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
                     * 获取The priority of the task, the higher the value, the higher the priority, the range is -10 to 10, not filled in means 0
                     * @return TasksPriority The priority of the task, the higher the value, the higher the priority, the range is -10 to 10, not filled in means 0
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置The priority of the task, the higher the value, the higher the priority, the range is -10 to 10, not filled in means 0
                     * @param _tasksPriority The priority of the task, the higher the value, the higher the priority, the range is -10 to 10, not filled in means 0
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
                     * Media file ID, that is, the globally unique identifier of the file on VOD, which is assigned by the VOD backend after successful upload. This field can be obtained from [video upload completion event notification](https://intl.cloud.tencent.com/document/product/266/7830?from_cn_redirect=1) or [vod console](https://console.cloud.tencent.com/vod/media).
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Remaster template ID, please contact Tencent Cloud for details
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <b>VOD [Subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you want to access resources in the Subapplication, enter the Subapplication ID in this field; otherwise, you do not need to fill in this field.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Configuration of media files after Remaster
                     */
                    EnhanceMediaQualityOutputConfig m_outputConfig;
                    bool m_outputConfigHasBeenSet;

                    /**
                     * The identification code used for deduplication. If there has been a request with the same identification code within three days, this request will return an error. Up to 50 characters, without or with an empty string means no deduplication
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Source context, used to pass through user request information, Remaster completion callback will return this field value, up to 1000 characters
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * The priority of the task, the higher the value, the higher the priority, the range is -10 to 10, not filled in means 0
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ENHANCEMEDIAQUALITYREQUEST_H_
