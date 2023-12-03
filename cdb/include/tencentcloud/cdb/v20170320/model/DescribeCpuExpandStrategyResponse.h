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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBECPUEXPANDSTRATEGYRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBECPUEXPANDSTRATEGYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeCpuExpandStrategy response structure.
                */
                class DescribeCpuExpandStrategyResponse : public AbstractModel
                {
                public:
                    DescribeCpuExpandStrategyResponse();
                    ~DescribeCpuExpandStrategyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Policy type. Valid values: `auto`, `manual`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Type Policy type. Valid values: `auto`, `manual`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取Manually expanded CPU, which is valid when `Type` is `manual`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return ExpandCpu Manually expanded CPU, which is valid when `Type` is `manual`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetExpandCpu() const;

                    /**
                     * 判断参数 ExpandCpu 是否已赋值
                     * @return ExpandCpu 是否已赋值
                     * 
                     */
                    bool ExpandCpuHasBeenSet() const;

                    /**
                     * 获取Automatic expansion policy, which is valid when `Type` is `auto`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return AutoStrategy Automatic expansion policy, which is valid when `Type` is `auto`.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::string GetAutoStrategy() const;

                    /**
                     * 判断参数 AutoStrategy 是否已赋值
                     * @return AutoStrategy 是否已赋值
                     * 
                     */
                    bool AutoStrategyHasBeenSet() const;

                private:

                    /**
                     * Policy type. Valid values: `auto`, `manual`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * Manually expanded CPU, which is valid when `Type` is `manual`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_expandCpu;
                    bool m_expandCpuHasBeenSet;

                    /**
                     * Automatic expansion policy, which is valid when `Type` is `auto`.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::string m_autoStrategy;
                    bool m_autoStrategyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBECPUEXPANDSTRATEGYRESPONSE_H_
