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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEUNSATISFIEDREPLYCONTEXTRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEUNSATISFIEDREPLYCONTEXTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/Context.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * DescribeUnsatisfiedReplyContext response structure.
                */
                class DescribeUnsatisfiedReplyContextResponse : public AbstractModel
                {
                public:
                    DescribeUnsatisfiedReplyContextResponse();
                    ~DescribeUnsatisfiedReplyContextResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Context of dissatisfied responses.
                     * @return List Context of dissatisfied responses.
                     * 
                     */
                    std::vector<Context> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                private:

                    /**
                     * Context of dissatisfied responses.
                     */
                    std::vector<Context> m_list;
                    bool m_listHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_DESCRIBEUNSATISFIEDREPLYCONTEXTRESPONSE_H_
