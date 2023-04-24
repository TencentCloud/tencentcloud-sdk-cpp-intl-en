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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PULLUPLOADREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PULLUPLOADREQUEST_H_

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
                * PullUpload request structure.
                */
                class PullUploadRequest : public AbstractModel
                {
                public:
                    PullUploadRequest();
                    ~PullUploadRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取The URL of the media to pull, which can be in HLS format, but not DASH format.
For more information about supported extensions, see [Media types](https://intl.cloud.tencent.com/document/product/266/9760#media-types). Please make sure the URL is accessible.
                     * @return MediaUrl The URL of the media to pull, which can be in HLS format, but not DASH format.
For more information about supported extensions, see [Media types](https://intl.cloud.tencent.com/document/product/266/9760#media-types). Please make sure the URL is accessible.
                     */
                    std::string GetMediaUrl() const;

                    /**
                     * 设置The URL of the media to pull, which can be in HLS format, but not DASH format.
For more information about supported extensions, see [Media types](https://intl.cloud.tencent.com/document/product/266/9760#media-types). Please make sure the URL is accessible.
                     * @param MediaUrl The URL of the media to pull, which can be in HLS format, but not DASH format.
For more information about supported extensions, see [Media types](https://intl.cloud.tencent.com/document/product/266/9760#media-types). Please make sure the URL is accessible.
                     */
                    void SetMediaUrl(const std::string& _mediaUrl);

                    /**
                     * 判断参数 MediaUrl 是否已赋值
                     * @return MediaUrl 是否已赋值
                     */
                    bool MediaUrlHasBeenSet() const;

                    /**
                     * 获取The file format (extension). For information about supported extensions, see [Media Types](https://intl.cloud.tencent.com/document/product/266/9760?from_cn_redirect=1#.E5.AA.92.E4.BD.93.E7.B1.BB.E5.9E.8B).
If you do not specify this parameter or pass in an empty string, the file obtained will have the same extension as `MediaUrl`.
                     * @return MediaType The file format (extension). For information about supported extensions, see [Media Types](https://intl.cloud.tencent.com/document/product/266/9760?from_cn_redirect=1#.E5.AA.92.E4.BD.93.E7.B1.BB.E5.9E.8B).
If you do not specify this parameter or pass in an empty string, the file obtained will have the same extension as `MediaUrl`.
                     */
                    std::string GetMediaType() const;

                    /**
                     * 设置The file format (extension). For information about supported extensions, see [Media Types](https://intl.cloud.tencent.com/document/product/266/9760?from_cn_redirect=1#.E5.AA.92.E4.BD.93.E7.B1.BB.E5.9E.8B).
If you do not specify this parameter or pass in an empty string, the file obtained will have the same extension as `MediaUrl`.
                     * @param MediaType The file format (extension). For information about supported extensions, see [Media Types](https://intl.cloud.tencent.com/document/product/266/9760?from_cn_redirect=1#.E5.AA.92.E4.BD.93.E7.B1.BB.E5.9E.8B).
If you do not specify this parameter or pass in an empty string, the file obtained will have the same extension as `MediaUrl`.
                     */
                    void SetMediaType(const std::string& _mediaType);

                    /**
                     * 判断参数 MediaType 是否已赋值
                     * @return MediaType 是否已赋值
                     */
                    bool MediaTypeHasBeenSet() const;

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
                     * 获取Media name.
                     * @return MediaName Media name.
                     */
                    std::string GetMediaName() const;

                    /**
                     * 设置Media name.
                     * @param MediaName Media name.
                     */
                    void SetMediaName(const std::string& _mediaName);

                    /**
                     * 判断参数 MediaName 是否已赋值
                     * @return MediaName 是否已赋值
                     */
                    bool MediaNameHasBeenSet() const;

                    /**
                     * 获取The URL of the video to pull. Supported formats include GIF, JPEG (JPG), and PNG.
                     * @return CoverUrl The URL of the video to pull. Supported formats include GIF, JPEG (JPG), and PNG.
                     */
                    std::string GetCoverUrl() const;

                    /**
                     * 设置The URL of the video to pull. Supported formats include GIF, JPEG (JPG), and PNG.
                     * @param CoverUrl The URL of the video to pull. Supported formats include GIF, JPEG (JPG), and PNG.
                     */
                    void SetCoverUrl(const std::string& _coverUrl);

                    /**
                     * 判断参数 CoverUrl 是否已赋值
                     * @return CoverUrl 是否已赋值
                     */
                    bool CoverUrlHasBeenSet() const;

                    /**
                     * 获取Subsequent task for media. For more information, please see [Specifying Task Flow After Upload](https://intl.cloud.tencent.com/document/product/266/9759?from_cn_redirect=1).
                     * @return Procedure Subsequent task for media. For more information, please see [Specifying Task Flow After Upload](https://intl.cloud.tencent.com/document/product/266/9759?from_cn_redirect=1).
                     */
                    std::string GetProcedure() const;

                    /**
                     * 设置Subsequent task for media. For more information, please see [Specifying Task Flow After Upload](https://intl.cloud.tencent.com/document/product/266/9759?from_cn_redirect=1).
                     * @param Procedure Subsequent task for media. For more information, please see [Specifying Task Flow After Upload](https://intl.cloud.tencent.com/document/product/266/9759?from_cn_redirect=1).
                     */
                    void SetProcedure(const std::string& _procedure);

                    /**
                     * 判断参数 Procedure 是否已赋值
                     * @return Procedure 是否已赋值
                     */
                    bool ProcedureHasBeenSet() const;

                    /**
                     * 获取Expiration time of media file in ISO 8601 format. For more information, please see [Notes on ISO Date Format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return ExpireTime Expiration time of media file in ISO 8601 format. For more information, please see [Notes on ISO Date Format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置Expiration time of media file in ISO 8601 format. For more information, please see [Notes on ISO Date Format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param ExpireTime Expiration time of media file in ISO 8601 format. For more information, please see [Notes on ISO Date Format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Specifies upload region. This is only applicable to users that have special requirements for the upload region:
<li>If it is left empty, the upload region is your [default region](https://intl.cloud.tencent.com/document/product/266/14059?from=11329?from_cn_redirect=1#.E5.AD.98.E5.82.A8.E5.9C.B0.E5.9F.9F.E6.AD.A5.E9.AA.A4);</li>
<li>If it is specified, please make sure that the upload region has been [enabled for storage](https://intl.cloud.tencent.com/document/product/266/14059?from=11329?from_cn_redirect=1#.E5.AD.98.E5.82.A8.E5.9C.B0.E5.9F.9F.E6.AD.A5.E9.AA.A4).</li>
                     * @return StorageRegion Specifies upload region. This is only applicable to users that have special requirements for the upload region:
<li>If it is left empty, the upload region is your [default region](https://intl.cloud.tencent.com/document/product/266/14059?from=11329?from_cn_redirect=1#.E5.AD.98.E5.82.A8.E5.9C.B0.E5.9F.9F.E6.AD.A5.E9.AA.A4);</li>
<li>If it is specified, please make sure that the upload region has been [enabled for storage](https://intl.cloud.tencent.com/document/product/266/14059?from=11329?from_cn_redirect=1#.E5.AD.98.E5.82.A8.E5.9C.B0.E5.9F.9F.E6.AD.A5.E9.AA.A4).</li>
                     */
                    std::string GetStorageRegion() const;

                    /**
                     * 设置Specifies upload region. This is only applicable to users that have special requirements for the upload region:
<li>If it is left empty, the upload region is your [default region](https://intl.cloud.tencent.com/document/product/266/14059?from=11329?from_cn_redirect=1#.E5.AD.98.E5.82.A8.E5.9C.B0.E5.9F.9F.E6.AD.A5.E9.AA.A4);</li>
<li>If it is specified, please make sure that the upload region has been [enabled for storage](https://intl.cloud.tencent.com/document/product/266/14059?from=11329?from_cn_redirect=1#.E5.AD.98.E5.82.A8.E5.9C.B0.E5.9F.9F.E6.AD.A5.E9.AA.A4).</li>
                     * @param StorageRegion Specifies upload region. This is only applicable to users that have special requirements for the upload region:
<li>If it is left empty, the upload region is your [default region](https://intl.cloud.tencent.com/document/product/266/14059?from=11329?from_cn_redirect=1#.E5.AD.98.E5.82.A8.E5.9C.B0.E5.9F.9F.E6.AD.A5.E9.AA.A4);</li>
<li>If it is specified, please make sure that the upload region has been [enabled for storage](https://intl.cloud.tencent.com/document/product/266/14059?from=11329?from_cn_redirect=1#.E5.AD.98.E5.82.A8.E5.9C.B0.E5.9F.9F.E6.AD.A5.E9.AA.A4).</li>
                     */
                    void SetStorageRegion(const std::string& _storageRegion);

                    /**
                     * 判断参数 StorageRegion 是否已赋值
                     * @return StorageRegion 是否已赋值
                     */
                    bool StorageRegionHasBeenSet() const;

                    /**
                     * 获取Category ID, which is used to categorize the media for management. A category can be created and its ID can be obtained by using the [CreateClass](https://intl.cloud.tencent.com/document/product/266/7812?from_cn_redirect=1) API.
                     * @return ClassId Category ID, which is used to categorize the media for management. A category can be created and its ID can be obtained by using the [CreateClass](https://intl.cloud.tencent.com/document/product/266/7812?from_cn_redirect=1) API.
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置Category ID, which is used to categorize the media for management. A category can be created and its ID can be obtained by using the [CreateClass](https://intl.cloud.tencent.com/document/product/266/7812?from_cn_redirect=1) API.
                     * @param ClassId Category ID, which is used to categorize the media for management. A category can be created and its ID can be obtained by using the [CreateClass](https://intl.cloud.tencent.com/document/product/266/7812?from_cn_redirect=1) API.
                     */
                    void SetClassId(const int64_t& _classId);

                    /**
                     * 判断参数 ClassId 是否已赋值
                     * @return ClassId 是否已赋值
                     */
                    bool ClassIdHasBeenSet() const;

                    /**
                     * 获取The source context which is used to pass through the user request information. After `Procedure` is specified, the task flow status change callback will return the value of this field. It can contain up to 1,000 characters.
                     * @return SessionContext The source context which is used to pass through the user request information. After `Procedure` is specified, the task flow status change callback will return the value of this field. It can contain up to 1,000 characters.
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置The source context which is used to pass through the user request information. After `Procedure` is specified, the task flow status change callback will return the value of this field. It can contain up to 1,000 characters.
                     * @param SessionContext The source context which is used to pass through the user request information. After `Procedure` is specified, the task flow status change callback will return the value of this field. It can contain up to 1,000 characters.
                     */
                    void SetSessionContext(const std::string& _sessionContext);

                    /**
                     * 判断参数 SessionContext 是否已赋值
                     * @return SessionContext 是否已赋值
                     */
                    bool SessionContextHasBeenSet() const;

                    /**
                     * 获取Used to identify duplicate requests. After you send a request, if any request with the same `SessionId` has already been sent in the last three days (72 hours), an error message will be returned. `SessionId` contains up to 50 characters. If this parameter is not carried or is an empty string, no deduplication will be performed.
                     * @return SessionId Used to identify duplicate requests. After you send a request, if any request with the same `SessionId` has already been sent in the last three days (72 hours), an error message will be returned. `SessionId` contains up to 50 characters. If this parameter is not carried or is an empty string, no deduplication will be performed.
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置Used to identify duplicate requests. After you send a request, if any request with the same `SessionId` has already been sent in the last three days (72 hours), an error message will be returned. `SessionId` contains up to 50 characters. If this parameter is not carried or is an empty string, no deduplication will be performed.
                     * @param SessionId Used to identify duplicate requests. After you send a request, if any request with the same `SessionId` has already been sent in the last three days (72 hours), an error message will be returned. `SessionId` contains up to 50 characters. If this parameter is not carried or is an empty string, no deduplication will be performed.
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取Reserved field for special purposes.
                     * @return ExtInfo Reserved field for special purposes.
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置Reserved field for special purposes.
                     * @param ExtInfo Reserved field for special purposes.
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     */
                    bool ExtInfoHasBeenSet() const;

                    /**
                     * 获取Source context, which is used to pass through the user request information. The [upload callback](https://intl.cloud.tencent.com/document/product/266/7830?from_cn_redirect=1) API will return the value of this field. It can contain up to 250 characters.
                     * @return SourceContext Source context, which is used to pass through the user request information. The [upload callback](https://intl.cloud.tencent.com/document/product/266/7830?from_cn_redirect=1) API will return the value of this field. It can contain up to 250 characters.
                     */
                    std::string GetSourceContext() const;

                    /**
                     * 设置Source context, which is used to pass through the user request information. The [upload callback](https://intl.cloud.tencent.com/document/product/266/7830?from_cn_redirect=1) API will return the value of this field. It can contain up to 250 characters.
                     * @param SourceContext Source context, which is used to pass through the user request information. The [upload callback](https://intl.cloud.tencent.com/document/product/266/7830?from_cn_redirect=1) API will return the value of this field. It can contain up to 250 characters.
                     */
                    void SetSourceContext(const std::string& _sourceContext);

                    /**
                     * 判断参数 SourceContext 是否已赋值
                     * @return SourceContext 是否已赋值
                     */
                    bool SourceContextHasBeenSet() const;

                private:

                    /**
                     * The URL of the media to pull, which can be in HLS format, but not DASH format.
For more information about supported extensions, see [Media types](https://intl.cloud.tencent.com/document/product/266/9760#media-types). Please make sure the URL is accessible.
                     */
                    std::string m_mediaUrl;
                    bool m_mediaUrlHasBeenSet;

                    /**
                     * The file format (extension). For information about supported extensions, see [Media Types](https://intl.cloud.tencent.com/document/product/266/9760?from_cn_redirect=1#.E5.AA.92.E4.BD.93.E7.B1.BB.E5.9E.8B).
If you do not specify this parameter or pass in an empty string, the file obtained will have the same extension as `MediaUrl`.
                     */
                    std::string m_mediaType;
                    bool m_mediaTypeHasBeenSet;

                    /**
                     * <b>The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Media name.
                     */
                    std::string m_mediaName;
                    bool m_mediaNameHasBeenSet;

                    /**
                     * The URL of the video to pull. Supported formats include GIF, JPEG (JPG), and PNG.
                     */
                    std::string m_coverUrl;
                    bool m_coverUrlHasBeenSet;

                    /**
                     * Subsequent task for media. For more information, please see [Specifying Task Flow After Upload](https://intl.cloud.tencent.com/document/product/266/9759?from_cn_redirect=1).
                     */
                    std::string m_procedure;
                    bool m_procedureHasBeenSet;

                    /**
                     * Expiration time of media file in ISO 8601 format. For more information, please see [Notes on ISO Date Format](https://intl.cloud.tencent.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Specifies upload region. This is only applicable to users that have special requirements for the upload region:
<li>If it is left empty, the upload region is your [default region](https://intl.cloud.tencent.com/document/product/266/14059?from=11329?from_cn_redirect=1#.E5.AD.98.E5.82.A8.E5.9C.B0.E5.9F.9F.E6.AD.A5.E9.AA.A4);</li>
<li>If it is specified, please make sure that the upload region has been [enabled for storage](https://intl.cloud.tencent.com/document/product/266/14059?from=11329?from_cn_redirect=1#.E5.AD.98.E5.82.A8.E5.9C.B0.E5.9F.9F.E6.AD.A5.E9.AA.A4).</li>
                     */
                    std::string m_storageRegion;
                    bool m_storageRegionHasBeenSet;

                    /**
                     * Category ID, which is used to categorize the media for management. A category can be created and its ID can be obtained by using the [CreateClass](https://intl.cloud.tencent.com/document/product/266/7812?from_cn_redirect=1) API.
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * The source context which is used to pass through the user request information. After `Procedure` is specified, the task flow status change callback will return the value of this field. It can contain up to 1,000 characters.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * Used to identify duplicate requests. After you send a request, if any request with the same `SessionId` has already been sent in the last three days (72 hours), an error message will be returned. `SessionId` contains up to 50 characters. If this parameter is not carried or is an empty string, no deduplication will be performed.
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * Reserved field for special purposes.
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                    /**
                     * Source context, which is used to pass through the user request information. The [upload callback](https://intl.cloud.tencent.com/document/product/266/7830?from_cn_redirect=1) API will return the value of this field. It can contain up to 250 characters.
                     */
                    std::string m_sourceContext;
                    bool m_sourceContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PULLUPLOADREQUEST_H_
