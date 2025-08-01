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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_CREATECUSTOMERRORPAGERESPONSE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_CREATECUSTOMERRORPAGERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * CreateCustomErrorPage response structure.
                */
                class CreateCustomErrorPageResponse : public AbstractModel
                {
                public:
                    CreateCustomErrorPageResponse();
                    ~CreateCustomErrorPageResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取ID of the custom page
                     * @return PageId ID of the custom page
                     * 
                     */
                    int64_t GetPageId() const;

                    /**
                     * 判断参数 PageId 是否已赋值
                     * @return PageId 是否已赋值
                     * 
                     */
                    bool PageIdHasBeenSet() const;

                private:

                    /**
                     * ID of the custom page
                     */
                    int64_t m_pageId;
                    bool m_pageIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_CREATECUSTOMERRORPAGERESPONSE_H_
