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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SIMPLEHLSCLIPREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SIMPLEHLSCLIPREQUEST_H_

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
                * SimpleHlsClip request structure.
                */
                class SimpleHlsClipRequest : public AbstractModel
                {
                public:
                    SimpleHlsClipRequest();
                    ~SimpleHlsClipRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取URL of the HLS video in VOD that needs to be clipped.
                     * @return Url URL of the HLS video in VOD that needs to be clipped.
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置URL of the HLS video in VOD that needs to be clipped.
                     * @param Url URL of the HLS video in VOD that needs to be clipped.
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取<b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     * @return SubAppId <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     * @param SubAppId <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取Start offset time of clipping in seconds. Default value: 0, which means to clip from the beginning of the video. A negative number indicates how many seconds from the end of the video clipping will start at. For example, -10 means that clipping will start at the 10th second from the end.
                     * @return StartTimeOffset Start offset time of clipping in seconds. Default value: 0, which means to clip from the beginning of the video. A negative number indicates how many seconds from the end of the video clipping will start at. For example, -10 means that clipping will start at the 10th second from the end.
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置Start offset time of clipping in seconds. Default value: 0, which means to clip from the beginning of the video. A negative number indicates how many seconds from the end of the video clipping will start at. For example, -10 means that clipping will start at the 10th second from the end.
                     * @param StartTimeOffset Start offset time of clipping in seconds. Default value: 0, which means to clip from the beginning of the video. A negative number indicates how many seconds from the end of the video clipping will start at. For example, -10 means that clipping will start at the 10th second from the end.
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取End offset time of clipping in seconds. Default value: 0, which means to clip till the end of the video. A negative number indicates how many seconds from the end of the video clipping will end. For example, -10 means that clipping will end at the 10th second from the end.
                     * @return EndTimeOffset End offset time of clipping in seconds. Default value: 0, which means to clip till the end of the video. A negative number indicates how many seconds from the end of the video clipping will end. For example, -10 means that clipping will end at the 10th second from the end.
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置End offset time of clipping in seconds. Default value: 0, which means to clip till the end of the video. A negative number indicates how many seconds from the end of the video clipping will end. For example, -10 means that clipping will end at the 10th second from the end.
                     * @param EndTimeOffset End offset time of clipping in seconds. Default value: 0, which means to clip till the end of the video. A negative number indicates how many seconds from the end of the video clipping will end. For example, -10 means that clipping will end at the 10th second from the end.
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     */
                    bool EndTimeOffsetHasBeenSet() const;

                    /**
                     * 获取Whether to store the video clip persistently. 0: no (default), 1: yes.
                     * @return IsPersistence Whether to store the video clip persistently. 0: no (default), 1: yes.
                     */
                    int64_t GetIsPersistence() const;

                    /**
                     * 设置Whether to store the video clip persistently. 0: no (default), 1: yes.
                     * @param IsPersistence Whether to store the video clip persistently. 0: no (default), 1: yes.
                     */
                    void SetIsPersistence(const int64_t& _isPersistence);

                    /**
                     * 判断参数 IsPersistence 是否已赋值
                     * @return IsPersistence 是否已赋值
                     */
                    bool IsPersistenceHasBeenSet() const;

                    /**
                     * 获取The expiration time of the video clip that is to be saved, in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I). `9999-12-31T23:59:59Z` is the default value, which means the video clip will never expire. After expiration, the media file and its related resources (such as transcoding results and image sprites) will be permanently deleted. This parameter is valid only if `IsPersistence` is 1.
                     * @return ExpireTime The expiration time of the video clip that is to be saved, in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I). `9999-12-31T23:59:59Z` is the default value, which means the video clip will never expire. After expiration, the media file and its related resources (such as transcoding results and image sprites) will be permanently deleted. This parameter is valid only if `IsPersistence` is 1.
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置The expiration time of the video clip that is to be saved, in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I). `9999-12-31T23:59:59Z` is the default value, which means the video clip will never expire. After expiration, the media file and its related resources (such as transcoding results and image sprites) will be permanently deleted. This parameter is valid only if `IsPersistence` is 1.
                     * @param ExpireTime The expiration time of the video clip that is to be saved, in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I). `9999-12-31T23:59:59Z` is the default value, which means the video clip will never expire. After expiration, the media file and its related resources (such as transcoding results and image sprites) will be permanently deleted. This parameter is valid only if `IsPersistence` is 1.
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取The task flow to execute on the video clipped for persistent storage. For details, see [Upload from Server](https://intl.cloud.tencent.com/document/product/266/33912). This parameter is valid only if `IsPersistence` is 1.
                     * @return Procedure The task flow to execute on the video clipped for persistent storage. For details, see [Upload from Server](https://intl.cloud.tencent.com/document/product/266/33912). This parameter is valid only if `IsPersistence` is 1.
                     */
                    std::string GetProcedure() const;

                    /**
                     * 设置The task flow to execute on the video clipped for persistent storage. For details, see [Upload from Server](https://intl.cloud.tencent.com/document/product/266/33912). This parameter is valid only if `IsPersistence` is 1.
                     * @param Procedure The task flow to execute on the video clipped for persistent storage. For details, see [Upload from Server](https://intl.cloud.tencent.com/document/product/266/33912). This parameter is valid only if `IsPersistence` is 1.
                     */
                    void SetProcedure(const std::string& _procedure);

                    /**
                     * 判断参数 Procedure 是否已赋值
                     * @return Procedure 是否已赋值
                     */
                    bool ProcedureHasBeenSet() const;

                    /**
                     * 获取The ID of the media file’s category. You can use the [CreateClass](https://intl.cloud.tencent.com/document/product/266/7812?from_cn_redirect=1) API to create a category and get the category ID.
<li>The default value is `0`, which means the “Other” category.</li>
This parameter is valid only if `IsPersistence` is `1`.
                     * @return ClassId The ID of the media file’s category. You can use the [CreateClass](https://intl.cloud.tencent.com/document/product/266/7812?from_cn_redirect=1) API to create a category and get the category ID.
<li>The default value is `0`, which means the “Other” category.</li>
This parameter is valid only if `IsPersistence` is `1`.
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置The ID of the media file’s category. You can use the [CreateClass](https://intl.cloud.tencent.com/document/product/266/7812?from_cn_redirect=1) API to create a category and get the category ID.
<li>The default value is `0`, which means the “Other” category.</li>
This parameter is valid only if `IsPersistence` is `1`.
                     * @param ClassId The ID of the media file’s category. You can use the [CreateClass](https://intl.cloud.tencent.com/document/product/266/7812?from_cn_redirect=1) API to create a category and get the category ID.
<li>The default value is `0`, which means the “Other” category.</li>
This parameter is valid only if `IsPersistence` is `1`.
                     */
                    void SetClassId(const int64_t& _classId);

                    /**
                     * 判断参数 ClassId 是否已赋值
                     * @return ClassId 是否已赋值
                     */
                    bool ClassIdHasBeenSet() const;

                    /**
                     * 获取The source context, which is used to pass through user request information. The [NewFileUpload](https://intl.cloud.tencent.com/document/product/266/7830?from_cn_redirect=1) callback will return the value of this parameter. It can contain up to 250 characters and is valid only if `IsPersistence` is `1`.
                     * @return SourceContext The source context, which is used to pass through user request information. The [NewFileUpload](https://intl.cloud.tencent.com/document/product/266/7830?from_cn_redirect=1) callback will return the value of this parameter. It can contain up to 250 characters and is valid only if `IsPersistence` is `1`.
                     */
                    std::string GetSourceContext() const;

                    /**
                     * 设置The source context, which is used to pass through user request information. The [NewFileUpload](https://intl.cloud.tencent.com/document/product/266/7830?from_cn_redirect=1) callback will return the value of this parameter. It can contain up to 250 characters and is valid only if `IsPersistence` is `1`.
                     * @param SourceContext The source context, which is used to pass through user request information. The [NewFileUpload](https://intl.cloud.tencent.com/document/product/266/7830?from_cn_redirect=1) callback will return the value of this parameter. It can contain up to 250 characters and is valid only if `IsPersistence` is `1`.
                     */
                    void SetSourceContext(const std::string& _sourceContext);

                    /**
                     * 判断参数 SourceContext 是否已赋值
                     * @return SourceContext 是否已赋值
                     */
                    bool SourceContextHasBeenSet() const;

                    /**
                     * 获取The session context, which is used to pass through user request information. If the `Procedure` parameter is specified, the [ProcedureStateChanged](https://intl.cloud.tencent.com/document/product/266/9636?from_cn_redirect=1) callback will return the value of this parameter. It can contain up to 1,000 characters and is valid only if `IsPersistence` is `1`.
                     * @return SessionContext The session context, which is used to pass through user request information. If the `Procedure` parameter is specified, the [ProcedureStateChanged](https://intl.cloud.tencent.com/document/product/266/9636?from_cn_redirect=1) callback will return the value of this parameter. It can contain up to 1,000 characters and is valid only if `IsPersistence` is `1`.
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置The session context, which is used to pass through user request information. If the `Procedure` parameter is specified, the [ProcedureStateChanged](https://intl.cloud.tencent.com/document/product/266/9636?from_cn_redirect=1) callback will return the value of this parameter. It can contain up to 1,000 characters and is valid only if `IsPersistence` is `1`.
                     * @param SessionContext The session context, which is used to pass through user request information. If the `Procedure` parameter is specified, the [ProcedureStateChanged](https://intl.cloud.tencent.com/document/product/266/9636?from_cn_redirect=1) callback will return the value of this parameter. It can contain up to 1,000 characters and is valid only if `IsPersistence` is `1`.
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     */
                    bool SessionContextHasBeenSet() const;

                private:

                    /**
                     * URL of the HLS video in VOD that needs to be clipped.
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Start offset time of clipping in seconds. Default value: 0, which means to clip from the beginning of the video. A negative number indicates how many seconds from the end of the video clipping will start at. For example, -10 means that clipping will start at the 10th second from the end.
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * End offset time of clipping in seconds. Default value: 0, which means to clip till the end of the video. A negative number indicates how many seconds from the end of the video clipping will end. For example, -10 means that clipping will end at the 10th second from the end.
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

                    /**
                     * Whether to store the video clip persistently. 0: no (default), 1: yes.
                     */
                    int64_t m_isPersistence;
                    bool m_isPersistenceHasBeenSet;

                    /**
                     * The expiration time of the video clip that is to be saved, in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I). `9999-12-31T23:59:59Z` is the default value, which means the video clip will never expire. After expiration, the media file and its related resources (such as transcoding results and image sprites) will be permanently deleted. This parameter is valid only if `IsPersistence` is 1.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * The task flow to execute on the video clipped for persistent storage. For details, see [Upload from Server](https://intl.cloud.tencent.com/document/product/266/33912). This parameter is valid only if `IsPersistence` is 1.
                     */
                    std::string m_procedure;
                    bool m_procedureHasBeenSet;

                    /**
                     * The ID of the media file’s category. You can use the [CreateClass](https://intl.cloud.tencent.com/document/product/266/7812?from_cn_redirect=1) API to create a category and get the category ID.
<li>The default value is `0`, which means the “Other” category.</li>
This parameter is valid only if `IsPersistence` is `1`.
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * The source context, which is used to pass through user request information. The [NewFileUpload](https://intl.cloud.tencent.com/document/product/266/7830?from_cn_redirect=1) callback will return the value of this parameter. It can contain up to 250 characters and is valid only if `IsPersistence` is `1`.
                     */
                    std::string m_sourceContext;
                    bool m_sourceContextHasBeenSet;

                    /**
                     * The session context, which is used to pass through user request information. If the `Procedure` parameter is specified, the [ProcedureStateChanged](https://intl.cloud.tencent.com/document/product/266/9636?from_cn_redirect=1) callback will return the value of this parameter. It can contain up to 1,000 characters and is valid only if `IsPersistence` is `1`.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SIMPLEHLSCLIPREQUEST_H_
