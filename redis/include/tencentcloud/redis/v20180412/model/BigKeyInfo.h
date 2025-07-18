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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_BIGKEYINFO_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_BIGKEYINFO_H_

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
                * Big key details
                */
                class BigKeyInfo : public AbstractModel
                {
                public:
                    BigKeyInfo();
                    ~BigKeyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Database
                     * @return DB Database
                     * 
                     */
                    int64_t GetDB() const;

                    /**
                     * 设置Database
                     * @param _dB Database
                     * 
                     */
                    void SetDB(const int64_t& _dB);

                    /**
                     * 判断参数 DB 是否已赋值
                     * @return DB 是否已赋值
                     * 
                     */
                    bool DBHasBeenSet() const;

                    /**
                     * 获取Big key
                     * @return Key Big key
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Big key
                     * @param _key Big key
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

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
                     * 获取Data timestamp
                     * @return Updatetime Data timestamp
                     * 
                     */
                    int64_t GetUpdatetime() const;

                    /**
                     * 设置Data timestamp
                     * @param _updatetime Data timestamp
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
                     * Database
                     */
                    int64_t m_dB;
                    bool m_dBHasBeenSet;

                    /**
                     * Big key
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Type
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Size
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * Data timestamp
                     */
                    int64_t m_updatetime;
                    bool m_updatetimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_BIGKEYINFO_H_
