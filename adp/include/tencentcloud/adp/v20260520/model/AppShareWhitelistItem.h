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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPSHAREWHITELISTITEM_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPSHAREWHITELISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * AppShareWhitelistItem
                */
                class AppShareWhitelistItem : public AbstractModel
                {
                public:
                    AppShareWhitelistItem();
                    ~AppShareWhitelistItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>APP_SHARE_WHITELIST_TYPE_UNSPECIFIED</td> <td>0</td> <td></td> </tr> <tr> <td>APP_SHARE_WHITELIST_TYPE_UIN</td> <td>1</td> <td>UIN account</td> </tr> <tr> <td>APP_SHARE_WHITELIST_TYPE_PHONE</td> <td>2</td> <td>Mobile number</td> </tr> <tr> <td>APP_SHARE_WHITELIST_TYPE_EMAIL</td> <td>3</td> <td>Email address</td> </tr> <tr> <td>APP_SHARE_WHITELIST_TYPE_IP</td> <td>4</td> <td>IP address</td> </tr> <tr> <td>APP_SHARE_WHITELIST_TYPE_RTX</td> <td>5</td> <td>RTX account</td> </tr> </tbody> </table>
                     * @return Type <table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>APP_SHARE_WHITELIST_TYPE_UNSPECIFIED</td> <td>0</td> <td></td> </tr> <tr> <td>APP_SHARE_WHITELIST_TYPE_UIN</td> <td>1</td> <td>UIN account</td> </tr> <tr> <td>APP_SHARE_WHITELIST_TYPE_PHONE</td> <td>2</td> <td>Mobile number</td> </tr> <tr> <td>APP_SHARE_WHITELIST_TYPE_EMAIL</td> <td>3</td> <td>Email address</td> </tr> <tr> <td>APP_SHARE_WHITELIST_TYPE_IP</td> <td>4</td> <td>IP address</td> </tr> <tr> <td>APP_SHARE_WHITELIST_TYPE_RTX</td> <td>5</td> <td>RTX account</td> </tr> </tbody> </table>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>APP_SHARE_WHITELIST_TYPE_UNSPECIFIED</td> <td>0</td> <td></td> </tr> <tr> <td>APP_SHARE_WHITELIST_TYPE_UIN</td> <td>1</td> <td>UIN account</td> </tr> <tr> <td>APP_SHARE_WHITELIST_TYPE_PHONE</td> <td>2</td> <td>Mobile number</td> </tr> <tr> <td>APP_SHARE_WHITELIST_TYPE_EMAIL</td> <td>3</td> <td>Email address</td> </tr> <tr> <td>APP_SHARE_WHITELIST_TYPE_IP</td> <td>4</td> <td>IP address</td> </tr> <tr> <td>APP_SHARE_WHITELIST_TYPE_RTX</td> <td>5</td> <td>RTX account</td> </tr> </tbody> </table>
                     * @param _type <table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>APP_SHARE_WHITELIST_TYPE_UNSPECIFIED</td> <td>0</td> <td></td> </tr> <tr> <td>APP_SHARE_WHITELIST_TYPE_UIN</td> <td>1</td> <td>UIN account</td> </tr> <tr> <td>APP_SHARE_WHITELIST_TYPE_PHONE</td> <td>2</td> <td>Mobile number</td> </tr> <tr> <td>APP_SHARE_WHITELIST_TYPE_EMAIL</td> <td>3</td> <td>Email address</td> </tr> <tr> <td>APP_SHARE_WHITELIST_TYPE_IP</td> <td>4</td> <td>IP address</td> </tr> <tr> <td>APP_SHARE_WHITELIST_TYPE_RTX</td> <td>5</td> <td>RTX account</td> </tr> </tbody> </table>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>Allowlist array information</p><p>Parameter format: allowlist value</p>
                     * @return Values <p>Allowlist array information</p><p>Parameter format: allowlist value</p>
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置<p>Allowlist array information</p><p>Parameter format: allowlist value</p>
                     * @param _values <p>Allowlist array information</p><p>Parameter format: allowlist value</p>
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * <table> <tbody> <tr> <td>Enumeration item</td> <td>Enumeration value</td> <td>Description</td> </tr> <tr> <td>APP_SHARE_WHITELIST_TYPE_UNSPECIFIED</td> <td>0</td> <td></td> </tr> <tr> <td>APP_SHARE_WHITELIST_TYPE_UIN</td> <td>1</td> <td>UIN account</td> </tr> <tr> <td>APP_SHARE_WHITELIST_TYPE_PHONE</td> <td>2</td> <td>Mobile number</td> </tr> <tr> <td>APP_SHARE_WHITELIST_TYPE_EMAIL</td> <td>3</td> <td>Email address</td> </tr> <tr> <td>APP_SHARE_WHITELIST_TYPE_IP</td> <td>4</td> <td>IP address</td> </tr> <tr> <td>APP_SHARE_WHITELIST_TYPE_RTX</td> <td>5</td> <td>RTX account</td> </tr> </tbody> </table>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Allowlist array information</p><p>Parameter format: allowlist value</p>
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPSHAREWHITELISTITEM_H_
