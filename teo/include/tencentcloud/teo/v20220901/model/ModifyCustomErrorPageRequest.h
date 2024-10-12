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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYCUSTOMERRORPAGEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYCUSTOMERRORPAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyCustomErrorPage request structure.
                */
                class ModifyCustomErrorPageRequest : public AbstractModel
                {
                public:
                    ModifyCustomErrorPageRequest();
                    ~ModifyCustomErrorPageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Custom error page ID.
                     * @return PageId Custom error page ID.
                     * 
                     */
                    std::string GetPageId() const;

                    /**
                     * 设置Custom error page ID.
                     * @param _pageId Custom error page ID.
                     * 
                     */
                    void SetPageId(const std::string& _pageId);

                    /**
                     * 判断参数 PageId 是否已赋值
                     * @return PageId 是否已赋值
                     * 
                     */
                    bool PageIdHasBeenSet() const;

                    /**
                     * 获取Zone ID.
                     * @return ZoneId Zone ID.
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置Zone ID.
                     * @param _zoneId Zone ID.
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取Custom error page name. The name must be 2-60 characters long.
                     * @return Name Custom error page name. The name must be 2-60 characters long.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Custom error page name. The name must be 2-60 characters long.
                     * @param _name Custom error page name. The name must be 2-60 characters long.
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
                     * 获取Custom error page description, not exceeding 60 characters.
                     * @return Description Custom error page description, not exceeding 60 characters.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Custom error page description, not exceeding 60 characters.
                     * @param _description Custom error page description, not exceeding 60 characters.
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取Custom error page type, with values:<li>text/html. </li><li>application/json.</li><li>plain/text.</li><li>text/xml.</li>
                     * @return ContentType Custom error page type, with values:<li>text/html. </li><li>application/json.</li><li>plain/text.</li><li>text/xml.</li>
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 设置Custom error page type, with values:<li>text/html. </li><li>application/json.</li><li>plain/text.</li><li>text/xml.</li>
                     * @param _contentType Custom error page type, with values:<li>text/html. </li><li>application/json.</li><li>plain/text.</li><li>text/xml.</li>
                     * 
                     */
                    void SetContentType(const std::string& _contentType);

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     * 
                     */
                    bool ContentTypeHasBeenSet() const;

                    /**
                     * 获取Custom error page content, not exceeding 2 KB.
                     * @return Content Custom error page content, not exceeding 2 KB.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Custom error page content, not exceeding 2 KB.
                     * @param _content Custom error page content, not exceeding 2 KB.
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * Custom error page ID.
                     */
                    std::string m_pageId;
                    bool m_pageIdHasBeenSet;

                    /**
                     * Zone ID.
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * Custom error page name. The name must be 2-60 characters long.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Custom error page description, not exceeding 60 characters.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Custom error page type, with values:<li>text/html. </li><li>application/json.</li><li>plain/text.</li><li>text/xml.</li>
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * Custom error page content, not exceeding 2 KB.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYCUSTOMERRORPAGEREQUEST_H_
