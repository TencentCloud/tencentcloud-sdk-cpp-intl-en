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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEPARAMTEMPLATESREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEPARAMTEMPLATESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeParamTemplates request structure.
                */
                class DescribeParamTemplatesRequest : public AbstractModel
                {
                public:
                    DescribeParamTemplatesRequest();
                    ~DescribeParamTemplatesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Specified query for product version and architecture.</p><ul><li>6: Redis 4.0 standard architecture;</li><li>7: Redis 4.0 cluster architecture;</li><li>8: Redis 5.0 standard architecture;</li><li>9: Redis 5.0 cluster architecture;</li><li>15: Redis 6.2 standard architecture;</li><li>16: Redis 6.2 cluster architecture;</li><li>17: Redis 7.0 standard architecture;</li><li>18: Redis 7.0 cluster architecture;</li><li>19: ValKey 8.0 standard architecture;</li><li>20: ValKey 8.0 cluster architecture.</li></ul>
                     * @return ProductTypes <p>Specified query for product version and architecture.</p><ul><li>6: Redis 4.0 standard architecture;</li><li>7: Redis 4.0 cluster architecture;</li><li>8: Redis 5.0 standard architecture;</li><li>9: Redis 5.0 cluster architecture;</li><li>15: Redis 6.2 standard architecture;</li><li>16: Redis 6.2 cluster architecture;</li><li>17: Redis 7.0 standard architecture;</li><li>18: Redis 7.0 cluster architecture;</li><li>19: ValKey 8.0 standard architecture;</li><li>20: ValKey 8.0 cluster architecture.</li></ul>
                     * 
                     */
                    std::vector<int64_t> GetProductTypes() const;

                    /**
                     * 设置<p>Specified query for product version and architecture.</p><ul><li>6: Redis 4.0 standard architecture;</li><li>7: Redis 4.0 cluster architecture;</li><li>8: Redis 5.0 standard architecture;</li><li>9: Redis 5.0 cluster architecture;</li><li>15: Redis 6.2 standard architecture;</li><li>16: Redis 6.2 cluster architecture;</li><li>17: Redis 7.0 standard architecture;</li><li>18: Redis 7.0 cluster architecture;</li><li>19: ValKey 8.0 standard architecture;</li><li>20: ValKey 8.0 cluster architecture.</li></ul>
                     * @param _productTypes <p>Specified query for product version and architecture.</p><ul><li>6: Redis 4.0 standard architecture;</li><li>7: Redis 4.0 cluster architecture;</li><li>8: Redis 5.0 standard architecture;</li><li>9: Redis 5.0 cluster architecture;</li><li>15: Redis 6.2 standard architecture;</li><li>16: Redis 6.2 cluster architecture;</li><li>17: Redis 7.0 standard architecture;</li><li>18: Redis 7.0 cluster architecture;</li><li>19: ValKey 8.0 standard architecture;</li><li>20: ValKey 8.0 cluster architecture.</li></ul>
                     * 
                     */
                    void SetProductTypes(const std::vector<int64_t>& _productTypes);

                    /**
                     * 判断参数 ProductTypes 是否已赋值
                     * @return ProductTypes 是否已赋值
                     * 
                     */
                    bool ProductTypesHasBeenSet() const;

                    /**
                     * 获取<p>Specify the parameter template name for the query.</p><ul><li>Data type: string array, with a maximum length limit of 50.</li><li>Method for obtaining: Copy the Template name of a custom template or system default template on the <a href="https://console.cloud.tencent.com/redis/templates">parameter template page in the Redis console</a>.</li></ul>
                     * @return TemplateNames <p>Specify the parameter template name for the query.</p><ul><li>Data type: string array, with a maximum length limit of 50.</li><li>Method for obtaining: Copy the Template name of a custom template or system default template on the <a href="https://console.cloud.tencent.com/redis/templates">parameter template page in the Redis console</a>.</li></ul>
                     * 
                     */
                    std::vector<std::string> GetTemplateNames() const;

                    /**
                     * 设置<p>Specify the parameter template name for the query.</p><ul><li>Data type: string array, with a maximum length limit of 50.</li><li>Method for obtaining: Copy the Template name of a custom template or system default template on the <a href="https://console.cloud.tencent.com/redis/templates">parameter template page in the Redis console</a>.</li></ul>
                     * @param _templateNames <p>Specify the parameter template name for the query.</p><ul><li>Data type: string array, with a maximum length limit of 50.</li><li>Method for obtaining: Copy the Template name of a custom template or system default template on the <a href="https://console.cloud.tencent.com/redis/templates">parameter template page in the Redis console</a>.</li></ul>
                     * 
                     */
                    void SetTemplateNames(const std::vector<std::string>& _templateNames);

                    /**
                     * 判断参数 TemplateNames 是否已赋值
                     * @return TemplateNames 是否已赋值
                     * 
                     */
                    bool TemplateNamesHasBeenSet() const;

                    /**
                     * 获取<p>Parameter template ID specified for query.</p><ul><li>Data type: string array, with a maximum length limit of 50.</li><li>Method for obtaining: Copy the template ID of a custom template or system default template on the <a href="https://console.cloud.tencent.com/redis/templates">parameter template page in the Redis console</a>.</li></ul>
                     * @return TemplateIds <p>Parameter template ID specified for query.</p><ul><li>Data type: string array, with a maximum length limit of 50.</li><li>Method for obtaining: Copy the template ID of a custom template or system default template on the <a href="https://console.cloud.tencent.com/redis/templates">parameter template page in the Redis console</a>.</li></ul>
                     * 
                     */
                    std::vector<std::string> GetTemplateIds() const;

                    /**
                     * 设置<p>Parameter template ID specified for query.</p><ul><li>Data type: string array, with a maximum length limit of 50.</li><li>Method for obtaining: Copy the template ID of a custom template or system default template on the <a href="https://console.cloud.tencent.com/redis/templates">parameter template page in the Redis console</a>.</li></ul>
                     * @param _templateIds <p>Parameter template ID specified for query.</p><ul><li>Data type: string array, with a maximum length limit of 50.</li><li>Method for obtaining: Copy the template ID of a custom template or system default template on the <a href="https://console.cloud.tencent.com/redis/templates">parameter template page in the Redis console</a>.</li></ul>
                     * 
                     */
                    void SetTemplateIds(const std::vector<std::string>& _templateIds);

                    /**
                     * 判断参数 TemplateIds 是否已赋值
                     * @return TemplateIds 是否已赋值
                     * 
                     */
                    bool TemplateIdsHasBeenSet() const;

                    /**
                     * 获取<p>Specify the pagination size of the query result, which is the number of records returned per page.</p><ul><li>Value ranges from 0–200.</li><li>Default value: 200.</li></ul>
                     * @return Limit <p>Specify the pagination size of the query result, which is the number of records returned per page.</p><ul><li>Value ranges from 0–200.</li><li>Default value: 200.</li></ul>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>Specify the pagination size of the query result, which is the number of records returned per page.</p><ul><li>Value ranges from 0–200.</li><li>Default value: 200.</li></ul>
                     * @param _limit <p>Specify the pagination size of the query result, which is the number of records returned per page.</p><ul><li>Value ranges from 0–200.</li><li>Default value: 200.</li></ul>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>Pagination offset, used to specify the starting position of the query result.</p><ul><li>Value: Must be an integral multiple of Limit. Default value is 0.</li><li>Calculation formula: offset=limit*(page number-1).</li></ul>
                     * @return Offset <p>Pagination offset, used to specify the starting position of the query result.</p><ul><li>Value: Must be an integral multiple of Limit. Default value is 0.</li><li>Calculation formula: offset=limit*(page number-1).</li></ul>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>Pagination offset, used to specify the starting position of the query result.</p><ul><li>Value: Must be an integral multiple of Limit. Default value is 0.</li><li>Calculation formula: offset=limit*(page number-1).</li></ul>
                     * @param _offset <p>Pagination offset, used to specify the starting position of the query result.</p><ul><li>Value: Must be an integral multiple of Limit. Default value is 0.</li><li>Calculation formula: offset=limit*(page number-1).</li></ul>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * <p>Specified query for product version and architecture.</p><ul><li>6: Redis 4.0 standard architecture;</li><li>7: Redis 4.0 cluster architecture;</li><li>8: Redis 5.0 standard architecture;</li><li>9: Redis 5.0 cluster architecture;</li><li>15: Redis 6.2 standard architecture;</li><li>16: Redis 6.2 cluster architecture;</li><li>17: Redis 7.0 standard architecture;</li><li>18: Redis 7.0 cluster architecture;</li><li>19: ValKey 8.0 standard architecture;</li><li>20: ValKey 8.0 cluster architecture.</li></ul>
                     */
                    std::vector<int64_t> m_productTypes;
                    bool m_productTypesHasBeenSet;

                    /**
                     * <p>Specify the parameter template name for the query.</p><ul><li>Data type: string array, with a maximum length limit of 50.</li><li>Method for obtaining: Copy the Template name of a custom template or system default template on the <a href="https://console.cloud.tencent.com/redis/templates">parameter template page in the Redis console</a>.</li></ul>
                     */
                    std::vector<std::string> m_templateNames;
                    bool m_templateNamesHasBeenSet;

                    /**
                     * <p>Parameter template ID specified for query.</p><ul><li>Data type: string array, with a maximum length limit of 50.</li><li>Method for obtaining: Copy the template ID of a custom template or system default template on the <a href="https://console.cloud.tencent.com/redis/templates">parameter template page in the Redis console</a>.</li></ul>
                     */
                    std::vector<std::string> m_templateIds;
                    bool m_templateIdsHasBeenSet;

                    /**
                     * <p>Specify the pagination size of the query result, which is the number of records returned per page.</p><ul><li>Value ranges from 0–200.</li><li>Default value: 200.</li></ul>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Pagination offset, used to specify the starting position of the query result.</p><ul><li>Value: Must be an integral multiple of Limit. Default value is 0.</li><li>Calculation formula: offset=limit*(page number-1).</li></ul>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEPARAMTEMPLATESREQUEST_H_
