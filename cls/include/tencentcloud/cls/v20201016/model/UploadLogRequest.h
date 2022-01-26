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
                     * 获取Topic ID
                     * @return TopicId Topic ID
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置Topic ID
                     * @param TopicId Topic ID
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取Topic partition where data will be written into by `HashKey` 
                     * @return HashKey Topic partition where data will be written into by `HashKey` 
                     */
                    std::string GetHashKey() const;

                    /**
                     * 设置Topic partition where data will be written into by `HashKey` 
                     * @param HashKey Topic partition where data will be written into by `HashKey` 
                     */
                    void SetHashKey(const std::string& _hashKey);

                    /**
                     * 判断参数 HashKey 是否已赋值
                     * @return HashKey 是否已赋值
                     */
                    bool HashKeyHasBeenSet() const;

                    /**
                     * 获取Compression type
                     * @return CompressType Compression type
                     */
                    std::string GetCompressType() const;

                    /**
                     * 设置Compression type
                     * @param CompressType Compression type
                     */
                    void SetCompressType(const std::string& _compressType);

                    /**
                     * 判断参数 CompressType 是否已赋值
                     * @return CompressType 是否已赋值
                     */
                    bool CompressTypeHasBeenSet() const;

                private:

                    /**
                     * Topic ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * Topic partition where data will be written into by `HashKey` 
                     */
                    std::string m_hashKey;
                    bool m_hashKeyHasBeenSet;

                    /**
                     * Compression type
                     */
                    std::string m_compressType;
                    bool m_compressTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_UPLOADLOGREQUEST_H_
