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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_STORAGEBLOCK_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_STORAGEBLOCK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Information on local HDD storage.
                */
                class StorageBlock : public AbstractModel
                {
                public:
                    StorageBlock();
                    ~StorageBlock() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Local HDD storage type. Value: LOCAL_PRO.
Note: This field may return null, indicating that no valid value is found.
                     * @return Type Local HDD storage type. Value: LOCAL_PRO.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Local HDD storage type. Value: LOCAL_PRO.
Note: This field may return null, indicating that no valid value is found.
                     * @param _type Local HDD storage type. Value: LOCAL_PRO.
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Minimum capacity of local HDD storage
Note: This field may return null, indicating that no valid value is found.
                     * @return MinSize Minimum capacity of local HDD storage
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    int64_t GetMinSize() const;

                    /**
                     * 设置Minimum capacity of local HDD storage
Note: This field may return null, indicating that no valid value is found.
                     * @param _minSize Minimum capacity of local HDD storage
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetMinSize(const int64_t& _minSize);

                    /**
                     * 判断参数 MinSize 是否已赋值
                     * @return MinSize 是否已赋值
                     * 
                     */
                    bool MinSizeHasBeenSet() const;

                    /**
                     * 获取Maximum capacity of local HDD storage
Note: This field may return null, indicating that no valid value is found.
                     * @return MaxSize Maximum capacity of local HDD storage
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    int64_t GetMaxSize() const;

                    /**
                     * 设置Maximum capacity of local HDD storage
Note: This field may return null, indicating that no valid value is found.
                     * @param _maxSize Maximum capacity of local HDD storage
Note: This field may return null, indicating that no valid value is found.
                     * 
                     */
                    void SetMaxSize(const int64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     * 
                     */
                    bool MaxSizeHasBeenSet() const;

                private:

                    /**
                     * Local HDD storage type. Value: LOCAL_PRO.
Note: This field may return null, indicating that no valid value is found.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Minimum capacity of local HDD storage
Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t m_minSize;
                    bool m_minSizeHasBeenSet;

                    /**
                     * Maximum capacity of local HDD storage
Note: This field may return null, indicating that no valid value is found.
                     */
                    int64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_STORAGEBLOCK_H_
