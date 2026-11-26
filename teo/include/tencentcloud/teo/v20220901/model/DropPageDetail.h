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
                * Configuration message of the interception page
                */
                class DropPageDetail : public AbstractModel
                {
                public:
                    DropPageDetail();
                    ~DropPageDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Unique Id of the interception page. The system includes a built-in interception page by default, with Id 0.
The Id can be obtained by uploading via the blocking page creation interface. If 0 is passed in, the system default blocking page is used. This parameter is deprecated.
                     * @return PageId Unique Id of the interception page. The system includes a built-in interception page by default, with Id 0.
The Id can be obtained by uploading via the blocking page creation interface. If 0 is passed in, the system default blocking page is used. This parameter is deprecated.
                     * 
                     */
                    int64_t GetPageId() const;

                    /**
                     * 设置Unique Id of the interception page. The system includes a built-in interception page by default, with Id 0.
The Id can be obtained by uploading via the blocking page creation interface. If 0 is passed in, the system default blocking page is used. This parameter is deprecated.
                     * @param _pageId Unique Id of the interception page. The system includes a built-in interception page by default, with Id 0.
The Id can be obtained by uploading via the blocking page creation interface. If 0 is passed in, the system default blocking page is used. This parameter is deprecated.
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
                     * 获取HTTP status code of the interception page. Value range: 100–600. 3xx status codes are not supported. Default for managed rule interception page: 566. Default for security protection (excluding managed rules) interception page: 567.
                     * @return StatusCode HTTP status code of the interception page. Value range: 100–600. 3xx status codes are not supported. Default for managed rule interception page: 566. Default for security protection (excluding managed rules) interception page: 567.
                     * 
                     */
                    int64_t GetStatusCode() const;

                    /**
                     * 设置HTTP status code of the interception page. Value range: 100–600. 3xx status codes are not supported. Default for managed rule interception page: 566. Default for security protection (excluding managed rules) interception page: 567.
                     * @param _statusCode HTTP status code of the interception page. Value range: 100–600. 3xx status codes are not supported. Default for managed rule interception page: 566. Default for security protection (excluding managed rules) interception page: 567.
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
                     * 获取Page file name or url.
                     * @return Name Page file name or url.
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Page file name or url.
                     * @param _name Page file name or url.
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
                     * 获取Page type, with values:
<li>page: Specified page.</li>

                     * @return Type Page type, with values:
<li>page: Specified page.</li>

                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Page type, with values:
<li>page: Specified page.</li>

                     * @param _type Page type, with values:
<li>page: Specified page.</li>

                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Id. You can obtain this Id through the API for querying the custom error page list. The default value is `default`, which uses the system default page. This field is required and cannot be empty when Type is `page`.
                     * @return CustomResponseId Id. You can obtain this Id through the API for querying the custom error page list. The default value is `default`, which uses the system default page. This field is required and cannot be empty when Type is `page`.
                     * 
                     */
                    std::string GetCustomResponseId() const;

                    /**
                     * 设置Id. You can obtain this Id through the API for querying the custom error page list. The default value is `default`, which uses the system default page. This field is required and cannot be empty when Type is `page`.
                     * @param _customResponseId Id. You can obtain this Id through the API for querying the custom error page list. The default value is `default`, which uses the system default page. This field is required and cannot be empty when Type is `page`.
                     * 
                     */
                    void SetCustomResponseId(const std::string& _customResponseId);

                    /**
                     * 判断参数 CustomResponseId 是否已赋值
                     * @return CustomResponseId 是否已赋值
                     * 
                     */
                    bool CustomResponseIdHasBeenSet() const;

                private:

                    /**
                     * Unique Id of the interception page. The system includes a built-in interception page by default, with Id 0.
The Id can be obtained by uploading via the blocking page creation interface. If 0 is passed in, the system default blocking page is used. This parameter is deprecated.
                     */
                    int64_t m_pageId;
                    bool m_pageIdHasBeenSet;

                    /**
                     * HTTP status code of the interception page. Value range: 100–600. 3xx status codes are not supported. Default for managed rule interception page: 566. Default for security protection (excluding managed rules) interception page: 567.
                     */
                    int64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * Page file name or url.
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Page type, with values:
<li>page: Specified page.</li>

                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Id. You can obtain this Id through the API for querying the custom error page list. The default value is `default`, which uses the system default page. This field is required and cannot be empty when Type is `page`.
                     */
                    std::string m_customResponseId;
                    bool m_customResponseIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DROPPAGEDETAIL_H_
