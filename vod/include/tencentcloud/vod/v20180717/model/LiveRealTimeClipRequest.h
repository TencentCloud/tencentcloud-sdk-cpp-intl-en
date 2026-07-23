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
                     * 获取<p>Push stream live code.</p>
                     * @return StreamId <p>Push stream live code.</p>
                     * 
                     */
                    std::string GetStreamId() const;

                    /**
                     * 设置<p>Push stream live code.</p>
                     * @param _streamId <p>Push stream live code.</p>
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
                     * 获取<p>Start time of stream clipping. Format reference: <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format description</a>.</p>
                     * @return StartTime <p>Start time of stream clipping. Format reference: <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format description</a>.</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>Start time of stream clipping. Format reference: <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format description</a>.</p>
                     * @param _startTime <p>Start time of stream clipping. Format reference: <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format description</a>.</p>
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
                     * 获取<p>The end time of stream clipping. Format reference <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format description</a>.</p>
                     * @return EndTime <p>The end time of stream clipping. Format reference <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format description</a>.</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>The end time of stream clipping. Format reference <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format description</a>.</p>
                     * @param _endTime <p>The end time of stream clipping. Format reference <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format description</a>.</p>
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
                     * 获取<p><b>Video-on-demand (VOD) <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether it is the default application or a newly created application).</b></p>
                     * @return SubAppId <p><b>Video-on-demand (VOD) <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether it is the default application or a newly created application).</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>Video-on-demand (VOD) <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether it is the default application or a newly created application).</b></p>
                     * @param _subAppId <p><b>Video-on-demand (VOD) <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether it is the default application or a newly created application).</b></p>
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
                     * 获取<p>Whether solidified. 0 for default non-permanent, 1 for solidified. Default non-permanent.</p>
                     * @return IsPersistence <p>Whether solidified. 0 for default non-permanent, 1 for solidified. Default non-permanent.</p>
                     * 
                     */
                    int64_t GetIsPersistence() const;

                    /**
                     * 设置<p>Whether solidified. 0 for default non-permanent, 1 for solidified. Default non-permanent.</p>
                     * @param _isPersistence <p>Whether solidified. 0 for default non-permanent, 1 for solidified. Default non-permanent.</p>
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
                     * 获取<p>Video storage expiry time after editing solidification. Format reference <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>. Enter "9999-12-31T23:59:59Z" to indicate the video never expires. After expiry, the media file and its related resources (transcoding result, sprites) will be permanently deleted. Valid at that time only when IsPersistence is 1. The default video editing never expires.</p>
                     * @return ExpireTime <p>Video storage expiry time after editing solidification. Format reference <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>. Enter "9999-12-31T23:59:59Z" to indicate the video never expires. After expiry, the media file and its related resources (transcoding result, sprites) will be permanently deleted. Valid at that time only when IsPersistence is 1. The default video editing never expires.</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>Video storage expiry time after editing solidification. Format reference <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>. Enter "9999-12-31T23:59:59Z" to indicate the video never expires. After expiry, the media file and its related resources (transcoding result, sprites) will be permanently deleted. Valid at that time only when IsPersistence is 1. The default video editing never expires.</p>
                     * @param _expireTime <p>Video storage expiry time after editing solidification. Format reference <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>. Enter "9999-12-31T23:59:59Z" to indicate the video never expires. After expiry, the media file and its related resources (transcoding result, sprites) will be permanently deleted. Valid at that time only when IsPersistence is 1. The default video editing never expires.</p>
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
                     * 获取<p>Post-editing Solidified Video On-demand Task Flow Processing. For details, see <a href="https://www.tencentcloud.com/document/product/266/9759?from_cn_redirect=1">upload specified task flow</a>. Valid when IsPersistence is 1.</p>
                     * @return Procedure <p>Post-editing Solidified Video On-demand Task Flow Processing. For details, see <a href="https://www.tencentcloud.com/document/product/266/9759?from_cn_redirect=1">upload specified task flow</a>. Valid when IsPersistence is 1.</p>
                     * 
                     */
                    std::string GetProcedure() const;

                    /**
                     * 设置<p>Post-editing Solidified Video On-demand Task Flow Processing. For details, see <a href="https://www.tencentcloud.com/document/product/266/9759?from_cn_redirect=1">upload specified task flow</a>. Valid when IsPersistence is 1.</p>
                     * @param _procedure <p>Post-editing Solidified Video On-demand Task Flow Processing. For details, see <a href="https://www.tencentcloud.com/document/product/266/9759?from_cn_redirect=1">upload specified task flow</a>. Valid when IsPersistence is 1.</p>
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
                     * 获取<p>Category ID, used to categorize and manage media. You can create a category and obtain the category ID via the <a href="/document/product/266/31772?from_cn_redirect=1">Create Category</a> API.</p><li>Default value: 0, indicating other categories.</li>Valid at that time only when IsPersistence is 1.
                     * @return ClassId <p>Category ID, used to categorize and manage media. You can create a category and obtain the category ID via the <a href="/document/product/266/31772?from_cn_redirect=1">Create Category</a> API.</p><li>Default value: 0, indicating other categories.</li>Valid at that time only when IsPersistence is 1.
                     * 
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置<p>Category ID, used to categorize and manage media. You can create a category and obtain the category ID via the <a href="/document/product/266/31772?from_cn_redirect=1">Create Category</a> API.</p><li>Default value: 0, indicating other categories.</li>Valid at that time only when IsPersistence is 1.
                     * @param _classId <p>Category ID, used to categorize and manage media. You can create a category and obtain the category ID via the <a href="/document/product/266/31772?from_cn_redirect=1">Create Category</a> API.</p><li>Default value: 0, indicating other categories.</li>Valid at that time only when IsPersistence is 1.
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
                     * 获取<p>Source context. This is used to pass user request information. The <a href="/document/product/266/7830?from_cn_redirect=1">upload completion callback</a> returns the value of this field. The maximum length is 250 characters. Valid only when IsPersistence is 1.</p>
                     * @return SourceContext <p>Source context. This is used to pass user request information. The <a href="/document/product/266/7830?from_cn_redirect=1">upload completion callback</a> returns the value of this field. The maximum length is 250 characters. Valid only when IsPersistence is 1.</p>
                     * 
                     */
                    std::string GetSourceContext() const;

                    /**
                     * 设置<p>Source context. This is used to pass user request information. The <a href="/document/product/266/7830?from_cn_redirect=1">upload completion callback</a> returns the value of this field. The maximum length is 250 characters. Valid only when IsPersistence is 1.</p>
                     * @param _sourceContext <p>Source context. This is used to pass user request information. The <a href="/document/product/266/7830?from_cn_redirect=1">upload completion callback</a> returns the value of this field. The maximum length is 250 characters. Valid only when IsPersistence is 1.</p>
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
                     * 获取<p>Session context. This is used to pass through user request information. When specifying the Procedure parameter, the <a href="/document/product/266/9636?from_cn_redirect=1">task flow status change callback</a> returns the value of this field. The maximum length is 1000 characters. Valid only when IsPersistence is 1.</p>
                     * @return SessionContext <p>Session context. This is used to pass through user request information. When specifying the Procedure parameter, the <a href="/document/product/266/9636?from_cn_redirect=1">task flow status change callback</a> returns the value of this field. The maximum length is 1000 characters. Valid only when IsPersistence is 1.</p>
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置<p>Session context. This is used to pass through user request information. When specifying the Procedure parameter, the <a href="/document/product/266/9636?from_cn_redirect=1">task flow status change callback</a> returns the value of this field. The maximum length is 1000 characters. Valid only when IsPersistence is 1.</p>
                     * @param _sessionContext <p>Session context. This is used to pass through user request information. When specifying the Procedure parameter, the <a href="/document/product/266/9636?from_cn_redirect=1">task flow status change callback</a> returns the value of this field. The maximum length is 1000 characters. Valid only when IsPersistence is 1.</p>
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
                     * 获取<p>Whether to return edited video metadata. 0: not required, 1: required. By default, does not need.</p>
                     * @return MetaDataRequired <p>Whether to return edited video metadata. 0: not required, 1: required. By default, does not need.</p>
                     * 
                     */
                    uint64_t GetMetaDataRequired() const;

                    /**
                     * 设置<p>Whether to return edited video metadata. 0: not required, 1: required. By default, does not need.</p>
                     * @param _metaDataRequired <p>Whether to return edited video metadata. 0: not required, 1: required. By default, does not need.</p>
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
                     * 获取<p>The domain name added in VOD for time-shifting playback must have <a href="https://www.tencentcloud.com/document/product/266/52220?from_cn_redirect=1#.E6.AD.A5.E9.AA.A43.EF.BC.9A.E5.85.B3.E8.81.94.E5.BD.95.E5.88.B6.E6.A8.A1.E6.9D.BF.3Ca-id.3D.22step3.22.3E.3C.2Fa.3E">recording template binding and time-shift service enabled</a> in Cloud Streaming Services. <strong>If the first call time of this interface is after 2021-01-01T00:00:00Z, this field is a required field.</strong></p>
                     * @return Host <p>The domain name added in VOD for time-shifting playback must have <a href="https://www.tencentcloud.com/document/product/266/52220?from_cn_redirect=1#.E6.AD.A5.E9.AA.A43.EF.BC.9A.E5.85.B3.E8.81.94.E5.BD.95.E5.88.B6.E6.A8.A1.E6.9D.BF.3Ca-id.3D.22step3.22.3E.3C.2Fa.3E">recording template binding and time-shift service enabled</a> in Cloud Streaming Services. <strong>If the first call time of this interface is after 2021-01-01T00:00:00Z, this field is a required field.</strong></p>
                     * 
                     */
                    std::string GetHost() const;

                    /**
                     * 设置<p>The domain name added in VOD for time-shifting playback must have <a href="https://www.tencentcloud.com/document/product/266/52220?from_cn_redirect=1#.E6.AD.A5.E9.AA.A43.EF.BC.9A.E5.85.B3.E8.81.94.E5.BD.95.E5.88.B6.E6.A8.A1.E6.9D.BF.3Ca-id.3D.22step3.22.3E.3C.2Fa.3E">recording template binding and time-shift service enabled</a> in Cloud Streaming Services. <strong>If the first call time of this interface is after 2021-01-01T00:00:00Z, this field is a required field.</strong></p>
                     * @param _host <p>The domain name added in VOD for time-shifting playback must have <a href="https://www.tencentcloud.com/document/product/266/52220?from_cn_redirect=1#.E6.AD.A5.E9.AA.A43.EF.BC.9A.E5.85.B3.E8.81.94.E5.BD.95.E5.88.B6.E6.A8.A1.E6.9D.BF.3Ca-id.3D.22step3.22.3E.3C.2Fa.3E">recording template binding and time-shift service enabled</a> in Cloud Streaming Services. <strong>If the first call time of this interface is after 2021-01-01T00:00:00Z, this field is a required field.</strong></p>
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
                     * 获取<p>Live stream information for editing:</p><li>Edit the original stream by default.</li><li>When the Type specified in StreamInfo is Transcoding, edit the live streaming transcoding corresponding to TemplateId.</li>
                     * @return StreamInfo <p>Live stream information for editing:</p><li>Edit the original stream by default.</li><li>When the Type specified in StreamInfo is Transcoding, edit the live streaming transcoding corresponding to TemplateId.</li>
                     * 
                     */
                    LiveRealTimeClipStreamInfo GetStreamInfo() const;

                    /**
                     * 设置<p>Live stream information for editing:</p><li>Edit the original stream by default.</li><li>When the Type specified in StreamInfo is Transcoding, edit the live streaming transcoding corresponding to TemplateId.</li>
                     * @param _streamInfo <p>Live stream information for editing:</p><li>Edit the original stream by default.</li><li>When the Type specified in StreamInfo is Transcoding, edit the live streaming transcoding corresponding to TemplateId.</li>
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
                     * 获取<p>System reserved field. Do not fill in.</p>
                     * @return ExtInfo <p>System reserved field. Do not fill in.</p>
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置<p>System reserved field. Do not fill in.</p>
                     * @param _extInfo <p>System reserved field. Do not fill in.</p>
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
                     * <p>Push stream live code.</p>
                     */
                    std::string m_streamId;
                    bool m_streamIdHasBeenSet;

                    /**
                     * <p>Start time of stream clipping. Format reference: <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format description</a>.</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>The end time of stream clipping. Format reference <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format description</a>.</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p><b>Video-on-demand (VOD) <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether it is the default application or a newly created application).</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>Whether solidified. 0 for default non-permanent, 1 for solidified. Default non-permanent.</p>
                     */
                    int64_t m_isPersistence;
                    bool m_isPersistenceHasBeenSet;

                    /**
                     * <p>Video storage expiry time after editing solidification. Format reference <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format</a>. Enter "9999-12-31T23:59:59Z" to indicate the video never expires. After expiry, the media file and its related resources (transcoding result, sprites) will be permanently deleted. Valid at that time only when IsPersistence is 1. The default video editing never expires.</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>Post-editing Solidified Video On-demand Task Flow Processing. For details, see <a href="https://www.tencentcloud.com/document/product/266/9759?from_cn_redirect=1">upload specified task flow</a>. Valid when IsPersistence is 1.</p>
                     */
                    std::string m_procedure;
                    bool m_procedureHasBeenSet;

                    /**
                     * <p>Category ID, used to categorize and manage media. You can create a category and obtain the category ID via the <a href="/document/product/266/31772?from_cn_redirect=1">Create Category</a> API.</p><li>Default value: 0, indicating other categories.</li>Valid at that time only when IsPersistence is 1.
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * <p>Source context. This is used to pass user request information. The <a href="/document/product/266/7830?from_cn_redirect=1">upload completion callback</a> returns the value of this field. The maximum length is 250 characters. Valid only when IsPersistence is 1.</p>
                     */
                    std::string m_sourceContext;
                    bool m_sourceContextHasBeenSet;

                    /**
                     * <p>Session context. This is used to pass through user request information. When specifying the Procedure parameter, the <a href="/document/product/266/9636?from_cn_redirect=1">task flow status change callback</a> returns the value of this field. The maximum length is 1000 characters. Valid only when IsPersistence is 1.</p>
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * <p>Whether to return edited video metadata. 0: not required, 1: required. By default, does not need.</p>
                     */
                    uint64_t m_metaDataRequired;
                    bool m_metaDataRequiredHasBeenSet;

                    /**
                     * <p>The domain name added in VOD for time-shifting playback must have <a href="https://www.tencentcloud.com/document/product/266/52220?from_cn_redirect=1#.E6.AD.A5.E9.AA.A43.EF.BC.9A.E5.85.B3.E8.81.94.E5.BD.95.E5.88.B6.E6.A8.A1.E6.9D.BF.3Ca-id.3D.22step3.22.3E.3C.2Fa.3E">recording template binding and time-shift service enabled</a> in Cloud Streaming Services. <strong>If the first call time of this interface is after 2021-01-01T00:00:00Z, this field is a required field.</strong></p>
                     */
                    std::string m_host;
                    bool m_hostHasBeenSet;

                    /**
                     * <p>Live stream information for editing:</p><li>Edit the original stream by default.</li><li>When the Type specified in StreamInfo is Transcoding, edit the live streaming transcoding corresponding to TemplateId.</li>
                     */
                    LiveRealTimeClipStreamInfo m_streamInfo;
                    bool m_streamInfoHasBeenSet;

                    /**
                     * <p>System reserved field. Do not fill in.</p>
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_LIVEREALTIMECLIPREQUEST_H_
