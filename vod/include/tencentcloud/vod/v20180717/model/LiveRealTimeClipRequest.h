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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_LIVEREALTIMECLIPREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_LIVEREALTIMECLIPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/LiveRealTimeClipStreamInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * LiveRealTimeClip request structure.
                */
                class LiveRealTimeClipRequest : public AbstractModel
                {
                public:
                    LiveRealTimeClipRequest();
                    ~LiveRealTimeClipRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The live stream code.
                     * @return StreamId The live stream code.
                     * 
                     */
                    std::string GetStreamId() const;

                    /**
                     * 设置The live stream code.
                     * @param _streamId The live stream code.
                     * 
                     */
                    void SetStreamId(const std::string& _streamId);

                    /**
                     * 判断参数 StreamId 是否已赋值
                     * @return StreamId 是否已赋值
                     * 
                     */
                    bool StreamIdHasBeenSet() const;

                    /**
                     * 获取Start time of stream clipping in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return StartTime Start time of stream clipping in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time of stream clipping in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _startTime Start time of stream clipping in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取End time of stream clipping in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return EndTime End time of stream clipping in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time of stream clipping in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _endTime End time of stream clipping in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<b>The VOD [application](https://www.tencentcloud.com/document/product/266/33987) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * @return SubAppId <b>The VOD [application](https://www.tencentcloud.com/document/product/266/33987) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>The VOD [application](https://www.tencentcloud.com/document/product/266/33987) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     * @param _subAppId <b>The VOD [application](https://www.tencentcloud.com/document/product/266/33987) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
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
                     * 获取Whether to clip persistently. 0: no, 1: yes. Default: no.
                     * @return IsPersistence Whether to clip persistently. 0: no, 1: yes. Default: no.
                     * 
                     */
                    int64_t GetIsPersistence() const;

                    /**
                     * 设置Whether to clip persistently. 0: no, 1: yes. Default: no.
                     * @param _isPersistence Whether to clip persistently. 0: no, 1: yes. Default: no.
                     * 
                     */
                    void SetIsPersistence(const int64_t& _isPersistence);

                    /**
                     * 判断参数 IsPersistence 是否已赋值
                     * @return IsPersistence 是否已赋值
                     * 
                     */
                    bool IsPersistenceHasBeenSet() const;

                    /**
                     * 获取Storage expiration time of video generated by persistent clipping in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I). `9999-12-31T23:59:59Z` means `never expire`. After the expiration, the media file and its related resources (such as transcoding results and image sprites) will be permanently deleted. This parameter will be valid only when `IsPersistence` is 1. By default, the video will never expire.
                     * @return ExpireTime Storage expiration time of video generated by persistent clipping in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I). `9999-12-31T23:59:59Z` means `never expire`. After the expiration, the media file and its related resources (such as transcoding results and image sprites) will be permanently deleted. This parameter will be valid only when `IsPersistence` is 1. By default, the video will never expire.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Storage expiration time of video generated by persistent clipping in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I). `9999-12-31T23:59:59Z` means `never expire`. After the expiration, the media file and its related resources (such as transcoding results and image sprites) will be permanently deleted. This parameter will be valid only when `IsPersistence` is 1. By default, the video will never expire.
                     * @param _expireTime Storage expiration time of video generated by persistent clipping in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I). `9999-12-31T23:59:59Z` means `never expire`. After the expiration, the media file and its related resources (such as transcoding results and image sprites) will be permanently deleted. This parameter will be valid only when `IsPersistence` is 1. By default, the video will never expire.
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取VOD task flow processing for video generated by persistent clipping. For more information, please see [Specifying Task Flow After Upload](https://intl.cloud.tencent.com/document/product/266/9759?from_cn_redirect=1). This parameter will be valid only when `IsPersistence` is 1.
                     * @return Procedure VOD task flow processing for video generated by persistent clipping. For more information, please see [Specifying Task Flow After Upload](https://intl.cloud.tencent.com/document/product/266/9759?from_cn_redirect=1). This parameter will be valid only when `IsPersistence` is 1.
                     * 
                     */
                    std::string GetProcedure() const;

                    /**
                     * 设置VOD task flow processing for video generated by persistent clipping. For more information, please see [Specifying Task Flow After Upload](https://intl.cloud.tencent.com/document/product/266/9759?from_cn_redirect=1). This parameter will be valid only when `IsPersistence` is 1.
                     * @param _procedure VOD task flow processing for video generated by persistent clipping. For more information, please see [Specifying Task Flow After Upload](https://intl.cloud.tencent.com/document/product/266/9759?from_cn_redirect=1). This parameter will be valid only when `IsPersistence` is 1.
                     * 
                     */
                    void SetProcedure(const std::string& _procedure);

                    /**
                     * 判断参数 Procedure 是否已赋值
                     * @return Procedure 是否已赋值
                     * 
                     */
                    bool ProcedureHasBeenSet() const;

                    /**
                     * 获取The ID of the media file's category. You can use the [CreateClass](https://intl.cloud.tencent.com/document/product/266/7812?from_cn_redirect=1) API to create a category and get the category ID.
<li>The default value is `0`, which means the "Other" category.</li>
This parameter is valid only if `IsPersistence` is `1`.
                     * @return ClassId The ID of the media file's category. You can use the [CreateClass](https://intl.cloud.tencent.com/document/product/266/7812?from_cn_redirect=1) API to create a category and get the category ID.
<li>The default value is `0`, which means the "Other" category.</li>
This parameter is valid only if `IsPersistence` is `1`.
                     * 
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置The ID of the media file's category. You can use the [CreateClass](https://intl.cloud.tencent.com/document/product/266/7812?from_cn_redirect=1) API to create a category and get the category ID.
<li>The default value is `0`, which means the "Other" category.</li>
This parameter is valid only if `IsPersistence` is `1`.
                     * @param _classId The ID of the media file's category. You can use the [CreateClass](https://intl.cloud.tencent.com/document/product/266/7812?from_cn_redirect=1) API to create a category and get the category ID.
<li>The default value is `0`, which means the "Other" category.</li>
This parameter is valid only if `IsPersistence` is `1`.
                     * 
                     */
                    void SetClassId(const int64_t& _classId);

                    /**
                     * 判断参数 ClassId 是否已赋值
                     * @return ClassId 是否已赋值
                     * 
                     */
                    bool ClassIdHasBeenSet() const;

                    /**
                     * 获取The source context, which is used to pass through user request information. The [NewFileUpload](https://intl.cloud.tencent.com/document/product/266/7830?from_cn_redirect=1) callback will return the value of this parameter. It can contain up to 250 characters and is valid only if `IsPersistence` is `1`.
                     * @return SourceContext The source context, which is used to pass through user request information. The [NewFileUpload](https://intl.cloud.tencent.com/document/product/266/7830?from_cn_redirect=1) callback will return the value of this parameter. It can contain up to 250 characters and is valid only if `IsPersistence` is `1`.
                     * 
                     */
                    std::string GetSourceContext() const;

                    /**
                     * 设置The source context, which is used to pass through user request information. The [NewFileUpload](https://intl.cloud.tencent.com/document/product/266/7830?from_cn_redirect=1) callback will return the value of this parameter. It can contain up to 250 characters and is valid only if `IsPersistence` is `1`.
                     * @param _sourceContext The source context, which is used to pass through user request information. The [NewFileUpload](https://intl.cloud.tencent.com/document/product/266/7830?from_cn_redirect=1) callback will return the value of this parameter. It can contain up to 250 characters and is valid only if `IsPersistence` is `1`.
                     * 
                     */
                    void SetSourceContext(const std::string& _sourceContext);

                    /**
                     * 判断参数 SourceContext 是否已赋值
                     * @return SourceContext 是否已赋值
                     * 
                     */
                    bool SourceContextHasBeenSet() const;

                    /**
                     * 获取The session context, which is used to pass through user request information. If the `Procedure` parameter is specified, the [ProcedureStateChanged](https://intl.cloud.tencent.com/document/product/266/9636?from_cn_redirect=1) callback will return the value of this parameter. It can contain up to 1,000 characters and is valid only if `IsPersistence` is `1`.
                     * @return SessionContext The session context, which is used to pass through user request information. If the `Procedure` parameter is specified, the [ProcedureStateChanged](https://intl.cloud.tencent.com/document/product/266/9636?from_cn_redirect=1) callback will return the value of this parameter. It can contain up to 1,000 characters and is valid only if `IsPersistence` is `1`.
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置The session context, which is used to pass through user request information. If the `Procedure` parameter is specified, the [ProcedureStateChanged](https://intl.cloud.tencent.com/document/product/266/9636?from_cn_redirect=1) callback will return the value of this parameter. It can contain up to 1,000 characters and is valid only if `IsPersistence` is `1`.
                     * @param _sessionContext The session context, which is used to pass through user request information. If the `Procedure` parameter is specified, the [ProcedureStateChanged](https://intl.cloud.tencent.com/document/product/266/9636?from_cn_redirect=1) callback will return the value of this parameter. It can contain up to 1,000 characters and is valid only if `IsPersistence` is `1`.
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
                     * 获取Whether the metadata of clipped video needs to be returned. 0: no, 1: yes. Default value: no.
                     * @return MetaDataRequired Whether the metadata of clipped video needs to be returned. 0: no, 1: yes. Default value: no.
                     * 
                     */
                    uint64_t GetMetaDataRequired() const;

                    /**
                     * 设置Whether the metadata of clipped video needs to be returned. 0: no, 1: yes. Default value: no.
                     * @param _metaDataRequired Whether the metadata of clipped video needs to be returned. 0: no, 1: yes. Default value: no.
                     * 
                     */
                    void SetMetaDataRequired(const uint64_t& _metaDataRequired);

                    /**
                     * 判断参数 MetaDataRequired 是否已赋值
                     * @return MetaDataRequired 是否已赋值
                     * 
                     */
                    bool MetaDataRequiredHasBeenSet() const;

                    /**
                     * 获取Domain name used for live clipping. Time shifting must be enabled in LVB.
                     * @return Host Domain name used for live clipping. Time shifting must be enabled in LVB.
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置Domain name used for live clipping. Time shifting must be enabled in LVB.
                     * @param _host Domain name used for live clipping. Time shifting must be enabled in LVB.
                     * 
                     */
                    void SetHost(const std::string& _host);

                    /**
                     * 判断参数 Host 是否已赋值
                     * @return Host 是否已赋值
                     * 
                     */
                    bool HostHasBeenSet() const;

                    /**
                     * 获取The information of the live stream to clip.
<li>The video clip is cut from the original stream by default.</li>
<li>If `Type` of `StreamInfo` is set to `Transcoding`, the video clip will be cut from the output stream of the transcoding template specified by `TemplateId`.</li>
                     * @return StreamInfo The information of the live stream to clip.
<li>The video clip is cut from the original stream by default.</li>
<li>If `Type` of `StreamInfo` is set to `Transcoding`, the video clip will be cut from the output stream of the transcoding template specified by `TemplateId`.</li>
                     * 
                     */
                    LiveRealTimeClipStreamInfo GetStreamInfo() const;

                    /**
                     * 设置The information of the live stream to clip.
<li>The video clip is cut from the original stream by default.</li>
<li>If `Type` of `StreamInfo` is set to `Transcoding`, the video clip will be cut from the output stream of the transcoding template specified by `TemplateId`.</li>
                     * @param _streamInfo The information of the live stream to clip.
<li>The video clip is cut from the original stream by default.</li>
<li>If `Type` of `StreamInfo` is set to `Transcoding`, the video clip will be cut from the output stream of the transcoding template specified by `TemplateId`.</li>
                     * 
                     */
                    void SetStreamInfo(const LiveRealTimeClipStreamInfo& _streamInfo);

                    /**
                     * 判断参数 StreamInfo 是否已赋值
                     * @return StreamInfo 是否已赋值
                     * 
                     */
                    bool StreamInfoHasBeenSet() const;

                    /**
                     * 获取Reserved field. Do not enter a value for it.
                     * @return ExtInfo Reserved field. Do not enter a value for it.
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置Reserved field. Do not enter a value for it.
                     * @param _extInfo Reserved field. Do not enter a value for it.
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
                     * The live stream code.
                     */
                    std::string m_streamId;
                    bool m_streamIdHasBeenSet;

                    /**
                     * Start time of stream clipping in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time of stream clipping in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <b>The VOD [application](https://www.tencentcloud.com/document/product/266/33987) ID. For customers who activate VOD service from December 25, 2023, if they want to access resources in a VOD application (whether it's the default application or a newly created one), they must fill in this field with the application ID.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Whether to clip persistently. 0: no, 1: yes. Default: no.
                     */
                    int64_t m_isPersistence;
                    bool m_isPersistenceHasBeenSet;

                    /**
                     * Storage expiration time of video generated by persistent clipping in [ISO date format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I). `9999-12-31T23:59:59Z` means `never expire`. After the expiration, the media file and its related resources (such as transcoding results and image sprites) will be permanently deleted. This parameter will be valid only when `IsPersistence` is 1. By default, the video will never expire.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * VOD task flow processing for video generated by persistent clipping. For more information, please see [Specifying Task Flow After Upload](https://intl.cloud.tencent.com/document/product/266/9759?from_cn_redirect=1). This parameter will be valid only when `IsPersistence` is 1.
                     */
                    std::string m_procedure;
                    bool m_procedureHasBeenSet;

                    /**
                     * The ID of the media file's category. You can use the [CreateClass](https://intl.cloud.tencent.com/document/product/266/7812?from_cn_redirect=1) API to create a category and get the category ID.
<li>The default value is `0`, which means the "Other" category.</li>
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

                    /**
                     * Whether the metadata of clipped video needs to be returned. 0: no, 1: yes. Default value: no.
                     */
                    uint64_t m_metaDataRequired;
                    bool m_metaDataRequiredHasBeenSet;

                    /**
                     * Domain name used for live clipping. Time shifting must be enabled in LVB.
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * The information of the live stream to clip.
<li>The video clip is cut from the original stream by default.</li>
<li>If `Type` of `StreamInfo` is set to `Transcoding`, the video clip will be cut from the output stream of the transcoding template specified by `TemplateId`.</li>
                     */
                    LiveRealTimeClipStreamInfo m_streamInfo;
                    bool m_streamInfoHasBeenSet;

                    /**
                     * Reserved field. Do not enter a value for it.
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_LIVEREALTIMECLIPREQUEST_H_
