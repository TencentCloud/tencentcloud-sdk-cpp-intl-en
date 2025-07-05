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

#ifndef TENCENTCLOUD_SES_V20201002_MODEL_LISTEMAILTEMPLATESREQUEST_H_
#define TENCENTCLOUD_SES_V20201002_MODEL_LISTEMAILTEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ses
    {
        namespace V20201002
        {
            namespace Model
            {
                /**
                * ListEmailTemplates request structure.
                */
                class ListEmailTemplatesRequest : public AbstractModel
                {
                public:
                    ListEmailTemplatesRequest();
                    ~ListEmailTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of templates to get. This parameter is used for pagination.
                     * @return Limit Number of templates to get. This parameter is used for pagination.
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of templates to get. This parameter is used for pagination.
                     * @param _limit Number of templates to get. This parameter is used for pagination.
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取Template offset to get. This parameter is used for pagination.
                     * @return Offset Template offset to get. This parameter is used for pagination.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Template offset to get. This parameter is used for pagination.
                     * @param _offset Template offset to get. This parameter is used for pagination.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * Number of templates to get. This parameter is used for pagination.
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Template offset to get. This parameter is used for pagination.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SES_V20201002_MODEL_LISTEMAILTEMPLATESREQUEST_H_
