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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATEBINDRESOURCETASKDETAILREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATEBINDRESOURCETASKDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DescribeCertificateBindResourceTaskDetail request structure.
                */
                class DescribeCertificateBindResourceTaskDetailRequest : public AbstractModel
                {
                public:
                    DescribeCertificateBindResourceTaskDetailRequest();
                    ~DescribeCertificateBindResourceTaskDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Task ID. Query the result of binding cloud resources based on the task ID obtained from CreateCertificateBindResourceSyncTask.</p>
                     * @return TaskId <p>Task ID. Query the result of binding cloud resources based on the task ID obtained from CreateCertificateBindResourceSyncTask.</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>Task ID. Query the result of binding cloud resources based on the task ID obtained from CreateCertificateBindResourceSyncTask.</p>
                     * @param _taskId <p>Task ID. Query the result of binding cloud resources based on the task ID obtained from CreateCertificateBindResourceSyncTask.</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>Number of items per page, default 10, maximum value 100; total pages is the total number of instances in the resource region, that is, page 1 will pull the number of instances under each Tencent Cloud resource region up to the Limit</p>
                     * @return Limit <p>Number of items per page, default 10, maximum value 100; total pages is the total number of instances in the resource region, that is, page 1 will pull the number of instances under each Tencent Cloud resource region up to the Limit</p>
                     * 
                     */
                    std::string GetLimit() const;

                    /**
                     * 设置<p>Number of items per page, default 10, maximum value 100; total pages is the total number of instances in the resource region, that is, page 1 will pull the number of instances under each Tencent Cloud resource region up to the Limit</p>
                     * @param _limit <p>Number of items per page, default 10, maximum value 100; total pages is the total number of instances in the resource region, that is, page 1 will pull the number of instances under each Tencent Cloud resource region up to the Limit</p>
                     * 
                     */
                    void SetLimit(const std::string& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>Offset, defaults to 0</p>
                     * @return Offset <p>Offset, defaults to 0</p>
                     * 
                     */
                    std::string GetOffset() const;

                    /**
                     * 设置<p>Offset, defaults to 0</p>
                     * @param _offset <p>Offset, defaults to 0</p>
                     * 
                     */
                    void SetOffset(const std::string& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>Query result details of the resource type. Query all if not specified. Supported values: - clb- cdn- ddos- live- vod- waf- apigateway- teo- tke- cos- tse- tcb</p>
                     * @return ResourceTypes <p>Query result details of the resource type. Query all if not specified. Supported values: - clb- cdn- ddos- live- vod- waf- apigateway- teo- tke- cos- tse- tcb</p>
                     * 
                     */
                    std::vector<std::string> GetResourceTypes() const;

                    /**
                     * 设置<p>Query result details of the resource type. Query all if not specified. Supported values: - clb- cdn- ddos- live- vod- waf- apigateway- teo- tke- cos- tse- tcb</p>
                     * @param _resourceTypes <p>Query result details of the resource type. Query all if not specified. Supported values: - clb- cdn- ddos- live- vod- waf- apigateway- teo- tke- cos- tse- tcb</p>
                     * 
                     */
                    void SetResourceTypes(const std::vector<std::string>& _resourceTypes);

                    /**
                     * 判断参数 ResourceTypes 是否已赋值
                     * @return ResourceTypes 是否已赋值
                     * 
                     */
                    bool ResourceTypesHasBeenSet() const;

                    /**
                     * 获取<p>Query the data of region list. clb, tke, waf, API Gateway, tcb, cos, and tse support query region. Other resource types are unsupported.</p>
                     * @return Regions <p>Query the data of region list. clb, tke, waf, API Gateway, tcb, cos, and tse support query region. Other resource types are unsupported.</p>
                     * 
                     */
                    std::vector<std::string> GetRegions() const;

                    /**
                     * 设置<p>Query the data of region list. clb, tke, waf, API Gateway, tcb, cos, and tse support query region. Other resource types are unsupported.</p>
                     * @param _regions <p>Query the data of region list. clb, tke, waf, API Gateway, tcb, cos, and tse support query region. Other resource types are unsupported.</p>
                     * 
                     */
                    void SetRegions(const std::vector<std::string>& _regions);

                    /**
                     * 判断参数 Regions 是否已赋值
                     * @return Regions 是否已赋值
                     * 
                     */
                    bool RegionsHasBeenSet() const;

                private:

                    /**
                     * <p>Task ID. Query the result of binding cloud resources based on the task ID obtained from CreateCertificateBindResourceSyncTask.</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>Number of items per page, default 10, maximum value 100; total pages is the total number of instances in the resource region, that is, page 1 will pull the number of instances under each Tencent Cloud resource region up to the Limit</p>
                     */
                    std::string m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>Offset, defaults to 0</p>
                     */
                    std::string m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>Query result details of the resource type. Query all if not specified. Supported values: - clb- cdn- ddos- live- vod- waf- apigateway- teo- tke- cos- tse- tcb</p>
                     */
                    std::vector<std::string> m_resourceTypes;
                    bool m_resourceTypesHasBeenSet;

                    /**
                     * <p>Query the data of region list. clb, tke, waf, API Gateway, tcb, cos, and tse support query region. Other resource types are unsupported.</p>
                     */
                    std::vector<std::string> m_regions;
                    bool m_regionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATEBINDRESOURCETASKDETAILREQUEST_H_
