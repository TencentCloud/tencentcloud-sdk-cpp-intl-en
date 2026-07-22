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

#ifndef TENCENTCLOUD_ES_V20250101_MODEL_CHUNKCONFIG_H_
#define TENCENTCLOUD_ES_V20250101_MODEL_CHUNKCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20250101
        {
            namespace Model
            {
                /**
                * Document sharding configuration
                */
                class ChunkConfig : public AbstractModel
                {
                public:
                    ChunkConfig();
                    ~ChunkConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取After splitting by the separator, the fragment length is validated. If it exceeds the maximum fragment length, it is split using the next-level separator. If there is no next-level separator, the original length is retained. Default value: 1000.
                     * @return MaxChunkSize After splitting by the separator, the fragment length is validated. If it exceeds the maximum fragment length, it is split using the next-level separator. If there is no next-level separator, the original length is retained. Default value: 1000.
                     * 
                     */
                    uint64_t GetMaxChunkSize() const;

                    /**
                     * 设置After splitting by the separator, the fragment length is validated. If it exceeds the maximum fragment length, it is split using the next-level separator. If there is no next-level separator, the original length is retained. Default value: 1000.
                     * @param _maxChunkSize After splitting by the separator, the fragment length is validated. If it exceeds the maximum fragment length, it is split using the next-level separator. If there is no next-level separator, the original length is retained. Default value: 1000.
                     * 
                     */
                    void SetMaxChunkSize(const uint64_t& _maxChunkSize);

                    /**
                     * 判断参数 MaxChunkSize 是否已赋值
                     * @return MaxChunkSize 是否已赋值
                     * 
                     */
                    bool MaxChunkSizeHasBeenSet() const;

                    /**
                     * 获取Separator list, separators positioned towards the front take precedence; when the file type is TXT, default value: ["\n\n", "\n", ".", ".", "?", ",", ""].
                     * @return Delimiters Separator list, separators positioned towards the front take precedence; when the file type is TXT, default value: ["\n\n", "\n", ".", ".", "?", ",", ""].
                     * 
                     */
                    std::vector<std::string> GetDelimiters() const;

                    /**
                     * 设置Separator list, separators positioned towards the front take precedence; when the file type is TXT, default value: ["\n\n", "\n", ".", ".", "?", ",", ""].
                     * @param _delimiters Separator list, separators positioned towards the front take precedence; when the file type is TXT, default value: ["\n\n", "\n", ".", ".", "?", ",", ""].
                     * 
                     */
                    void SetDelimiters(const std::vector<std::string>& _delimiters);

                    /**
                     * 判断参数 Delimiters 是否已赋值
                     * @return Delimiters 是否已赋值
                     * 
                     */
                    bool DelimitersHasBeenSet() const;

                    /**
                     * 获取The number of overlapping characters between adjacent fragments must be less than the fragment length. Fragments that form completely redundant slices are automatically filtered. Default value: 0.2*MaxChunkSize
                     * @return ChunkOverlap The number of overlapping characters between adjacent fragments must be less than the fragment length. Fragments that form completely redundant slices are automatically filtered. Default value: 0.2*MaxChunkSize
                     * 
                     */
                    uint64_t GetChunkOverlap() const;

                    /**
                     * 设置The number of overlapping characters between adjacent fragments must be less than the fragment length. Fragments that form completely redundant slices are automatically filtered. Default value: 0.2*MaxChunkSize
                     * @param _chunkOverlap The number of overlapping characters between adjacent fragments must be less than the fragment length. Fragments that form completely redundant slices are automatically filtered. Default value: 0.2*MaxChunkSize
                     * 
                     */
                    void SetChunkOverlap(const uint64_t& _chunkOverlap);

                    /**
                     * 判断参数 ChunkOverlap 是否已赋值
                     * @return ChunkOverlap 是否已赋值
                     * 
                     */
                    bool ChunkOverlapHasBeenSet() const;

                private:

                    /**
                     * After splitting by the separator, the fragment length is validated. If it exceeds the maximum fragment length, it is split using the next-level separator. If there is no next-level separator, the original length is retained. Default value: 1000.
                     */
                    uint64_t m_maxChunkSize;
                    bool m_maxChunkSizeHasBeenSet;

                    /**
                     * Separator list, separators positioned towards the front take precedence; when the file type is TXT, default value: ["\n\n", "\n", ".", ".", "?", ",", ""].
                     */
                    std::vector<std::string> m_delimiters;
                    bool m_delimitersHasBeenSet;

                    /**
                     * The number of overlapping characters between adjacent fragments must be less than the fragment length. Fragments that form completely redundant slices are automatically filtered. Default value: 0.2*MaxChunkSize
                     */
                    uint64_t m_chunkOverlap;
                    bool m_chunkOverlapHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20250101_MODEL_CHUNKCONFIG_H_
