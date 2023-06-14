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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBACKUPURLRESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBACKUPURLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/BackupDownloadInfo.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeBackupUrl response structure.
                */
                class DescribeBackupUrlResponse : public AbstractModel
                {
                public:
                    DescribeBackupUrlResponse();
                    ~DescribeBackupUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Public network download address (valid for six hours). This field will be disused soon.
                     * @return DownloadUrl Public network download address (valid for six hours). This field will be disused soon.
                     * 
                     */
                    std::vector<std::string> GetDownloadUrl() const;

                    /**
                     * 判断参数 DownloadUrl 是否已赋值
                     * @return DownloadUrl 是否已赋值
                     * 
                     */
                    bool DownloadUrlHasBeenSet() const;

                    /**
                     * 获取Private network download address (valid for six hours). This field will be disused soon.
                     * @return InnerDownloadUrl Private network download address (valid for six hours). This field will be disused soon.
                     * 
                     */
                    std::vector<std::string> GetInnerDownloadUrl() const;

                    /**
                     * 判断参数 InnerDownloadUrl 是否已赋值
                     * @return InnerDownloadUrl 是否已赋值
                     * 
                     */
                    bool InnerDownloadUrlHasBeenSet() const;

                    /**
                     * 获取Filename. This field will be disused soon.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Filenames Filename. This field will be disused soon.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<std::string> GetFilenames() const;

                    /**
                     * 判断参数 Filenames 是否已赋值
                     * @return Filenames 是否已赋值
                     * 
                     */
                    bool FilenamesHasBeenSet() const;

                    /**
                     * 获取List of backup file information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return BackupInfos List of backup file information.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<BackupDownloadInfo> GetBackupInfos() const;

                    /**
                     * 判断参数 BackupInfos 是否已赋值
                     * @return BackupInfos 是否已赋值
                     * 
                     */
                    bool BackupInfosHasBeenSet() const;

                private:

                    /**
                     * Public network download address (valid for six hours). This field will be disused soon.
                     */
                    std::vector<std::string> m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                    /**
                     * Private network download address (valid for six hours). This field will be disused soon.
                     */
                    std::vector<std::string> m_innerDownloadUrl;
                    bool m_innerDownloadUrlHasBeenSet;

                    /**
                     * Filename. This field will be disused soon.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_filenames;
                    bool m_filenamesHasBeenSet;

                    /**
                     * List of backup file information.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<BackupDownloadInfo> m_backupInfos;
                    bool m_backupInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBACKUPURLRESPONSE_H_
