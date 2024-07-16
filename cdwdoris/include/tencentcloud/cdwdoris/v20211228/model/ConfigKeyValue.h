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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CONFIGKEYVALUE_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CONFIGKEYVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * Return the configuration file content (key-value)
                */
                class ConfigKeyValue : public AbstractModel
                {
                public:
                    ConfigKeyValue();
                    ~ConfigKeyValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取key
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return KeyName key
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetKeyName() const;

                    /**
                     * 设置key
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _keyName key
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetKeyName(const std::string& _keyName);

                    /**
                     * 判断参数 KeyName 是否已赋值
                     * @return KeyName 是否已赋值
                     * 
                     */
                    bool KeyNameHasBeenSet() const;

                    /**
                     * 获取Value
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Value Value
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Value
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _value Value
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * 获取Notes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Message Notes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置Notes
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _message Notes
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取1 indicates read-only, 2 indicates editable but undeletable, and 3 indicates deletable.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Display 1 indicates read-only, 2 indicates editable but undeletable, and 3 indicates deletable.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetDisplay() const;

                    /**
                     * 设置1 indicates read-only, 2 indicates editable but undeletable, and 3 indicates deletable.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _display 1 indicates read-only, 2 indicates editable but undeletable, and 3 indicates deletable.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetDisplay(const int64_t& _display);

                    /**
                     * 判断参数 Display 是否已赋值
                     * @return Display 是否已赋值
                     * 
                     */
                    bool DisplayHasBeenSet() const;

                    /**
                     * 获取0 means not supported, and 1 means hot update is supported.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return SupportHotUpdate 0 means not supported, and 1 means hot update is supported.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    int64_t GetSupportHotUpdate() const;

                    /**
                     * 设置0 means not supported, and 1 means hot update is supported.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _supportHotUpdate 0 means not supported, and 1 means hot update is supported.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetSupportHotUpdate(const int64_t& _supportHotUpdate);

                    /**
                     * 判断参数 SupportHotUpdate 是否已赋值
                     * @return SupportHotUpdate 是否已赋值
                     * 
                     */
                    bool SupportHotUpdateHasBeenSet() const;

                private:

                    /**
                     * key
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_keyName;
                    bool m_keyNameHasBeenSet;

                    /**
                     * Value
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Notes
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 1 indicates read-only, 2 indicates editable but undeletable, and 3 indicates deletable.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_display;
                    bool m_displayHasBeenSet;

                    /**
                     * 0 means not supported, and 1 means hot update is supported.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    int64_t m_supportHotUpdate;
                    bool m_supportHotUpdateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_CONFIGKEYVALUE_H_
