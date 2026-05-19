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
                     * 获取Unique identifier of a media file.
                     * @return FileId Unique identifier of a media file.
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置Unique identifier of a media file.
                     * @param _fileId Unique identifier of a media file.
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
                     * 获取Operation. Values as follows:
<li>Attach: Associate subtitles.</li>
<li>Detach: Remove associated subtitles.</li>
                     * @return Operation Operation. Values as follows:
<li>Attach: Associate subtitles.</li>
<li>Detach: Remove associated subtitles.</li>
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置Operation. Values as follows:
<li>Attach: Associate subtitles.</li>
<li>Detach: Remove associated subtitles.</li>
                     * @param _operation Operation. Values as follows:
<li>Attach: Associate subtitles.</li>
<li>Detach: Remove associated subtitles.</li>
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
                     * 获取[Adaptive bitrate streaming template ID](https://www.tencentcloud.com/document/product/266/34071?from_cn_redirect=1#zsy).
                     * @return AdaptiveDynamicStreamingDefinition [Adaptive bitrate streaming template ID](https://www.tencentcloud.com/document/product/266/34071?from_cn_redirect=1#zsy).
                     * 
                     */
                    uint64_t GetAdaptiveDynamicStreamingDefinition() const;

                    /**
                     * 设置[Adaptive bitrate streaming template ID](https://www.tencentcloud.com/document/product/266/34071?from_cn_redirect=1#zsy).
                     * @param _adaptiveDynamicStreamingDefinition [Adaptive bitrate streaming template ID](https://www.tencentcloud.com/document/product/266/34071?from_cn_redirect=1#zsy).
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
                     * 获取Unique identifier of the subtitle.
                     * @return SubtitleIds Unique identifier of the subtitle.
                     * 
                     */
                    std::vector<std::string> GetSubtitleIds() const;

                    /**
                     * 设置Unique identifier of the subtitle.
                     * @param _subtitleIds Unique identifier of the subtitle.
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
                     * 获取Unique identifier for default subtitle. Leave empty to not set default subtitle.
                     * @return DefaultSubtitleId Unique identifier for default subtitle. Leave empty to not set default subtitle.
                     * 
                     */
                    std::string GetDefaultSubtitleId() const;

                    /**
                     * 设置Unique identifier for default subtitle. Leave empty to not set default subtitle.
                     * @param _defaultSubtitleId Unique identifier for default subtitle. Leave empty to not set default subtitle.
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
                     * 获取<b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * @return SubAppId <b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * @param _subAppId <b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
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
                     * Unique identifier of a media file.
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * Operation. Values as follows:
<li>Attach: Associate subtitles.</li>
<li>Detach: Remove associated subtitles.</li>
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * [Adaptive bitrate streaming template ID](https://www.tencentcloud.com/document/product/266/34071?from_cn_redirect=1#zsy).
                     */
                    uint64_t m_adaptiveDynamicStreamingDefinition;
                    bool m_adaptiveDynamicStreamingDefinitionHasBeenSet;

                    /**
                     * Unique identifier of the subtitle.
                     */
                    std::vector<std::string> m_subtitleIds;
                    bool m_subtitleIdsHasBeenSet;

                    /**
                     * Unique identifier for default subtitle. Leave empty to not set default subtitle.
                     */
                    std::string m_defaultSubtitleId;
                    bool m_defaultSubtitleIdHasBeenSet;

                    /**
                     * <b>On-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ATTACHMEDIASUBTITLESREQUEST_H_
