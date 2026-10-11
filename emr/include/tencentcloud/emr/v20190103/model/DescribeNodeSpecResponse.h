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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBENODESPECRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBENODESPECRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/DescribeNodeSpec.h>
#include <tencentcloud/emr/v20190103/model/ArchitectureInfo.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeNodeSpec response structure.
                */
                class DescribeNodeSpecResponse : public AbstractModel
                {
                public:
                    DescribeNodeSpecResponse();
                    ~DescribeNodeSpecResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Node specifications type.</p>
                     * @return NodeSpecs <p>Node specifications type.</p>
                     * 
                     */
                    std::vector<DescribeNodeSpec> GetNodeSpecs() const;

                    /**
                     * 判断参数 NodeSpecs 是否已赋值
                     * @return NodeSpecs 是否已赋值
                     * 
                     */
                    bool NodeSpecsHasBeenSet() const;

                    /**
                     * 获取<p>Instance type architecture information.</p>
                     * @return Architectures <p>Instance type architecture information.</p>
                     * 
                     */
                    std::vector<ArchitectureInfo> GetArchitectures() const;

                    /**
                     * 判断参数 Architectures 是否已赋值
                     * @return Architectures 是否已赋值
                     * 
                     */
                    bool ArchitecturesHasBeenSet() const;

                private:

                    /**
                     * <p>Node specifications type.</p>
                     */
                    std::vector<DescribeNodeSpec> m_nodeSpecs;
                    bool m_nodeSpecsHasBeenSet;

                    /**
                     * <p>Instance type architecture information.</p>
                     */
                    std::vector<ArchitectureInfo> m_architectures;
                    bool m_architecturesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBENODESPECRESPONSE_H_
