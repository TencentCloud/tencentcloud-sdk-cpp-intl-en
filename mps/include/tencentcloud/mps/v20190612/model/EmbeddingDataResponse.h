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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_EMBEDDINGDATARESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_EMBEDDINGDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/EmbeddingResultItem.h>
#include <tencentcloud/mps/v20190612/model/TokensUsage.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * EmbeddingData response structure.
                */
                class EmbeddingDataResponse : public AbstractModel
                {
                public:
                    EmbeddingDataResponse();
                    ~EmbeddingDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Embedding result</p>
                     * @return Data <p>Embedding result</p>
                     * 
                     */
                    std::vector<EmbeddingResultItem> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取<p>Token usage of the embedding</p>
                     * @return Usage <p>Token usage of the embedding</p>
                     * 
                     */
                    TokensUsage GetUsage() const;

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                private:

                    /**
                     * <p>Embedding result</p>
                     */
                    std::vector<EmbeddingResultItem> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * <p>Token usage of the embedding</p>
                     */
                    TokensUsage m_usage;
                    bool m_usageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_EMBEDDINGDATARESPONSE_H_
