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
                     * 获取The task ID, which is required to query the result of associated cloud resources.
                     * @return TaskId The task ID, which is required to query the result of associated cloud resources.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置The task ID, which is required to query the result of associated cloud resources.
                     * @param _taskId The task ID, which is required to query the result of associated cloud resources.
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
                     * 获取The number of cloud resources displayed on each page. The default value is 10, and the maximum value is 100.
                     * @return Limit The number of cloud resources displayed on each page. The default value is 10, and the maximum value is 100.
                     * 
                     */
                    std::string GetLimit() const;

                    /**
                     * 设置The number of cloud resources displayed on each page. The default value is 10, and the maximum value is 100.
                     * @param _limit The number of cloud resources displayed on each page. The default value is 10, and the maximum value is 100.
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
                     * 获取The current offset.
                     * @return Offset The current offset.
                     * 
                     */
                    std::string GetOffset() const;

                    /**
                     * 设置The current offset.
                     * @param _offset The current offset.
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
                     * 获取The types of the resources to be queried. If no value is passed in, all types of resources will be queried.
                     * @return ResourceTypes The types of the resources to be queried. If no value is passed in, all types of resources will be queried.
                     * 
                     */
                    std::vector<std::string> GetResourceTypes() const;

                    /**
                     * 设置The types of the resources to be queried. If no value is passed in, all types of resources will be queried.
                     * @param _resourceTypes The types of the resources to be queried. If no value is passed in, all types of resources will be queried.
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
                     * 获取The regions of the resources to be queried. Only CLB, TKE, WAF, APIGATEWAY, and TCB resources support the query by region.
                     * @return Regions The regions of the resources to be queried. Only CLB, TKE, WAF, APIGATEWAY, and TCB resources support the query by region.
                     * 
                     */
                    std::vector<std::string> GetRegions() const;

                    /**
                     * 设置The regions of the resources to be queried. Only CLB, TKE, WAF, APIGATEWAY, and TCB resources support the query by region.
                     * @param _regions The regions of the resources to be queried. Only CLB, TKE, WAF, APIGATEWAY, and TCB resources support the query by region.
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
                     * The task ID, which is required to query the result of associated cloud resources.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * The number of cloud resources displayed on each page. The default value is 10, and the maximum value is 100.
                     */
                    std::string m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * The current offset.
                     */
                    std::string m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * The types of the resources to be queried. If no value is passed in, all types of resources will be queried.
                     */
                    std::vector<std::string> m_resourceTypes;
                    bool m_resourceTypesHasBeenSet;

                    /**
                     * The regions of the resources to be queried. Only CLB, TKE, WAF, APIGATEWAY, and TCB resources support the query by region.
                     */
                    std::vector<std::string> m_regions;
                    bool m_regionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATEBINDRESOURCETASKDETAILREQUEST_H_
