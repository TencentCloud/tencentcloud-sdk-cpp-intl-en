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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_ATTACHMEDIASUBTITLESREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_ATTACHMEDIASUBTITLESREQUEST_H_

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
                * AttachMediaSubtitles request structure.
                */
                class AttachMediaSubtitlesRequest : public AbstractModel
                {
                public:
                    AttachMediaSubtitlesRequest();
                    ~AttachMediaSubtitlesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取
                     * @return FileId 
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置
                     * @param _fileId 
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
                     * 获取
                     * @return Operation 
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置
                     * @param _operation 
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取
                     * @return AdaptiveDynamicStreamingDefinition 
                     * 
                     */
                    uint64_t GetAdaptiveDynamicStreamingDefinition() const;

                    /**
                     * 设置
                     * @param _adaptiveDynamicStreamingDefinition 
                     * 
                     */
                    void SetAdaptiveDynamicStreamingDefinition(const uint64_t& _adaptiveDynamicStreamingDefinition);

                    /**
                     * 判断参数 AdaptiveDynamicStreamingDefinition 是否已赋值
                     * @return AdaptiveDynamicStreamingDefinition 是否已赋值
                     * 
                     */
                    bool AdaptiveDynamicStreamingDefinitionHasBeenSet() const;

                    /**
                     * 获取
                     * @return SubtitleIds 
                     * 
                     */
                    std::vector<std::string> GetSubtitleIds() const;

                    /**
                     * 设置
                     * @param _subtitleIds 
                     * 
                     */
                    void SetSubtitleIds(const std::vector<std::string>& _subtitleIds);

                    /**
                     * 判断参数 SubtitleIds 是否已赋值
                     * @return SubtitleIds 是否已赋值
                     * 
                     */
                    bool SubtitleIdsHasBeenSet() const;

                    /**
                     * 获取
                     * @return DefaultSubtitleId 
                     * 
                     */
                    std::string GetDefaultSubtitleId() const;

                    /**
                     * 设置
                     * @param _defaultSubtitleId 
                     * 
                     */
                    void SetDefaultSubtitleId(const std::string& _defaultSubtitleId);

                    /**
                     * 判断参数 DefaultSubtitleId 是否已赋值
                     * @return DefaultSubtitleId 是否已赋值
                     * 
                     */
                    bool DefaultSubtitleIdHasBeenSet() const;

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

                private:

                    /**
                     * 
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_adaptiveDynamicStreamingDefinition;
                    bool m_adaptiveDynamicStreamingDefinitionHasBeenSet;

                    /**
                     * 
                     */
                    std::vector<std::string> m_subtitleIds;
                    bool m_subtitleIdsHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_defaultSubtitleId;
                    bool m_defaultSubtitleIdHasBeenSet;

                    /**
                     * 
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ATTACHMEDIASUBTITLESREQUEST_H_
