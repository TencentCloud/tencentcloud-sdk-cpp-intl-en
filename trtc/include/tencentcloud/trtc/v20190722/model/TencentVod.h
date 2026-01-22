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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_TENCENTVOD_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_TENCENTVOD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * The Tencent Cloud VOD parameters.
                */
                class TencentVod : public AbstractModel
                {
                public:
                    TencentVod();
                    ~TencentVod() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Subsequent media task processing operations allow automatic task initiation after media upload is completed. the parameter value is the task flow template name. VOD (video on demand) supports creating task flow templates and template naming.
                     * @return Procedure Subsequent media task processing operations allow automatic task initiation after media upload is completed. the parameter value is the task flow template name. VOD (video on demand) supports creating task flow templates and template naming.
                     * 
                     */
                    std::string GetProcedure() const;

                    /**
                     * 设置Subsequent media task processing operations allow automatic task initiation after media upload is completed. the parameter value is the task flow template name. VOD (video on demand) supports creating task flow templates and template naming.
                     * @param _procedure Subsequent media task processing operations allow automatic task initiation after media upload is completed. the parameter value is the task flow template name. VOD (video on demand) supports creating task flow templates and template naming.
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
                     * 获取Media file expiry time is the absolute expiration time from the current system time. to save for one day, enter "86400". to retain permanently, enter "0". the default is permanent preservation.
                     * @return ExpireTime Media file expiry time is the absolute expiration time from the current system time. to save for one day, enter "86400". to retain permanently, enter "0". the default is permanent preservation.
                     * 
                     */
                    uint64_t GetExpireTime() const;

                    /**
                     * 设置Media file expiry time is the absolute expiration time from the current system time. to save for one day, enter "86400". to retain permanently, enter "0". the default is permanent preservation.
                     * @param _expireTime Media file expiry time is the absolute expiration time from the current system time. to save for one day, enter "86400". to retain permanently, enter "0". the default is permanent preservation.
                     * 
                     */
                    void SetExpireTime(const uint64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取Specify the upload park, applicable only to the user with special requirement for upload region.
                     * @return StorageRegion Specify the upload park, applicable only to the user with special requirement for upload region.
                     * 
                     */
                    std::string GetStorageRegion() const;

                    /**
                     * 设置Specify the upload park, applicable only to the user with special requirement for upload region.
                     * @param _storageRegion Specify the upload park, applicable only to the user with special requirement for upload region.
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
                     * 获取Category ID is used to categorize and manage media. you can create a category and obtain the category ID through the create category api.
The default value is 0, indicating other categories.
                     * @return ClassId Category ID is used to categorize and manage media. you can create a category and obtain the category ID through the create category api.
The default value is 0, indicating other categories.
                     * 
                     */
                    uint64_t GetClassId() const;

                    /**
                     * 设置Category ID is used to categorize and manage media. you can create a category and obtain the category ID through the create category api.
The default value is 0, indicating other categories.
                     * @param _classId Category ID is used to categorize and manage media. you can create a category and obtain the category ID through the create category api.
The default value is 0, indicating other categories.
                     * 
                     */
                    void SetClassId(const uint64_t& _classId);

                    /**
                     * 判断参数 ClassId 是否已赋值
                     * @return ClassId 是否已赋值
                     * 
                     */
                    bool ClassIdHasBeenSet() const;

                    /**
                     * 获取Subapplication ID for video-on-demand (vod). if you need to access resources belonging to a subapplication, fill in this field with the subapplication ID. otherwise, this field is not required.
                     * @return SubAppId Subapplication ID for video-on-demand (vod). if you need to access resources belonging to a subapplication, fill in this field with the subapplication ID. otherwise, this field is not required.
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置Subapplication ID for video-on-demand (vod). if you need to access resources belonging to a subapplication, fill in this field with the subapplication ID. otherwise, this field is not required.
                     * @param _subAppId Subapplication ID for video-on-demand (vod). if you need to access resources belonging to a subapplication, fill in this field with the subapplication ID. otherwise, this field is not required.
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
                     * 获取Task flow context, passed through when task complete.
                     * @return SessionContext Task flow context, passed through when task complete.
                     * 
                     */
                    std::string GetSessionContext() const;

                    /**
                     * 设置Task flow context, passed through when task complete.
                     * @param _sessionContext Task flow context, passed through when task complete.
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
                     * 获取Upload context, passed through on upload completion callback.
                     * @return SourceContext Upload context, passed through on upload completion callback.
                     * 
                     */
                    std::string GetSourceContext() const;

                    /**
                     * 设置Upload context, passed through on upload completion callback.
                     * @param _sourceContext Upload context, passed through on upload completion callback.
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
                     * 获取The recording file format type uploaded to the vod platform. valid values: 0: mp4 (default), 1: hls, 2: aac (valid at that time when StreamType=1 for audio-only recording).
3: hls+mp4, 4: hls+aac (valid at that time when StreamType=1 is audio-only recording).
                     * @return MediaType The recording file format type uploaded to the vod platform. valid values: 0: mp4 (default), 1: hls, 2: aac (valid at that time when StreamType=1 for audio-only recording).
3: hls+mp4, 4: hls+aac (valid at that time when StreamType=1 is audio-only recording).
                     * 
                     */
                    uint64_t GetMediaType() const;

                    /**
                     * 设置The recording file format type uploaded to the vod platform. valid values: 0: mp4 (default), 1: hls, 2: aac (valid at that time when StreamType=1 for audio-only recording).
3: hls+mp4, 4: hls+aac (valid at that time when StreamType=1 is audio-only recording).
                     * @param _mediaType The recording file format type uploaded to the vod platform. valid values: 0: mp4 (default), 1: hls, 2: aac (valid at that time when StreamType=1 for audio-only recording).
3: hls+mp4, 4: hls+aac (valid at that time when StreamType=1 is audio-only recording).
                     * 
                     */
                    void SetMediaType(const uint64_t& _mediaType);

                    /**
                     * 判断参数 MediaType 是否已赋值
                     * @return MediaType 是否已赋值
                     * 
                     */
                    bool MediaTypeHasBeenSet() const;

                    /**
                     * 获取Only supports API recording upload to vod. this parameter indicates you can customize the recording file name prefix. [length limit: 64 bytes, only allows a combination of uppercase and lowercase letters (a-zA-Z), numbers (0-9), underline, and hyphen]. the prefix is separated from the automatically generated recording file name by `__UserDefine_u_`.
                     * @return UserDefineRecordId Only supports API recording upload to vod. this parameter indicates you can customize the recording file name prefix. [length limit: 64 bytes, only allows a combination of uppercase and lowercase letters (a-zA-Z), numbers (0-9), underline, and hyphen]. the prefix is separated from the automatically generated recording file name by `__UserDefine_u_`.
                     * 
                     */
                    std::string GetUserDefineRecordId() const;

                    /**
                     * 设置Only supports API recording upload to vod. this parameter indicates you can customize the recording file name prefix. [length limit: 64 bytes, only allows a combination of uppercase and lowercase letters (a-zA-Z), numbers (0-9), underline, and hyphen]. the prefix is separated from the automatically generated recording file name by `__UserDefine_u_`.
                     * @param _userDefineRecordId Only supports API recording upload to vod. this parameter indicates you can customize the recording file name prefix. [length limit: 64 bytes, only allows a combination of uppercase and lowercase letters (a-zA-Z), numbers (0-9), underline, and hyphen]. the prefix is separated from the automatically generated recording file name by `__UserDefine_u_`.
                     * 
                     */
                    void SetUserDefineRecordId(const std::string& _userDefineRecordId);

                    /**
                     * 判断参数 UserDefineRecordId 是否已赋值
                     * @return UserDefineRecordId 是否已赋值
                     * 
                     */
                    bool UserDefineRecordIdHasBeenSet() const;

                private:

                    /**
                     * Subsequent media task processing operations allow automatic task initiation after media upload is completed. the parameter value is the task flow template name. VOD (video on demand) supports creating task flow templates and template naming.
                     */
                    std::string m_procedure;
                    bool m_procedureHasBeenSet;

                    /**
                     * Media file expiry time is the absolute expiration time from the current system time. to save for one day, enter "86400". to retain permanently, enter "0". the default is permanent preservation.
                     */
                    uint64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * Specify the upload park, applicable only to the user with special requirement for upload region.
                     */
                    std::string m_storageRegion;
                    bool m_storageRegionHasBeenSet;

                    /**
                     * Category ID is used to categorize and manage media. you can create a category and obtain the category ID through the create category api.
The default value is 0, indicating other categories.
                     */
                    uint64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * Subapplication ID for video-on-demand (vod). if you need to access resources belonging to a subapplication, fill in this field with the subapplication ID. otherwise, this field is not required.
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Task flow context, passed through when task complete.
                     */
                    std::string m_sessionContext;
                    bool m_sessionContextHasBeenSet;

                    /**
                     * Upload context, passed through on upload completion callback.
                     */
                    std::string m_sourceContext;
                    bool m_sourceContextHasBeenSet;

                    /**
                     * The recording file format type uploaded to the vod platform. valid values: 0: mp4 (default), 1: hls, 2: aac (valid at that time when StreamType=1 for audio-only recording).
3: hls+mp4, 4: hls+aac (valid at that time when StreamType=1 is audio-only recording).
                     */
                    uint64_t m_mediaType;
                    bool m_mediaTypeHasBeenSet;

                    /**
                     * Only supports API recording upload to vod. this parameter indicates you can customize the recording file name prefix. [length limit: 64 bytes, only allows a combination of uppercase and lowercase letters (a-zA-Z), numbers (0-9), underline, and hyphen]. the prefix is separated from the automatically generated recording file name by `__UserDefine_u_`.
                     */
                    std::string m_userDefineRecordId;
                    bool m_userDefineRecordIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_TENCENTVOD_H_
