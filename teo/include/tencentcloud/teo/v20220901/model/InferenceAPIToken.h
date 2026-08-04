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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCEAPITOKEN_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCEAPITOKEN_H_

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
                * Reasoning API Token information.
                */
                class InferenceAPIToken : public AbstractModel
                {
                public:
                    InferenceAPIToken();
                    ~InferenceAPIToken() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Reasoning API Token ID.
                     * @return TokenId Reasoning API Token ID.
                     * 
                     */
                    std::string GetTokenId() const;

                    /**
                     * 设置Reasoning API Token ID.
                     * @param _tokenId Reasoning API Token ID.
                     * 
                     */
                    void SetTokenId(const std::string& _tokenId);

                    /**
                     * 判断参数 TokenId 是否已赋值
                     * @return TokenId 是否已赋值
                     * 
                     */
                    bool TokenIdHasBeenSet() const;

                    /**
                     * 获取Reasoning API Token name.
                     * @return Name Reasoning API Token name.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Reasoning API Token name.
                     * @param _name Reasoning API Token name.
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
                     * 获取Reasoning API Token content.
                     * @return Content Reasoning API Token content.
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置Reasoning API Token content.
                     * @param _content Reasoning API Token content.
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
                     * 获取Creation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @return CreateTime Creation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置Creation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * @param _createTime Creation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * Reasoning API Token ID.
                     */
                    std::string m_tokenId;
                    bool m_tokenIdHasBeenSet;

                    /**
                     * Reasoning API Token name.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Reasoning API Token content.
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * Creation time in [ISO date format](https://www.tencentcloud.com/document/product/266/11732?from_cn_redirect=1#I).
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCEAPITOKEN_H_
