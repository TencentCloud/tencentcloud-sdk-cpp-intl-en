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
                     * 获取Task id, which can be used to query the result of binding cloud resources according to the task id obtained from createcertificatebindresourcesynctask.
                     * @return TaskId Task id, which can be used to query the result of binding cloud resources according to the task id obtained from createcertificatebindresourcesynctask.
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置Task id, which can be used to query the result of binding cloud resources according to the task id obtained from createcertificatebindresourcesynctask.
                     * @param _taskId Task id, which can be used to query the result of binding cloud resources according to the task id obtained from createcertificatebindresourcesynctask.
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
                     * 获取Current offset, default is 0.
                     * @return Offset Current offset, default is 0.
                     * 
                     */
                    std::string GetOffset() const;

                    /**
                     * 设置Current offset, default is 0.
                     * @param _offset Current offset, default is 0.
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
                     * 获取Result detail of queried resource type. if not provided, all will be queried. valid values include:.
- clb.
- cdn.
- ddos.
- live.
- vod.
- waf.
- apigateway.
- teo.
- tke.
- cos.
- tse.
- tcb.
                     * @return ResourceTypes Result detail of queried resource type. if not provided, all will be queried. valid values include:.
- clb.
- cdn.
- ddos.
- live.
- vod.
- waf.
- apigateway.
- teo.
- tke.
- cos.
- tse.
- tcb.
                     * 
                     */
                    std::vector<std::string> GetResourceTypes() const;

                    /**
                     * 设置Result detail of queried resource type. if not provided, all will be queried. valid values include:.
- clb.
- cdn.
- ddos.
- live.
- vod.
- waf.
- apigateway.
- teo.
- tke.
- cos.
- tse.
- tcb.
                     * @param _resourceTypes Result detail of queried resource type. if not provided, all will be queried. valid values include:.
- clb.
- cdn.
- ddos.
- live.
- vod.
- waf.
- apigateway.
- teo.
- tke.
- cos.
- tse.
- tcb.
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
                     * 获取Data of querying region list. clb, tke, waf, api gateway, tcb, cos, and tse support region query, while other resource types do not support.
                     * @return Regions Data of querying region list. clb, tke, waf, api gateway, tcb, cos, and tse support region query, while other resource types do not support.
                     * 
                     */
                    std::vector<std::string> GetRegions() const;

                    /**
                     * 设置Data of querying region list. clb, tke, waf, api gateway, tcb, cos, and tse support region query, while other resource types do not support.
                     * @param _regions Data of querying region list. clb, tke, waf, api gateway, tcb, cos, and tse support region query, while other resource types do not support.
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
                     * Task id, which can be used to query the result of binding cloud resources according to the task id obtained from createcertificatebindresourcesynctask.
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * The number of cloud resources displayed on each page. The default value is 10, and the maximum value is 100.
                     */
                    std::string m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * Current offset, default is 0.
                     */
                    std::string m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Result detail of queried resource type. if not provided, all will be queried. valid values include:.
- clb.
- cdn.
- ddos.
- live.
- vod.
- waf.
- apigateway.
- teo.
- tke.
- cos.
- tse.
- tcb.
                     */
                    std::vector<std::string> m_resourceTypes;
                    bool m_resourceTypesHasBeenSet;

                    /**
                     * Data of querying region list. clb, tke, waf, api gateway, tcb, cos, and tse support region query, while other resource types do not support.
                     */
                    std::vector<std::string> m_regions;
                    bool m_regionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBECERTIFICATEBINDRESOURCETASKDETAILREQUEST_H_
