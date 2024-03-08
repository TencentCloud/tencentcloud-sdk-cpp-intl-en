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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_HOTKEYINFO_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_HOTKEYINFO_H_

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
                * Hot key details
                */
                class HotKeyInfo : public AbstractModel
                {
                public:
                    HotKeyInfo();
                    ~HotKeyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The name of the hot key.
                     * @return Key The name of the hot key.
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置The name of the hot key.
                     * @param _key The name of the hot key.
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
                     * 获取Key type.
                     * @return Type Key type.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Key type.
                     * @param _type Key type.
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
                     * 获取Number of accesses for the hot key in a specified time period.
                     * @return Count Number of accesses for the hot key in a specified time period.
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置Number of accesses for the hot key in a specified time period.
                     * @param _count Number of accesses for the hot key in a specified time period.
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * The name of the hot key.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Key type.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Number of accesses for the hot key in a specified time period.
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_HOTKEYINFO_H_
