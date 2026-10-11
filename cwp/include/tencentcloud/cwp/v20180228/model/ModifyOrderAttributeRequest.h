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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYORDERATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYORDERATTRIBUTEREQUEST_H_

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
                * ModifyOrderAttribute request structure.
                */
                class ModifyOrderAttributeRequest : public AbstractModel
                {
                public:
                    ModifyOrderAttributeRequest();
                    ~ModifyOrderAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Authorization type. 0: Pro Edition - pay-as-you-go; 1: Pro Edition - monthly subscription; 2: Ultimate Edition - monthly subscription.
                     * @return LicenseType Authorization type. 0: Pro Edition - pay-as-you-go; 1: Pro Edition - monthly subscription; 2: Ultimate Edition - monthly subscription.
                     * 
                     */
                    uint64_t GetLicenseType() const;

                    /**
                     * 设置Authorization type. 0: Pro Edition - pay-as-you-go; 1: Pro Edition - monthly subscription; 2: Ultimate Edition - monthly subscription.
                     * @param _licenseType Authorization type. 0: Pro Edition - pay-as-you-go; 1: Pro Edition - monthly subscription; 2: Ultimate Edition - monthly subscription.
                     * 
                     */
                    void SetLicenseType(const uint64_t& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     * 
                     */
                    bool LicenseTypeHasBeenSet() const;

                    /**
                     * 获取Resource ID
                     * @return ResourceId Resource ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置Resource ID
                     * @param _resourceId Resource ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取Editable attribute name. Currently supported values: 
Resource alias
projectId Project ID
                     * @return AttrName Editable attribute name. Currently supported values: 
Resource alias
projectId Project ID
                     * 
                     */
                    std::string GetAttrName() const;

                    /**
                     * 设置Editable attribute name. Currently supported values: 
Resource alias
projectId Project ID
                     * @param _attrName Editable attribute name. Currently supported values: 
Resource alias
projectId Project ID
                     * 
                     */
                    void SetAttrName(const std::string& _attrName);

                    /**
                     * 判断参数 AttrName 是否已赋值
                     * @return AttrName 是否已赋值
                     * 
                     */
                    bool AttrNameHasBeenSet() const;

                    /**
                     * 获取Attribute value
When AttrName is alias, any string with a maximum length of 15 characters.
When AttrName is projectId, the project ID must actually exist.
                     * @return AttrValue Attribute value
When AttrName is alias, any string with a maximum length of 15 characters.
When AttrName is projectId, the project ID must actually exist.
                     * 
                     */
                    std::string GetAttrValue() const;

                    /**
                     * 设置Attribute value
When AttrName is alias, any string with a maximum length of 15 characters.
When AttrName is projectId, the project ID must actually exist.
                     * @param _attrValue Attribute value
When AttrName is alias, any string with a maximum length of 15 characters.
When AttrName is projectId, the project ID must actually exist.
                     * 
                     */
                    void SetAttrValue(const std::string& _attrValue);

                    /**
                     * 判断参数 AttrValue 是否已赋值
                     * @return AttrValue 是否已赋值
                     * 
                     */
                    bool AttrValueHasBeenSet() const;

                private:

                    /**
                     * Authorization type. 0: Pro Edition - pay-as-you-go; 1: Pro Edition - monthly subscription; 2: Ultimate Edition - monthly subscription.
                     */
                    uint64_t m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * Resource ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * Editable attribute name. Currently supported values: 
Resource alias
projectId Project ID
                     */
                    std::string m_attrName;
                    bool m_attrNameHasBeenSet;

                    /**
                     * Attribute value
When AttrName is alias, any string with a maximum length of 15 characters.
When AttrName is projectId, the project ID must actually exist.
                     */
                    std::string m_attrValue;
                    bool m_attrValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYORDERATTRIBUTEREQUEST_H_
