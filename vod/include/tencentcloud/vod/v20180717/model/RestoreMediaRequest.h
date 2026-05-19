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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_RESTOREMEDIAREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_RESTOREMEDIAREQUEST_H_

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
                * RestoreMedia request structure.
                */
                class RestoreMediaRequest : public AbstractModel
                {
                public:
                    RestoreMediaRequest();
                    ~RestoreMediaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique identifier list of media files. Maximum length: 100.
                     * @return FileIds Unique identifier list of media files. Maximum length: 100.
                     * 
                     */
                    std::vector<std::string> GetFileIds() const;

                    /**
                     * 设置Unique identifier list of media files. Maximum length: 100.
                     * @param _fileIds Unique identifier list of media files. Maximum length: 100.
                     * 
                     */
                    void SetFileIds(const std::vector<std::string>& _fileIds);

                    /**
                     * 判断参数 FileIds 是否已赋值
                     * @return FileIds 是否已赋值
                     * 
                     */
                    bool FileIdsHasBeenSet() const;

                    /**
                     * 获取Accessible duration of thawed temporary media files must be greater than 0. Unit: day.
                     * @return RestoreDay Accessible duration of thawed temporary media files must be greater than 0. Unit: day.
                     * 
                     */
                    uint64_t GetRestoreDay() const;

                    /**
                     * 设置Accessible duration of thawed temporary media files must be greater than 0. Unit: day.
                     * @param _restoreDay Accessible duration of thawed temporary media files must be greater than 0. Unit: day.
                     * 
                     */
                    void SetRestoreDay(const uint64_t& _restoreDay);

                    /**
                     * 判断参数 RestoreDay 是否已赋值
                     * @return RestoreDay 是否已赋值
                     * 
                     */
                    bool RestoreDayHasBeenSet() const;

                    /**
                     * 获取<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * @return SubAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     * @param _subAppId <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
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
                     * 获取Thawing mode. When the current storage type of a media file is archive storage, it takes the following values:
<li>Speed mode: Expedited. The unfreeze task will be completed in 5 minutes.</li>
<li>Standard mode: Standard. The unfreeze task will be completed in 5 hours.</li>
<li>Batch mode: Bulk. The unfreeze task will be completed in 12 hours.</li>
When the file storage type of the media file is DEEP_ARCHIVE, the following values are available:
<li>Standard mode: Standard. The unfreeze task will be completed in 24 hours.</li>
<li>Batch mode: Bulk. The unfreeze task will be completed after 48 hours.</li>
                     * @return RestoreTier Thawing mode. When the current storage type of a media file is archive storage, it takes the following values:
<li>Speed mode: Expedited. The unfreeze task will be completed in 5 minutes.</li>
<li>Standard mode: Standard. The unfreeze task will be completed in 5 hours.</li>
<li>Batch mode: Bulk. The unfreeze task will be completed in 12 hours.</li>
When the file storage type of the media file is DEEP_ARCHIVE, the following values are available:
<li>Standard mode: Standard. The unfreeze task will be completed in 24 hours.</li>
<li>Batch mode: Bulk. The unfreeze task will be completed after 48 hours.</li>
                     * 
                     */
                    std::string GetRestoreTier() const;

                    /**
                     * 设置Thawing mode. When the current storage type of a media file is archive storage, it takes the following values:
<li>Speed mode: Expedited. The unfreeze task will be completed in 5 minutes.</li>
<li>Standard mode: Standard. The unfreeze task will be completed in 5 hours.</li>
<li>Batch mode: Bulk. The unfreeze task will be completed in 12 hours.</li>
When the file storage type of the media file is DEEP_ARCHIVE, the following values are available:
<li>Standard mode: Standard. The unfreeze task will be completed in 24 hours.</li>
<li>Batch mode: Bulk. The unfreeze task will be completed after 48 hours.</li>
                     * @param _restoreTier Thawing mode. When the current storage type of a media file is archive storage, it takes the following values:
<li>Speed mode: Expedited. The unfreeze task will be completed in 5 minutes.</li>
<li>Standard mode: Standard. The unfreeze task will be completed in 5 hours.</li>
<li>Batch mode: Bulk. The unfreeze task will be completed in 12 hours.</li>
When the file storage type of the media file is DEEP_ARCHIVE, the following values are available:
<li>Standard mode: Standard. The unfreeze task will be completed in 24 hours.</li>
<li>Batch mode: Bulk. The unfreeze task will be completed after 48 hours.</li>
                     * 
                     */
                    void SetRestoreTier(const std::string& _restoreTier);

                    /**
                     * 判断参数 RestoreTier 是否已赋值
                     * @return RestoreTier 是否已赋值
                     * 
                     */
                    bool RestoreTierHasBeenSet() const;

                private:

                    /**
                     * Unique identifier list of media files. Maximum length: 100.
                     */
                    std::vector<std::string> m_fileIds;
                    bool m_fileIdsHasBeenSet;

                    /**
                     * Accessible duration of thawed temporary media files must be greater than 0. Unit: day.
                     */
                    uint64_t m_restoreDay;
                    bool m_restoreDayHasBeenSet;

                    /**
                     * <b>VOD [application](https://www.tencentcloud.com/document/product/266/14574?from_cn_redirect=1) ID. Customers who activate VOD services after December 25, 2023 must fill this field with the application ID when accessing resources in on-demand applications (whether default or newly created).</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * Thawing mode. When the current storage type of a media file is archive storage, it takes the following values:
<li>Speed mode: Expedited. The unfreeze task will be completed in 5 minutes.</li>
<li>Standard mode: Standard. The unfreeze task will be completed in 5 hours.</li>
<li>Batch mode: Bulk. The unfreeze task will be completed in 12 hours.</li>
When the file storage type of the media file is DEEP_ARCHIVE, the following values are available:
<li>Standard mode: Standard. The unfreeze task will be completed in 24 hours.</li>
<li>Batch mode: Bulk. The unfreeze task will be completed after 48 hours.</li>
                     */
                    std::string m_restoreTier;
                    bool m_restoreTierHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_RESTOREMEDIAREQUEST_H_
