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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_BIGKEYTYPEINFO_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_BIGKEYTYPEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * Big key type distribution details
                */
                class BigKeyTypeInfo : public AbstractModel
                {
                public:
                    BigKeyTypeInfo();
                    ~BigKeyTypeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Type
                     * @return Type Type
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type
                     * @param _type Type
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
                     * 获取Count
                     * @return Count Count
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Count
                     * @param _count Count
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
                     * 获取Size
                     * @return Size Size
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置Size
                     * @param _size Size
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取Timestamp
                     * @return Updatetime Timestamp
                     * 
                     */
                    int64_t GetUpdatetime() const;

                    /**
                     * 设置Timestamp
                     * @param _updatetime Timestamp
                     * 
                     */
                    void SetUpdatetime(const int64_t& _updatetime);

                    /**
                     * 判断参数 Updatetime 是否已赋值
                     * @return Updatetime 是否已赋值
                     * 
                     */
                    bool UpdatetimeHasBeenSet() const;

                private:

                    /**
                     * Type
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Count
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Size
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Timestamp
                     */
                    int64_t m_updatetime;
                    bool m_updatetimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_BIGKEYTYPEINFO_H_
