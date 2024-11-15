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
                * The custom log field in a real-time log delivery task.
                */
                class CustomField : public AbstractModel
                {
                public:
                    CustomField();
                    ~CustomField() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Type of the custom log filed, which indicates extracting data from a specified position in HTTP requests and responses. Valid values:
<li>ReqHeader: Extract the value of a specified field from an HTTP request header;</li>
<li>RspHeader: Extract the value of a specified field from an HTTP response header;</li>
<li>Cookie: Extract the value of a specified field from a cookie;</li>
<li>ReqBody: Extract specified content from an HTTP request body using a Google RE2 regular expression.</li>
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @return Name Type of the custom log filed, which indicates extracting data from a specified position in HTTP requests and responses. Valid values:
<li>ReqHeader: Extract the value of a specified field from an HTTP request header;</li>
<li>RspHeader: Extract the value of a specified field from an HTTP response header;</li>
<li>Cookie: Extract the value of a specified field from a cookie;</li>
<li>ReqBody: Extract specified content from an HTTP request body using a Google RE2 regular expression.</li>
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Type of the custom log filed, which indicates extracting data from a specified position in HTTP requests and responses. Valid values:
<li>ReqHeader: Extract the value of a specified field from an HTTP request header;</li>
<li>RspHeader: Extract the value of a specified field from an HTTP response header;</li>
<li>Cookie: Extract the value of a specified field from a cookie;</li>
<li>ReqBody: Extract specified content from an HTTP request body using a Google RE2 regular expression.</li>
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @param _name Type of the custom log filed, which indicates extracting data from a specified position in HTTP requests and responses. Valid values:
<li>ReqHeader: Extract the value of a specified field from an HTTP request header;</li>
<li>RspHeader: Extract the value of a specified field from an HTTP response header;</li>
<li>Cookie: Extract the value of a specified field from a cookie;</li>
<li>ReqBody: Extract specified content from an HTTP request body using a Google RE2 regular expression.</li>
Note: This field may return null, which indicates a failure to obtain a valid value.
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
                     * 获取Enter the definition of the field value based on the field type (Name). This parameter is case-sensitive.
<li>When the field type is ReqHeader, RspHeader, or Cookie, enter the name of the parameter for which you need to extract the value, such as Accept-Language. You can enter 1-100 characters. The name should start with a letter, contain letters, digits, and hyphens (-) in the middle, and end with a letter or digit.</li>
<li>When the field type is ReqBody, enter the Google RE2 regular expression. The maximum length of the regular expression is 4 KB.</li>
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @return Value Enter the definition of the field value based on the field type (Name). This parameter is case-sensitive.
<li>When the field type is ReqHeader, RspHeader, or Cookie, enter the name of the parameter for which you need to extract the value, such as Accept-Language. You can enter 1-100 characters. The name should start with a letter, contain letters, digits, and hyphens (-) in the middle, and end with a letter or digit.</li>
<li>When the field type is ReqBody, enter the Google RE2 regular expression. The maximum length of the regular expression is 4 KB.</li>
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Enter the definition of the field value based on the field type (Name). This parameter is case-sensitive.
<li>When the field type is ReqHeader, RspHeader, or Cookie, enter the name of the parameter for which you need to extract the value, such as Accept-Language. You can enter 1-100 characters. The name should start with a letter, contain letters, digits, and hyphens (-) in the middle, and end with a letter or digit.</li>
<li>When the field type is ReqBody, enter the Google RE2 regular expression. The maximum length of the regular expression is 4 KB.</li>
Note: This field may return null, which indicates a failure to obtain a valid value.
                     * @param _value Enter the definition of the field value based on the field type (Name). This parameter is case-sensitive.
<li>When the field type is ReqHeader, RspHeader, or Cookie, enter the name of the parameter for which you need to extract the value, such as Accept-Language. You can enter 1-100 characters. The name should start with a letter, contain letters, digits, and hyphens (-) in the middle, and end with a letter or digit.</li>
<li>When the field type is ReqBody, enter the Google RE2 regular expression. The maximum length of the regular expression is 4 KB.</li>
Note: This field may return null, which indicates a failure to obtain a valid value.
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
                     * Type of the custom log filed, which indicates extracting data from a specified position in HTTP requests and responses. Valid values:
<li>ReqHeader: Extract the value of a specified field from an HTTP request header;</li>
<li>RspHeader: Extract the value of a specified field from an HTTP response header;</li>
<li>Cookie: Extract the value of a specified field from a cookie;</li>
<li>ReqBody: Extract specified content from an HTTP request body using a Google RE2 regular expression.</li>
Note: This field may return null, which indicates a failure to obtain a valid value.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Enter the definition of the field value based on the field type (Name). This parameter is case-sensitive.
<li>When the field type is ReqHeader, RspHeader, or Cookie, enter the name of the parameter for which you need to extract the value, such as Accept-Language. You can enter 1-100 characters. The name should start with a letter, contain letters, digits, and hyphens (-) in the middle, and end with a letter or digit.</li>
<li>When the field type is ReqBody, enter the Google RE2 regular expression. The maximum length of the regular expression is 4 KB.</li>
Note: This field may return null, which indicates a failure to obtain a valid value.
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
