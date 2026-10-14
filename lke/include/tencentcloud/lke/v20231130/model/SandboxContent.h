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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_SANDBOXCONTENT_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_SANDBOXCONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Sandbox information content
                */
                class SandboxContent : public AbstractModel
                {
                public:
                    SandboxContent();
                    ~SandboxContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取URL address of the sandbox
                     * @return Url URL address of the sandbox
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置URL address of the sandbox
                     * @param _url URL address of the sandbox
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取URL address for opening the sandbox through a browser
                     * @return DisplayUrl URL address for opening the sandbox through a browser
                     * 
                     */
                    std::string GetDisplayUrl() const;

                    /**
                     * 设置URL address for opening the sandbox through a browser
                     * @param _displayUrl URL address for opening the sandbox through a browser
                     * 
                     */
                    void SetDisplayUrl(const std::string& _displayUrl);

                    /**
                     * 判断参数 DisplayUrl 是否已赋值
                     * @return DisplayUrl 是否已赋值
                     * 
                     */
                    bool DisplayUrlHasBeenSet() const;

                    /**
                     * 获取Sandbox output content
                     * @return Content Sandbox output content
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Sandbox output content
                     * @param _content Sandbox output content
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
                     * URL address of the sandbox
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * URL address for opening the sandbox through a browser
                     */
                    std::string m_displayUrl;
                    bool m_displayUrlHasBeenSet;

                    /**
                     * Sandbox output content
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_SANDBOXCONTENT_H_
