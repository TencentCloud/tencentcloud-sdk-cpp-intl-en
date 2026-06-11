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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_UPLOADLOGREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_UPLOADLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * UploadLog request structure.
                */
                class UploadLogRequest : public AbstractModel
                {
                public:
                    UploadLogRequest();
                    ~UploadLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Log topic id
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
                     * @return TopicId Log topic id
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Log topic id
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
                     * @param _topicId Log topic id
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取This parameter has been deprecated and should not be used.
                     * @return HashKey This parameter has been deprecated and should not be used.
                     * @deprecated
                     */
                    std::string GetHashKey() const;

                    /**
                     * 设置This parameter has been deprecated and should not be used.
                     * @param _hashKey This parameter has been deprecated and should not be used.
                     * @deprecated
                     */
                    void SetHashKey(const std::string& _hashKey);

                    /**
                     * 判断参数 HashKey 是否已赋值
                     * @return HashKey 是否已赋值
                     * @deprecated
                     */
                    bool HashKeyHasBeenSet() const;

                    /**
                     * 获取Compression method. Currently supports
- lz4
- zstd
                     * @return CompressType Compression method. Currently supports
- lz4
- zstd
                     * 
                     */
                    std::string GetCompressType() const;

                    /**
                     * 设置Compression method. Currently supports
- lz4
- zstd
                     * @param _compressType Compression method. Currently supports
- lz4
- zstd
                     * 
                     */
                    void SetCompressType(const std::string& _compressType);

                    /**
                     * 判断参数 CompressType 是否已赋值
                     * @return CompressType 是否已赋值
                     * 
                     */
                    bool CompressTypeHasBeenSet() const;

                private:

                    /**
                     * Log topic id
-Obtain the log topic Id through [Get Log Topic List](https://www.tencentcloud.com/document/product/614/56454?from_cn_redirect=1).
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * This parameter has been deprecated and should not be used.
                     */
                    std::string m_hashKey;
                    bool m_hashKeyHasBeenSet;

                    /**
                     * Compression method. Currently supports
- lz4
- zstd
                     */
                    std::string m_compressType;
                    bool m_compressTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_UPLOADLOGREQUEST_H_
