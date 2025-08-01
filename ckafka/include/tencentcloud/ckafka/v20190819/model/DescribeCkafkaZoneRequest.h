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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBECKAFKAZONEREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBECKAFKAZONEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * DescribeCkafkaZone request structure.
                */
                class DescribeCkafkaZoneRequest : public AbstractModel
                {
                public:
                    DescribeCkafkaZoneRequest();
                    ~DescribeCkafkaZoneRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Cloud Dedicated Cluster (CDC) business parameter.
                     * @return CdcId Cloud Dedicated Cluster (CDC) business parameter.
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置Cloud Dedicated Cluster (CDC) business parameter.
                     * @param _cdcId Cloud Dedicated Cluster (CDC) business parameter.
                     * 
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     * 
                     */
                    bool CdcIdHasBeenSet() const;

                private:

                    /**
                     * Cloud Dedicated Cluster (CDC) business parameter.
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBECKAFKAZONEREQUEST_H_
