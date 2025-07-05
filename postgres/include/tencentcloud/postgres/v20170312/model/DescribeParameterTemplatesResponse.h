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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEPARAMETERTEMPLATESRESPONSE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEPARAMETERTEMPLATESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/ParameterTemplate.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeParameterTemplates response structure.
                */
                class DescribeParameterTemplatesResponse : public AbstractModel
                {
                public:
                    DescribeParameterTemplatesResponse();
                    ~DescribeParameterTemplatesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取The total number of eligible parameter templates
                     * @return TotalCount The total number of eligible parameter templates
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Parameter template list
                     * @return ParameterTemplateSet Parameter template list
                     * 
                     */
                    std::vector<ParameterTemplate> GetParameterTemplateSet() const;

                    /**
                     * 判断参数 ParameterTemplateSet 是否已赋值
                     * @return ParameterTemplateSet 是否已赋值
                     * 
                     */
                    bool ParameterTemplateSetHasBeenSet() const;

                private:

                    /**
                     * The total number of eligible parameter templates
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Parameter template list
                     */
                    std::vector<ParameterTemplate> m_parameterTemplateSet;
                    bool m_parameterTemplateSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEPARAMETERTEMPLATESRESPONSE_H_
