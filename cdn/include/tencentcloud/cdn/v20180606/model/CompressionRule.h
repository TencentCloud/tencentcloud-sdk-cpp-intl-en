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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_COMPRESSIONRULE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_COMPRESSIONRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * Compression rules configuration. Up to 100 entries can be set.
                */
                class CompressionRule : public AbstractModel
                {
                public:
                    CompressionRule();
                    ~CompressionRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取true: must be set as true, enables compression
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Compress true: must be set as true, enables compression
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool GetCompress() const;

                    /**
                     * 设置true: must be set as true, enables compression
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Compress true: must be set as true, enables compression
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetCompress(const bool& _compress);

                    /**
                     * 判断参数 Compress 是否已赋值
                     * @return Compress 是否已赋值
                     */
                    bool CompressHasBeenSet() const;

                    /**
                     * 获取Compress according to the file suffix type
Such as: jpg, txt
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return FileExtensions Compress according to the file suffix type
Such as: jpg, txt
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetFileExtensions() const;

                    /**
                     * 设置Compress according to the file suffix type
Such as: jpg, txt
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param FileExtensions Compress according to the file suffix type
Such as: jpg, txt
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetFileExtensions(const std::vector<std::string>& _fileExtensions);

                    /**
                     * 判断参数 FileExtensions 是否已赋值
                     * @return FileExtensions 是否已赋值
                     */
                    bool FileExtensionsHasBeenSet() const;

                    /**
                     * 获取The minimum file size to trigger compression (in bytes)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MinLength The minimum file size to trigger compression (in bytes)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetMinLength() const;

                    /**
                     * 设置The minimum file size to trigger compression (in bytes)
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MinLength The minimum file size to trigger compression (in bytes)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMinLength(const int64_t& _minLength);

                    /**
                     * 判断参数 MinLength 是否已赋值
                     * @return MinLength 是否已赋值
                     */
                    bool MinLengthHasBeenSet() const;

                    /**
                     * 获取The maximum file size to trigger compression (in bytes)
The maximum value is 30 MB
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return MaxLength The maximum file size to trigger compression (in bytes)
The maximum value is 30 MB
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t GetMaxLength() const;

                    /**
                     * 设置The maximum file size to trigger compression (in bytes)
The maximum value is 30 MB
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param MaxLength The maximum file size to trigger compression (in bytes)
The maximum value is 30 MB
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetMaxLength(const int64_t& _maxLength);

                    /**
                     * 判断参数 MaxLength 是否已赋值
                     * @return MaxLength 是否已赋值
                     */
                    bool MaxLengthHasBeenSet() const;

                    /**
                     * 获取File compression algorithm
gzip: specifies Gzip compression
brotli: this can be enabled when the Gzip compression is specified
Note: this field may return null, indicating that no valid values can be obtained.
                     * @return Algorithms File compression algorithm
gzip: specifies Gzip compression
brotli: this can be enabled when the Gzip compression is specified
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> GetAlgorithms() const;

                    /**
                     * 设置File compression algorithm
gzip: specifies Gzip compression
brotli: this can be enabled when the Gzip compression is specified
Note: this field may return null, indicating that no valid values can be obtained.
                     * @param Algorithms File compression algorithm
gzip: specifies Gzip compression
brotli: this can be enabled when the Gzip compression is specified
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    void SetAlgorithms(const std::vector<std::string>& _algorithms);

                    /**
                     * 判断参数 Algorithms 是否已赋值
                     * @return Algorithms 是否已赋值
                     */
                    bool AlgorithmsHasBeenSet() const;

                private:

                    /**
                     * true: must be set as true, enables compression
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_compress;
                    bool m_compressHasBeenSet;

                    /**
                     * Compress according to the file suffix type
Such as: jpg, txt
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_fileExtensions;
                    bool m_fileExtensionsHasBeenSet;

                    /**
                     * The minimum file size to trigger compression (in bytes)
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_minLength;
                    bool m_minLengthHasBeenSet;

                    /**
                     * The maximum file size to trigger compression (in bytes)
The maximum value is 30 MB
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_maxLength;
                    bool m_maxLengthHasBeenSet;

                    /**
                     * File compression algorithm
gzip: specifies Gzip compression
brotli: this can be enabled when the Gzip compression is specified
Note: this field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<std::string> m_algorithms;
                    bool m_algorithmsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_COMPRESSIONRULE_H_
