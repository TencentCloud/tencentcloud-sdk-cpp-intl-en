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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_REDISPREKEYSPACEDATA_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_REDISPREKEYSPACEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * Space information of Redis key prefixes
                */
                class RedisPreKeySpaceData : public AbstractModel
                {
                public:
                    RedisPreKeySpaceData();
                    ~RedisPreKeySpaceData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Average element length
                     * @return AveElementSize Average element length
                     * 
                     */
                    int64_t GetAveElementSize() const;

                    /**
                     * 设置Average element length
                     * @param _aveElementSize Average element length
                     * 
                     */
                    void SetAveElementSize(const int64_t& _aveElementSize);

                    /**
                     * 判断参数 AveElementSize 是否已赋值
                     * @return AveElementSize 是否已赋值
                     * 
                     */
                    bool AveElementSizeHasBeenSet() const;

                    /**
                     * 获取Total memory usage in bytes
                     * @return Length Total memory usage in bytes
                     * 
                     */
                    int64_t GetLength() const;

                    /**
                     * 设置Total memory usage in bytes
                     * @param _length Total memory usage in bytes
                     * 
                     */
                    void SetLength(const int64_t& _length);

                    /**
                     * 判断参数 Length 是否已赋值
                     * @return Length 是否已赋值
                     * 
                     */
                    bool LengthHasBeenSet() const;

                    /**
                     * 获取Key prefix
                     * @return KeyPreIndex Key prefix
                     * 
                     */
                    std::string GetKeyPreIndex() const;

                    /**
                     * 设置Key prefix
                     * @param _keyPreIndex Key prefix
                     * 
                     */
                    void SetKeyPreIndex(const std::string& _keyPreIndex);

                    /**
                     * 判断参数 KeyPreIndex 是否已赋值
                     * @return KeyPreIndex 是否已赋值
                     * 
                     */
                    bool KeyPreIndexHasBeenSet() const;

                    /**
                     * 获取The number of elements
                     * @return ItemCount The number of elements
                     * 
                     */
                    int64_t GetItemCount() const;

                    /**
                     * 设置The number of elements
                     * @param _itemCount The number of elements
                     * 
                     */
                    void SetItemCount(const int64_t& _itemCount);

                    /**
                     * 判断参数 ItemCount 是否已赋值
                     * @return ItemCount 是否已赋值
                     * 
                     */
                    bool ItemCountHasBeenSet() const;

                    /**
                     * 获取The number of keys
                     * @return Count The number of keys
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置The number of keys
                     * @param _count The number of keys
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取The max element length
                     * @return MaxElementSize The max element length
                     * 
                     */
                    int64_t GetMaxElementSize() const;

                    /**
                     * 设置The max element length
                     * @param _maxElementSize The max element length
                     * 
                     */
                    void SetMaxElementSize(const int64_t& _maxElementSize);

                    /**
                     * 判断参数 MaxElementSize 是否已赋值
                     * @return MaxElementSize 是否已赋值
                     * 
                     */
                    bool MaxElementSizeHasBeenSet() const;

                private:

                    /**
                     * Average element length
                     */
                    int64_t m_aveElementSize;
                    bool m_aveElementSizeHasBeenSet;

                    /**
                     * Total memory usage in bytes
                     */
                    int64_t m_length;
                    bool m_lengthHasBeenSet;

                    /**
                     * Key prefix
                     */
                    std::string m_keyPreIndex;
                    bool m_keyPreIndexHasBeenSet;

                    /**
                     * The number of elements
                     */
                    int64_t m_itemCount;
                    bool m_itemCountHasBeenSet;

                    /**
                     * The number of keys
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * The max element length
                     */
                    int64_t m_maxElementSize;
                    bool m_maxElementSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_REDISPREKEYSPACEDATA_H_
