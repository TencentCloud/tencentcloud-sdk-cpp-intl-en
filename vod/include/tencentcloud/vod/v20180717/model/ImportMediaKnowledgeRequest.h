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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_IMPORTMEDIAKNOWLEDGEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_IMPORTMEDIAKNOWLEDGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ImportMediaKnowledge request structure.
                */
                class ImportMediaKnowledgeRequest : public AbstractModel
                {
                public:
                    ImportMediaKnowledgeRequest();
                    ~ImportMediaKnowledgeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<b>Specifies the VOD application ID.</b>
                     * @return SubAppId <b>Specifies the VOD application ID.</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>Specifies the VOD application ID.</b>
                     * @param _subAppId <b>Specifies the VOD application ID.</b>
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
                     * 获取media file ID, the globally unique identifier of the file in vod, is assigned by the vod backend after successful upload. can be obtained from the [video upload completion event notification](https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) or [vod console](https://console.tencentcloud.com//vod/media).
                     * @return FileId media file ID, the globally unique identifier of the file in vod, is assigned by the vod backend after successful upload. can be obtained from the [video upload completion event notification](https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) or [vod console](https://console.tencentcloud.com//vod/media).
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置media file ID, the globally unique identifier of the file in vod, is assigned by the vod backend after successful upload. can be obtained from the [video upload completion event notification](https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) or [vod console](https://console.tencentcloud.com//vod/media).
                     * @param _fileId media file ID, the globally unique identifier of the file in vod, is assigned by the vod backend after successful upload. can be obtained from the [video upload completion event notification](https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) or [vod console](https://console.tencentcloud.com//vod/media).
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
                     * 获取Specifies the task type for importing the knowledge base. valid values:.
- AiAnalysis.DescriptionTask
- SmartSubtitle.AsrFullTextTask
                     * @return ImportTasks Specifies the task type for importing the knowledge base. valid values:.
- AiAnalysis.DescriptionTask
- SmartSubtitle.AsrFullTextTask
                     * 
                     */
                    std::vector<std::string> GetImportTasks() const;

                    /**
                     * 设置Specifies the task type for importing the knowledge base. valid values:.
- AiAnalysis.DescriptionTask
- SmartSubtitle.AsrFullTextTask
                     * @param _importTasks Specifies the task type for importing the knowledge base. valid values:.
- AiAnalysis.DescriptionTask
- SmartSubtitle.AsrFullTextTask
                     * 
                     */
                    void SetImportTasks(const std::vector<std::string>& _importTasks);

                    /**
                     * 判断参数 ImportTasks 是否已赋值
                     * @return ImportTasks 是否已赋值
                     * 
                     */
                    bool ImportTasksHasBeenSet() const;

                private:

                    /**
                     * <b>Specifies the VOD application ID.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * media file ID, the globally unique identifier of the file in vod, is assigned by the vod backend after successful upload. can be obtained from the [video upload completion event notification](https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) or [vod console](https://console.tencentcloud.com//vod/media).
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Specifies the task type for importing the knowledge base. valid values:.
- AiAnalysis.DescriptionTask
- SmartSubtitle.AsrFullTextTask
                     */
                    std::vector<std::string> m_importTasks;
                    bool m_importTasksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_IMPORTMEDIAKNOWLEDGEREQUEST_H_
