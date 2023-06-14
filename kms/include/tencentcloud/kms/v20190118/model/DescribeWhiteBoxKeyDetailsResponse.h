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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_DESCRIBEWHITEBOXKEYDETAILSRESPONSE_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_DESCRIBEWHITEBOXKEYDETAILSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/kms/v20190118/model/WhiteboxKeyInfo.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * DescribeWhiteBoxKeyDetails response structure.
                */
                class DescribeWhiteBoxKeyDetailsResponse : public AbstractModel
                {
                public:
                    DescribeWhiteBoxKeyDetailsResponse();
                    ~DescribeWhiteBoxKeyDetailsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取White-box key information list
                     * @return KeyInfos White-box key information list
                     * 
                     */
                    std::vector<WhiteboxKeyInfo> GetKeyInfos() const;

                    /**
                     * 判断参数 KeyInfos 是否已赋值
                     * @return KeyInfos 是否已赋值
                     * 
                     */
                    bool KeyInfosHasBeenSet() const;

                    /**
                     * 获取Total white-box keys.
Note: This field may return null, indicating that no valid values can be obtained.
                     * @return TotalCount Total white-box keys.
Note: This field may return null, indicating that no valid values can be obtained.
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
                     * White-box key information list
                     */
                    std::vector<WhiteboxKeyInfo> m_keyInfos;
                    bool m_keyInfosHasBeenSet;

                    /**
                     * Total white-box keys.
Note: This field may return null, indicating that no valid values can be obtained.
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_DESCRIBEWHITEBOXKEYDETAILSRESPONSE_H_
