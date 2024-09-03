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

#ifndef TENCENTCLOUD_CAR_V20220110_MODEL_USERAPPLICATIONFILEINFO_H_
#define TENCENTCLOUD_CAR_V20220110_MODEL_USERAPPLICATIONFILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Car
    {
        namespace V20220110
        {
            namespace Model
            {
                /**
                * Application file information.
                */
                class UserApplicationFileInfo : public AbstractModel
                {
                public:
                    UserApplicationFileInfo();
                    ~UserApplicationFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Application file path.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FilePath Application file path.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFilePath() const;

                    /**
                     * 设置Application file path.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _filePath Application file path.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFilePath(const std::string& _filePath);

                    /**
                     * 判断参数 FilePath 是否已赋值
                     * @return FilePath 是否已赋值
                     * 
                     */
                    bool FilePathHasBeenSet() const;

                    /**
                     * 获取File status. NO_EXIST: The file does not exist; EXIST: The file exists.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return FileState File status. NO_EXIST: The file does not exist; EXIST: The file exists.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetFileState() const;

                    /**
                     * 设置File status. NO_EXIST: The file does not exist; EXIST: The file exists.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _fileState File status. NO_EXIST: The file does not exist; EXIST: The file exists.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetFileState(const std::string& _fileState);

                    /**
                     * 判断参数 FileState 是否已赋值
                     * @return FileState 是否已赋值
                     * 
                     */
                    bool FileStateHasBeenSet() const;

                private:

                    /**
                     * Application file path.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_filePath;
                    bool m_filePathHasBeenSet;

                    /**
                     * File status. NO_EXIST: The file does not exist; EXIST: The file exists.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_fileState;
                    bool m_fileStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAR_V20220110_MODEL_USERAPPLICATIONFILEINFO_H_
