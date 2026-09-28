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

#ifndef TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBEHEALTHCHECKTEMPLATESREQUEST_H_
#define TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBEHEALTHCHECKTEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/alb/v20251030/model/Filter.h>


namespace TencentCloud
{
    namespace Alb
    {
        namespace V20251030
        {
            namespace Model
            {
                /**
                * DescribeHealthCheckTemplates request structure.
                */
                class DescribeHealthCheckTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeHealthCheckTemplatesRequest();
                    ~DescribeHealthCheckTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Filter. Query health check templates by specifying filter criteria. Supported:</p><ul><li>Name is <strong>HealthCheckTemplateName</strong>. Filter health check templates by name. <strong>Values</strong> is a template name list.</li><li>Name is <strong>HealthCheckProtocol</strong>. Filter health check templates by health check protocol. <strong>Values</strong> is a protocol list.</li><li>Filter by tag.</li></ul>
                     * @return Filters <p>Filter. Query health check templates by specifying filter criteria. Supported:</p><ul><li>Name is <strong>HealthCheckTemplateName</strong>. Filter health check templates by name. <strong>Values</strong> is a template name list.</li><li>Name is <strong>HealthCheckProtocol</strong>. Filter health check templates by health check protocol. <strong>Values</strong> is a protocol list.</li><li>Filter by tag.</li></ul>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>Filter. Query health check templates by specifying filter criteria. Supported:</p><ul><li>Name is <strong>HealthCheckTemplateName</strong>. Filter health check templates by name. <strong>Values</strong> is a template name list.</li><li>Name is <strong>HealthCheckProtocol</strong>. Filter health check templates by health check protocol. <strong>Values</strong> is a protocol list.</li><li>Filter by tag.</li></ul>
                     * @param _filters <p>Filter. Query health check templates by specifying filter criteria. Supported:</p><ul><li>Name is <strong>HealthCheckTemplateName</strong>. Filter health check templates by name. <strong>Values</strong> is a template name list.</li><li>Name is <strong>HealthCheckProtocol</strong>. Filter health check templates by health check protocol. <strong>Values</strong> is a protocol list.</li><li>Filter by tag.</li></ul>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>Health check template ID list. The ID format is hct- followed by alphanumeric characters.</p>
                     * @return HealthCheckTemplateIds <p>Health check template ID list. The ID format is hct- followed by alphanumeric characters.</p>
                     * 
                     */
                    std::vector<std::string> GetHealthCheckTemplateIds() const;

                    /**
                     * 设置<p>Health check template ID list. The ID format is hct- followed by alphanumeric characters.</p>
                     * @param _healthCheckTemplateIds <p>Health check template ID list. The ID format is hct- followed by alphanumeric characters.</p>
                     * 
                     */
                    void SetHealthCheckTemplateIds(const std::vector<std::string>& _healthCheckTemplateIds);

                    /**
                     * 判断参数 HealthCheckTemplateIds 是否已赋值
                     * @return HealthCheckTemplateIds 是否已赋值
                     * 
                     */
                    bool HealthCheckTemplateIdsHasBeenSet() const;

                    /**
                     * 获取<p>The number of returned lists. Default value: 20. Maximum value: 100.</p>
                     * @return MaxResults <p>The number of returned lists. Default value: 20. Maximum value: 100.</p>
                     * 
                     */
                    std::string GetMaxResults() const;

                    /**
                     * 设置<p>The number of returned lists. Default value: 20. Maximum value: 100.</p>
                     * @param _maxResults <p>The number of returned lists. Default value: 20. Maximum value: 100.</p>
                     * 
                     */
                    void SetMaxResults(const std::string& _maxResults);

                    /**
                     * 判断参数 MaxResults 是否已赋值
                     * @return MaxResults 是否已赋值
                     * 
                     */
                    bool MaxResultsHasBeenSet() const;

                    /**
                     * 获取<p>Token for the next query. Not required for the first query or when there is no next query.<br>If there is a next query, the value is the NextToken returned from the last API call.</p>
                     * @return NextToken <p>Token for the next query. Not required for the first query or when there is no next query.<br>If there is a next query, the value is the NextToken returned from the last API call.</p>
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置<p>Token for the next query. Not required for the first query or when there is no next query.<br>If there is a next query, the value is the NextToken returned from the last API call.</p>
                     * @param _nextToken <p>Token for the next query. Not required for the first query or when there is no next query.<br>If there is a next query, the value is the NextToken returned from the last API call.</p>
                     * 
                     */
                    void SetNextToken(const std::string& _nextToken);

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                private:

                    /**
                     * <p>Filter. Query health check templates by specifying filter criteria. Supported:</p><ul><li>Name is <strong>HealthCheckTemplateName</strong>. Filter health check templates by name. <strong>Values</strong> is a template name list.</li><li>Name is <strong>HealthCheckProtocol</strong>. Filter health check templates by health check protocol. <strong>Values</strong> is a protocol list.</li><li>Filter by tag.</li></ul>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>Health check template ID list. The ID format is hct- followed by alphanumeric characters.</p>
                     */
                    std::vector<std::string> m_healthCheckTemplateIds;
                    bool m_healthCheckTemplateIdsHasBeenSet;

                    /**
                     * <p>The number of returned lists. Default value: 20. Maximum value: 100.</p>
                     */
                    std::string m_maxResults;
                    bool m_maxResultsHasBeenSet;

                    /**
                     * <p>Token for the next query. Not required for the first query or when there is no next query.<br>If there is a next query, the value is the NextToken returned from the last API call.</p>
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ALB_V20251030_MODEL_DESCRIBEHEALTHCHECKTEMPLATESREQUEST_H_
