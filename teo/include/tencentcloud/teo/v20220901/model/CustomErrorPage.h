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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMERRORPAGE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMERRORPAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ErrorPageReference.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Custom error code page structure.
                */
                class CustomErrorPage : public AbstractModel
                {
                public:
                    CustomErrorPage();
                    ~CustomErrorPage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取Custom error page name.
                     * @return Name Custom error page name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Custom error page name.
                     * @param _name Custom error page name.
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
                     * 获取Custom error page type.
                     * @return ContentType Custom error page type.
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 设置Custom error page type.
                     * @param _contentType Custom error page type.
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
                     * 获取Custom error page description.
                     * @return Description Custom error page description.
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Custom error page description.
                     * @param _description Custom error page description.
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
                     * 获取Custom error page content.
                     * @return Content Custom error page content.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Custom error page content.
                     * @param _content Custom error page content.
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取Custom error page reference.
                     * @return References Custom error page reference.
                     * 
                     */
                    std::vector<ErrorPageReference> GetReferences() const;

                    /**
                     * 设置Custom error page reference.
                     * @param _references Custom error page reference.
                     * 
                     */
                    void SetReferences(const std::vector<ErrorPageReference>& _references);

                    /**
                     * 判断参数 References 是否已赋值
                     * @return References 是否已赋值
                     * 
                     */
                    bool ReferencesHasBeenSet() const;

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
                     * Custom error page name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Custom error page type.
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * Custom error page description.
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Custom error page content.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Custom error page reference.
                     */
                    std::vector<ErrorPageReference> m_references;
                    bool m_referencesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMERRORPAGE_H_
