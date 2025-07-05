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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBELISTDDOSGEOIPBLOCKCONFIGRESPONSE_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBELISTDDOSGEOIPBLOCKCONFIGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/DDoSGeoIPBlockConfigRelation.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DescribeListDDoSGeoIPBlockConfig response structure.
                */
                class DescribeListDDoSGeoIPBlockConfigResponse : public AbstractModel
                {
                public:
                    DescribeListDDoSGeoIPBlockConfigResponse();
                    ~DescribeListDDoSGeoIPBlockConfigResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Total number of lists
                     * @return Total Total number of lists
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取List of Anti-DDoS region blocking configurations
                     * @return ConfigList List of Anti-DDoS region blocking configurations
                     * 
                     */
                    std::vector<DDoSGeoIPBlockConfigRelation> GetConfigList() const;

                    /**
                     * 判断参数 ConfigList 是否已赋值
                     * @return ConfigList 是否已赋值
                     * 
                     */
                    bool ConfigListHasBeenSet() const;

                private:

                    /**
                     * Total number of lists
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * List of Anti-DDoS region blocking configurations
                     */
                    std::vector<DDoSGeoIPBlockConfigRelation> m_configList;
                    bool m_configListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBELISTDDOSGEOIPBLOCKCONFIGRESPONSE_H_
