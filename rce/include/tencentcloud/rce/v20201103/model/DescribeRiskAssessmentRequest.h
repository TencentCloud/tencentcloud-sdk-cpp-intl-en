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

#ifndef TENCENTCLOUD_RCE_V20201103_MODEL_DESCRIBERISKASSESSMENTREQUEST_H_
#define TENCENTCLOUD_RCE_V20201103_MODEL_DESCRIBERISKASSESSMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20201103/model/InputBizCryptoData.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20201103
        {
            namespace Model
            {
                /**
                * DescribeRiskAssessment request structure.
                */
                class DescribeRiskAssessmentRequest : public AbstractModel
                {
                public:
                    DescribeRiskAssessmentRequest();
                    ~DescribeRiskAssessmentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Business parameters
                     * @return BizCryptoData Business parameters
                     * 
                     */
                    InputBizCryptoData GetBizCryptoData() const;

                    /**
                     * 设置Business parameters
                     * @param _bizCryptoData Business parameters
                     * 
                     */
                    void SetBizCryptoData(const InputBizCryptoData& _bizCryptoData);

                    /**
                     * 判断参数 BizCryptoData 是否已赋值
                     * @return BizCryptoData 是否已赋值
                     * 
                     */
                    bool BizCryptoDataHasBeenSet() const;

                private:

                    /**
                     * Business parameters
                     */
                    InputBizCryptoData m_bizCryptoData;
                    bool m_bizCryptoDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_MODEL_DESCRIBERISKASSESSMENTREQUEST_H_
