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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_MODIFYALARMATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_MODIFYALARMATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyAlarmAttribute request structure.
                */
                class ModifyAlarmAttributeRequest : public AbstractModel
                {
                public:
                    ModifyAlarmAttributeRequest();
                    ~ModifyAlarmAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Alarm item.
<li>Offline: CWP is offline</li>
<li>Malware: trojan event</li>
<li>NonlocalLogin: unusual login location discovered</li>
<li>CrackSuccess: brute force attack succeeded</li>
                     * @return Attribute Alarm item.
<li>Offline: CWP is offline</li>
<li>Malware: trojan event</li>
<li>NonlocalLogin: unusual login location discovered</li>
<li>CrackSuccess: brute force attack succeeded</li>
                     * 
                     */
                    std::string GetAttribute() const;

                    /**
                     * 设置Alarm item.
<li>Offline: CWP is offline</li>
<li>Malware: trojan event</li>
<li>NonlocalLogin: unusual login location discovered</li>
<li>CrackSuccess: brute force attack succeeded</li>
                     * @param _attribute Alarm item.
<li>Offline: CWP is offline</li>
<li>Malware: trojan event</li>
<li>NonlocalLogin: unusual login location discovered</li>
<li>CrackSuccess: brute force attack succeeded</li>
                     * 
                     */
                    void SetAttribute(const std::string& _attribute);

                    /**
                     * 判断参数 Attribute 是否已赋值
                     * @return Attribute 是否已赋值
                     * 
                     */
                    bool AttributeHasBeenSet() const;

                    /**
                     * 获取Alarm item attributes.
<li>CLOSE: disabled</li>
<li>OPEN: enabled</li>
                     * @return Value Alarm item attributes.
<li>CLOSE: disabled</li>
<li>OPEN: enabled</li>
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Alarm item attributes.
<li>CLOSE: disabled</li>
<li>OPEN: enabled</li>
                     * @param _value Alarm item attributes.
<li>CLOSE: disabled</li>
<li>OPEN: enabled</li>
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * Alarm item.
<li>Offline: CWP is offline</li>
<li>Malware: trojan event</li>
<li>NonlocalLogin: unusual login location discovered</li>
<li>CrackSuccess: brute force attack succeeded</li>
                     */
                    std::string m_attribute;
                    bool m_attributeHasBeenSet;

                    /**
                     * Alarm item attributes.
<li>CLOSE: disabled</li>
<li>OPEN: enabled</li>
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_MODIFYALARMATTRIBUTEREQUEST_H_
