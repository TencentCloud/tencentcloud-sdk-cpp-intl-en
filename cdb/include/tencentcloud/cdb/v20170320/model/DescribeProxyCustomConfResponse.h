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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEPROXYCUSTOMCONFRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEPROXYCUSTOMCONFRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/CustomConfig.h>
#include <tencentcloud/cdb/v20170320/model/Rule.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeProxyCustomConf response structure.
                */
                class DescribeProxyCustomConfResponse : public AbstractModel
                {
                public:
                    DescribeProxyCustomConfResponse();
                    ~DescribeProxyCustomConfResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of queried proxy configurations
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return Count Number of queried proxy configurations
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取Proxy configuration details
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return CustomConf Proxy configuration details
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    CustomConfig GetCustomConf() const;

                    /**
                     * 判断参数 CustomConf 是否已赋值
                     * @return CustomConf 是否已赋值
                     * 
                     */
                    bool CustomConfHasBeenSet() const;

                    /**
                     * 获取Weight rule
Note: this field may return `null`, indicating that no valid value can be found.
                     * @return WeightRule Weight rule
Note: this field may return `null`, indicating that no valid value can be found.
                     * 
                     */
                    Rule GetWeightRule() const;

                    /**
                     * 判断参数 WeightRule 是否已赋值
                     * @return WeightRule 是否已赋值
                     * 
                     */
                    bool WeightRuleHasBeenSet() const;

                private:

                    /**
                     * Number of queried proxy configurations
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * Proxy configuration details
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    CustomConfig m_customConf;
                    bool m_customConfHasBeenSet;

                    /**
                     * Weight rule
Note: this field may return `null`, indicating that no valid value can be found.
                     */
                    Rule m_weightRule;
                    bool m_weightRuleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEPROXYCUSTOMCONFRESPONSE_H_
