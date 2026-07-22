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
                     * 获取<p>Tencent Cloud Video on Demand (VOD) HLS video URL that needs to crop.</p>
                     * @return Url <p>Tencent Cloud Video on Demand (VOD) HLS video URL that needs to crop.</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>Tencent Cloud Video on Demand (VOD) HLS video URL that needs to crop.</p>
                     * @param _url <p>Tencent Cloud Video on Demand (VOD) HLS video URL that needs to crop.</p>
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
                     * 获取<p><b>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether it is the default application or a newly created application).</b></p>
                     * @return SubAppId <p><b>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether it is the default application or a newly created application).</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether it is the default application or a newly created application).</b></p>
                     * @param _subAppId <p><b>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether it is the default application or a newly created application).</b></p>
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
                     * 获取<p>Crop start offset time in seconds. Default is 0, crop from the beginning of the video. Negative numbers indicate how many seconds from the end of the video to start cropping. For example, -10 means start trimming from 10 seconds before the end.</p>
                     * @return StartTimeOffset <p>Crop start offset time in seconds. Default is 0, crop from the beginning of the video. Negative numbers indicate how many seconds from the end of the video to start cropping. For example, -10 means start trimming from 10 seconds before the end.</p>
                     * 
                     */
                    double GetStartTimeOffset() const;

                    /**
                     * 设置<p>Crop start offset time in seconds. Default is 0, crop from the beginning of the video. Negative numbers indicate how many seconds from the end of the video to start cropping. For example, -10 means start trimming from 10 seconds before the end.</p>
                     * @param _startTimeOffset <p>Crop start offset time in seconds. Default is 0, crop from the beginning of the video. Negative numbers indicate how many seconds from the end of the video to start cropping. For example, -10 means start trimming from 10 seconds before the end.</p>
                     * 
                     */
                    void SetStartTimeOffset(const double& _startTimeOffset);

                    /**
                     * 判断参数 StartTimeOffset 是否已赋值
                     * @return StartTimeOffset 是否已赋值
                     * 
                     */
                    bool StartTimeOffsetHasBeenSet() const;

                    /**
                     * 获取<p>Crop end offset time in seconds. Default is 0, which means crop to the end of the video. Negative numbers indicate how many seconds from the end of the video to end trimming. For example, -10 means end trimming at 10 seconds before the end.</p>
                     * @return EndTimeOffset <p>Crop end offset time in seconds. Default is 0, which means crop to the end of the video. Negative numbers indicate how many seconds from the end of the video to end trimming. For example, -10 means end trimming at 10 seconds before the end.</p>
                     * 
                     */
                    double GetEndTimeOffset() const;

                    /**
                     * 设置<p>Crop end offset time in seconds. Default is 0, which means crop to the end of the video. Negative numbers indicate how many seconds from the end of the video to end trimming. For example, -10 means end trimming at 10 seconds before the end.</p>
                     * @param _endTimeOffset <p>Crop end offset time in seconds. Default is 0, which means crop to the end of the video. Negative numbers indicate how many seconds from the end of the video to end trimming. For example, -10 means end trimming at 10 seconds before the end.</p>
                     * 
                     */
                    void SetEndTimeOffset(const double& _endTimeOffset);

                    /**
                     * 判断参数 EndTimeOffset 是否已赋值
                     * @return EndTimeOffset 是否已赋值
                     * 
                     */
                    bool EndTimeOffsetHasBeenSet() const;

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
                     * 获取<p>Post-editing Solidified Video On-demand Task Flow Processing. For details, see <a href="https://www.tencentcloud.com/document/product/266/9759?from_cn_redirect=1">upload specified task flow</a>. Valid only when IsPersistence is 1.</p>
                     * @return Procedure <p>Post-editing Solidified Video On-demand Task Flow Processing. For details, see <a href="https://www.tencentcloud.com/document/product/266/9759?from_cn_redirect=1">upload specified task flow</a>. Valid only when IsPersistence is 1.</p>
                     * 
                     */
                    std::string GetProcedure() const;

                    /**
                     * 设置<p>Post-editing Solidified Video On-demand Task Flow Processing. For details, see <a href="https://www.tencentcloud.com/document/product/266/9759?from_cn_redirect=1">upload specified task flow</a>. Valid only when IsPersistence is 1.</p>
                     * @param _procedure <p>Post-editing Solidified Video On-demand Task Flow Processing. For details, see <a href="https://www.tencentcloud.com/document/product/266/9759?from_cn_redirect=1">upload specified task flow</a>. Valid only when IsPersistence is 1.</p>
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
                     * 获取<p>Category ID, used to categorize and manage media. You can create a category and obtain the category ID via the <a href="/document/product/266/31772">create category</a> API.</p><li>Default value: 0, indicating other categories.</li>Valid only when IsPersistence is 1.
                     * @return ClassId <p>Category ID, used to categorize and manage media. You can create a category and obtain the category ID via the <a href="/document/product/266/31772">create category</a> API.</p><li>Default value: 0, indicating other categories.</li>Valid only when IsPersistence is 1.
                     * 
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置<p>Category ID, used to categorize and manage media. You can create a category and obtain the category ID via the <a href="/document/product/266/31772">create category</a> API.</p><li>Default value: 0, indicating other categories.</li>Valid only when IsPersistence is 1.
                     * @param _classId <p>Category ID, used to categorize and manage media. You can create a category and obtain the category ID via the <a href="/document/product/266/31772">create category</a> API.</p><li>Default value: 0, indicating other categories.</li>Valid only when IsPersistence is 1.
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
                     * 获取<p>Source context. This is used to pass through user request information. The <a href="/document/product/266/7830">upload completion callback</a> returns the value of this field. The maximum length is 250 characters. Valid when IsPersistence is 1.</p>
                     * @return SourceContext <p>Source context. This is used to pass through user request information. The <a href="/document/product/266/7830">upload completion callback</a> returns the value of this field. The maximum length is 250 characters. Valid when IsPersistence is 1.</p>
                     * 
                     */
                    std::string GetSourceContext() const;

                    /**
                     * 设置<p>Source context. This is used to pass through user request information. The <a href="/document/product/266/7830">upload completion callback</a> returns the value of this field. The maximum length is 250 characters. Valid when IsPersistence is 1.</p>
                     * @param _sourceContext <p>Source context. This is used to pass through user request information. The <a href="/document/product/266/7830">upload completion callback</a> returns the value of this field. The maximum length is 250 characters. Valid when IsPersistence is 1.</p>
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
                     * 获取<p>Session context. This is used to pass through user request information. When specifying the Procedure parameter, the <a href="/document/product/266/9636">task flow status change callback</a> returns the value of this field. The maximum length is 1000 characters. Valid only when IsPersistence is 1.</p>
                     * @return SessionContext <p>Session context. This is used to pass through user request information. When specifying the Procedure parameter, the <a href="/document/product/266/9636">task flow status change callback</a> returns the value of this field. The maximum length is 1000 characters. Valid only when IsPersistence is 1.</p>
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置<p>Session context. This is used to pass through user request information. When specifying the Procedure parameter, the <a href="/document/product/266/9636">task flow status change callback</a> returns the value of this field. The maximum length is 1000 characters. Valid only when IsPersistence is 1.</p>
                     * @param _sessionContext <p>Session context. This is used to pass through user request information. When specifying the Procedure parameter, the <a href="/document/product/266/9636">task flow status change callback</a> returns the value of this field. The maximum length is 1000 characters. Valid only when IsPersistence is 1.</p>
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
                     * 获取<p>Deprecated.</p>
                     * @return Precision <p>Deprecated.</p>
                     * @deprecated
                     */
                    std::string GetPrecision() const;

                    /**
                     * 设置<p>Deprecated.</p>
                     * @param _precision <p>Deprecated.</p>
                     * @deprecated
                     */
                    void SetPrecision(const std::string& _precision);

                    /**
                     * 判断参数 Precision 是否已赋值
                     * @return Precision 是否已赋值
                     * @deprecated
                     */
                    bool PrecisionHasBeenSet() const;

                    /**
                     * 获取<p>Output video type. Valid values: <li>hls: Output hls file.</li>Default value hls.</p>
                     * @return OutputMediaType <p>Output video type. Valid values: <li>hls: Output hls file.</li>Default value hls.</p>
                     * 
                     */
                    std::string GetOutputMediaType() const;

                    /**
                     * 设置<p>Output video type. Valid values: <li>hls: Output hls file.</li>Default value hls.</p>
                     * @param _outputMediaType <p>Output video type. Valid values: <li>hls: Output hls file.</li>Default value hls.</p>
                     * 
                     */
                    void SetOutputMediaType(const std::string& _outputMediaType);

                    /**
                     * 判断参数 OutputMediaType 是否已赋值
                     * @return OutputMediaType 是否已赋值
                     * 
                     */
                    bool OutputMediaTypeHasBeenSet() const;

                    /**
                     * 获取<p>Reserved field, used for special purpose. Example value: ""</p>
                     * @return ExtInfo <p>Reserved field, used for special purpose. Example value: ""</p>
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置<p>Reserved field, used for special purpose. Example value: ""</p>
                     * @param _extInfo <p>Reserved field, used for special purpose. Example value: ""</p>
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
                     * <p>Tencent Cloud Video on Demand (VOD) HLS video URL that needs to crop.</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p><b>Video-on-demand (VOD) <a href="/document/product/266/14574">application</a> ID. Customers who activate on-demand services from December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether it is the default application or a newly created application).</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>Crop start offset time in seconds. Default is 0, crop from the beginning of the video. Negative numbers indicate how many seconds from the end of the video to start cropping. For example, -10 means start trimming from 10 seconds before the end.</p>
                     */
                    double m_startTimeOffset;
                    bool m_startTimeOffsetHasBeenSet;

                    /**
                     * <p>Crop end offset time in seconds. Default is 0, which means crop to the end of the video. Negative numbers indicate how many seconds from the end of the video to end trimming. For example, -10 means end trimming at 10 seconds before the end.</p>
                     */
                    double m_endTimeOffset;
                    bool m_endTimeOffsetHasBeenSet;

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
                     * <p>Post-editing Solidified Video On-demand Task Flow Processing. For details, see <a href="https://www.tencentcloud.com/document/product/266/9759?from_cn_redirect=1">upload specified task flow</a>. Valid only when IsPersistence is 1.</p>
                     */
                    std::string m_procedure;
                    bool m_procedureHasBeenSet;

                    /**
                     * <p>Category ID, used to categorize and manage media. You can create a category and obtain the category ID via the <a href="/document/product/266/31772">create category</a> API.</p><li>Default value: 0, indicating other categories.</li>Valid only when IsPersistence is 1.
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * <p>Source context. This is used to pass through user request information. The <a href="/document/product/266/7830">upload completion callback</a> returns the value of this field. The maximum length is 250 characters. Valid when IsPersistence is 1.</p>
                     */
                    std::string m_sourceContext;
                    bool m_sourceContextHasBeenSet;

                    /**
                     * <p>Session context. This is used to pass through user request information. When specifying the Procedure parameter, the <a href="/document/product/266/9636">task flow status change callback</a> returns the value of this field. The maximum length is 1000 characters. Valid only when IsPersistence is 1.</p>
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * <p>Deprecated.</p>
                     */
                    std::string m_precision;
                    bool m_precisionHasBeenSet;

                    /**
                     * <p>Output video type. Valid values: <li>hls: Output hls file.</li>Default value hls.</p>
                     */
                    std::string m_outputMediaType;
                    bool m_outputMediaTypeHasBeenSet;

                    /**
                     * <p>Reserved field, used for special purpose. Example value: ""</p>
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SIMPLEHLSCLIPREQUEST_H_
