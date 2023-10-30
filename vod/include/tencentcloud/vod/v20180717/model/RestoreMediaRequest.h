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
                     * 获取The IDs of media files.
                     * @return FileIds The IDs of media files.
                     * 
                     */
                    std::vector<std::string> GetFileIds() const;

                    /**
                     * 设置The IDs of media files.
                     * @param _fileIds The IDs of media files.
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
                     * 获取The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.
                     * @return SubAppId The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.
                     * @param _subAppId The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.
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
                     * 获取The number of days during which the restored files will remain available.
                     * @return RestoreDay The number of days during which the restored files will remain available.
                     * 
                     */
                    uint64_t GetRestoreDay() const;

                    /**
                     * 设置The number of days during which the restored files will remain available.
                     * @param _restoreDay The number of days during which the restored files will remain available.
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
                     * 获取The retrieval mode. If the current storage class is ARCHIVE, the valid values for this parameter are as follows:
<li>Expedited: The files are made available in five minutes.</li>
<li>Standard: The files are made available in five hours.</li>
<li>Bulk: The files are made available in 12 hours.</li>
If the current storage class is DEEP ARCHIVE, the valid values for this parameter are as follows:
<li>Standard: The files are made available in 24 hours.</li>
<li>Bulk: The files are made available in 48 hours.</li>
                     * @return RestoreTier The retrieval mode. If the current storage class is ARCHIVE, the valid values for this parameter are as follows:
<li>Expedited: The files are made available in five minutes.</li>
<li>Standard: The files are made available in five hours.</li>
<li>Bulk: The files are made available in 12 hours.</li>
If the current storage class is DEEP ARCHIVE, the valid values for this parameter are as follows:
<li>Standard: The files are made available in 24 hours.</li>
<li>Bulk: The files are made available in 48 hours.</li>
                     * 
                     */
                    std::string GetRestoreTier() const;

                    /**
                     * 设置The retrieval mode. If the current storage class is ARCHIVE, the valid values for this parameter are as follows:
<li>Expedited: The files are made available in five minutes.</li>
<li>Standard: The files are made available in five hours.</li>
<li>Bulk: The files are made available in 12 hours.</li>
If the current storage class is DEEP ARCHIVE, the valid values for this parameter are as follows:
<li>Standard: The files are made available in 24 hours.</li>
<li>Bulk: The files are made available in 48 hours.</li>
                     * @param _restoreTier The retrieval mode. If the current storage class is ARCHIVE, the valid values for this parameter are as follows:
<li>Expedited: The files are made available in five minutes.</li>
<li>Standard: The files are made available in five hours.</li>
<li>Bulk: The files are made available in 12 hours.</li>
If the current storage class is DEEP ARCHIVE, the valid values for this parameter are as follows:
<li>Standard: The files are made available in 24 hours.</li>
<li>Bulk: The files are made available in 48 hours.</li>
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
                     * The IDs of media files.
                     */
                    std::vector<std::string> m_fileIds;
                    bool m_fileIdsHasBeenSet;

                    /**
                     * The VOD [subapplication](https://intl.cloud.tencent.com/document/product/266/14574?from_cn_redirect=1) ID. If you need to access a resource in a subapplication, set this parameter to the subapplication ID; otherwise, leave it empty.
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * The number of days during which the restored files will remain available.
                     */
                    uint64_t m_restoreDay;
                    bool m_restoreDayHasBeenSet;

                    /**
                     * The retrieval mode. If the current storage class is ARCHIVE, the valid values for this parameter are as follows:
<li>Expedited: The files are made available in five minutes.</li>
<li>Standard: The files are made available in five hours.</li>
<li>Bulk: The files are made available in 12 hours.</li>
If the current storage class is DEEP ARCHIVE, the valid values for this parameter are as follows:
<li>Standard: The files are made available in 24 hours.</li>
<li>Bulk: The files are made available in 48 hours.</li>
                     */
                    std::string m_restoreTier;
                    bool m_restoreTierHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_RESTOREMEDIAREQUEST_H_
