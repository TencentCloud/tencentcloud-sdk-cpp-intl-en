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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEPOLICYCASERESPONSE_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEPOLICYCASERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/KeyValueRecord.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribePolicyCase response structure.
                */
                class DescribePolicyCaseResponse : public AbstractModel
                {
                public:
                    DescribePolicyCaseResponse();
                    ~DescribePolicyCaseResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Policy scenario list
                     * @return CaseList Policy scenario list
                     * 
                     */
                    std::vector<KeyValueRecord> GetCaseList() const;

                    /**
                     * 判断参数 CaseList 是否已赋值
                     * @return CaseList 是否已赋值
                     * 
                     */
                    bool CaseListHasBeenSet() const;

                private:

                    /**
                     * Policy scenario list
                     */
                    std::vector<KeyValueRecord> m_caseList;
                    bool m_caseListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEPOLICYCASERESPONSE_H_
