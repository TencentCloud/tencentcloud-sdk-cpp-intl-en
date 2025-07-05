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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCEDOWNLOADLOGINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCEDOWNLOADLOGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Download Log Details
                */
                class InstanceDownloadLogInfo : public AbstractModel
                {
                public:
                    InstanceDownloadLogInfo();
                    ~InstanceDownloadLogInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取File NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @return FileName File NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置File NameNote: This field may return null, indicating that no valid value can be obtained.
                     * @param _fileName File NameNote: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取File URL
Note: This field may return null, indicating that no valid value can be obtained.
                     * @return FileUrl File URL
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置File URL
Note: This field may return null, indicating that no valid value can be obtained.
                     * @param _fileUrl File URL
Note: This field may return null, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFileUrl(const std::string& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     * 
                     */
                    bool FileUrlHasBeenSet() const;

                private:

                    /**
                     * File NameNote: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * File URL
Note: This field may return null, indicating that no valid value can be obtained.
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCEDOWNLOADLOGINFO_H_
