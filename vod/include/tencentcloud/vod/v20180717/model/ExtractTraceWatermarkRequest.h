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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_EXTRACTTRACEWATERMARKREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_EXTRACTTRACEWATERMARKREQUEST_H_

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
                * ExtractTraceWatermark request structure.
                */
                class ExtractTraceWatermarkRequest : public AbstractModel
                {
                public:
                    ExtractTraceWatermarkRequest();
                    ~ExtractTraceWatermarkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取URL of the media requiring watermark extraction.
                     * @return Url URL of the media requiring watermark extraction.
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置URL of the media requiring watermark extraction.
                     * @param _url URL of the media requiring watermark extraction.
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取Media file ID. Original media file ID corresponding to the Url.
<li><font color=red>Note</font>: This field is required.</li>
                     * @return FileId Media file ID. Original media file ID corresponding to the Url.
<li><font color=red>Note</font>: This field is required.</li>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置Media file ID. Original media file ID corresponding to the Url.
<li><font color=red>Note</font>: This field is required.</li>
                     * @param _fileId Media file ID. Original media file ID corresponding to the Url.
<li><font color=red>Note</font>: This field is required.</li>
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
                     * 获取<b>ID of the on-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1). For customers who activate on-demand services after December 25, 2023, this field must be set to the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b>
                     * @return SubAppId <b>ID of the on-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1). For customers who activate on-demand services after December 25, 2023, this field must be set to the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>ID of the on-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1). For customers who activate on-demand services after December 25, 2023, this field must be set to the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b>
                     * @param _subAppId <b>ID of the on-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1). For customers who activate on-demand services after December 25, 2023, this field must be set to the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b>
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
                     * 获取Source context identifier, used to pass through user request information. This field will be returned in the ExtractTraceWatermarkComplete callback and task flow status change callback. It can contain up to 1000 characters.
                     * @return SessionContext Source context identifier, used to pass through user request information. This field will be returned in the ExtractTraceWatermarkComplete callback and task flow status change callback. It can contain up to 1000 characters.
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置Source context identifier, used to pass through user request information. This field will be returned in the ExtractTraceWatermarkComplete callback and task flow status change callback. It can contain up to 1000 characters.
                     * @param _sessionContext Source context identifier, used to pass through user request information. This field will be returned in the ExtractTraceWatermarkComplete callback and task flow status change callback. It can contain up to 1000 characters.
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
                     * 获取Identification Code for Task Deduplication. If there has been a request with the same identification code within the past 3 days, an error will be returned for the current request. The maximum length is 50 characters. Leaving it blank or using an empty string indicates no deduplication.
                     * @return SessionId Identification Code for Task Deduplication. If there has been a request with the same identification code within the past 3 days, an error will be returned for the current request. The maximum length is 50 characters. Leaving it blank or using an empty string indicates no deduplication.
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置Identification Code for Task Deduplication. If there has been a request with the same identification code within the past 3 days, an error will be returned for the current request. The maximum length is 50 characters. Leaving it blank or using an empty string indicates no deduplication.
                     * @param _sessionId Identification Code for Task Deduplication. If there has been a request with the same identification code within the past 3 days, an error will be returned for the current request. The maximum length is 50 characters. Leaving it blank or using an empty string indicates no deduplication.
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
                     * 获取Task Priority. The higher the value, the higher the priority. The value range is from -10 to 10. If left blank, the default value is 0.
                     * @return TasksPriority Task Priority. The higher the value, the higher the priority. The value range is from -10 to 10. If left blank, the default value is 0.
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置Task Priority. The higher the value, the higher the priority. The value range is from -10 to 10. If left blank, the default value is 0.
                     * @param _tasksPriority Task Priority. The higher the value, the higher the priority. The value range is from -10 to 10. If left blank, the default value is 0.
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
                     * 获取Reserved field, used for special purposes.
                     * @return ExtInfo Reserved field, used for special purposes.
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置Reserved field, used for special purposes.
                     * @param _extInfo Reserved field, used for special purposes.
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
                     * URL of the media requiring watermark extraction.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * Media file ID. Original media file ID corresponding to the Url.
<li><font color=red>Note</font>: This field is required.</li>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <b>ID of the on-demand [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1). For customers who activate on-demand services after December 25, 2023, this field must be set to the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Source context identifier, used to pass through user request information. This field will be returned in the ExtractTraceWatermarkComplete callback and task flow status change callback. It can contain up to 1000 characters.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * Identification Code for Task Deduplication. If there has been a request with the same identification code within the past 3 days, an error will be returned for the current request. The maximum length is 50 characters. Leaving it blank or using an empty string indicates no deduplication.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Task Priority. The higher the value, the higher the priority. The value range is from -10 to 10. If left blank, the default value is 0.
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                    /**
                     * Reserved field, used for special purposes.
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_EXTRACTTRACEWATERMARKREQUEST_H_
