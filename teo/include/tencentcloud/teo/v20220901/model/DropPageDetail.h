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
                     * 获取The ID of the block page. Specify `0` to use the default block page. 
(Disused) If 0 is passed, the default block page will be used.
                     * @return PageId The ID of the block page. Specify `0` to use the default block page. 
(Disused) If 0 is passed, the default block page will be used.
                     * 
                     */
                    int64_t GetPageId() const;

                    /**
                     * 设置The ID of the block page. Specify `0` to use the default block page. 
(Disused) If 0 is passed, the default block page will be used.
                     * @param _pageId The ID of the block page. Specify `0` to use the default block page. 
(Disused) If 0 is passed, the default block page will be used.
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
                     * 获取The HTTP status code to trigger the block page. Range: 100-600, excluding 3xx codes. Code 566: Requests blocked by managed rules. Code 567: Requests blocked by web security rules (except managed rules).
                     * @return StatusCode The HTTP status code to trigger the block page. Range: 100-600, excluding 3xx codes. Code 566: Requests blocked by managed rules. Code 567: Requests blocked by web security rules (except managed rules).
                     * 
                     */
                    int64_t GetStatusCode() const;

                    /**
                     * 设置The HTTP status code to trigger the block page. Range: 100-600, excluding 3xx codes. Code 566: Requests blocked by managed rules. Code 567: Requests blocked by web security rules (except managed rules).
                     * @param _statusCode The HTTP status code to trigger the block page. Range: 100-600, excluding 3xx codes. Code 566: Requests blocked by managed rules. Code 567: Requests blocked by web security rules (except managed rules).
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
<li>`page`: Return the specified page.</li>

                     * @return Type Type of the block page. Values:
<li>`page`: Return the specified page.</li>

                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Type of the block page. Values:
<li>`page`: Return the specified page.</li>

                     * @param _type Type of the block page. Values:
<li>`page`: Return the specified page.</li>

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
                     * 获取ID of custom response. The ID can be obtained via the `DescribeCustomErrorPages` API. It's required when `Type=page`.
                     * @return CustomResponseId ID of custom response. The ID can be obtained via the `DescribeCustomErrorPages` API. It's required when `Type=page`.
                     * 
                     */
                    std::string GetCustomResponseId() const;

                    /**
                     * 设置ID of custom response. The ID can be obtained via the `DescribeCustomErrorPages` API. It's required when `Type=page`.
                     * @param _customResponseId ID of custom response. The ID can be obtained via the `DescribeCustomErrorPages` API. It's required when `Type=page`.
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
                     * The ID of the block page. Specify `0` to use the default block page. 
(Disused) If 0 is passed, the default block page will be used.
                     */
                    int64_t m_pageId;
                    bool m_pageIdHasBeenSet;

                    /**
                     * The HTTP status code to trigger the block page. Range: 100-600, excluding 3xx codes. Code 566: Requests blocked by managed rules. Code 567: Requests blocked by web security rules (except managed rules).
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
<li>`page`: Return the specified page.</li>

                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * ID of custom response. The ID can be obtained via the `DescribeCustomErrorPages` API. It's required when `Type=page`.
                     */
                    std::string m_customResponseId;
                    bool m_customResponseIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DROPPAGEDETAIL_H_
