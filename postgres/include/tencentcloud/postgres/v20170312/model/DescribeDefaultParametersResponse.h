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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDEFAULTPARAMETERSRESPONSE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDEFAULTPARAMETERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/ParamInfo.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeDefaultParameters response structure.
                */
                class DescribeDefaultParametersResponse : public AbstractModel
                {
                public:
                    DescribeDefaultParametersResponse();
                    ~DescribeDefaultParametersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of parameters
                     * @return TotalCount Number of parameters
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Parameter information
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ParamInfoSet Parameter information
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<ParamInfo> GetParamInfoSet() const;

                    /**
                     * 判断参数 ParamInfoSet 是否已赋值
                     * @return ParamInfoSet 是否已赋值
                     * 
                     */
                    bool ParamInfoSetHasBeenSet() const;

                private:

                    /**
                     * Number of parameters
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Parameter information
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<ParamInfo> m_paramInfoSet;
                    bool m_paramInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDEFAULTPARAMETERSRESPONSE_H_
