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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBELOGCONTEXTRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBELOGCONTEXTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/LogContextInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeLogContext response structure.
                */
                class DescribeLogContextResponse : public AbstractModel
                {
                public:
                    DescribeLogContextResponse();
                    ~DescribeLogContextResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Log context information set
                     * @return LogContextInfos Log context information set
                     * 
                     */
                    std::vector<LogContextInfo> GetLogContextInfos() const;

                    /**
                     * 判断参数 LogContextInfos 是否已赋值
                     * @return LogContextInfos 是否已赋值
                     * 
                     */
                    bool LogContextInfosHasBeenSet() const;

                    /**
                     * 获取Whether the previous logs have been fully returned (PrevOver is false indicates that some previous logs are yet to be returned).
                     * @return PrevOver Whether the previous logs have been fully returned (PrevOver is false indicates that some previous logs are yet to be returned).
                     * 
                     */
                    bool GetPrevOver() const;

                    /**
                     * 判断参数 PrevOver 是否已赋值
                     * @return PrevOver 是否已赋值
                     * 
                     */
                    bool PrevOverHasBeenSet() const;

                    /**
                     * 获取Whether the subsequent logs have been fully returned (NextOver is false indicates that some subsequent logs are yet to be returned).
                     * @return NextOver Whether the subsequent logs have been fully returned (NextOver is false indicates that some subsequent logs are yet to be returned).
                     * 
                     */
                    bool GetNextOver() const;

                    /**
                     * 判断参数 NextOver 是否已赋值
                     * @return NextOver 是否已赋值
                     * 
                     */
                    bool NextOverHasBeenSet() const;

                private:

                    /**
                     * Log context information set
                     */
                    std::vector<LogContextInfo> m_logContextInfos;
                    bool m_logContextInfosHasBeenSet;

                    /**
                     * Whether the previous logs have been fully returned (PrevOver is false indicates that some previous logs are yet to be returned).
                     */
                    bool m_prevOver;
                    bool m_prevOverHasBeenSet;

                    /**
                     * Whether the subsequent logs have been fully returned (NextOver is false indicates that some subsequent logs are yet to be returned).
                     */
                    bool m_nextOver;
                    bool m_nextOverHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBELOGCONTEXTRESPONSE_H_
