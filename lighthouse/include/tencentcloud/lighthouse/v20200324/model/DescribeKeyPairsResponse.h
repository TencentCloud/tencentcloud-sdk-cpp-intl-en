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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEKEYPAIRSRESPONSE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEKEYPAIRSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/KeyPair.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeKeyPairs response structure.
                */
                class DescribeKeyPairsResponse : public AbstractModel
                {
                public:
                    DescribeKeyPairsResponse();
                    ~DescribeKeyPairsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Number of eligible key pairs.
                     * @return TotalCount Number of eligible key pairs.
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
                     * 获取List of key pair details.
                     * @return KeyPairSet List of key pair details.
                     * 
                     */
                    std::vector<KeyPair> GetKeyPairSet() const;

                    /**
                     * 判断参数 KeyPairSet 是否已赋值
                     * @return KeyPairSet 是否已赋值
                     * 
                     */
                    bool KeyPairSetHasBeenSet() const;

                private:

                    /**
                     * Number of eligible key pairs.
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * List of key pair details.
                     */
                    std::vector<KeyPair> m_keyPairSet;
                    bool m_keyPairSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEKEYPAIRSRESPONSE_H_
