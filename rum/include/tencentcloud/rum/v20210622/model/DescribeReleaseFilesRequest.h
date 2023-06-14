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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERELEASEFILESREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERELEASEFILESREQUEST_H_

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
                * DescribeReleaseFiles request structure.
                */
                class DescribeReleaseFilesRequest : public AbstractModel
                {
                public:
                    DescribeReleaseFilesRequest();
                    ~DescribeReleaseFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID
                     * @return ProjectID Project ID
                     * 
                     */
                    int64_t GetProjectID() const;

                    /**
                     * 设置Project ID
                     * @param _projectID Project ID
                     * 
                     */
                    void SetProjectID(const int64_t& _projectID);

                    /**
                     * 判断参数 ProjectID 是否已赋值
                     * @return ProjectID 是否已赋值
                     * 
                     */
                    bool ProjectIDHasBeenSet() const;

                    /**
                     * 获取File version
                     * @return FileVersion File version
                     * 
                     */
                    std::string GetFileVersion() const;

                    /**
                     * 设置File version
                     * @param _fileVersion File version
                     * 
                     */
                    void SetFileVersion(const std::string& _fileVersion);

                    /**
                     * 判断参数 FileVersion 是否已赋值
                     * @return FileVersion 是否已赋值
                     * 
                     */
                    bool FileVersionHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    int64_t m_projectID;
                    bool m_projectIDHasBeenSet;

                    /**
                     * File version
                     */
                    std::string m_fileVersion;
                    bool m_fileVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERELEASEFILESREQUEST_H_
