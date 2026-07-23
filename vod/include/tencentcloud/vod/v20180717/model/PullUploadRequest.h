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
                     * 获取<p>Media URL to be pulled. Dash format is not currently supported (HLS is supported).<br>For supported extensions, see <a href="https://www.tencentcloud.com/document/product/266/9760?from_cn_redirect=1#.E5.AA.92.E4.BD.93.E7.B1.BB.E5.9E.8B">media type</a>. Please ensure the media URL can be accessed.</p>
                     * @return MediaUrl <p>Media URL to be pulled. Dash format is not currently supported (HLS is supported).<br>For supported extensions, see <a href="https://www.tencentcloud.com/document/product/266/9760?from_cn_redirect=1#.E5.AA.92.E4.BD.93.E7.B1.BB.E5.9E.8B">media type</a>. Please ensure the media URL can be accessed.</p>
                     * 
                     */
                    std::string GetMediaUrl() const;

                    /**
                     * 设置<p>Media URL to be pulled. Dash format is not currently supported (HLS is supported).<br>For supported extensions, see <a href="https://www.tencentcloud.com/document/product/266/9760?from_cn_redirect=1#.E5.AA.92.E4.BD.93.E7.B1.BB.E5.9E.8B">media type</a>. Please ensure the media URL can be accessed.</p>
                     * @param _mediaUrl <p>Media URL to be pulled. Dash format is not currently supported (HLS is supported).<br>For supported extensions, see <a href="https://www.tencentcloud.com/document/product/266/9760?from_cn_redirect=1#.E5.AA.92.E4.BD.93.E7.B1.BB.E5.9E.8B">media type</a>. Please ensure the media URL can be accessed.</p>
                     * 
                     */
                    void SetMediaUrl(const std::string& _mediaUrl);

                    /**
                     * 判断参数 MediaUrl 是否已赋值
                     * @return MediaUrl 是否已赋值
                     * 
                     */
                    bool MediaUrlHasBeenSet() const;

                    /**
                     * 获取<p>Media type (extension). For supported types, see <a href="https://www.tencentcloud.com/document/product/266/9760?from_cn_redirect=1#.E5.AA.92.E4.BD.93.E7.B1.BB.E5.9E.8B">media type</a>.<br>If MediaType is not specified or set to an empty string, the file type will be obtained automatically based on MediaUrl.</p>
                     * @return MediaType <p>Media type (extension). For supported types, see <a href="https://www.tencentcloud.com/document/product/266/9760?from_cn_redirect=1#.E5.AA.92.E4.BD.93.E7.B1.BB.E5.9E.8B">media type</a>.<br>If MediaType is not specified or set to an empty string, the file type will be obtained automatically based on MediaUrl.</p>
                     * 
                     */
                    std::string GetMediaType() const;

                    /**
                     * 设置<p>Media type (extension). For supported types, see <a href="https://www.tencentcloud.com/document/product/266/9760?from_cn_redirect=1#.E5.AA.92.E4.BD.93.E7.B1.BB.E5.9E.8B">media type</a>.<br>If MediaType is not specified or set to an empty string, the file type will be obtained automatically based on MediaUrl.</p>
                     * @param _mediaType <p>Media type (extension). For supported types, see <a href="https://www.tencentcloud.com/document/product/266/9760?from_cn_redirect=1#.E5.AA.92.E4.BD.93.E7.B1.BB.E5.9E.8B">media type</a>.<br>If MediaType is not specified or set to an empty string, the file type will be obtained automatically based on MediaUrl.</p>
                     * 
                     */
                    void SetMediaType(const std::string& _mediaType);

                    /**
                     * 判断参数 MediaType 是否已赋值
                     * @return MediaType 是否已赋值
                     * 
                     */
                    bool MediaTypeHasBeenSet() const;

                    /**
                     * 获取<p><b>Video-on-demand (VOD) <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID. Customers who activate on-demand services after December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     * @return SubAppId <p><b>Video-on-demand (VOD) <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID. Customers who activate on-demand services after December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>Video-on-demand (VOD) <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID. Customers who activate on-demand services after December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     * @param _subAppId <p><b>Video-on-demand (VOD) <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID. Customers who activate on-demand services after December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
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
                     * 获取<p>Media name.</p>
                     * @return MediaName <p>Media name.</p>
                     * 
                     */
                    std::string GetMediaName() const;

                    /**
                     * 设置<p>Media name.</p>
                     * @param _mediaName <p>Media name.</p>
                     * 
                     */
                    void SetMediaName(const std::string& _mediaName);

                    /**
                     * 判断参数 MediaName 是否已赋值
                     * @return MediaName 是否已赋值
                     * 
                     */
                    bool MediaNameHasBeenSet() const;

                    /**
                     * 获取<p>Video cover URL to pull. Supported file formats: gif, jpeg (jpg), png.</p>
                     * @return CoverUrl <p>Video cover URL to pull. Supported file formats: gif, jpeg (jpg), png.</p>
                     * 
                     */
                    std::string GetCoverUrl() const;

                    /**
                     * 设置<p>Video cover URL to pull. Supported file formats: gif, jpeg (jpg), png.</p>
                     * @param _coverUrl <p>Video cover URL to pull. Supported file formats: gif, jpeg (jpg), png.</p>
                     * 
                     */
                    void SetCoverUrl(const std::string& _coverUrl);

                    /**
                     * 判断参数 CoverUrl 是否已赋值
                     * @return CoverUrl 是否已赋值
                     * 
                     */
                    bool CoverUrlHasBeenSet() const;

                    /**
                     * 获取<p>For media subsequent task operation, see <a href="https://www.tencentcloud.com/document/product/266/9759?from_cn_redirect=1">upload specified task flow</a>.</p>
                     * @return Procedure <p>For media subsequent task operation, see <a href="https://www.tencentcloud.com/document/product/266/9759?from_cn_redirect=1">upload specified task flow</a>.</p>
                     * 
                     */
                    std::string GetProcedure() const;

                    /**
                     * 设置<p>For media subsequent task operation, see <a href="https://www.tencentcloud.com/document/product/266/9759?from_cn_redirect=1">upload specified task flow</a>.</p>
                     * @param _procedure <p>For media subsequent task operation, see <a href="https://www.tencentcloud.com/document/product/266/9759?from_cn_redirect=1">upload specified task flow</a>.</p>
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
                     * 获取<p>Media file expiry time, format according to ISO 8601 standard representation. For details, see <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format description</a>.</p>
                     * @return ExpireTime <p>Media file expiry time, format according to ISO 8601 standard representation. For details, see <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format description</a>.</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>Media file expiry time, format according to ISO 8601 standard representation. For details, see <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format description</a>.</p>
                     * @param _expireTime <p>Media file expiry time, format according to ISO 8601 standard representation. For details, see <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format description</a>.</p>
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
                     * 获取<p>Designated upload park, applicable only to the user with special requirement for upload target region:</p><li>By default if left blank, upload to your [default region](https://www.tencentcloud.com/document/product/266/14059?from=11329?from_cn_redirect=1#.E5.AD.98.E5.82.A8.E5.9C.B0.E5.9F.9F.E6.AD.A5.E9.AA.A4).</li><li>If you designate an upload park, please confirm the [upload storage settings](https://www.tencentcloud.com/document/product/266/14059?from=11329?from_cn_redirect=1#.E5.AD.98.E5.82.A8.E5.9C.B0.E5.9F.9F.E6.AD.A5.E9.AA.A4) have already enabled corresponding storage regions.</li>
                     * @return StorageRegion <p>Designated upload park, applicable only to the user with special requirement for upload target region:</p><li>By default if left blank, upload to your [default region](https://www.tencentcloud.com/document/product/266/14059?from=11329?from_cn_redirect=1#.E5.AD.98.E5.82.A8.E5.9C.B0.E5.9F.9F.E6.AD.A5.E9.AA.A4).</li><li>If you designate an upload park, please confirm the [upload storage settings](https://www.tencentcloud.com/document/product/266/14059?from=11329?from_cn_redirect=1#.E5.AD.98.E5.82.A8.E5.9C.B0.E5.9F.9F.E6.AD.A5.E9.AA.A4) have already enabled corresponding storage regions.</li>
                     * 
                     */
                    std::string GetStorageRegion() const;

                    /**
                     * 设置<p>Designated upload park, applicable only to the user with special requirement for upload target region:</p><li>By default if left blank, upload to your [default region](https://www.tencentcloud.com/document/product/266/14059?from=11329?from_cn_redirect=1#.E5.AD.98.E5.82.A8.E5.9C.B0.E5.9F.9F.E6.AD.A5.E9.AA.A4).</li><li>If you designate an upload park, please confirm the [upload storage settings](https://www.tencentcloud.com/document/product/266/14059?from=11329?from_cn_redirect=1#.E5.AD.98.E5.82.A8.E5.9C.B0.E5.9F.9F.E6.AD.A5.E9.AA.A4) have already enabled corresponding storage regions.</li>
                     * @param _storageRegion <p>Designated upload park, applicable only to the user with special requirement for upload target region:</p><li>By default if left blank, upload to your [default region](https://www.tencentcloud.com/document/product/266/14059?from=11329?from_cn_redirect=1#.E5.AD.98.E5.82.A8.E5.9C.B0.E5.9F.9F.E6.AD.A5.E9.AA.A4).</li><li>If you designate an upload park, please confirm the [upload storage settings](https://www.tencentcloud.com/document/product/266/14059?from=11329?from_cn_redirect=1#.E5.AD.98.E5.82.A8.E5.9C.B0.E5.9F.9F.E6.AD.A5.E9.AA.A4) have already enabled corresponding storage regions.</li>
                     * 
                     */
                    void SetStorageRegion(const std::string& _storageRegion);

                    /**
                     * 判断参数 StorageRegion 是否已赋值
                     * @return StorageRegion 是否已赋值
                     * 
                     */
                    bool StorageRegionHasBeenSet() const;

                    /**
                     * 获取<p>Category ID, used to categorize and manage media. You can create a category and obtain the category ID via the <a href="https://www.tencentcloud.com/document/product/266/31772?from_cn_redirect=1">Create Category</a> API.</p>
                     * @return ClassId <p>Category ID, used to categorize and manage media. You can create a category and obtain the category ID via the <a href="https://www.tencentcloud.com/document/product/266/31772?from_cn_redirect=1">Create Category</a> API.</p>
                     * 
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置<p>Category ID, used to categorize and manage media. You can create a category and obtain the category ID via the <a href="https://www.tencentcloud.com/document/product/266/31772?from_cn_redirect=1">Create Category</a> API.</p>
                     * @param _classId <p>Category ID, used to categorize and manage media. You can create a category and obtain the category ID via the <a href="https://www.tencentcloud.com/document/product/266/31772?from_cn_redirect=1">Create Category</a> API.</p>
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
                     * 获取<p>Task priority. The higher the value, the higher the priority. The value ranges from -10 to 10. If this is not specified, the default value is 0.</p>
                     * @return TasksPriority <p>Task priority. The higher the value, the higher the priority. The value ranges from -10 to 10. If this is not specified, the default value is 0.</p>
                     * 
                     */
                    int64_t GetTasksPriority() const;

                    /**
                     * 设置<p>Task priority. The higher the value, the higher the priority. The value ranges from -10 to 10. If this is not specified, the default value is 0.</p>
                     * @param _tasksPriority <p>Task priority. The higher the value, the higher the priority. The value ranges from -10 to 10. If this is not specified, the default value is 0.</p>
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
                     * 获取<p>Source context. This is used to pass through user request information. When specifying a Procedure task, the task flow status change callback returns the value of this field. The maximum length is 1000 characters.</p>
                     * @return SessionContext <p>Source context. This is used to pass through user request information. When specifying a Procedure task, the task flow status change callback returns the value of this field. The maximum length is 1000 characters.</p>
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置<p>Source context. This is used to pass through user request information. When specifying a Procedure task, the task flow status change callback returns the value of this field. The maximum length is 1000 characters.</p>
                     * @param _sessionContext <p>Source context. This is used to pass through user request information. When specifying a Procedure task, the task flow status change callback returns the value of this field. The maximum length is 1000 characters.</p>
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
                     * 获取<p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     * @return SessionId <p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     * @param _sessionId <p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
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
                     * 获取<p>Reserved field, used for special purpose.</p>
                     * @return ExtInfo <p>Reserved field, used for special purpose.</p>
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置<p>Reserved field, used for special purpose.</p>
                     * @param _extInfo <p>Reserved field, used for special purpose.</p>
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                    /**
                     * 获取<p>Source context. This is used to pass through user request information. The <a href="/document/product/266/7830?from_cn_redirect=1">upload completion callback</a> returns the value of this field. The maximum length is 250 characters.</p>
                     * @return SourceContext <p>Source context. This is used to pass through user request information. The <a href="/document/product/266/7830?from_cn_redirect=1">upload completion callback</a> returns the value of this field. The maximum length is 250 characters.</p>
                     * 
                     */
                    std::string GetSourceContext() const;

                    /**
                     * 设置<p>Source context. This is used to pass through user request information. The <a href="/document/product/266/7830?from_cn_redirect=1">upload completion callback</a> returns the value of this field. The maximum length is 250 characters.</p>
                     * @param _sourceContext <p>Source context. This is used to pass through user request information. The <a href="/document/product/266/7830?from_cn_redirect=1">upload completion callback</a> returns the value of this field. The maximum length is 250 characters.</p>
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
                     * 获取<p>Media storage path, starting with /. <br>Only sub-apps in <a href="https://www.tencentcloud.com/document/product/266/126825?from_cn_redirect=1">FileID + Path mode</a> can specify the storage path.</p>
                     * @return MediaStoragePath <p>Media storage path, starting with /. <br>Only sub-apps in <a href="https://www.tencentcloud.com/document/product/266/126825?from_cn_redirect=1">FileID + Path mode</a> can specify the storage path.</p>
                     * 
                     */
                    std::string GetMediaStoragePath() const;

                    /**
                     * 设置<p>Media storage path, starting with /. <br>Only sub-apps in <a href="https://www.tencentcloud.com/document/product/266/126825?from_cn_redirect=1">FileID + Path mode</a> can specify the storage path.</p>
                     * @param _mediaStoragePath <p>Media storage path, starting with /. <br>Only sub-apps in <a href="https://www.tencentcloud.com/document/product/266/126825?from_cn_redirect=1">FileID + Path mode</a> can specify the storage path.</p>
                     * 
                     */
                    void SetMediaStoragePath(const std::string& _mediaStoragePath);

                    /**
                     * 判断参数 MediaStoragePath 是否已赋值
                     * @return MediaStoragePath 是否已赋值
                     * 
                     */
                    bool MediaStoragePathHasBeenSet() const;

                private:

                    /**
                     * <p>Media URL to be pulled. Dash format is not currently supported (HLS is supported).<br>For supported extensions, see <a href="https://www.tencentcloud.com/document/product/266/9760?from_cn_redirect=1#.E5.AA.92.E4.BD.93.E7.B1.BB.E5.9E.8B">media type</a>. Please ensure the media URL can be accessed.</p>
                     */
                    std::string m_mediaUrl;
                    bool m_mediaUrlHasBeenSet;

                    /**
                     * <p>Media type (extension). For supported types, see <a href="https://www.tencentcloud.com/document/product/266/9760?from_cn_redirect=1#.E5.AA.92.E4.BD.93.E7.B1.BB.E5.9E.8B">media type</a>.<br>If MediaType is not specified or set to an empty string, the file type will be obtained automatically based on MediaUrl.</p>
                     */
                    std::string m_mediaType;
                    bool m_mediaTypeHasBeenSet;

                    /**
                     * <p><b>Video-on-demand (VOD) <a href="/document/product/266/14574?from_cn_redirect=1">application</a> ID. Customers who activate on-demand services after December 25, 2023 must fill this field with the app ID when accessing resources in on-demand applications (whether the default application or a newly created application).</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>Media name.</p>
                     */
                    std::string m_mediaName;
                    bool m_mediaNameHasBeenSet;

                    /**
                     * <p>Video cover URL to pull. Supported file formats: gif, jpeg (jpg), png.</p>
                     */
                    std::string m_coverUrl;
                    bool m_coverUrlHasBeenSet;

                    /**
                     * <p>For media subsequent task operation, see <a href="https://www.tencentcloud.com/document/product/266/9759?from_cn_redirect=1">upload specified task flow</a>.</p>
                     */
                    std::string m_procedure;
                    bool m_procedureHasBeenSet;

                    /**
                     * <p>Media file expiry time, format according to ISO 8601 standard representation. For details, see <a href="https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I">ISO date format description</a>.</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>Designated upload park, applicable only to the user with special requirement for upload target region:</p><li>By default if left blank, upload to your [default region](https://www.tencentcloud.com/document/product/266/14059?from=11329?from_cn_redirect=1#.E5.AD.98.E5.82.A8.E5.9C.B0.E5.9F.9F.E6.AD.A5.E9.AA.A4).</li><li>If you designate an upload park, please confirm the [upload storage settings](https://www.tencentcloud.com/document/product/266/14059?from=11329?from_cn_redirect=1#.E5.AD.98.E5.82.A8.E5.9C.B0.E5.9F.9F.E6.AD.A5.E9.AA.A4) have already enabled corresponding storage regions.</li>
                     */
                    std::string m_storageRegion;
                    bool m_storageRegionHasBeenSet;

                    /**
                     * <p>Category ID, used to categorize and manage media. You can create a category and obtain the category ID via the <a href="https://www.tencentcloud.com/document/product/266/31772?from_cn_redirect=1">Create Category</a> API.</p>
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * <p>Task priority. The higher the value, the higher the priority. The value ranges from -10 to 10. If this is not specified, the default value is 0.</p>
                     */
                    int64_t m_tasksPriority;
                    bool m_tasksPriorityHasBeenSet;

                    /**
                     * <p>Source context. This is used to pass through user request information. When specifying a Procedure task, the task flow status change callback returns the value of this field. The maximum length is 1000 characters.</p>
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * <p>Identifier for deduplication. If a request with the same identifier has been sent within the past three days, an error is returned for the current request. The maximum length is 50 characters. If this is not specified or left empty, deduplication is not performed.</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>Reserved field, used for special purpose.</p>
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                    /**
                     * <p>Source context. This is used to pass through user request information. The <a href="/document/product/266/7830?from_cn_redirect=1">upload completion callback</a> returns the value of this field. The maximum length is 250 characters.</p>
                     */
                    std::string m_sourceContext;
                    bool m_sourceContextHasBeenSet;

                    /**
                     * <p>Media storage path, starting with /. <br>Only sub-apps in <a href="https://www.tencentcloud.com/document/product/266/126825?from_cn_redirect=1">FileID + Path mode</a> can specify the storage path.</p>
                     */
                    std::string m_mediaStoragePath;
                    bool m_mediaStoragePathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PULLUPLOADREQUEST_H_
