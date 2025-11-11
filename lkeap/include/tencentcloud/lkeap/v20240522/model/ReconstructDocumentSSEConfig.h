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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_RECONSTRUCTDOCUMENTSSECONFIG_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_RECONSTRUCTDOCUMENTSSECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * ReconstructDocumentSSE feature configuration parameters.
                */
                class ReconstructDocumentSSEConfig : public AbstractModel
                {
                public:
                    ReconstructDocumentSSEConfig();
                    ~ReconstructDocumentSSEConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The form in which tables in a Markdown file are returned.
- 0: returned as MD.
- 1: returned as HTML.
The default is 0.
                     * @return TableResultType The form in which tables in a Markdown file are returned.
- 0: returned as MD.
- 1: returned as HTML.
The default is 0.
                     * 
                     */
                    std::string GetTableResultType() const;

                    /**
                     * 设置The form in which tables in a Markdown file are returned.
- 0: returned as MD.
- 1: returned as HTML.
The default is 0.
                     * @param _tableResultType The form in which tables in a Markdown file are returned.
- 0: returned as MD.
- 1: returned as HTML.
The default is 0.
                     * 
                     */
                    void SetTableResultType(const std::string& _tableResultType);

                    /**
                     * 判断参数 TableResultType 是否已赋值
                     * @return TableResultType 是否已赋值
                     * 
                     */
                    bool TableResultTypeHasBeenSet() const;

                    /**
                     * 获取The form in which images in a Markdown file are returned.
- 0: returned as URL.
- 1: only return the text content extracted from the image in markdown.
The default value is 0.
                     * @return MarkdownImageResponseType The form in which images in a Markdown file are returned.
- 0: returned as URL.
- 1: only return the text content extracted from the image in markdown.
The default value is 0.
                     * 
                     */
                    std::string GetMarkdownImageResponseType() const;

                    /**
                     * 设置The form in which images in a Markdown file are returned.
- 0: returned as URL.
- 1: only return the text content extracted from the image in markdown.
The default value is 0.
                     * @param _markdownImageResponseType The form in which images in a Markdown file are returned.
- 0: returned as URL.
- 1: only return the text content extracted from the image in markdown.
The default value is 0.
                     * 
                     */
                    void SetMarkdownImageResponseType(const std::string& _markdownImageResponseType);

                    /**
                     * 判断参数 MarkdownImageResponseType 是否已赋值
                     * @return MarkdownImageResponseType 是否已赋值
                     * 
                     */
                    bool MarkdownImageResponseTypeHasBeenSet() const;

                    /**
                     * 获取Whether the Markdown file contains page number information.
                     * @return ReturnPageFormat Whether the Markdown file contains page number information.
                     * 
                     */
                    bool GetReturnPageFormat() const;

                    /**
                     * 设置Whether the Markdown file contains page number information.
                     * @param _returnPageFormat Whether the Markdown file contains page number information.
                     * 
                     */
                    void SetReturnPageFormat(const bool& _returnPageFormat);

                    /**
                     * 判断参数 ReturnPageFormat 是否已赋值
                     * @return ReturnPageFormat 是否已赋值
                     * 
                     */
                    bool ReturnPageFormatHasBeenSet() const;

                    /**
                     * 获取The custom output page number style. {{p}} is a placeholder for the page number. Enable ReturnPageFormat to take effect. If empty, the default style is: <page_num>page {{p}}</page_num>.
                     * @return PageFormat The custom output page number style. {{p}} is a placeholder for the page number. Enable ReturnPageFormat to take effect. If empty, the default style is: <page_num>page {{p}}</page_num>.
                     * 
                     */
                    std::string GetPageFormat() const;

                    /**
                     * 设置The custom output page number style. {{p}} is a placeholder for the page number. Enable ReturnPageFormat to take effect. If empty, the default style is: <page_num>page {{p}}</page_num>.
                     * @param _pageFormat The custom output page number style. {{p}} is a placeholder for the page number. Enable ReturnPageFormat to take effect. If empty, the default style is: <page_num>page {{p}}</page_num>.
                     * 
                     */
                    void SetPageFormat(const std::string& _pageFormat);

                    /**
                     * 判断参数 PageFormat 是否已赋值
                     * @return PageFormat 是否已赋值
                     * 
                     */
                    bool PageFormatHasBeenSet() const;

                private:

                    /**
                     * The form in which tables in a Markdown file are returned.
- 0: returned as MD.
- 1: returned as HTML.
The default is 0.
                     */
                    std::string m_tableResultType;
                    bool m_tableResultTypeHasBeenSet;

                    /**
                     * The form in which images in a Markdown file are returned.
- 0: returned as URL.
- 1: only return the text content extracted from the image in markdown.
The default value is 0.
                     */
                    std::string m_markdownImageResponseType;
                    bool m_markdownImageResponseTypeHasBeenSet;

                    /**
                     * Whether the Markdown file contains page number information.
                     */
                    bool m_returnPageFormat;
                    bool m_returnPageFormatHasBeenSet;

                    /**
                     * The custom output page number style. {{p}} is a placeholder for the page number. Enable ReturnPageFormat to take effect. If empty, the default style is: <page_num>page {{p}}</page_num>.
                     */
                    std::string m_pageFormat;
                    bool m_pageFormatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_RECONSTRUCTDOCUMENTSSECONFIG_H_
