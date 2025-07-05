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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DELETEOFFLINELOGRECORDREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DELETEOFFLINELOGRECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DeleteOfflineLogRecord request structure.
                */
                class DeleteOfflineLogRecordRequest : public AbstractModel
                {
                public:
                    DeleteOfflineLogRecordRequest();
                    ~DeleteOfflineLogRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Unique project key for reporting
                     * @return ProjectKey Unique project key for reporting
                     * 
                     */
                    std::string GetProjectKey() const;

                    /**
                     * 设置Unique project key for reporting
                     * @param _projectKey Unique project key for reporting
                     * 
                     */
                    void SetProjectKey(const std::string& _projectKey);

                    /**
                     * 判断参数 ProjectKey 是否已赋值
                     * @return ProjectKey 是否已赋值
                     * 
                     */
                    bool ProjectKeyHasBeenSet() const;

                    /**
                     * 获取Offline log file ID
                     * @return FileID Offline log file ID
                     * 
                     */
                    std::string GetFileID() const;

                    /**
                     * 设置Offline log file ID
                     * @param _fileID Offline log file ID
                     * 
                     */
                    void SetFileID(const std::string& _fileID);

                    /**
                     * 判断参数 FileID 是否已赋值
                     * @return FileID 是否已赋值
                     * 
                     */
                    bool FileIDHasBeenSet() const;

                private:

                    /**
                     * Unique project key for reporting
                     */
                    std::string m_projectKey;
                    bool m_projectKeyHasBeenSet;

                    /**
                     * Offline log file ID
                     */
                    std::string m_fileID;
                    bool m_fileIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DELETEOFFLINELOGRECORDREQUEST_H_
