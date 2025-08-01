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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECOSRECHARGESRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECOSRECHARGESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/CosRechargeInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeCosRecharges response structure.
                */
                class DescribeCosRechargesResponse : public AbstractModel
                {
                public:
                    DescribeCosRechargesResponse();
                    ~DescribeCosRechargesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取See the description of the `CosRechargeInfo` structure.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return Data See the description of the `CosRechargeInfo` structure.
Note: This field may return null, indicating that no valid values can be obtained.
                     * 
                     */
                    std::vector<CosRechargeInfo> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * See the description of the `CosRechargeInfo` structure.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    std::vector<CosRechargeInfo> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBECOSRECHARGESRESPONSE_H_
