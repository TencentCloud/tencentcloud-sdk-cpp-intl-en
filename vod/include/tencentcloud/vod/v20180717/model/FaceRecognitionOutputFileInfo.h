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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_FACERECOGNITIONOUTPUTFILEINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_FACERECOGNITIONOUTPUTFILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Face recognition output file information
                */
                class FaceRecognitionOutputFileInfo : public AbstractModel
                {
                public:
                    FaceRecognitionOutputFileInfo();
                    ~FaceRecognitionOutputFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>Face recognition output file type</p><p>Enumeration value:</p><ul><li>Output: Result output of task generation. The file corresponds to the result in the face recognition task return and is generated in JSON format.</li></ul>
                     * @return FileType <p>Face recognition output file type</p><p>Enumeration value:</p><ul><li>Output: Result output of task generation. The file corresponds to the result in the face recognition task return and is generated in JSON format.</li></ul>
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置<p>Face recognition output file type</p><p>Enumeration value:</p><ul><li>Output: Result output of task generation. The file corresponds to the result in the face recognition task return and is generated in JSON format.</li></ul>
                     * @param _fileType <p>Face recognition output file type</p><p>Enumeration value:</p><ul><li>Output: Result output of task generation. The file corresponds to the result in the face recognition task return and is generated in JSON format.</li></ul>
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取<p>File URL of face recognition output</p>
                     * @return Url <p>File URL of face recognition output</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>File URL of face recognition output</p>
                     * @param _url <p>File URL of face recognition output</p>
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * <p>Face recognition output file type</p><p>Enumeration value:</p><ul><li>Output: Result output of task generation. The file corresponds to the result in the face recognition task return and is generated in JSON format.</li></ul>
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * <p>File URL of face recognition output</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_FACERECOGNITIONOUTPUTFILEINFO_H_
