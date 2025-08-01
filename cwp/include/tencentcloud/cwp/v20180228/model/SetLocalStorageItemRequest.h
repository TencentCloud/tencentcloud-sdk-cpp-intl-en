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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SETLOCALSTORAGEITEMREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SETLOCALSTORAGEITEMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * SetLocalStorageItem request structure.
                */
                class SetLocalStorageItemRequest : public AbstractModel
                {
                public:
                    SetLocalStorageItemRequest();
                    ~SetLocalStorageItemRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Key
                     * @return Key Key
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Key
                     * @param _key Key
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
                     * 获取Value
                     * @return Value Value
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Value
                     * @param _value Value
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取Expiration time (unit: second)
                     * @return Expire Expiration time (unit: second)
                     * 
                     */
                    uint64_t GetExpire() const;

                    /**
                     * 设置Expiration time (unit: second)
                     * @param _expire Expiration time (unit: second)
                     * 
                     */
                    void SetExpire(const uint64_t& _expire);

                    /**
                     * 判断参数 Expire 是否已赋值
                     * @return Expire 是否已赋值
                     * 
                     */
                    bool ExpireHasBeenSet() const;

                private:

                    /**
                     * Key
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Value
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Expiration time (unit: second)
                     */
                    uint64_t m_expire;
                    bool m_expireHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SETLOCALSTORAGEITEMREQUEST_H_
