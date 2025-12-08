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

#ifndef TENCENTCLOUD_SMH_V20210712_MODEL_LIBRARYEXTENSION_H_
#define TENCENTCLOUD_SMH_V20210712_MODEL_LIBRARYEXTENSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Smh
    {
        namespace V20210712
        {
            namespace Model
            {
                /**
                * Media library configuration item.
                */
                class LibraryExtension : public AbstractModel
                {
                public:
                    LibraryExtension();
                    ~LibraryExtension() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Specifies whether it is a file type media library that can store any type of file (true) or a media type media library that can only store images and playable video types (false). defaults to false. cannot be modified once created.
                     * @return IsFileLibrary Specifies whether it is a file type media library that can store any type of file (true) or a media type media library that can only store images and playable video types (false). defaults to false. cannot be modified once created.
                     * 
                     */
                    bool GetIsFileLibrary() const;

                    /**
                     * 设置Specifies whether it is a file type media library that can store any type of file (true) or a media type media library that can only store images and playable video types (false). defaults to false. cannot be modified once created.
                     * @param _isFileLibrary Specifies whether it is a file type media library that can store any type of file (true) or a media type media library that can only store images and playable video types (false). defaults to false. cannot be modified once created.
                     * 
                     */
                    void SetIsFileLibrary(const bool& _isFileLibrary);

                    /**
                     * 判断参数 IsFileLibrary 是否已赋值
                     * @return IsFileLibrary 是否已赋值
                     * 
                     */
                    bool IsFileLibraryHasBeenSet() const;

                    /**
                     * 获取true indicates a multi-tenant space media library, allowing the creation of multiple tenant spaces. false indicates a single-tenant space media library, where tenant spaces cannot be created and only the default single tenant space can be used. defaults to false. cannot be modified after the media library is created.
                     * @return IsMultiSpace true indicates a multi-tenant space media library, allowing the creation of multiple tenant spaces. false indicates a single-tenant space media library, where tenant spaces cannot be created and only the default single tenant space can be used. defaults to false. cannot be modified after the media library is created.
                     * 
                     */
                    bool GetIsMultiSpace() const;

                    /**
                     * 设置true indicates a multi-tenant space media library, allowing the creation of multiple tenant spaces. false indicates a single-tenant space media library, where tenant spaces cannot be created and only the default single tenant space can be used. defaults to false. cannot be modified after the media library is created.
                     * @param _isMultiSpace true indicates a multi-tenant space media library, allowing the creation of multiple tenant spaces. false indicates a single-tenant space media library, where tenant spaces cannot be created and only the default single tenant space can be used. defaults to false. cannot be modified after the media library is created.
                     * 
                     */
                    void SetIsMultiSpace(const bool& _isMultiSpace);

                    /**
                     * 判断参数 IsMultiSpace 是否已赋值
                     * @return IsMultiSpace 是否已赋值
                     * 
                     */
                    bool IsMultiSpaceHasBeenSet() const;

                    /**
                     * 获取Specifies the storage type for files saved to cloud object storage. valid values: STANDARD, STANDARD_IA, INTELLIGENT_TIERING, MAZ_STANDARD, MAZ_STANDARD_IA, and MAZ_INTELLIGENT_TIERING. defaults to STANDARD. when using a multi-AZ bucket, MAZ_ prefixed storage types for multi-AZ are automatically used, otherwise non-MAZ_ prefixed storage types for non-multi-AZ are used. when specifying INTELLIGENT TIERING storage INTELLIGENT_TIERING or MAZ_INTELLIGENT_TIERING, the bucket must have INTELLIGENT TIERING storage enabled beforehand, otherwise failure will be returned. cannot be modified after the media library is created.
                     * @return CosStorageClass Specifies the storage type for files saved to cloud object storage. valid values: STANDARD, STANDARD_IA, INTELLIGENT_TIERING, MAZ_STANDARD, MAZ_STANDARD_IA, and MAZ_INTELLIGENT_TIERING. defaults to STANDARD. when using a multi-AZ bucket, MAZ_ prefixed storage types for multi-AZ are automatically used, otherwise non-MAZ_ prefixed storage types for non-multi-AZ are used. when specifying INTELLIGENT TIERING storage INTELLIGENT_TIERING or MAZ_INTELLIGENT_TIERING, the bucket must have INTELLIGENT TIERING storage enabled beforehand, otherwise failure will be returned. cannot be modified after the media library is created.
                     * 
                     */
                    std::string GetCosStorageClass() const;

                    /**
                     * 设置Specifies the storage type for files saved to cloud object storage. valid values: STANDARD, STANDARD_IA, INTELLIGENT_TIERING, MAZ_STANDARD, MAZ_STANDARD_IA, and MAZ_INTELLIGENT_TIERING. defaults to STANDARD. when using a multi-AZ bucket, MAZ_ prefixed storage types for multi-AZ are automatically used, otherwise non-MAZ_ prefixed storage types for non-multi-AZ are used. when specifying INTELLIGENT TIERING storage INTELLIGENT_TIERING or MAZ_INTELLIGENT_TIERING, the bucket must have INTELLIGENT TIERING storage enabled beforehand, otherwise failure will be returned. cannot be modified after the media library is created.
                     * @param _cosStorageClass Specifies the storage type for files saved to cloud object storage. valid values: STANDARD, STANDARD_IA, INTELLIGENT_TIERING, MAZ_STANDARD, MAZ_STANDARD_IA, and MAZ_INTELLIGENT_TIERING. defaults to STANDARD. when using a multi-AZ bucket, MAZ_ prefixed storage types for multi-AZ are automatically used, otherwise non-MAZ_ prefixed storage types for non-multi-AZ are used. when specifying INTELLIGENT TIERING storage INTELLIGENT_TIERING or MAZ_INTELLIGENT_TIERING, the bucket must have INTELLIGENT TIERING storage enabled beforehand, otherwise failure will be returned. cannot be modified after the media library is created.
                     * 
                     */
                    void SetCosStorageClass(const std::string& _cosStorageClass);

                    /**
                     * 判断参数 CosStorageClass 是否已赋值
                     * @return CosStorageClass 是否已赋值
                     * 
                     */
                    bool CosStorageClassHasBeenSet() const;

                    /**
                     * 获取Specifies whether the recycle bin feature is enabled. defaults to false.
                     * @return UseRecycleBin Specifies whether the recycle bin feature is enabled. defaults to false.
                     * 
                     */
                    bool GetUseRecycleBin() const;

                    /**
                     * 设置Specifies whether the recycle bin feature is enabled. defaults to false.
                     * @param _useRecycleBin Specifies whether the recycle bin feature is enabled. defaults to false.
                     * 
                     */
                    void SetUseRecycleBin(const bool& _useRecycleBin);

                    /**
                     * 判断参数 UseRecycleBin 是否已赋值
                     * @return UseRecycleBin 是否已赋值
                     * 
                     */
                    bool UseRecycleBinHasBeenSet() const;

                    /**
                     * 获取Specifies the number of days to automatically delete items in the recycle bin when enabled, must not exceed 1095 (3 years). a value of 0 indicates no automatic deletion, defaults to 0. this property is null when the recycle bin is not enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AutoRemoveRecycledDays Specifies the number of days to automatically delete items in the recycle bin when enabled, must not exceed 1095 (3 years). a value of 0 indicates no automatic deletion, defaults to 0. this property is null when the recycle bin is not enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetAutoRemoveRecycledDays() const;

                    /**
                     * 设置Specifies the number of days to automatically delete items in the recycle bin when enabled, must not exceed 1095 (3 years). a value of 0 indicates no automatic deletion, defaults to 0. this property is null when the recycle bin is not enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _autoRemoveRecycledDays Specifies the number of days to automatically delete items in the recycle bin when enabled, must not exceed 1095 (3 years). a value of 0 indicates no automatic deletion, defaults to 0. this property is null when the recycle bin is not enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAutoRemoveRecycledDays(const uint64_t& _autoRemoveRecycledDays);

                    /**
                     * 判断参数 AutoRemoveRecycledDays 是否已赋值
                     * @return AutoRemoveRecycledDays 是否已赋值
                     * 
                     */
                    bool AutoRemoveRecycledDaysHasBeenSet() const;

                    /**
                     * 获取Whether to enable the file path search feature. is false by default.
                     * @return EnableSearch Whether to enable the file path search feature. is false by default.
                     * 
                     */
                    bool GetEnableSearch() const;

                    /**
                     * 设置Whether to enable the file path search feature. is false by default.
                     * @param _enableSearch Whether to enable the file path search feature. is false by default.
                     * 
                     */
                    void SetEnableSearch(const bool& _enableSearch);

                    /**
                     * 判断参数 EnableSearch 是否已赋值
                     * @return EnableSearch 是否已赋值
                     * 
                     */
                    bool EnableSearchHasBeenSet() const;

                    /**
                     * 获取Specifies whether to deny the configuration request when setting the space quota for a media library or tenant and the quota is less than the used storage capacity. is false by default.
                     * @return DenyOnQuotaLessThanUsage Specifies whether to deny the configuration request when setting the space quota for a media library or tenant and the quota is less than the used storage capacity. is false by default.
                     * 
                     */
                    bool GetDenyOnQuotaLessThanUsage() const;

                    /**
                     * 设置Specifies whether to deny the configuration request when setting the space quota for a media library or tenant and the quota is less than the used storage capacity. is false by default.
                     * @param _denyOnQuotaLessThanUsage Specifies whether to deny the configuration request when setting the space quota for a media library or tenant and the quota is less than the used storage capacity. is false by default.
                     * 
                     */
                    void SetDenyOnQuotaLessThanUsage(const bool& _denyOnQuotaLessThanUsage);

                    /**
                     * 判断参数 DenyOnQuotaLessThanUsage 是否已赋值
                     * @return DenyOnQuotaLessThanUsage 是否已赋值
                     * 
                     */
                    bool DenyOnQuotaLessThanUsageHasBeenSet() const;

                    /**
                     * 获取Specifies whether the earlier version is enabled. defaults to false.
                     * @return EnableFileHistory Specifies whether the earlier version is enabled. defaults to false.
                     * 
                     */
                    bool GetEnableFileHistory() const;

                    /**
                     * 设置Specifies whether the earlier version is enabled. defaults to false.
                     * @param _enableFileHistory Specifies whether the earlier version is enabled. defaults to false.
                     * 
                     */
                    void SetEnableFileHistory(const bool& _enableFileHistory);

                    /**
                     * 判断参数 EnableFileHistory 是否已赋值
                     * @return EnableFileHistory 是否已赋值
                     * 
                     */
                    bool EnableFileHistoryHasBeenSet() const;

                    /**
                     * 获取Specifies the maximum number of historical versions to retain for a single file when versioning is enabled, with a value range of 1 to 999. this property may be null when versioning is not enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FileHistoryCount Specifies the maximum number of historical versions to retain for a single file when versioning is enabled, with a value range of 1 to 999. this property may be null when versioning is not enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetFileHistoryCount() const;

                    /**
                     * 设置Specifies the maximum number of historical versions to retain for a single file when versioning is enabled, with a value range of 1 to 999. this property may be null when versioning is not enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fileHistoryCount Specifies the maximum number of historical versions to retain for a single file when versioning is enabled, with a value range of 1 to 999. this property may be null when versioning is not enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFileHistoryCount(const uint64_t& _fileHistoryCount);

                    /**
                     * 判断参数 FileHistoryCount 是否已赋值
                     * @return FileHistoryCount 是否已赋值
                     * 
                     */
                    bool FileHistoryCountHasBeenSet() const;

                    /**
                     * 获取Specifies the maximum days to retain earlier versions when versioning is enabled, with a value range of 0 to 999. when set to 0, it represents permanent retention. this property may be null when versioning is not enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FileHistoryExpireDay Specifies the maximum days to retain earlier versions when versioning is enabled, with a value range of 0 to 999. when set to 0, it represents permanent retention. this property may be null when versioning is not enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    uint64_t GetFileHistoryExpireDay() const;

                    /**
                     * 设置Specifies the maximum days to retain earlier versions when versioning is enabled, with a value range of 0 to 999. when set to 0, it represents permanent retention. this property may be null when versioning is not enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fileHistoryExpireDay Specifies the maximum days to retain earlier versions when versioning is enabled, with a value range of 0 to 999. when set to 0, it represents permanent retention. this property may be null when versioning is not enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFileHistoryExpireDay(const uint64_t& _fileHistoryExpireDay);

                    /**
                     * 判断参数 FileHistoryExpireDay 是否已赋值
                     * @return FileHistoryExpireDay 是否已赋值
                     * 
                     */
                    bool FileHistoryExpireDayHasBeenSet() const;

                    /**
                     * 获取The maximum length of a directory or file name must not exceed 255, with a default value of 255. modifying this parameter will not affect existing directories or file names. if the value of this field is decreased, the length of existing directories or file names exceeding the target value does not change.
                     * @return MaxDirFileNameLength The maximum length of a directory or file name must not exceed 255, with a default value of 255. modifying this parameter will not affect existing directories or file names. if the value of this field is decreased, the length of existing directories or file names exceeding the target value does not change.
                     * 
                     */
                    uint64_t GetMaxDirFileNameLength() const;

                    /**
                     * 设置The maximum length of a directory or file name must not exceed 255, with a default value of 255. modifying this parameter will not affect existing directories or file names. if the value of this field is decreased, the length of existing directories or file names exceeding the target value does not change.
                     * @param _maxDirFileNameLength The maximum length of a directory or file name must not exceed 255, with a default value of 255. modifying this parameter will not affect existing directories or file names. if the value of this field is decreased, the length of existing directories or file names exceeding the target value does not change.
                     * 
                     */
                    void SetMaxDirFileNameLength(const uint64_t& _maxDirFileNameLength);

                    /**
                     * 判断参数 MaxDirFileNameLength 是否已赋值
                     * @return MaxDirFileNameLength 是否已赋值
                     * 
                     */
                    bool MaxDirFileNameLengthHasBeenSet() const;

                    /**
                     * 获取Whether public read is enabled. once enabled, read operations require no access token. it is false by default. this property is supported only in single-tenant space media libraries. otherwise, it is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsPublicRead Whether public read is enabled. once enabled, read operations require no access token. it is false by default. this property is supported only in single-tenant space media libraries. otherwise, it is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsPublicRead() const;

                    /**
                     * 设置Whether public read is enabled. once enabled, read operations require no access token. it is false by default. this property is supported only in single-tenant space media libraries. otherwise, it is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isPublicRead Whether public read is enabled. once enabled, read operations require no access token. it is false by default. this property is supported only in single-tenant space media libraries. otherwise, it is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsPublicRead(const bool& _isPublicRead);

                    /**
                     * 判断参数 IsPublicRead 是否已赋值
                     * @return IsPublicRead 是否已赋值
                     * 
                     */
                    bool IsPublicReadHasBeenSet() const;

                    /**
                     * 获取Specifies whether the multi-album feature is enabled for the media type media library. once enabled, first-level directories (albums) can be created, and media files can only be saved in these albums. unless enabled, albums cannot be created, and media files can only be saved in the root directory. defaults to false. this property is only supported for single-tenant space media type media libraries, otherwise it is null. cannot be modified after the media library is created.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return IsMultiAlbum Specifies whether the multi-album feature is enabled for the media type media library. once enabled, first-level directories (albums) can be created, and media files can only be saved in these albums. unless enabled, albums cannot be created, and media files can only be saved in the root directory. defaults to false. this property is only supported for single-tenant space media type media libraries, otherwise it is null. cannot be modified after the media library is created.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetIsMultiAlbum() const;

                    /**
                     * 设置Specifies whether the multi-album feature is enabled for the media type media library. once enabled, first-level directories (albums) can be created, and media files can only be saved in these albums. unless enabled, albums cannot be created, and media files can only be saved in the root directory. defaults to false. this property is only supported for single-tenant space media type media libraries, otherwise it is null. cannot be modified after the media library is created.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _isMultiAlbum Specifies whether the multi-album feature is enabled for the media type media library. once enabled, first-level directories (albums) can be created, and media files can only be saved in these albums. unless enabled, albums cannot be created, and media files can only be saved in the root directory. defaults to false. this property is only supported for single-tenant space media type media libraries, otherwise it is null. cannot be modified after the media library is created.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetIsMultiAlbum(const bool& _isMultiAlbum);

                    /**
                     * 判断参数 IsMultiAlbum 是否已赋值
                     * @return IsMultiAlbum 是否已赋值
                     * 
                     */
                    bool IsMultiAlbumHasBeenSet() const;

                    /**
                     * 获取Specifies whether the media library of the media type allows image uploads, set to true by default. this property is supported only for the media library of the media type in a single tenant space, otherwise it is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AllowPhoto Specifies whether the media library of the media type allows image uploads, set to true by default. this property is supported only for the media library of the media type in a single tenant space, otherwise it is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetAllowPhoto() const;

                    /**
                     * 设置Specifies whether the media library of the media type allows image uploads, set to true by default. this property is supported only for the media library of the media type in a single tenant space, otherwise it is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _allowPhoto Specifies whether the media library of the media type allows image uploads, set to true by default. this property is supported only for the media library of the media type in a single tenant space, otherwise it is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAllowPhoto(const bool& _allowPhoto);

                    /**
                     * 判断参数 AllowPhoto 是否已赋值
                     * @return AllowPhoto 是否已赋值
                     * 
                     */
                    bool AllowPhotoHasBeenSet() const;

                    /**
                     * 获取Specifies the allowed extensions when the media type media library allows photo uploads. empty array by default. at this point, it will automatically determine based on the MIME type corresponding to the file extension. this property is supported only for single-tenant space media type media libraries. otherwise, the property is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AllowPhotoExtName Specifies the allowed extensions when the media type media library allows photo uploads. empty array by default. at this point, it will automatically determine based on the MIME type corresponding to the file extension. this property is supported only for single-tenant space media type media libraries. otherwise, the property is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetAllowPhotoExtName() const;

                    /**
                     * 设置Specifies the allowed extensions when the media type media library allows photo uploads. empty array by default. at this point, it will automatically determine based on the MIME type corresponding to the file extension. this property is supported only for single-tenant space media type media libraries. otherwise, the property is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _allowPhotoExtName Specifies the allowed extensions when the media type media library allows photo uploads. empty array by default. at this point, it will automatically determine based on the MIME type corresponding to the file extension. this property is supported only for single-tenant space media type media libraries. otherwise, the property is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAllowPhotoExtName(const std::vector<std::string>& _allowPhotoExtName);

                    /**
                     * 判断参数 AllowPhotoExtName 是否已赋值
                     * @return AllowPhotoExtName 是否已赋值
                     * 
                     */
                    bool AllowPhotoExtNameHasBeenSet() const;

                    /**
                     * 获取Media type media library specifies whether video upload is allowed, set to true by default. this property is supported only in single tenant space media type media library, otherwise the property is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AllowVideo Media type media library specifies whether video upload is allowed, set to true by default. this property is supported only in single tenant space media type media library, otherwise the property is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetAllowVideo() const;

                    /**
                     * 设置Media type media library specifies whether video upload is allowed, set to true by default. this property is supported only in single tenant space media type media library, otherwise the property is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _allowVideo Media type media library specifies whether video upload is allowed, set to true by default. this property is supported only in single tenant space media type media library, otherwise the property is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAllowVideo(const bool& _allowVideo);

                    /**
                     * 判断参数 AllowVideo 是否已赋值
                     * @return AllowVideo 是否已赋值
                     * 
                     */
                    bool AllowVideoHasBeenSet() const;

                    /**
                     * 获取Specifies the allowed extensions when the media type media library permits video uploads. the default is an empty array, at which point it will automatically determine based on the MIME type corresponding to the file extension. this property is supported only for single-tenant space media type media libraries, otherwise it is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AllowVideoExtName Specifies the allowed extensions when the media type media library permits video uploads. the default is an empty array, at which point it will automatically determine based on the MIME type corresponding to the file extension. this property is supported only for single-tenant space media type media libraries, otherwise it is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetAllowVideoExtName() const;

                    /**
                     * 设置Specifies the allowed extensions when the media type media library permits video uploads. the default is an empty array, at which point it will automatically determine based on the MIME type corresponding to the file extension. this property is supported only for single-tenant space media type media libraries, otherwise it is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _allowVideoExtName Specifies the allowed extensions when the media type media library permits video uploads. the default is an empty array, at which point it will automatically determine based on the MIME type corresponding to the file extension. this property is supported only for single-tenant space media type media libraries, otherwise it is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAllowVideoExtName(const std::vector<std::string>& _allowVideoExtName);

                    /**
                     * 判断参数 AllowVideoExtName 是否已赋值
                     * @return AllowVideoExtName 是否已赋值
                     * 
                     */
                    bool AllowVideoExtNameHasBeenSet() const;

                    /**
                     * 获取Specifies the file extensions allowed in the file type media library, empty by default. at this point, all types of files are upload allowed. this property is supported only for the file type media library in a single tenant space, otherwise it is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AllowFileExtName Specifies the file extensions allowed in the file type media library, empty by default. at this point, all types of files are upload allowed. this property is supported only for the file type media library in a single tenant space, otherwise it is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetAllowFileExtName() const;

                    /**
                     * 设置Specifies the file extensions allowed in the file type media library, empty by default. at this point, all types of files are upload allowed. this property is supported only for the file type media library in a single tenant space, otherwise it is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _allowFileExtName Specifies the file extensions allowed in the file type media library, empty by default. at this point, all types of files are upload allowed. this property is supported only for the file type media library in a single tenant space, otherwise it is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetAllowFileExtName(const std::vector<std::string>& _allowFileExtName);

                    /**
                     * 判断参数 AllowFileExtName 是否已赋值
                     * @return AllowFileExtName 是否已赋值
                     * 
                     */
                    bool AllowFileExtNameHasBeenSet() const;

                    /**
                     * 获取Specifies whether to perform sensitive content identification during image upload. the value is false by default. this property is supported only in the single-tenant space media library, otherwise it is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return RecognizeSensitiveContent Specifies whether to perform sensitive content identification during image upload. the value is false by default. this property is supported only in the single-tenant space media library, otherwise it is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetRecognizeSensitiveContent() const;

                    /**
                     * 设置Specifies whether to perform sensitive content identification during image upload. the value is false by default. this property is supported only in the single-tenant space media library, otherwise it is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _recognizeSensitiveContent Specifies whether to perform sensitive content identification during image upload. the value is false by default. this property is supported only in the single-tenant space media library, otherwise it is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetRecognizeSensitiveContent(const bool& _recognizeSensitiveContent);

                    /**
                     * 判断参数 RecognizeSensitiveContent 是否已赋值
                     * @return RecognizeSensitiveContent 是否已赋值
                     * 
                     */
                    bool RecognizeSensitiveContentHasBeenSet() const;

                private:

                    /**
                     * Specifies whether it is a file type media library that can store any type of file (true) or a media type media library that can only store images and playable video types (false). defaults to false. cannot be modified once created.
                     */
                    bool m_isFileLibrary;
                    bool m_isFileLibraryHasBeenSet;

                    /**
                     * true indicates a multi-tenant space media library, allowing the creation of multiple tenant spaces. false indicates a single-tenant space media library, where tenant spaces cannot be created and only the default single tenant space can be used. defaults to false. cannot be modified after the media library is created.
                     */
                    bool m_isMultiSpace;
                    bool m_isMultiSpaceHasBeenSet;

                    /**
                     * Specifies the storage type for files saved to cloud object storage. valid values: STANDARD, STANDARD_IA, INTELLIGENT_TIERING, MAZ_STANDARD, MAZ_STANDARD_IA, and MAZ_INTELLIGENT_TIERING. defaults to STANDARD. when using a multi-AZ bucket, MAZ_ prefixed storage types for multi-AZ are automatically used, otherwise non-MAZ_ prefixed storage types for non-multi-AZ are used. when specifying INTELLIGENT TIERING storage INTELLIGENT_TIERING or MAZ_INTELLIGENT_TIERING, the bucket must have INTELLIGENT TIERING storage enabled beforehand, otherwise failure will be returned. cannot be modified after the media library is created.
                     */
                    std::string m_cosStorageClass;
                    bool m_cosStorageClassHasBeenSet;

                    /**
                     * Specifies whether the recycle bin feature is enabled. defaults to false.
                     */
                    bool m_useRecycleBin;
                    bool m_useRecycleBinHasBeenSet;

                    /**
                     * Specifies the number of days to automatically delete items in the recycle bin when enabled, must not exceed 1095 (3 years). a value of 0 indicates no automatic deletion, defaults to 0. this property is null when the recycle bin is not enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_autoRemoveRecycledDays;
                    bool m_autoRemoveRecycledDaysHasBeenSet;

                    /**
                     * Whether to enable the file path search feature. is false by default.
                     */
                    bool m_enableSearch;
                    bool m_enableSearchHasBeenSet;

                    /**
                     * Specifies whether to deny the configuration request when setting the space quota for a media library or tenant and the quota is less than the used storage capacity. is false by default.
                     */
                    bool m_denyOnQuotaLessThanUsage;
                    bool m_denyOnQuotaLessThanUsageHasBeenSet;

                    /**
                     * Specifies whether the earlier version is enabled. defaults to false.
                     */
                    bool m_enableFileHistory;
                    bool m_enableFileHistoryHasBeenSet;

                    /**
                     * Specifies the maximum number of historical versions to retain for a single file when versioning is enabled, with a value range of 1 to 999. this property may be null when versioning is not enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_fileHistoryCount;
                    bool m_fileHistoryCountHasBeenSet;

                    /**
                     * Specifies the maximum days to retain earlier versions when versioning is enabled, with a value range of 0 to 999. when set to 0, it represents permanent retention. this property may be null when versioning is not enabled.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_fileHistoryExpireDay;
                    bool m_fileHistoryExpireDayHasBeenSet;

                    /**
                     * The maximum length of a directory or file name must not exceed 255, with a default value of 255. modifying this parameter will not affect existing directories or file names. if the value of this field is decreased, the length of existing directories or file names exceeding the target value does not change.
                     */
                    uint64_t m_maxDirFileNameLength;
                    bool m_maxDirFileNameLengthHasBeenSet;

                    /**
                     * Whether public read is enabled. once enabled, read operations require no access token. it is false by default. this property is supported only in single-tenant space media libraries. otherwise, it is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isPublicRead;
                    bool m_isPublicReadHasBeenSet;

                    /**
                     * Specifies whether the multi-album feature is enabled for the media type media library. once enabled, first-level directories (albums) can be created, and media files can only be saved in these albums. unless enabled, albums cannot be created, and media files can only be saved in the root directory. defaults to false. this property is only supported for single-tenant space media type media libraries, otherwise it is null. cannot be modified after the media library is created.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_isMultiAlbum;
                    bool m_isMultiAlbumHasBeenSet;

                    /**
                     * Specifies whether the media library of the media type allows image uploads, set to true by default. this property is supported only for the media library of the media type in a single tenant space, otherwise it is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_allowPhoto;
                    bool m_allowPhotoHasBeenSet;

                    /**
                     * Specifies the allowed extensions when the media type media library allows photo uploads. empty array by default. at this point, it will automatically determine based on the MIME type corresponding to the file extension. this property is supported only for single-tenant space media type media libraries. otherwise, the property is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_allowPhotoExtName;
                    bool m_allowPhotoExtNameHasBeenSet;

                    /**
                     * Media type media library specifies whether video upload is allowed, set to true by default. this property is supported only in single tenant space media type media library, otherwise the property is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_allowVideo;
                    bool m_allowVideoHasBeenSet;

                    /**
                     * Specifies the allowed extensions when the media type media library permits video uploads. the default is an empty array, at which point it will automatically determine based on the MIME type corresponding to the file extension. this property is supported only for single-tenant space media type media libraries, otherwise it is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_allowVideoExtName;
                    bool m_allowVideoExtNameHasBeenSet;

                    /**
                     * Specifies the file extensions allowed in the file type media library, empty by default. at this point, all types of files are upload allowed. this property is supported only for the file type media library in a single tenant space, otherwise it is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_allowFileExtName;
                    bool m_allowFileExtNameHasBeenSet;

                    /**
                     * Specifies whether to perform sensitive content identification during image upload. the value is false by default. this property is supported only in the single-tenant space media library, otherwise it is null.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_recognizeSensitiveContent;
                    bool m_recognizeSensitiveContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMH_V20210712_MODEL_LIBRARYEXTENSION_H_
