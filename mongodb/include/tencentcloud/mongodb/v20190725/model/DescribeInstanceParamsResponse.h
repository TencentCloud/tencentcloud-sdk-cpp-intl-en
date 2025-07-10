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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEINSTANCEPARAMSRESPONSE_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEINSTANCEPARAMSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/InstanceEnumParam.h>
#include <tencentcloud/mongodb/v20190725/model/InstanceIntegerParam.h>
#include <tencentcloud/mongodb/v20190725/model/InstanceTextParam.h>
#include <tencentcloud/mongodb/v20190725/model/InstanceMultiParam.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeInstanceParams response structure.
                */
                class DescribeInstanceParamsResponse : public AbstractModel
                {
                public:
                    DescribeInstanceParamsResponse();
                    ~DescribeInstanceParamsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Collection of parameters whose values are of the Enum type.
                     * @return InstanceEnumParam Collection of parameters whose values are of the Enum type.
                     * 
                     */
                    std::vector<InstanceEnumParam> GetInstanceEnumParam() const;

                    /**
                     * 判断参数 InstanceEnumParam 是否已赋值
                     * @return InstanceEnumParam 是否已赋值
                     * 
                     */
                    bool InstanceEnumParamHasBeenSet() const;

                    /**
                     * 获取Collection of parameters whose values are of the Integer type.
                     * @return InstanceIntegerParam Collection of parameters whose values are of the Integer type.
                     * 
                     */
                    std::vector<InstanceIntegerParam> GetInstanceIntegerParam() const;

                    /**
                     * 判断参数 InstanceIntegerParam 是否已赋值
                     * @return InstanceIntegerParam 是否已赋值
                     * 
                     */
                    bool InstanceIntegerParamHasBeenSet() const;

                    /**
                     * 获取Collection of parameters whose values are of the Text type.
                     * @return InstanceTextParam Collection of parameters whose values are of the Text type.
                     * 
                     */
                    std::vector<InstanceTextParam> GetInstanceTextParam() const;

                    /**
                     * 判断参数 InstanceTextParam 是否已赋值
                     * @return InstanceTextParam 是否已赋值
                     * 
                     */
                    bool InstanceTextParamHasBeenSet() const;

                    /**
                     * 获取Collection of parameters whose values are of different types.
                     * @return InstanceMultiParam Collection of parameters whose values are of different types.
                     * 
                     */
                    std::vector<InstanceMultiParam> GetInstanceMultiParam() const;

                    /**
                     * 判断参数 InstanceMultiParam 是否已赋值
                     * @return InstanceMultiParam 是否已赋值
                     * 
                     */
                    bool InstanceMultiParamHasBeenSet() const;

                    /**
                     * 获取Number of modifiable parameters supported by the current instance.
                     * @return TotalCount Number of modifiable parameters supported by the current instance.
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * Collection of parameters whose values are of the Enum type.
                     */
                    std::vector<InstanceEnumParam> m_instanceEnumParam;
                    bool m_instanceEnumParamHasBeenSet;

                    /**
                     * Collection of parameters whose values are of the Integer type.
                     */
                    std::vector<InstanceIntegerParam> m_instanceIntegerParam;
                    bool m_instanceIntegerParamHasBeenSet;

                    /**
                     * Collection of parameters whose values are of the Text type.
                     */
                    std::vector<InstanceTextParam> m_instanceTextParam;
                    bool m_instanceTextParamHasBeenSet;

                    /**
                     * Collection of parameters whose values are of different types.
                     */
                    std::vector<InstanceMultiParam> m_instanceMultiParam;
                    bool m_instanceMultiParamHasBeenSet;

                    /**
                     * Number of modifiable parameters supported by the current instance.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEINSTANCEPARAMSRESPONSE_H_
