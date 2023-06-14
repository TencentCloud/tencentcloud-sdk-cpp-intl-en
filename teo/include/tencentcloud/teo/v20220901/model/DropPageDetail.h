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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DROPPAGEDETAIL_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DROPPAGEDETAIL_H_

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
                * The configuration details of the block page
                */
                class DropPageDetail : public AbstractModel
                {
                public:
                    DropPageDetail();
                    ~DropPageDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取The ID of the block page, which can be obtained from the CreateSecurityDropPage API.
If 0 is passed, the default block page will be used.
                     * @return PageId The ID of the block page, which can be obtained from the CreateSecurityDropPage API.
If 0 is passed, the default block page will be used.
                     * 
                     */
                    int64_t GetPageId() const;

                    /**
                     * 设置The ID of the block page, which can be obtained from the CreateSecurityDropPage API.
If 0 is passed, the default block page will be used.
                     * @param _pageId The ID of the block page, which can be obtained from the CreateSecurityDropPage API.
If 0 is passed, the default block page will be used.
                     * 
                     */
                    void SetPageId(const int64_t& _pageId);

                    /**
                     * 判断参数 PageId 是否已赋值
                     * @return PageId 是否已赋值
                     * 
                     */
                    bool PageIdHasBeenSet() const;

                    /**
                     * 获取The HTTP status code of the block page. Value range: 100-600.
                     * @return StatusCode The HTTP status code of the block page. Value range: 100-600.
                     * 
                     */
                    int64_t GetStatusCode() const;

                    /**
                     * 设置The HTTP status code of the block page. Value range: 100-600.
                     * @param _statusCode The HTTP status code of the block page. Value range: 100-600.
                     * 
                     */
                    void SetStatusCode(const int64_t& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     * 
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取The block page file or URL.
                     * @return Name The block page file or URL.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置The block page file or URL.
                     * @param _name The block page file or URL.
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
                     * 获取Type of the block page. Values:
<li>`file`: Block page file</li>
<li>`url`: Block page URL</li>
                     * @return Type Type of the block page. Values:
<li>`file`: Block page file</li>
<li>`url`: Block page URL</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type of the block page. Values:
<li>`file`: Block page file</li>
<li>`url`: Block page URL</li>
                     * @param _type Type of the block page. Values:
<li>`file`: Block page file</li>
<li>`url`: Block page URL</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * The ID of the block page, which can be obtained from the CreateSecurityDropPage API.
If 0 is passed, the default block page will be used.
                     */
                    int64_t m_pageId;
                    bool m_pageIdHasBeenSet;

                    /**
                     * The HTTP status code of the block page. Value range: 100-600.
                     */
                    int64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * The block page file or URL.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Type of the block page. Values:
<li>`file`: Block page file</li>
<li>`url`: Block page URL</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DROPPAGEDETAIL_H_
