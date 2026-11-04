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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINPROFILE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINPROFILE_H_

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
                * PluginProfile
                */
                class PluginProfile : public AbstractModel
                {
                public:
                    PluginProfile();
                    ~PluginProfile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Plug-in author
                     * @return Author Plug-in author
                     * 
                     */
                    std::string GetAuthor() const;

                    /**
                     * 设置Plug-in author
                     * @param _author Plug-in author
                     * 
                     */
                    void SetAuthor(const std::string& _author);

                    /**
                     * 判断参数 Author 是否已赋值
                     * @return Author 是否已赋值
                     * 
                     */
                    bool AuthorHasBeenSet() const;

                    /**
                     * 获取Plugin description
                     * @return Description Plugin description
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置Plugin description
                     * @param _description Plugin description
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
                     * 获取Plug-in icon url
                     * @return IconUrl Plug-in icon url
                     * 
                     */
                    std::string GetIconUrl() const;

                    /**
                     * 设置Plug-in icon url
                     * @param _iconUrl Plug-in icon url
                     * 
                     */
                    void SetIconUrl(const std::string& _iconUrl);

                    /**
                     * 判断参数 IconUrl 是否已赋值
                     * @return IconUrl 是否已赋值
                     * 
                     */
                    bool IconUrlHasBeenSet() const;

                    /**
                     * 获取Plugin name
                     * @return Name Plugin name
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Plugin name
                     * @param _name Plugin name
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
                     * 获取<p>Plug-in product type</p><p>Enumeration values:</p><ul><li>0: ordinary plug-in</li><li>1: connector plug-in</li></ul>
                     * @return PluginClass <p>Plug-in product type</p><p>Enumeration values:</p><ul><li>0: ordinary plug-in</li><li>1: connector plug-in</li></ul>
                     * 
                     */
                    int64_t GetPluginClass() const;

                    /**
                     * 设置<p>Plug-in product type</p><p>Enumeration values:</p><ul><li>0: ordinary plug-in</li><li>1: connector plug-in</li></ul>
                     * @param _pluginClass <p>Plug-in product type</p><p>Enumeration values:</p><ul><li>0: ordinary plug-in</li><li>1: connector plug-in</li></ul>
                     * 
                     */
                    void SetPluginClass(const int64_t& _pluginClass);

                    /**
                     * 判断参数 PluginClass 是否已赋值
                     * @return PluginClass 是否已赋值
                     * 
                     */
                    bool PluginClassHasBeenSet() const;

                    /**
                     * 获取<p>Plugin type</p><p>Enumeration values:</p><ul><li>0: API</li><li>1: Code</li><li>2: MCP</li><li>3: Application</li></ul>
                     * @return PluginKind <p>Plugin type</p><p>Enumeration values:</p><ul><li>0: API</li><li>1: Code</li><li>2: MCP</li><li>3: Application</li></ul>
                     * 
                     */
                    int64_t GetPluginKind() const;

                    /**
                     * 设置<p>Plugin type</p><p>Enumeration values:</p><ul><li>0: API</li><li>1: Code</li><li>2: MCP</li><li>3: Application</li></ul>
                     * @param _pluginKind <p>Plugin type</p><p>Enumeration values:</p><ul><li>0: API</li><li>1: Code</li><li>2: MCP</li><li>3: Application</li></ul>
                     * 
                     */
                    void SetPluginKind(const int64_t& _pluginKind);

                    /**
                     * 判断参数 PluginKind 是否已赋值
                     * @return PluginKind 是否已赋值
                     * 
                     */
                    bool PluginKindHasBeenSet() const;

                    /**
                     * 获取<p>Plug-in source</p><p>Enumeration values:</p><ul><li>0: custom plugin</li><li>1: official plug-in</li><li>2: third-party plugin</li></ul>
                     * @return PluginSource <p>Plug-in source</p><p>Enumeration values:</p><ul><li>0: custom plugin</li><li>1: official plug-in</li><li>2: third-party plugin</li></ul>
                     * 
                     */
                    int64_t GetPluginSource() const;

                    /**
                     * 设置<p>Plug-in source</p><p>Enumeration values:</p><ul><li>0: custom plugin</li><li>1: official plug-in</li><li>2: third-party plugin</li></ul>
                     * @param _pluginSource <p>Plug-in source</p><p>Enumeration values:</p><ul><li>0: custom plugin</li><li>1: official plug-in</li><li>2: third-party plugin</li></ul>
                     * 
                     */
                    void SetPluginSource(const int64_t& _pluginSource);

                    /**
                     * 判断参数 PluginSource 是否已赋值
                     * @return PluginSource 是否已赋值
                     * 
                     */
                    bool PluginSourceHasBeenSet() const;

                private:

                    /**
                     * Plug-in author
                     */
                    std::string m_author;
                    bool m_authorHasBeenSet;

                    /**
                     * Plugin description
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * Plug-in icon url
                     */
                    std::string m_iconUrl;
                    bool m_iconUrlHasBeenSet;

                    /**
                     * Plugin name
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Plug-in product type</p><p>Enumeration values:</p><ul><li>0: ordinary plug-in</li><li>1: connector plug-in</li></ul>
                     */
                    int64_t m_pluginClass;
                    bool m_pluginClassHasBeenSet;

                    /**
                     * <p>Plugin type</p><p>Enumeration values:</p><ul><li>0: API</li><li>1: Code</li><li>2: MCP</li><li>3: Application</li></ul>
                     */
                    int64_t m_pluginKind;
                    bool m_pluginKindHasBeenSet;

                    /**
                     * <p>Plug-in source</p><p>Enumeration values:</p><ul><li>0: custom plugin</li><li>1: official plug-in</li><li>2: third-party plugin</li></ul>
                     */
                    int64_t m_pluginSource;
                    bool m_pluginSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_PLUGINPROFILE_H_
