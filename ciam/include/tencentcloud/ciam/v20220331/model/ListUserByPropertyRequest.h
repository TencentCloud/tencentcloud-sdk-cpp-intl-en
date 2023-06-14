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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_LISTUSERBYPROPERTYREQUEST_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_LISTUSERBYPROPERTYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            namespace Model
            {
                /**
                * ListUserByProperty request structure.
                */
                class ListUserByPropertyRequest : public AbstractModel
                {
                public:
                    ListUserByPropertyRequest();
                    ~ListUserByPropertyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取User directory ID
                     * @return UserStoreId User directory ID
                     * 
                     */
                    std::string GetUserStoreId() const;

                    /**
                     * 设置User directory ID
                     * @param _userStoreId User directory ID
                     * 
                     */
                    void SetUserStoreId(const std::string& _userStoreId);

                    /**
                     * 判断参数 UserStoreId 是否已赋值
                     * @return UserStoreId 是否已赋值
                     * 
                     */
                    bool UserStoreIdHasBeenSet() const;

                    /**
                     * 获取Query attribute

<li> **phoneNumber** </li>	  Mobile number
<li> **email** </li>  Email
                     * @return PropertyCode Query attribute

<li> **phoneNumber** </li>	  Mobile number
<li> **email** </li>  Email
                     * 
                     */
                    std::string GetPropertyCode() const;

                    /**
                     * 设置Query attribute

<li> **phoneNumber** </li>	  Mobile number
<li> **email** </li>  Email
                     * @param _propertyCode Query attribute

<li> **phoneNumber** </li>	  Mobile number
<li> **email** </li>  Email
                     * 
                     */
                    void SetPropertyCode(const std::string& _propertyCode);

                    /**
                     * 判断参数 PropertyCode 是否已赋值
                     * @return PropertyCode 是否已赋值
                     * 
                     */
                    bool PropertyCodeHasBeenSet() const;

                    /**
                     * 获取Attribute value
                     * @return PropertyValue Attribute value
                     * 
                     */
                    std::string GetPropertyValue() const;

                    /**
                     * 设置Attribute value
                     * @param _propertyValue Attribute value
                     * 
                     */
                    void SetPropertyValue(const std::string& _propertyValue);

                    /**
                     * 判断参数 PropertyValue 是否已赋值
                     * @return PropertyValue 是否已赋值
                     * 
                     */
                    bool PropertyValueHasBeenSet() const;

                    /**
                     * 获取Whether the content is passed through
                     * @return Original Whether the content is passed through
                     * 
                     */
                    bool GetOriginal() const;

                    /**
                     * 设置Whether the content is passed through
                     * @param _original Whether the content is passed through
                     * 
                     */
                    void SetOriginal(const bool& _original);

                    /**
                     * 判断参数 Original 是否已赋值
                     * @return Original 是否已赋值
                     * 
                     */
                    bool OriginalHasBeenSet() const;

                private:

                    /**
                     * User directory ID
                     */
                    std::string m_userStoreId;
                    bool m_userStoreIdHasBeenSet;

                    /**
                     * Query attribute

<li> **phoneNumber** </li>	  Mobile number
<li> **email** </li>  Email
                     */
                    std::string m_propertyCode;
                    bool m_propertyCodeHasBeenSet;

                    /**
                     * Attribute value
                     */
                    std::string m_propertyValue;
                    bool m_propertyValueHasBeenSet;

                    /**
                     * Whether the content is passed through
                     */
                    bool m_original;
                    bool m_originalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_LISTUSERBYPROPERTYREQUEST_H_
