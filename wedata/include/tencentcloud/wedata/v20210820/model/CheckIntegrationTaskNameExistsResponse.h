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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CHECKINTEGRATIONTASKNAMEEXISTSRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CHECKINTEGRATIONTASKNAMEEXISTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * CheckIntegrationTaskNameExists response structure.
                */
                class CheckIntegrationTaskNameExistsResponse : public AbstractModel
                {
                public:
                    CheckIntegrationTaskNameExistsResponse();
                    ~CheckIntegrationTaskNameExistsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取true indicates it exists, false indicates it does not exist
                     * @return Data true indicates it exists, false indicates it does not exist
                     * 
                     */
                    bool GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取Task Name Duplication Type (0: Not duplicated, 1: Duplicated in development state, 2: Duplicated in production state)
                     * @return ExistsType Task Name Duplication Type (0: Not duplicated, 1: Duplicated in development state, 2: Duplicated in production state)
                     * 
                     */
                    int64_t GetExistsType() const;

                    /**
                     * 判断参数 ExistsType 是否已赋值
                     * @return ExistsType 是否已赋值
                     * 
                     */
                    bool ExistsTypeHasBeenSet() const;

                private:

                    /**
                     * true indicates it exists, false indicates it does not exist
                     */
                    bool m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * Task Name Duplication Type (0: Not duplicated, 1: Duplicated in development state, 2: Duplicated in production state)
                     */
                    int64_t m_existsType;
                    bool m_existsTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CHECKINTEGRATIONTASKNAMEEXISTSRESPONSE_H_
