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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMFIELD_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMFIELD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * The custom log field in a real-time log delivery task
                */
                class CustomField : public AbstractModel
                {
                public:
                    CustomField();
                    ~CustomField() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Extracts data from specified positions in HTTP requests and responses. Valid values:
<li>ReqHeader: Extract a specified field value from an HTTP request header;</li>
<li>RspHeader: Extract a specified field value from an HTTP response header;</li>
<li>cookie: Extract a specified field value from a cookie.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Name Extracts data from specified positions in HTTP requests and responses. Valid values:
<li>ReqHeader: Extract a specified field value from an HTTP request header;</li>
<li>RspHeader: Extract a specified field value from an HTTP response header;</li>
<li>cookie: Extract a specified field value from a cookie.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Extracts data from specified positions in HTTP requests and responses. Valid values:
<li>ReqHeader: Extract a specified field value from an HTTP request header;</li>
<li>RspHeader: Extract a specified field value from an HTTP response header;</li>
<li>cookie: Extract a specified field value from a cookie.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _name Extracts data from specified positions in HTTP requests and responses. Valid values:
<li>ReqHeader: Extract a specified field value from an HTTP request header;</li>
<li>RspHeader: Extract a specified field value from an HTTP response header;</li>
<li>cookie: Extract a specified field value from a cookie.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Indicates the name of the parameter from which a value needs to be extracted, such as Accept-Language.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Value Indicates the name of the parameter from which a value needs to be extracted, such as Accept-Language.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Indicates the name of the parameter from which a value needs to be extracted, such as Accept-Language.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _value Indicates the name of the parameter from which a value needs to be extracted, such as Accept-Language.
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
                     * 获取Indicates whether to deliver this field. If not filled in, this field will not be delivered.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Enabled Indicates whether to deliver this field. If not filled in, this field will not be delivered.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置Indicates whether to deliver this field. If not filled in, this field will not be delivered.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @param _enabled Indicates whether to deliver this field. If not filled in, this field will not be delivered.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * Extracts data from specified positions in HTTP requests and responses. Valid values:
<li>ReqHeader: Extract a specified field value from an HTTP request header;</li>
<li>RspHeader: Extract a specified field value from an HTTP response header;</li>
<li>cookie: Extract a specified field value from a cookie.</li>
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Indicates the name of the parameter from which a value needs to be extracted, such as Accept-Language.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Indicates whether to deliver this field. If not filled in, this field will not be delivered.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMFIELD_H_
