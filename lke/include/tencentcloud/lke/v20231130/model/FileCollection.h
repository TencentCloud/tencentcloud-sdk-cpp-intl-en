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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_FILECOLLECTION_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_FILECOLLECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * File collection information
                */
                class FileCollection : public AbstractModel
                {
                public:
                    FileCollection();
                    ~FileCollection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Maximum number of files to be uploaded
                     * @return MaxFileCount Maximum number of files to be uploaded
                     * 
                     */
                    int64_t GetMaxFileCount() const;

                    /**
                     * 设置Maximum number of files to be uploaded
                     * @param _maxFileCount Maximum number of files to be uploaded
                     * 
                     */
                    void SetMaxFileCount(const int64_t& _maxFileCount);

                    /**
                     * 判断参数 MaxFileCount 是否已赋值
                     * @return MaxFileCount 是否已赋值
                     * 
                     */
                    bool MaxFileCountHasBeenSet() const;

                    /**
                     * 获取Supported upload file types
                     * @return SupportedFileTypes Supported upload file types
                     * 
                     */
                    std::vector<std::string> GetSupportedFileTypes() const;

                    /**
                     * 设置Supported upload file types
                     * @param _supportedFileTypes Supported upload file types
                     * 
                     */
                    void SetSupportedFileTypes(const std::vector<std::string>& _supportedFileTypes);

                    /**
                     * 判断参数 SupportedFileTypes 是否已赋值
                     * @return SupportedFileTypes 是否已赋值
                     * 
                     */
                    bool SupportedFileTypesHasBeenSet() const;

                private:

                    /**
                     * Maximum number of files to be uploaded
                     */
                    int64_t m_maxFileCount;
                    bool m_maxFileCountHasBeenSet;

                    /**
                     * Supported upload file types
                     */
                    std::vector<std::string> m_supportedFileTypes;
                    bool m_supportedFileTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_FILECOLLECTION_H_
