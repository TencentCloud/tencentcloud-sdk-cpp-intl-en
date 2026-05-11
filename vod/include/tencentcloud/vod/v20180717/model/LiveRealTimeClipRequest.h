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
                     * 获取Push stream live code.
                     * @return StreamId Push stream live code.
                     * 
                     */
                    std::string GetStreamId() const;

                    /**
                     * 设置Push stream live code.
                     * @param _streamId Push stream live code.
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
                     * 获取Start time of stream clipping. Format reference [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return StartTime Start time of stream clipping. Format reference [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置Start time of stream clipping. Format reference [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _startTime Start time of stream clipping. Format reference [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
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
                     * 获取End time of stream clipping. Format reference [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return EndTime End time of stream clipping. Format reference [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置End time of stream clipping. Format reference [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _endTime End time of stream clipping. Format reference [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
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
                     * 获取<b>VOD [app](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who have enabled VOD since December 25, 2023, to access resources in an VOD application (whether it is a default application or a newly created application), this field must be filled in as the application ID. </b>
                     * @return SubAppId <b>VOD [app](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who have enabled VOD since December 25, 2023, to access resources in an VOD application (whether it is a default application or a newly created application), this field must be filled in as the application ID. </b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>VOD [app](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who have enabled VOD since December 25, 2023, to access resources in an VOD application (whether it is a default application or a newly created application), this field must be filled in as the application ID. </b>
                     * @param _subAppId <b>VOD [app](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who have enabled VOD since December 25, 2023, to access resources in an VOD application (whether it is a default application or a newly created application), this field must be filled in as the application ID. </b>
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
                     * 获取Whether solidified. 0 not solidified, 1 solidified. Default non-permanent.
                     * @return IsPersistence Whether solidified. 0 not solidified, 1 solidified. Default non-permanent.
                     * 
                     */
                    int64_t GetIsPersistence() const;

                    /**
                     * 设置Whether solidified. 0 not solidified, 1 solidified. Default non-permanent.
                     * @param _isPersistence Whether solidified. 0 not solidified, 1 solidified. Default non-permanent.
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
                     * 获取Video storage expiry time after editing solidification. Format reference [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I). Enter "9999-12-31T23:59:59Z" to indicate the video never expires. After expiry, the media file and its related resources (transcoding result, sprites) will be permanently deleted. Valid at that time only when IsPersistence is 1. The default video editing never expires.
                     * @return ExpireTime Video storage expiry time after editing solidification. Format reference [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I). Enter "9999-12-31T23:59:59Z" to indicate the video never expires. After expiry, the media file and its related resources (transcoding result, sprites) will be permanently deleted. Valid at that time only when IsPersistence is 1. The default video editing never expires.
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Video storage expiry time after editing solidification. Format reference [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I). Enter "9999-12-31T23:59:59Z" to indicate the video never expires. After expiry, the media file and its related resources (transcoding result, sprites) will be permanently deleted. Valid at that time only when IsPersistence is 1. The default video editing never expires.
                     * @param _expireTime Video storage expiry time after editing solidification. Format reference [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I). Enter "9999-12-31T23:59:59Z" to indicate the video never expires. After expiry, the media file and its related resources (transcoding result, sprites) will be permanently deleted. Valid at that time only when IsPersistence is 1. The default video editing never expires.
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
                     * 获取Post-editing Solidified Video On-demand Task Flow Processing. For details, see [upload specified task flow](https://www.tencentcloud.com/document/product/266/9759?from_cn_redirect=1). Valid only when IsPersistence is 1.
                     * @return Procedure Post-editing Solidified Video On-demand Task Flow Processing. For details, see [upload specified task flow](https://www.tencentcloud.com/document/product/266/9759?from_cn_redirect=1). Valid only when IsPersistence is 1.
                     * 
                     */
                    std::string GetProcedure() const;

                    /**
                     * 设置Post-editing Solidified Video On-demand Task Flow Processing. For details, see [upload specified task flow](https://www.tencentcloud.com/document/product/266/9759?from_cn_redirect=1). Valid only when IsPersistence is 1.
                     * @param _procedure Post-editing Solidified Video On-demand Task Flow Processing. For details, see [upload specified task flow](https://www.tencentcloud.com/document/product/266/9759?from_cn_redirect=1). Valid only when IsPersistence is 1.
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
                     * 获取Category ID, used to categorize and manage media. You can create a category and obtain the category ID via the [Create Category](https://www.tencentcloud.com/document/product/266/7812?from_cn_redirect=1) API.
<li>Default value: 0, indicating other categories.</li>
Valid when IsPersistence is 1.
                     * @return ClassId Category ID, used to categorize and manage media. You can create a category and obtain the category ID via the [Create Category](https://www.tencentcloud.com/document/product/266/7812?from_cn_redirect=1) API.
<li>Default value: 0, indicating other categories.</li>
Valid when IsPersistence is 1.
                     * 
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置Category ID, used to categorize and manage media. You can create a category and obtain the category ID via the [Create Category](https://www.tencentcloud.com/document/product/266/7812?from_cn_redirect=1) API.
<li>Default value: 0, indicating other categories.</li>
Valid when IsPersistence is 1.
                     * @param _classId Category ID, used to categorize and manage media. You can create a category and obtain the category ID via the [Create Category](https://www.tencentcloud.com/document/product/266/7812?from_cn_redirect=1) API.
<li>Default value: 0, indicating other categories.</li>
Valid when IsPersistence is 1.
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
                     * 获取Source context, used for passing through user request information. The [callback on upload completion](https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) will return the value of this field, up to 250 characters. Valid only when IsPersistence is 1.
                     * @return SourceContext Source context, used for passing through user request information. The [callback on upload completion](https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) will return the value of this field, up to 250 characters. Valid only when IsPersistence is 1.
                     * 
                     */
                    std::string GetSourceContext() const;

                    /**
                     * 设置Source context, used for passing through user request information. The [callback on upload completion](https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) will return the value of this field, up to 250 characters. Valid only when IsPersistence is 1.
                     * @param _sourceContext Source context, used for passing through user request information. The [callback on upload completion](https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) will return the value of this field, up to 250 characters. Valid only when IsPersistence is 1.
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
                     * 获取Session context, used to pass through user request information. When specifying the Procedure parameter, the [task flow status change callback](https://www.tencentcloud.com/document/product/266/9636?from_cn_redirect=1) will return the value of this field, up to 1000 characters. Valid at that time only when IsPersistence is 1.
                     * @return SessionContext Session context, used to pass through user request information. When specifying the Procedure parameter, the [task flow status change callback](https://www.tencentcloud.com/document/product/266/9636?from_cn_redirect=1) will return the value of this field, up to 1000 characters. Valid at that time only when IsPersistence is 1.
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置Session context, used to pass through user request information. When specifying the Procedure parameter, the [task flow status change callback](https://www.tencentcloud.com/document/product/266/9636?from_cn_redirect=1) will return the value of this field, up to 1000 characters. Valid at that time only when IsPersistence is 1.
                     * @param _sessionContext Session context, used to pass through user request information. When specifying the Procedure parameter, the [task flow status change callback](https://www.tencentcloud.com/document/product/266/9636?from_cn_redirect=1) will return the value of this field, up to 1000 characters. Valid at that time only when IsPersistence is 1.
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
                     * 获取Whether to return edited video metadata. 0: not required, 1: required. By default, does not need.
                     * @return MetaDataRequired Whether to return edited video metadata. 0: not required, 1: required. By default, does not need.
                     * 
                     */
                    uint64_t GetMetaDataRequired() const;

                    /**
                     * 设置Whether to return edited video metadata. 0: not required, 1: required. By default, does not need.
                     * @param _metaDataRequired Whether to return edited video metadata. 0: not required, 1: required. By default, does not need.
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
                     * 获取The domain name added in VOD for time shift playback must be associated with a recording template and have the time-shift service enabled in Cloud Streaming Services (https://www.tencentcloud.com/document/product/266/52220?from_cn_redirect=1#.E6.AD.A5.E9.AA.A43.EF.BC.9A.E5.85.B3.E8.81.94.E5.BD.95.E5.88.B6.E6.A8.A1.E6.9D.BF.3Ca-id.3D.22step3.22.3E.3C.2Fa.3E). **If the first call time of this interface is after 2021-01-01T00:00:00Z, this field is a required field.**
                     * @return Host The domain name added in VOD for time shift playback must be associated with a recording template and have the time-shift service enabled in Cloud Streaming Services (https://www.tencentcloud.com/document/product/266/52220?from_cn_redirect=1#.E6.AD.A5.E9.AA.A43.EF.BC.9A.E5.85.B3.E8.81.94.E5.BD.95.E5.88.B6.E6.A8.A1.E6.9D.BF.3Ca-id.3D.22step3.22.3E.3C.2Fa.3E). **If the first call time of this interface is after 2021-01-01T00:00:00Z, this field is a required field.**
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置The domain name added in VOD for time shift playback must be associated with a recording template and have the time-shift service enabled in Cloud Streaming Services (https://www.tencentcloud.com/document/product/266/52220?from_cn_redirect=1#.E6.AD.A5.E9.AA.A43.EF.BC.9A.E5.85.B3.E8.81.94.E5.BD.95.E5.88.B6.E6.A8.A1.E6.9D.BF.3Ca-id.3D.22step3.22.3E.3C.2Fa.3E). **If the first call time of this interface is after 2021-01-01T00:00:00Z, this field is a required field.**
                     * @param _host The domain name added in VOD for time shift playback must be associated with a recording template and have the time-shift service enabled in Cloud Streaming Services (https://www.tencentcloud.com/document/product/266/52220?from_cn_redirect=1#.E6.AD.A5.E9.AA.A43.EF.BC.9A.E5.85.B3.E8.81.94.E5.BD.95.E5.88.B6.E6.A8.A1.E6.9D.BF.3Ca-id.3D.22step3.22.3E.3C.2Fa.3E). **If the first call time of this interface is after 2021-01-01T00:00:00Z, this field is a required field.**
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
                     * 获取Edited live stream information
<li>Default video editing for the original stream.</li>
<li>When the Type specified in StreamInfo is Transcoding, edit the live streaming transcoding stream corresponding to TemplateId.</li>
                     * @return StreamInfo Edited live stream information
<li>Default video editing for the original stream.</li>
<li>When the Type specified in StreamInfo is Transcoding, edit the live streaming transcoding stream corresponding to TemplateId.</li>
                     * 
                     */
                    LiveRealTimeClipStreamInfo GetStreamInfo() const;

                    /**
                     * 设置Edited live stream information
<li>Default video editing for the original stream.</li>
<li>When the Type specified in StreamInfo is Transcoding, edit the live streaming transcoding stream corresponding to TemplateId.</li>
                     * @param _streamInfo Edited live stream information
<li>Default video editing for the original stream.</li>
<li>When the Type specified in StreamInfo is Transcoding, edit the live streaming transcoding stream corresponding to TemplateId.</li>
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
                     * 获取System reserved field. Do not fill in.
                     * @return ExtInfo System reserved field. Do not fill in.
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置System reserved field. Do not fill in.
                     * @param _extInfo System reserved field. Do not fill in.
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
                     * Push stream live code.
                     */
                    std::string m_streamId;
                    bool m_streamIdHasBeenSet;

                    /**
                     * Start time of stream clipping. Format reference [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * End time of stream clipping. Format reference [ISO date format description](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <b>VOD [app](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. For customers who have enabled VOD since December 25, 2023, to access resources in an VOD application (whether it is a default application or a newly created application), this field must be filled in as the application ID. </b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Whether solidified. 0 not solidified, 1 solidified. Default non-permanent.
                     */
                    int64_t m_isPersistence;
                    bool m_isPersistenceHasBeenSet;

                    /**
                     * Video storage expiry time after editing solidification. Format reference [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I). Enter "9999-12-31T23:59:59Z" to indicate the video never expires. After expiry, the media file and its related resources (transcoding result, sprites) will be permanently deleted. Valid at that time only when IsPersistence is 1. The default video editing never expires.
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Post-editing Solidified Video On-demand Task Flow Processing. For details, see [upload specified task flow](https://www.tencentcloud.com/document/product/266/9759?from_cn_redirect=1). Valid only when IsPersistence is 1.
                     */
                    std::string m_procedure;
                    bool m_procedureHasBeenSet;

                    /**
                     * Category ID, used to categorize and manage media. You can create a category and obtain the category ID via the [Create Category](https://www.tencentcloud.com/document/product/266/7812?from_cn_redirect=1) API.
<li>Default value: 0, indicating other categories.</li>
Valid when IsPersistence is 1.
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * Source context, used for passing through user request information. The [callback on upload completion](https://www.tencentcloud.com/document/product/266/7830?from_cn_redirect=1) will return the value of this field, up to 250 characters. Valid only when IsPersistence is 1.
                     */
                    std::string m_sourceContext;
                    bool m_sourceContextHasBeenSet;

                    /**
                     * Session context, used to pass through user request information. When specifying the Procedure parameter, the [task flow status change callback](https://www.tencentcloud.com/document/product/266/9636?from_cn_redirect=1) will return the value of this field, up to 1000 characters. Valid at that time only when IsPersistence is 1.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * Whether to return edited video metadata. 0: not required, 1: required. By default, does not need.
                     */
                    uint64_t m_metaDataRequired;
                    bool m_metaDataRequiredHasBeenSet;

                    /**
                     * The domain name added in VOD for time shift playback must be associated with a recording template and have the time-shift service enabled in Cloud Streaming Services (https://www.tencentcloud.com/document/product/266/52220?from_cn_redirect=1#.E6.AD.A5.E9.AA.A43.EF.BC.9A.E5.85.B3.E8.81.94.E5.BD.95.E5.88.B6.E6.A8.A1.E6.9D.BF.3Ca-id.3D.22step3.22.3E.3C.2Fa.3E). **If the first call time of this interface is after 2021-01-01T00:00:00Z, this field is a required field.**
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * Edited live stream information
<li>Default video editing for the original stream.</li>
<li>When the Type specified in StreamInfo is Transcoding, edit the live streaming transcoding stream corresponding to TemplateId.</li>
                     */
                    LiveRealTimeClipStreamInfo m_streamInfo;
                    bool m_streamInfoHasBeenSet;

                    /**
                     * System reserved field. Do not fill in.
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_LIVEREALTIMECLIPREQUEST_H_
