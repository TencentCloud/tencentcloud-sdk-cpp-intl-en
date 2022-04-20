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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_KEYVALUEINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_KEYVALUEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/ValueInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * Field information of key value or metafield index
                */
                class KeyValueInfo : public AbstractModel
                {
                public:
                    KeyValueInfo();
                    ~KeyValueInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取When a key value or metafield index needs to be configured for a field, the metafield `Key` does not need to be prefixed with `__TAG__.` and is consistent with the one when logs are uploaded. `__TAG__.` will be prefixed automatically for display in the console.
                     * @return Key When a key value or metafield index needs to be configured for a field, the metafield `Key` does not need to be prefixed with `__TAG__.` and is consistent with the one when logs are uploaded. `__TAG__.` will be prefixed automatically for display in the console.
                     */
                    std::string GetKey() const;

                    /**
                     * 设置When a key value or metafield index needs to be configured for a field, the metafield `Key` does not need to be prefixed with `__TAG__.` and is consistent with the one when logs are uploaded. `__TAG__.` will be prefixed automatically for display in the console.
                     * @param Key When a key value or metafield index needs to be configured for a field, the metafield `Key` does not need to be prefixed with `__TAG__.` and is consistent with the one when logs are uploaded. `__TAG__.` will be prefixed automatically for display in the console.
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取Field index description information
                     * @return Value Field index description information
                     */
                    ValueInfo GetValue() const;

                    /**
                     * 设置Field index description information
                     * @param Value Field index description information
                     */
                    void SetValue(const ValueInfo& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * When a key value or metafield index needs to be configured for a field, the metafield `Key` does not need to be prefixed with `__TAG__.` and is consistent with the one when logs are uploaded. `__TAG__.` will be prefixed automatically for display in the console.
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Field index description information
                     */
                    ValueInfo m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_KEYVALUEINFO_H_
