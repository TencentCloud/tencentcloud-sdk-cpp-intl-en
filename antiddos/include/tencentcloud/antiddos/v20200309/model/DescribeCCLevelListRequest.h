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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBECCLEVELLISTREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBECCLEVELLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DescribeCCLevelList request structure.
                */
                class DescribeCCLevelListRequest : public AbstractModel
                {
                public:
                    DescribeCCLevelListRequest();
                    ~DescribeCCLevelListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Anti-DDoS service code. `bgp-multip` indicates Anti-DDos Pro.
                     * @return Business Anti-DDoS service code. `bgp-multip` indicates Anti-DDos Pro.
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置Anti-DDoS service code. `bgp-multip` indicates Anti-DDos Pro.
                     * @param _business Anti-DDoS service code. `bgp-multip` indicates Anti-DDos Pro.
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取Starting offset of the page. Value: (number of pages – 1) * items per page.
                     * @return Offset Starting offset of the page. Value: (number of pages – 1) * items per page.
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置Starting offset of the page. Value: (number of pages – 1) * items per page.
                     * @param _offset Starting offset of the page. Value: (number of pages – 1) * items per page.
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取Number of results returned in one page
                     * @return Limit Number of results returned in one page
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置Number of results returned in one page
                     * @param _limit Number of results returned in one page
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
                     * 获取ID of the specified instance
                     * @return InstanceId ID of the specified instance
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置ID of the specified instance
                     * @param _instanceId ID of the specified instance
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * Anti-DDoS service code. `bgp-multip` indicates Anti-DDos Pro.
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * Starting offset of the page. Value: (number of pages – 1) * items per page.
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * Number of results returned in one page
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * ID of the specified instance
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBECCLEVELLISTREQUEST_H_
