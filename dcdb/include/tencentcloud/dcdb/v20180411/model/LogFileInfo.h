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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_LOGFILEINFO_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_LOGFILEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * Information of a pulled log
                */
                class LogFileInfo : public AbstractModel
                {
                public:
                    LogFileInfo();
                    ~LogFileInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Last modified time of a log
                     * @return Mtime Last modified time of a log
                     * 
                     */
                    uint64_t GetMtime() const;

                    /**
                     * 设置Last modified time of a log
                     * @param _mtime Last modified time of a log
                     * 
                     */
                    void SetMtime(const uint64_t& _mtime);

                    /**
                     * 判断参数 Mtime 是否已赋值
                     * @return Mtime 是否已赋值
                     * 
                     */
                    bool MtimeHasBeenSet() const;

                    /**
                     * 获取File length
                     * @return Length File length
                     * 
                     */
                    uint64_t GetLength() const;

                    /**
                     * 设置File length
                     * @param _length File length
                     * 
                     */
                    void SetLength(const uint64_t& _length);

                    /**
                     * 判断参数 Length 是否已赋值
                     * @return Length 是否已赋值
                     * 
                     */
                    bool LengthHasBeenSet() const;

                    /**
                     * 获取Uniform resource identifier (URI) used during log download
                     * @return Uri Uniform resource identifier (URI) used during log download
                     * 
                     */
                    std::string GetUri() const;

                    /**
                     * 设置Uniform resource identifier (URI) used during log download
                     * @param _uri Uniform resource identifier (URI) used during log download
                     * 
                     */
                    void SetUri(const std::string& _uri);

                    /**
                     * 判断参数 Uri 是否已赋值
                     * @return Uri 是否已赋值
                     * 
                     */
                    bool UriHasBeenSet() const;

                    /**
                     * 获取Filename
                     * @return FileName Filename
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置Filename
                     * @param _fileName Filename
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                private:

                    /**
                     * Last modified time of a log
                     */
                    uint64_t m_mtime;
                    bool m_mtimeHasBeenSet;

                    /**
                     * File length
                     */
                    uint64_t m_length;
                    bool m_lengthHasBeenSet;

                    /**
                     * Uniform resource identifier (URI) used during log download
                     */
                    std::string m_uri;
                    bool m_uriHasBeenSet;

                    /**
                     * Filename
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_LOGFILEINFO_H_
