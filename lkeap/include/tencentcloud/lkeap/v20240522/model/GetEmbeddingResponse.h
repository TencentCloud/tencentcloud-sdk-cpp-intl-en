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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_GETEMBEDDINGRESPONSE_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_GETEMBEDDINGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lkeap/v20240522/model/EmbeddingObject.h>
#include <tencentcloud/lkeap/v20240522/model/Usage.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * GetEmbedding response structure.
                */
                class GetEmbeddingResponse : public AbstractModel
                {
                public:
                    GetEmbeddingResponse();
                    ~GetEmbeddingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Feature.
                     * @return Data Feature.
                     * 
                     */
                    std::vector<EmbeddingObject> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Consumption. Returns TotalToken.
                     * @return Usage Consumption. Returns TotalToken.
                     * 
                     */
                    Usage GetUsage() const;

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                private:

                    /**
                     * Feature.
                     */
                    std::vector<EmbeddingObject> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Consumption. Returns TotalToken.
                     */
                    Usage m_usage;
                    bool m_usageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_GETEMBEDDINGRESPONSE_H_
