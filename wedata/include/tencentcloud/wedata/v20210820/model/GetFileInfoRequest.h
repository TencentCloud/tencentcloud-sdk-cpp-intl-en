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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_GETFILEINFOREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_GETFILEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * GetFileInfo request structure.
                */
                class GetFileInfoRequest : public AbstractModel
                {
                public:
                    GetFileInfoRequest();
                    ~GetFileInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Project ID
                     * @return ProjectId Project ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置Project ID
                     * @param _projectId Project ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取File pathProject Area 1470575647377821696 project, in directory f1: /datastudio/project/1470575647377821696/f1/sql1234.sql Personal Area: /datastudio/personal/sqlTTT.sql
                     * @return FilePath File pathProject Area 1470575647377821696 project, in directory f1: /datastudio/project/1470575647377821696/f1/sql1234.sql Personal Area: /datastudio/personal/sqlTTT.sql
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置File pathProject Area 1470575647377821696 project, in directory f1: /datastudio/project/1470575647377821696/f1/sql1234.sql Personal Area: /datastudio/personal/sqlTTT.sql
                     * @param _filePath File pathProject Area 1470575647377821696 project, in directory f1: /datastudio/project/1470575647377821696/f1/sql1234.sql Personal Area: /datastudio/personal/sqlTTT.sql
                     * 
                     */
                    void SetFilePath(const std::string& _filePath);

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     * 
                     */
                    bool FilePathHasBeenSet() const;

                private:

                    /**
                     * Project ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * File pathProject Area 1470575647377821696 project, in directory f1: /datastudio/project/1470575647377821696/f1/sql1234.sql Personal Area: /datastudio/personal/sqlTTT.sql
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_GETFILEINFOREQUEST_H_
