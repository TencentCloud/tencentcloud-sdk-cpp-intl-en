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
                * Intelligent compression rule configuration
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
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return Compress true: must be set as true, enables compression
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetCompress() const;

                    /**
                     * 设置true: must be set as true, enables compression
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _compress true: must be set as true, enables compression
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetCompress(const bool& _compress);

                    /**
                     * 判断参数 Compress 是否已赋值
                     * @return Compress 是否已赋值
                     * 
                     */
                    bool CompressHasBeenSet() const;

                    /**
                     * 获取The minimum file size to trigger compression (in bytes)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @return MinLength The minimum file size to trigger compression (in bytes)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetMinLength() const;

                    /**
                     * 设置The minimum file size to trigger compression (in bytes)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * @param _minLength The minimum file size to trigger compression (in bytes)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMinLength(const int64_t& _minLength);

                    /**
                     * 判断参数 MinLength 是否已赋值
                     * @return MinLength 是否已赋值
                     * 
                     */
                    bool MinLengthHasBeenSet() const;

                    /**
                     * 获取The maximum file size to trigger compression (in bytes).
The maximum value is 30 MB.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return MaxLength The maximum file size to trigger compression (in bytes).
The maximum value is 30 MB.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    int64_t GetMaxLength() const;

                    /**
                     * 设置The maximum file size to trigger compression (in bytes).
The maximum value is 30 MB.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _maxLength The maximum file size to trigger compression (in bytes).
The maximum value is 30 MB.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetMaxLength(const int64_t& _maxLength);

                    /**
                     * 判断参数 MaxLength 是否已赋值
                     * @return MaxLength 是否已赋值
                     * 
                     */
                    bool MaxLengthHasBeenSet() const;

                    /**
                     * 获取File compression algorithm
`gzip`: Gzip compression
`brotli`: Brotli compression
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return Algorithms File compression algorithm
`gzip`: Gzip compression
`brotli`: Brotli compression
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetAlgorithms() const;

                    /**
                     * 设置File compression algorithm
`gzip`: Gzip compression
`brotli`: Brotli compression
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _algorithms File compression algorithm
`gzip`: Gzip compression
`brotli`: Brotli compression
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetAlgorithms(const std::vector<std::string>& _algorithms);

                    /**
                     * 判断参数 Algorithms 是否已赋值
                     * @return Algorithms 是否已赋值
                     * 
                     */
                    bool AlgorithmsHasBeenSet() const;

                    /**
                     * 获取Compress based on file suffix.
File suffixes such as jpg and txt are supported.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return FileExtensions Compress based on file suffix.
File suffixes such as jpg and txt are supported.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetFileExtensions() const;

                    /**
                     * 设置Compress based on file suffix.
File suffixes such as jpg and txt are supported.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _fileExtensions Compress based on file suffix.
File suffixes such as jpg and txt are supported.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetFileExtensions(const std::vector<std::string>& _fileExtensions);

                    /**
                     * 判断参数 FileExtensions 是否已赋值
                     * @return FileExtensions 是否已赋值
                     * 
                     */
                    bool FileExtensionsHasBeenSet() const;

                    /**
                     * 获取Rule types:
`all`: Apply to all files.
`file`: Apply to files with the specified suffixes.
`directory`: Apply to specified paths.
`path`: Apply to specified absolute paths.
`contentType`: Apply when the `ContentType` is specified.
If this field is specified, `FileExtensions` does not take effect.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return RuleType Rule types:
`all`: Apply to all files.
`file`: Apply to files with the specified suffixes.
`directory`: Apply to specified paths.
`path`: Apply to specified absolute paths.
`contentType`: Apply when the `ContentType` is specified.
If this field is specified, `FileExtensions` does not take effect.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::string GetRuleType() const;

                    /**
                     * 设置Rule types:
`all`: Apply to all files.
`file`: Apply to files with the specified suffixes.
`directory`: Apply to specified paths.
`path`: Apply to specified absolute paths.
`contentType`: Apply when the `ContentType` is specified.
If this field is specified, `FileExtensions` does not take effect.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _ruleType Rule types:
`all`: Apply to all files.
`file`: Apply to files with the specified suffixes.
`directory`: Apply to specified paths.
`path`: Apply to specified absolute paths.
`contentType`: Apply when the `ContentType` is specified.
If this field is specified, `FileExtensions` does not take effect.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRuleType(const std::string& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取Content for each `CacheType`:
For `all`, enter a wildcard `*`.
For `file`, enter a suffix, e.g., `jpg` or `txt`.
For `directory`, enter a path, e.g., `/xxx/test/`.
For `path`, enter an absolute path, e.g., `/xxx/test.html`.
For `contentType`, enter `text/html`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @return RulePaths Content for each `CacheType`:
For `all`, enter a wildcard `*`.
For `file`, enter a suffix, e.g., `jpg` or `txt`.
For `directory`, enter a path, e.g., `/xxx/test/`.
For `path`, enter an absolute path, e.g., `/xxx/test.html`.
For `contentType`, enter `text/html`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    std::vector<std::string> GetRulePaths() const;

                    /**
                     * 设置Content for each `CacheType`:
For `all`, enter a wildcard `*`.
For `file`, enter a suffix, e.g., `jpg` or `txt`.
For `directory`, enter a path, e.g., `/xxx/test/`.
For `path`, enter an absolute path, e.g., `/xxx/test.html`.
For `contentType`, enter `text/html`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * @param _rulePaths Content for each `CacheType`:
For `all`, enter a wildcard `*`.
For `file`, enter a suffix, e.g., `jpg` or `txt`.
For `directory`, enter a path, e.g., `/xxx/test/`.
For `path`, enter an absolute path, e.g., `/xxx/test.html`.
For `contentType`, enter `text/html`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     * 
                     */
                    void SetRulePaths(const std::vector<std::string>& _rulePaths);

                    /**
                     * 判断参数 RulePaths 是否已赋值
                     * @return RulePaths 是否已赋值
                     * 
                     */
                    bool RulePathsHasBeenSet() const;

                private:

                    /**
                     * true: must be set as true, enables compression
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    bool m_compress;
                    bool m_compressHasBeenSet;

                    /**
                     * The minimum file size to trigger compression (in bytes)
Note: this field may return `null`, indicating that no valid values can be obtained.
                     */
                    int64_t m_minLength;
                    bool m_minLengthHasBeenSet;

                    /**
                     * The maximum file size to trigger compression (in bytes).
The maximum value is 30 MB.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    int64_t m_maxLength;
                    bool m_maxLengthHasBeenSet;

                    /**
                     * File compression algorithm
`gzip`: Gzip compression
`brotli`: Brotli compression
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_algorithms;
                    bool m_algorithmsHasBeenSet;

                    /**
                     * Compress based on file suffix.
File suffixes such as jpg and txt are supported.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_fileExtensions;
                    bool m_fileExtensionsHasBeenSet;

                    /**
                     * Rule types:
`all`: Apply to all files.
`file`: Apply to files with the specified suffixes.
`directory`: Apply to specified paths.
`path`: Apply to specified absolute paths.
`contentType`: Apply when the `ContentType` is specified.
If this field is specified, `FileExtensions` does not take effect.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::string m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * Content for each `CacheType`:
For `all`, enter a wildcard `*`.
For `file`, enter a suffix, e.g., `jpg` or `txt`.
For `directory`, enter a path, e.g., `/xxx/test/`.
For `path`, enter an absolute path, e.g., `/xxx/test.html`.
For `contentType`, enter `text/html`.
Note: This field may return `null`, indicating that no valid value can be obtained.
                     */
                    std::vector<std::string> m_rulePaths;
                    bool m_rulePathsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_COMPRESSIONRULE_H_
